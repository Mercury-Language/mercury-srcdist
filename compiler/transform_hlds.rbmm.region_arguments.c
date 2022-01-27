/*
** Automatically generated from `rbmm.region_arguments.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module transform_hlds.rbmm.region_arguments. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__region_arguments__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_arguments.mih"


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
#include "hlds.goal_path.mih"
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
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1];

static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1];

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__Alpha_PP_5,
  MR_Word transform_hlds__rbmm__region_arguments__Formal_6,
  MR_Word transform_hlds__rbmm__region_arguments__Actuals0_7,
  MR_Word * transform_hlds__rbmm__region_arguments__Actuals_8);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_14,
  MR_Word transform_hlds__rbmm__region_arguments__CallSite_15,
  MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_16,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__Case_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
  MR_Word transform_hlds__rbmm__region_arguments__GoalExpr_14,
  MR_Word transform_hlds__rbmm__region_arguments__GoalInfo_15,
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_16,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__Goal_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_9,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_10,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_11,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_12,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_13,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PredId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Integer transform_hlds__rbmm__region_arguments__ProcId_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_11,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_12,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_13,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__PredId_16,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24);

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_1[4][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_3[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_4[3][14];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_5[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_6[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_3[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_4[3][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_arguments_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_pp_actual_region_args_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "pp_actual_region_args_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_formal_region_args_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "proc_formal_region_args_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_pp_actual_region_args_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "proc_pp_actual_region_args_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

static const MR_DuFunctorDesc transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0 = {
  (MR_String) "region_args",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1] = {
  &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1] = {
  &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0
};

static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_arguments",
  (MR_String) "region_args",
  {     transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0 },
  {     transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0
};

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Integer transform_hlds__rbmm__region_arguments__CastX_12 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__region_arguments__CastY_13 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__3_3;

    transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__CastX_12 == transform_hlds__rbmm__region_arguments__CastY_13);
    if (transform_hlds__rbmm__region_arguments__succeeded)
      *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__region_arguments__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__region_arguments__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__region_arguments__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__region_arguments__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__region_arguments__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__region_arguments__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__region_arguments__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], &transform_hlds__rbmm__region_arguments__V_10_10, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_7_7)));
        }
        transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__V_10_10 == (MR_Integer) 0);
        transform_hlds__rbmm__region_arguments__succeeded = !(transform_hlds__rbmm__region_arguments__succeeded);
        if (transform_hlds__rbmm__region_arguments__succeeded)
          *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = transform_hlds__rbmm__region_arguments__V_10_10;
        else
          {
            MR_Word transform_hlds__rbmm__region_arguments__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], &transform_hlds__rbmm__region_arguments__V_11_11, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_5_5)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_8_8)));
            }
            transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__V_11_11 == (MR_Integer) 0);
            transform_hlds__rbmm__region_arguments__succeeded = !(transform_hlds__rbmm__region_arguments__succeeded);
            if (transform_hlds__rbmm__region_arguments__succeeded)
              *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = transform_hlds__rbmm__region_arguments__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_6_6)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Integer transform_hlds__rbmm__region_arguments__CastX_9 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__region_arguments__CastY_10 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__2_2;

    transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__CastX_9 == transform_hlds__rbmm__region_arguments__CastY_10);
    if (transform_hlds__rbmm__region_arguments__succeeded)
      transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_12_12;
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_13_13;
        MR_Word transform_hlds__rbmm__region_arguments__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__region_arguments__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__region_arguments__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__region_arguments__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__region_arguments__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__region_arguments__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_arguments__V_3_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_6_6)));
        }
        if (transform_hlds__rbmm__region_arguments__succeeded)
          {
            transform_hlds__rbmm__region_arguments__TypeInfo_12_12 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
            {
              transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_arguments__TypeInfo_12_12, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_7_7)));
            }
            if (transform_hlds__rbmm__region_arguments__succeeded)
              {
                transform_hlds__rbmm__region_arguments__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
                {
                  transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_arguments__TypeInfo_13_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_5_5)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_8_8)));
                }
              }
          }
      }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

    {
      transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

    {
      transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

    {
      transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__Alpha_PP_5,
  MR_Word transform_hlds__rbmm__region_arguments__Formal_6,
  MR_Word transform_hlds__rbmm__region_arguments__Actuals0_7,
  MR_Word * transform_hlds__rbmm__region_arguments__Actuals_8)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    MR_Word transform_hlds__rbmm__region_arguments__Actual_9;
    MR_Box transform_hlds__rbmm__region_arguments__conv0_Actual_9;

    {
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10, transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10, transform_hlds__rbmm__region_arguments__Alpha_PP_5, ((MR_Box) (transform_hlds__rbmm__region_arguments__Formal_6)), &transform_hlds__rbmm__region_arguments__conv0_Actual_9);
    }
    transform_hlds__rbmm__region_arguments__Actual_9 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_Actual_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__rbmm__region_arguments__Actuals_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Actual_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Actuals0_7));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv3_Actuals_8;

    {
      transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv3_Actuals_8);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv3_Actuals_8));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_14,
  MR_Word transform_hlds__rbmm__region_arguments__CallSite_15,
  MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_16,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__region_arguments__succeeded;
        MR_Word transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23;
        MR_Box transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23;

        {
          transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34, ((MR_Box) (transform_hlds__rbmm__region_arguments__CalleePPId_16)), &transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23);
        }
        if (transform_hlds__rbmm__region_arguments__succeeded)
          {
            transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23);
            transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
          }
        if (transform_hlds__rbmm__region_arguments__succeeded)
          {
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53;
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58;
            MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_59_59;
            MR_Word transform_hlds__rbmm__region_arguments__FormalConstants_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__region_arguments__FormalDeads_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__region_arguments__FormalBorns_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 2)));
            MR_Word transform_hlds__rbmm__region_arguments__CallerRptaInfo_27;
            MR_Word transform_hlds__rbmm__region_arguments__CallerAlpha_29;
            MR_Word transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30;
            MR_Word transform_hlds__rbmm__region_arguments__ActualConstants_31;
            MR_Word transform_hlds__rbmm__region_arguments__ActualDeads_32;
            MR_Word transform_hlds__rbmm__region_arguments__ActualBorns_33;
            MR_Word transform_hlds__rbmm__region_arguments__V_38_38;
            MR_Word transform_hlds__rbmm__region_arguments__V_44_44;
            MR_Box transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27;
            MR_Word transform_hlds__rbmm__region_arguments___CallerGraph_28;
            MR_Box transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30;
            MR_Box transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31;
            MR_Box transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32;
            MR_Box transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33;

            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_14)), &transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27);
            }
            transform_hlds__rbmm__region_arguments__CallerRptaInfo_27 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27);
            transform_hlds__rbmm__region_arguments___CallerGraph_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CallerRptaInfo_27, (MR_Integer) 0)));
            transform_hlds__rbmm__region_arguments__CallerAlpha_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CallerRptaInfo_27, (MR_Integer) 1)));
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[3], transform_hlds__rbmm__region_arguments__CallerAlpha_29, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallSite_15)), &transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30);
            }
            transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30);
            {
              transform_hlds__rbmm__region_arguments__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30));
            }
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__region_arguments__TypeInfo_59_59 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
            {
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalConstants_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31);
            }
            transform_hlds__rbmm__region_arguments__ActualConstants_31 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31);
            {
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalDeads_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32);
            }
            transform_hlds__rbmm__region_arguments__ActualDeads_32 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32);
            {
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalBorns_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33);
            }
            transform_hlds__rbmm__region_arguments__ActualBorns_33 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33);
            {
              transform_hlds__rbmm__region_arguments__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualConstants_31));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualDeads_32));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualBorns_33));
            }
            {
              mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallSite_15)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_44_44)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37);
            }
            *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34;
          }
        else
          {
            MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46;

            {
              transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CalleePPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0__tmp_copy_34 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46;

              transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0__tmp_copy_34;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__Case_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__region_arguments__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_23, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__region_arguments__Info_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_23, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__region_arguments__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__region_arguments__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__Expr_43, transform_hlds__rbmm__region_arguments__Info_44, transform_hlds__rbmm__region_arguments__PPId_13, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25;
    MR_Word transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27;

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25));
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24;
    MR_Word transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26;

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24));
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24;
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26;

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24));
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
  MR_Word transform_hlds__rbmm__region_arguments__GoalExpr_14,
  MR_Word transform_hlds__rbmm__region_arguments__GoalInfo_15,
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_16,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__region_arguments__SubGoal_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14), (MR_Integer) 0);

          {
            transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__SubGoal_53, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61;
          *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__rbmm__region_arguments__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)));
          MR_Integer transform_hlds__rbmm__region_arguments__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
          MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_29;
          MR_Word transform_hlds__rbmm__region_arguments__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
          MR_Word transform_hlds__rbmm__region_arguments__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
          MR_Word transform_hlds__rbmm__region_arguments__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 4)));
          MR_Word transform_hlds__rbmm__region_arguments__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 5)));
          MR_Word transform_hlds__rbmm__region_arguments__V_93_93;

          {
            transform_hlds__rbmm__region_arguments__CalleePPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CalleePPId_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_23));
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CalleePPId_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ProcId_24));
          }
          {
            transform_hlds__rbmm__region_arguments__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_93_93, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CalleePPId_29));
            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_arguments__V_93_93, transform_hlds__rbmm__region_arguments__ModuleInfo_13);
          }
          if (transform_hlds__rbmm__region_arguments__succeeded)
            {
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63;
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61;
            }
          else
            {
              MR_Word transform_hlds__rbmm__region_arguments__CallSite_30;

              {
                transform_hlds__rbmm__region_arguments__CallSite_30 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_arguments__GoalInfo_15);
              }
              {
                transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__CallSite_30, transform_hlds__rbmm__region_arguments__CalleePPId_29, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "generic_call NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "call_foreign_proc NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__rbmm__region_arguments__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__region_arguments__V_90_90;
              MR_Word transform_hlds__rbmm__region_arguments__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
              MR_Box transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62;
              MR_Box transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64;

              {
                transform_hlds__rbmm__region_arguments__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_90_90, transform_hlds__rbmm__region_arguments__Conjuncts_32, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64);
              }
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62);
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__rbmm__region_arguments__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__region_arguments__V_87_87;
              MR_Box transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62;
              MR_Box transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64;

              {
                transform_hlds__rbmm__region_arguments__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_87_87, transform_hlds__rbmm__region_arguments__Disjuncts_33, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64);
              }
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62);
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__rbmm__region_arguments__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__region_arguments__V_78_78;
              MR_Word transform_hlds__rbmm__region_arguments__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__region_arguments__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
              MR_Box transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62;
              MR_Box transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64;

              {
                transform_hlds__rbmm__region_arguments__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
              }
              {
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_78_78, transform_hlds__rbmm__region_arguments__Cases_40, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64);
              }
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62);
              *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__rbmm__region_arguments__SubGoal_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__region_arguments__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__SubGoal_97, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__rbmm__region_arguments__Cond_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__region_arguments__Then_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__region_arguments__Else_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 4)));
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81;
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82;
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83;
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84;
              MR_Word transform_hlds__rbmm__region_arguments__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Cond_35, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82);
              }
              {
                transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Then_36, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84);
              }
              {
                transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Else_37, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "shorthand");
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
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Word transform_hlds__rbmm__region_arguments__Goal_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__Expr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_18, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__region_arguments__Info_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_18, (MR_Integer) 1)));

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__Expr_21, transform_hlds__rbmm__region_arguments__Info_22, transform_hlds__rbmm__region_arguments__PPId_13, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_9,
  MR_Word transform_hlds__rbmm__region_arguments__PPId_10,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_11,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_12,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_13,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__V_16_16;
    MR_Box transform_hlds__rbmm__region_arguments__conv0_V_16_16;

    {
      transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv0_V_16_16);
    }
    if (transform_hlds__rbmm__region_arguments__succeeded)
      {
        transform_hlds__rbmm__region_arguments__V_16_16 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_V_16_16);
        transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__region_arguments__succeeded)
      *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30;
    else
      {
        MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_38_38 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[0];
        MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40;
        MR_Word transform_hlds__rbmm__region_arguments__ConstantR_17;
        MR_Word transform_hlds__rbmm__region_arguments__DeadR_18;
        MR_Word transform_hlds__rbmm__region_arguments__BornR_19;
        MR_Word transform_hlds__rbmm__region_arguments__RptaInfo_20;
        MR_Word transform_hlds__rbmm__region_arguments__Graph_21;
        MR_Word transform_hlds__rbmm__region_arguments__LConstantR_23;
        MR_Word transform_hlds__rbmm__region_arguments__Globals_24;
        MR_Word transform_hlds__rbmm__region_arguments__UseAllocRegions_25;
        MR_Word transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26;
        MR_Word transform_hlds__rbmm__region_arguments__FormalDeadR_27;
        MR_Word transform_hlds__rbmm__region_arguments__FormalBornR_28;
        MR_Word transform_hlds__rbmm__region_arguments__RegionArgs_29;
        MR_Box transform_hlds__rbmm__region_arguments__conv1_ConstantR_17;
        MR_Box transform_hlds__rbmm__region_arguments__conv2_DeadR_18;
        MR_Box transform_hlds__rbmm__region_arguments__conv3_BornR_19;
        MR_Box transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20;
        MR_Word transform_hlds__rbmm__region_arguments__V_22_22;

        {
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__ConstantRTable_12, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv1_ConstantR_17);
        }
        transform_hlds__rbmm__region_arguments__ConstantR_17 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_ConstantR_17);
        {
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__DeadRTable_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv2_DeadR_18);
        }
        transform_hlds__rbmm__region_arguments__DeadR_18 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_DeadR_18);
        {
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__BornRTable_14, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv3_BornR_19);
        }
        transform_hlds__rbmm__region_arguments__BornR_19 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_BornR_19);
        {
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_11, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20);
        }
        transform_hlds__rbmm__region_arguments__RptaInfo_20 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20);
        transform_hlds__rbmm__region_arguments__Graph_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_20, (MR_Integer) 0)));
        transform_hlds__rbmm__region_arguments__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_20, (MR_Integer) 1)));
        transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
        {
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__ConstantR_17, &transform_hlds__rbmm__region_arguments__LConstantR_23);
        }
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_9, &transform_hlds__rbmm__region_arguments__Globals_24);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__region_arguments__Globals_24, (MR_Integer) 230, &transform_hlds__rbmm__region_arguments__UseAllocRegions_25);
        }
        switch (transform_hlds__rbmm__region_arguments__UseAllocRegions_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26 = transform_hlds__rbmm__region_arguments__LConstantR_23;
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__rbmm__region_arguments__V_33_33;

              {
                transform_hlds__rbmm__region_arguments__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Graph_21));
              }
              {
                mercury__list__filter_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__V_33_33, transform_hlds__rbmm__region_arguments__LConstantR_23, &transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26);
              }
            }
            break;
        }
        {
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__DeadR_18, &transform_hlds__rbmm__region_arguments__FormalDeadR_27);
        }
        {
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__BornR_19, &transform_hlds__rbmm__region_arguments__FormalBornR_28);
        }
        {
          transform_hlds__rbmm__region_arguments__RegionArgs_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalDeadR_27));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalBornR_28));
        }
        {
          mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), ((MR_Box) (transform_hlds__rbmm__region_arguments__RegionArgs_29)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31);
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;

    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1));
    }
    return transform_hlds__rbmm__region_arguments__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
  MR_Word transform_hlds__rbmm__region_arguments__PredId_13,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
  MR_Integer transform_hlds__rbmm__region_arguments__ProcId_18,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__PPId_21;
    MR_Word transform_hlds__rbmm__region_arguments__V_30_30;

    {
      transform_hlds__rbmm__region_arguments__PPId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__PPId_21, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_13));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__PPId_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ProcId_18));
    }
    {
      transform_hlds__rbmm__region_arguments__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_30_30, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_arguments__V_30_30, transform_hlds__rbmm__region_arguments__ModuleInfo_12);
    }
    if (transform_hlds__rbmm__region_arguments__succeeded)
      {
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28;
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26;
      }
    else
      {
        MR_Word transform_hlds__rbmm__region_arguments__ProcInfo0_22;
        MR_Word transform_hlds__rbmm__region_arguments__ProcInfo_23;
        MR_Word transform_hlds__rbmm__region_arguments__Body_24;
        MR_Word transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25;
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32;
        MR_Word transform_hlds__rbmm__region_arguments__V_34_34;
        MR_Word transform_hlds__rbmm__region_arguments__V_49_49;
        MR_Box transform_hlds__rbmm__region_arguments__conv0_V_49_49;

        {
          transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv0_V_49_49);
        }
        if (transform_hlds__rbmm__region_arguments__succeeded)
          {
            transform_hlds__rbmm__region_arguments__V_49_49 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_V_49_49);
            transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
          }
        if (transform_hlds__rbmm__region_arguments__succeeded)
          transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26;
        else
          {
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_38_69 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[0];
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71;
            MR_Word transform_hlds__rbmm__region_arguments__ConstantR_50;
            MR_Word transform_hlds__rbmm__region_arguments__DeadR_51;
            MR_Word transform_hlds__rbmm__region_arguments__BornR_52;
            MR_Word transform_hlds__rbmm__region_arguments__RptaInfo_53;
            MR_Word transform_hlds__rbmm__region_arguments__Graph_54;
            MR_Word transform_hlds__rbmm__region_arguments__LConstantR_56;
            MR_Word transform_hlds__rbmm__region_arguments__Globals_57;
            MR_Word transform_hlds__rbmm__region_arguments__UseAllocRegions_58;
            MR_Word transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59;
            MR_Word transform_hlds__rbmm__region_arguments__FormalDeadR_60;
            MR_Word transform_hlds__rbmm__region_arguments__FormalBornR_61;
            MR_Word transform_hlds__rbmm__region_arguments__RegionArgs_62;
            MR_Box transform_hlds__rbmm__region_arguments__conv1_ConstantR_50;
            MR_Box transform_hlds__rbmm__region_arguments__conv2_DeadR_51;
            MR_Box transform_hlds__rbmm__region_arguments__conv3_BornR_52;
            MR_Box transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53;
            MR_Word transform_hlds__rbmm__region_arguments__V_55_55;

            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__ConstantRTable_15, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv1_ConstantR_50);
            }
            transform_hlds__rbmm__region_arguments__ConstantR_50 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_ConstantR_50);
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__DeadRTable_16, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv2_DeadR_51);
            }
            transform_hlds__rbmm__region_arguments__DeadR_51 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_DeadR_51);
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv3_BornR_52);
            }
            transform_hlds__rbmm__region_arguments__BornR_52 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_BornR_52);
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53);
            }
            transform_hlds__rbmm__region_arguments__RptaInfo_53 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53);
            transform_hlds__rbmm__region_arguments__Graph_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_53, (MR_Integer) 0)));
            transform_hlds__rbmm__region_arguments__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_53, (MR_Integer) 1)));
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            {
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__ConstantR_50, &transform_hlds__rbmm__region_arguments__LConstantR_56);
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, &transform_hlds__rbmm__region_arguments__Globals_57);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__region_arguments__Globals_57, (MR_Integer) 230, &transform_hlds__rbmm__region_arguments__UseAllocRegions_58);
            }
            switch (transform_hlds__rbmm__region_arguments__UseAllocRegions_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59 = transform_hlds__rbmm__region_arguments__LConstantR_56;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__rbmm__region_arguments__V_64_64;

                  {
                    transform_hlds__rbmm__region_arguments__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Graph_54));
                  }
                  {
                    mercury__list__filter_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__V_64_64, transform_hlds__rbmm__region_arguments__LConstantR_56, &transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59);
                  }
                }
                break;
            }
            {
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__DeadR_51, &transform_hlds__rbmm__region_arguments__FormalDeadR_60);
            }
            {
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__BornR_52, &transform_hlds__rbmm__region_arguments__FormalBornR_61);
            }
            {
              transform_hlds__rbmm__region_arguments__RegionArgs_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalDeadR_60));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalBornR_61));
            }
            {
              mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), ((MR_Box) (transform_hlds__rbmm__region_arguments__RegionArgs_62)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32);
            }
          }
        {
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__PPId_21, &transform_hlds__rbmm__region_arguments__ProcInfo0_22);
        }
        {
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__ProcInfo0_22, &transform_hlds__rbmm__region_arguments__ProcInfo_23);
        }
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__region_arguments__ProcInfo_23, &transform_hlds__rbmm__region_arguments__Body_24);
        }
        {
          transform_hlds__rbmm__region_arguments__V_34_34 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
        }
        {
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__PPId_21, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__Body_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27, transform_hlds__rbmm__region_arguments__V_34_34, &transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25);
        }
        {
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27;
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29;

    {
      transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Integer) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27));
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_11,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_12,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_13,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_14,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_15,
  MR_Word transform_hlds__rbmm__region_arguments__PredId_16,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22,
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23,
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__PredInfo_19;
    MR_Word transform_hlds__rbmm__region_arguments__ProcIds_20;
    MR_Word transform_hlds__rbmm__region_arguments__V_25_25;
    MR_Box transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22;
    MR_Box transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_11, transform_hlds__rbmm__region_arguments__PredId_16, &transform_hlds__rbmm__region_arguments__PredInfo_19);
    }
    {
      transform_hlds__rbmm__region_arguments__ProcIds_20 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_arguments__PredInfo_19);
    }
    {
      transform_hlds__rbmm__region_arguments__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_11));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_16));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_12));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_13));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_14));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_15));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__V_25_25, transform_hlds__rbmm__region_arguments__ProcIds_20, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21)), &transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23)), &transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24);
    }
    *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22);
    *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22;
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24;

    {
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24);
    }
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22));
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24));
  }
}

void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_8,
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_9,
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_10,
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_11,
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_12,
  MR_Word * transform_hlds__rbmm__region_arguments__FormalRegionArgTable_13,
  MR_Word * transform_hlds__rbmm__region_arguments__ActualRegionArgTable_14)
{
  {
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
    MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24;
    MR_Word transform_hlds__rbmm__region_arguments__PredIds_15;
    MR_Word transform_hlds__rbmm__region_arguments__V_16_16;
    MR_Word transform_hlds__rbmm__region_arguments__V_17_17;
    MR_Word transform_hlds__rbmm__region_arguments__V_18_18;
    MR_Box transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13;
    MR_Box transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_8, &transform_hlds__rbmm__region_arguments__PredIds_15);
    }
    {
      transform_hlds__rbmm__region_arguments__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_9));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_10));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_11));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_12));
    }
    transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      transform_hlds__rbmm__region_arguments__V_17_17 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
    }
    {
      transform_hlds__rbmm__region_arguments__V_18_18 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0]);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__V_16_16, transform_hlds__rbmm__region_arguments__PredIds_15, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_17_17)), &transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_18_18)), &transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14);
    }
    *transform_hlds__rbmm__region_arguments__FormalRegionArgTable_13 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13);
    *transform_hlds__rbmm__region_arguments__ActualRegionArgTable_14 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14);
  }
}

void mercury__transform_hlds__rbmm__region_arguments__init(void)
{
}

void mercury__transform_hlds__rbmm__region_arguments__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_pp_actual_region_args_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_formal_region_args_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_proc_pp_actual_region_args_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
}

void mercury__transform_hlds__rbmm__region_arguments__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.region_arguments. */
