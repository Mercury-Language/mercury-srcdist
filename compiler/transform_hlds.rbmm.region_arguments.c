/*
** Automatically generated from `rbmm.region_arguments.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 150 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 153 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 156 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 159 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 162 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 165 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 168 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 171 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 174 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 177 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 180 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

#line 183 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 186 "transform_hlds.rbmm.region_arguments.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3];

#line 189 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0;

#line 192 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1];

#line 195 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1];

#line 198 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1];

#line 201 "transform_hlds.rbmm.region_arguments.c"
static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1];

#line 204 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
#line 207 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 209 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

#line 212 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
#line 215 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 217 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 219 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

#line 222 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
#line 225 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 227 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

#line 230 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
#line 233 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 235 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 237 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

#line 240 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
#line 243 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 245 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

#line 248 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
#line 251 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 253 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 255 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

#line 258 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
#line 261 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 263 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2);

#line 266 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
#line 269 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 271 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 273 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3);

#line 333 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Alpha_PP_5,
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Formal_6,
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Actuals0_7,
#line 333 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__Actuals_8);

#line 310 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 310 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3);

#line 291 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_14,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallSite_15,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_16,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34,
#line 291 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36,
#line 291 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37);

#line 271 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Case_18,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24,
#line 271 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26,
#line 271 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27);

#line 243 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3(
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 243 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 243 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

#line 226 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2(
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 226 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 226 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

#line 220 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1(
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 220 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 220 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

#line 195 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__GoalExpr_14,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__GoalInfo_15,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_16,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61,
#line 195 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63,
#line 195 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);

#line 181 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Goal_18,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23,
#line 181 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25,
#line 181 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26);

#line 163 "rbmm.region_arguments.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1(
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1);

#line 135 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_9,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_10,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_11,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_12,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_13,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_14,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30,
#line 135 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31);

#line 163 "rbmm.region_arguments.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1);

#line 107 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PredId_13,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 107 "rbmm.region_arguments.m"
  MR_Integer transform_hlds__rbmm__region_arguments__ProcId_18,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26,
#line 107 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28,
#line 107 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29);

#line 103 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 103 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 103 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5);

#line 90 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_11,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_12,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_13,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_14,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_15,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PredId_16,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21,
#line 90 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23,
#line 90 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24);

#line 85 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 85 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 85 "rbmm.region_arguments.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 744 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 753 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 761 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 770 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 779 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 788 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 797 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 806 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 815 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 823 "transform_hlds.rbmm.region_arguments.c"
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

#line 840 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 849 "transform_hlds.rbmm.region_arguments.c"
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

#line 866 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__region_arguments__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0
  }
};

#line 875 "transform_hlds.rbmm.region_arguments.c"
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

#line 892 "transform_hlds.rbmm.region_arguments.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 900 "transform_hlds.rbmm.region_arguments.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__field_types_region_args_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__region_arguments__list__ti_list_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

#line 907 "transform_hlds.rbmm.region_arguments.c"
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

#line 922 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0[1] = {
  &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0
};

#line 927 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuPtagLayout transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_ptag_ordered_region_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_stag_ordered_region_args_0_0
  }
};

#line 936 "transform_hlds.rbmm.region_arguments.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_name_ordered_region_args_0[1] = {
  &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__du_functor_desc_region_args_0_0
};

#line 941 "transform_hlds.rbmm.region_arguments.c"
static const MR_Integer transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__functor_number_map_region_args_0[1] = {
  (MR_Integer) 0
};

#line 946 "transform_hlds.rbmm.region_arguments.c"
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

#line 963 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0_10001(
#line 966 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 968 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
#line 970 "transform_hlds.rbmm.region_arguments.c"
{
#line 972 "transform_hlds.rbmm.region_arguments.c"
  {
#line 974 "transform_hlds.rbmm.region_arguments.c"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

#line 977 "transform_hlds.rbmm.region_arguments.c"
    {
#line 979 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
#line 982 "transform_hlds.rbmm.region_arguments.c"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 984 "transform_hlds.rbmm.region_arguments.c"
  }
#line 986 "transform_hlds.rbmm.region_arguments.c"
}

#line 989 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0_10001(
#line 992 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 994 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 996 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
#line 998 "transform_hlds.rbmm.region_arguments.c"
{
#line 1000 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1002 "transform_hlds.rbmm.region_arguments.c"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

#line 1005 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1007 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
#line 1010 "transform_hlds.rbmm.region_arguments.c"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
#line 1012 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1014 "transform_hlds.rbmm.region_arguments.c"
}

#line 1017 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0_10001(
#line 1020 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1022 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
#line 1024 "transform_hlds.rbmm.region_arguments.c"
{
#line 1026 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1028 "transform_hlds.rbmm.region_arguments.c"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

#line 1031 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1033 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
#line 1036 "transform_hlds.rbmm.region_arguments.c"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 1038 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1040 "transform_hlds.rbmm.region_arguments.c"
}

#line 1043 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0_10001(
#line 1046 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1048 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 1050 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
#line 1052 "transform_hlds.rbmm.region_arguments.c"
{
#line 1054 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1056 "transform_hlds.rbmm.region_arguments.c"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

#line 1059 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1061 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
#line 1064 "transform_hlds.rbmm.region_arguments.c"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
#line 1066 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1068 "transform_hlds.rbmm.region_arguments.c"
}

#line 1071 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0_10001(
#line 1074 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1076 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
#line 1078 "transform_hlds.rbmm.region_arguments.c"
{
#line 1080 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1082 "transform_hlds.rbmm.region_arguments.c"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

#line 1085 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1087 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
#line 1090 "transform_hlds.rbmm.region_arguments.c"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 1092 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1094 "transform_hlds.rbmm.region_arguments.c"
}

#line 1097 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0_10001(
#line 1100 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1102 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 1104 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
#line 1106 "transform_hlds.rbmm.region_arguments.c"
{
#line 1108 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1110 "transform_hlds.rbmm.region_arguments.c"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

#line 1113 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1115 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
#line 1118 "transform_hlds.rbmm.region_arguments.c"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
#line 1120 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1122 "transform_hlds.rbmm.region_arguments.c"
}

#line 1125 "transform_hlds.rbmm.region_arguments.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0_10001(
#line 1128 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1130 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2)
#line 1132 "transform_hlds.rbmm.region_arguments.c"
{
#line 1134 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1136 "transform_hlds.rbmm.region_arguments.c"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

#line 1139 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1141 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2));
    }
#line 1144 "transform_hlds.rbmm.region_arguments.c"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 1146 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1148 "transform_hlds.rbmm.region_arguments.c"
}

#line 1151 "transform_hlds.rbmm.region_arguments.c"
static void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0_10001(
#line 1154 "transform_hlds.rbmm.region_arguments.c"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 1156 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 1158 "transform_hlds.rbmm.region_arguments.c"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_3)
#line 1160 "transform_hlds.rbmm.region_arguments.c"
{
#line 1162 "transform_hlds.rbmm.region_arguments.c"
  {
#line 1164 "transform_hlds.rbmm.region_arguments.c"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1;

#line 1167 "transform_hlds.rbmm.region_arguments.c"
    {
#line 1169 "transform_hlds.rbmm.region_arguments.c"
      transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(&transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_3));
    }
#line 1172 "transform_hlds.rbmm.region_arguments.c"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_HeadVar__1_1));
#line 1174 "transform_hlds.rbmm.region_arguments.c"
  }
#line 1176 "transform_hlds.rbmm.region_arguments.c"
}

#line 55 "rbmm.region_arguments.m"
void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____region_args_0_0(
#line 55 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 55 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
#line 55 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
#line 55 "rbmm.region_arguments.m"
{
#line 55 "rbmm.region_arguments.m"
  {
#line 55 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 55 "rbmm.region_arguments.m"
    MR_Integer transform_hlds__rbmm__region_arguments__CastX_12 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__2_2;
#line 55 "rbmm.region_arguments.m"
    MR_Integer transform_hlds__rbmm__region_arguments__CastY_13 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__3_3;

#line 55 "rbmm.region_arguments.m"
    transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__CastX_12 == transform_hlds__rbmm__region_arguments__CastY_13);
#line 55 "rbmm.region_arguments.m"
    if (transform_hlds__rbmm__region_arguments__succeeded)
#line 1203 "transform_hlds.rbmm.region_arguments.c"
      *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "rbmm.region_arguments.m"
    else
#line 55 "rbmm.region_arguments.m"
      {
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_10_10;

#line 55 "rbmm.region_arguments.m"
        {
#line 55 "rbmm.region_arguments.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], &transform_hlds__rbmm__region_arguments__V_10_10, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_7_7)));
        }
#line 1229 "transform_hlds.rbmm.region_arguments.c"
        transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__V_10_10 == (MR_Integer) 0);
#line 55 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__succeeded = !(transform_hlds__rbmm__region_arguments__succeeded);
#line 55 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 55 "rbmm.region_arguments.m"
          *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = transform_hlds__rbmm__region_arguments__V_10_10;
#line 55 "rbmm.region_arguments.m"
        else
#line 55 "rbmm.region_arguments.m"
          {
#line 55 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__V_11_11;

#line 55 "rbmm.region_arguments.m"
            {
#line 55 "rbmm.region_arguments.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], &transform_hlds__rbmm__region_arguments__V_11_11, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_5_5)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_8_8)));
            }
#line 1249 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__V_11_11 == (MR_Integer) 0);
#line 55 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__succeeded = !(transform_hlds__rbmm__region_arguments__succeeded);
#line 55 "rbmm.region_arguments.m"
            if (transform_hlds__rbmm__region_arguments__succeeded)
#line 55 "rbmm.region_arguments.m"
              *transform_hlds__rbmm__region_arguments__HeadVar__1_1 = transform_hlds__rbmm__region_arguments__V_11_11;
#line 55 "rbmm.region_arguments.m"
            else
#line 55 "rbmm.region_arguments.m"
              {
#line 55 "rbmm.region_arguments.m"
                {
#line 55 "rbmm.region_arguments.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_6_6)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_9_9)));
#line 55 "rbmm.region_arguments.m"
                  return;
                }
#line 55 "rbmm.region_arguments.m"
              }
#line 55 "rbmm.region_arguments.m"
          }
#line 55 "rbmm.region_arguments.m"
      }
#line 55 "rbmm.region_arguments.m"
  }
#line 55 "rbmm.region_arguments.m"
}

#line 55 "rbmm.region_arguments.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____region_args_0_0(
#line 55 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 55 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
#line 55 "rbmm.region_arguments.m"
{
#line 55 "rbmm.region_arguments.m"
  {
#line 55 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 55 "rbmm.region_arguments.m"
    MR_Integer transform_hlds__rbmm__region_arguments__CastX_9 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__1_1;
#line 55 "rbmm.region_arguments.m"
    MR_Integer transform_hlds__rbmm__region_arguments__CastY_10 = (MR_Integer) transform_hlds__rbmm__region_arguments__HeadVar__2_2;

#line 55 "rbmm.region_arguments.m"
    transform_hlds__rbmm__region_arguments__succeeded = (transform_hlds__rbmm__region_arguments__CastX_9 == transform_hlds__rbmm__region_arguments__CastY_10);
#line 55 "rbmm.region_arguments.m"
    if (transform_hlds__rbmm__region_arguments__succeeded)
#line 55 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
#line 55 "rbmm.region_arguments.m"
    else
#line 55 "rbmm.region_arguments.m"
      {
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_12_12;
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_13_13;
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__HeadVar__2_2, (MR_Integer) 2)));

#line 1324 "transform_hlds.rbmm.region_arguments.c"
        {
#line 1326 "transform_hlds.rbmm.region_arguments.c"
          transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__region_arguments__V_3_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_6_6)));
        }
#line 55 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 55 "rbmm.region_arguments.m"
          {
#line 1333 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__TypeInfo_12_12 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
#line 1335 "transform_hlds.rbmm.region_arguments.c"
            {
#line 1337 "transform_hlds.rbmm.region_arguments.c"
              transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_arguments__TypeInfo_12_12, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_4_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_7_7)));
            }
#line 55 "rbmm.region_arguments.m"
            if (transform_hlds__rbmm__region_arguments__succeeded)
#line 55 "rbmm.region_arguments.m"
              {
#line 1344 "transform_hlds.rbmm.region_arguments.c"
                transform_hlds__rbmm__region_arguments__TypeInfo_13_13 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
#line 1346 "transform_hlds.rbmm.region_arguments.c"
                {
#line 1348 "transform_hlds.rbmm.region_arguments.c"
                  return transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__region_arguments__TypeInfo_13_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_5_5)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_8_8)));
                }
#line 55 "rbmm.region_arguments.m"
              }
#line 55 "rbmm.region_arguments.m"
          }
#line 55 "rbmm.region_arguments.m"
      }
#line 55 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 55 "rbmm.region_arguments.m"
  }
#line 55 "rbmm.region_arguments.m"
}

#line 43 "rbmm.region_arguments.m"
void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_pp_actual_region_args_table_0_0(
#line 43 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 43 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
#line 43 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
#line 43 "rbmm.region_arguments.m"
{
#line 43 "rbmm.region_arguments.m"
  {
#line 43 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 43 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
#line 43 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

#line 43 "rbmm.region_arguments.m"
    {
#line 43 "rbmm.region_arguments.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
#line 43 "rbmm.region_arguments.m"
      return;
    }
#line 43 "rbmm.region_arguments.m"
  }
#line 43 "rbmm.region_arguments.m"
}

#line 43 "rbmm.region_arguments.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_pp_actual_region_args_table_0_0(
#line 43 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 43 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
#line 43 "rbmm.region_arguments.m"
{
#line 43 "rbmm.region_arguments.m"
  {
#line 43 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 43 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
#line 43 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

#line 43 "rbmm.region_arguments.m"
    {
#line 43 "rbmm.region_arguments.m"
      return transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
#line 43 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 43 "rbmm.region_arguments.m"
  }
#line 43 "rbmm.region_arguments.m"
}

#line 37 "rbmm.region_arguments.m"
void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____proc_formal_region_args_table_0_0(
#line 37 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 37 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
#line 37 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
#line 37 "rbmm.region_arguments.m"
{
#line 37 "rbmm.region_arguments.m"
  {
#line 37 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 37 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
#line 37 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

#line 37 "rbmm.region_arguments.m"
    {
#line 37 "rbmm.region_arguments.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
#line 37 "rbmm.region_arguments.m"
      return;
    }
#line 37 "rbmm.region_arguments.m"
  }
#line 37 "rbmm.region_arguments.m"
}

#line 37 "rbmm.region_arguments.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____proc_formal_region_args_table_0_0(
#line 37 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 37 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
#line 37 "rbmm.region_arguments.m"
{
#line 37 "rbmm.region_arguments.m"
  {
#line 37 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 37 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
#line 37 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

#line 37 "rbmm.region_arguments.m"
    {
#line 37 "rbmm.region_arguments.m"
      return transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
#line 37 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 37 "rbmm.region_arguments.m"
  }
#line 37 "rbmm.region_arguments.m"
}

#line 49 "rbmm.region_arguments.m"
void MR_CALL 
transform_hlds__rbmm__region_arguments____Compare____pp_actual_region_args_table_0_0(
#line 49 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 49 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2,
#line 49 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__3_3)
#line 49 "rbmm.region_arguments.m"
{
#line 49 "rbmm.region_arguments.m"
  {
#line 49 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 49 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;
#line 49 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5 = transform_hlds__rbmm__region_arguments__HeadVar__3_3;

#line 49 "rbmm.region_arguments.m"
    {
#line 49 "rbmm.region_arguments.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_5)));
#line 49 "rbmm.region_arguments.m"
      return;
    }
#line 49 "rbmm.region_arguments.m"
  }
#line 49 "rbmm.region_arguments.m"
}

#line 49 "rbmm.region_arguments.m"
MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments____Unify____pp_actual_region_args_table_0_0(
#line 49 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__1_1,
#line 49 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__HeadVar__2_2)
#line 49 "rbmm.region_arguments.m"
{
#line 49 "rbmm.region_arguments.m"
  {
#line 49 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 49 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3 = transform_hlds__rbmm__region_arguments__HeadVar__1_1;
#line 49 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4 = transform_hlds__rbmm__region_arguments__HeadVar__2_2;

#line 49 "rbmm.region_arguments.m"
    {
#line 49 "rbmm.region_arguments.m"
      return transform_hlds__rbmm__region_arguments__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__region_arguments__Cast_HeadVar2_4)));
    }
#line 49 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 49 "rbmm.region_arguments.m"
  }
#line 49 "rbmm.region_arguments.m"
}

#line 333 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Alpha_PP_5,
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Formal_6,
#line 333 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Actuals0_7,
#line 333 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__Actuals_8)
#line 333 "rbmm.region_arguments.m"
{
#line 336 "rbmm.region_arguments.m"
  {
#line 336 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 336 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 336 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Actual_9;
#line 337 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv0_Actual_9;

#line 337 "rbmm.region_arguments.m"
    {
#line 337 "rbmm.region_arguments.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10, transform_hlds__rbmm__region_arguments__TypeCtorInfo_10_10, transform_hlds__rbmm__region_arguments__Alpha_PP_5, ((MR_Box) (transform_hlds__rbmm__region_arguments__Formal_6)), &transform_hlds__rbmm__region_arguments__conv0_Actual_9);
    }
#line 337 "rbmm.region_arguments.m"
    transform_hlds__rbmm__region_arguments__Actual_9 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_Actual_9);
#line 338 "rbmm.region_arguments.m"
    {
#line 338 "rbmm.region_arguments.m"
      MR_Word base;
#line 338 "rbmm.region_arguments.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "rbmm.region_arguments.m"
      *transform_hlds__rbmm__region_arguments__Actuals_8 = base;
#line 338 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Actual_9));
#line 338 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Actuals0_7));
#line 338 "rbmm.region_arguments.m"
    }
#line 336 "rbmm.region_arguments.m"
  }
#line 333 "rbmm.region_arguments.m"
}

#line 310 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1(
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 310 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 310 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3)
#line 310 "rbmm.region_arguments.m"
{
#line 310 "rbmm.region_arguments.m"
  {
#line 310 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 310 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv3_Actuals_8;

#line 310 "rbmm.region_arguments.m"
    {
#line 310 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__find_actual_param_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv3_Actuals_8);
    }
#line 310 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv3_Actuals_8));
#line 310 "rbmm.region_arguments.m"
  }
#line 310 "rbmm.region_arguments.m"
}

#line 291 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_14,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallSite_15,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_16,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34,
#line 291 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35,
#line 291 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36,
#line 291 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37)
#line 291 "rbmm.region_arguments.m"
{
#line 319 "rbmm.region_arguments.m"
  while (MR_TRUE)
#line 319 "rbmm.region_arguments.m"
    {
#line 319 "rbmm.region_arguments.m"
      /* tailcall optimized into a loop */
#line 319 "rbmm.region_arguments.m"
      {
#line 319 "rbmm.region_arguments.m"
        MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 319 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23;
#line 301 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23;

#line 301 "rbmm.region_arguments.m"
        {
#line 301 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34, ((MR_Box) (transform_hlds__rbmm__region_arguments__CalleePPId_16)), &transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23);
        }
#line 301 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 301 "rbmm.region_arguments.m"
          {
#line 301 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_FormalRegionArgCallee_23);
#line 301 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
#line 301 "rbmm.region_arguments.m"
          }
#line 319 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 306 "rbmm.region_arguments.m"
          {
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_59_59;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__FormalConstants_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 0)));
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__FormalDeads_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 1)));
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__FormalBorns_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__FormalRegionArgCallee_23, (MR_Integer) 2)));
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__CallerRptaInfo_27;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__CallerAlpha_29;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__ActualConstants_31;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__ActualDeads_32;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__ActualBorns_33;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__V_38_38;
#line 306 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__V_44_44;
#line 307 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27;
#line 308 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments___CallerGraph_28;
#line 309 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30;
#line 310 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31;
#line 312 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32;
#line 314 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33;

#line 307 "rbmm.region_arguments.m"
            {
#line 307 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_14)), &transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27);
            }
#line 307 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__CallerRptaInfo_27 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_CallerRptaInfo_27);
#line 308 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments___CallerGraph_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CallerRptaInfo_27, (MR_Integer) 0)));
#line 308 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__CallerAlpha_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CallerRptaInfo_27, (MR_Integer) 1)));
#line 1747 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 309 "rbmm.region_arguments.m"
            {
#line 309 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[3], transform_hlds__rbmm__region_arguments__CallerAlpha_29, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallSite_15)), &transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30);
            }
#line 309 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_AlphaAtCallSite_30);
#line 310 "rbmm.region_arguments.m"
            {
#line 310 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_6[0]));
#line 310 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0_1));
#line 310 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_38_38, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__AlphaAtCallSite_30));
#line 310 "rbmm.region_arguments.m"
            }
#line 1770 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 1772 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__TypeInfo_59_59 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[1];
#line 310 "rbmm.region_arguments.m"
            {
#line 310 "rbmm.region_arguments.m"
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalConstants_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31);
            }
#line 310 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__ActualConstants_31 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_ActualConstants_31);
#line 312 "rbmm.region_arguments.m"
            {
#line 312 "rbmm.region_arguments.m"
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalDeads_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32);
            }
#line 312 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__ActualDeads_32 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv5_ActualDeads_32);
#line 314 "rbmm.region_arguments.m"
            {
#line 314 "rbmm.region_arguments.m"
              mercury__list__foldr_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_58_58, transform_hlds__rbmm__region_arguments__TypeInfo_59_59, transform_hlds__rbmm__region_arguments__V_38_38, transform_hlds__rbmm__region_arguments__FormalBorns_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33);
            }
#line 314 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__ActualBorns_33 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv6_ActualBorns_33);
#line 317 "rbmm.region_arguments.m"
            {
#line 317 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualConstants_31));
#line 317 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualDeads_32));
#line 317 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_44_44, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualBorns_33));
#line 317 "rbmm.region_arguments.m"
            }
#line 316 "rbmm.region_arguments.m"
            {
#line 316 "rbmm.region_arguments.m"
              mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_53_53, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__CallSite_15)), ((MR_Box) (transform_hlds__rbmm__region_arguments__V_44_44)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_36, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_37);
            }
#line 306 "rbmm.region_arguments.m"
            *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_35 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34;
#line 306 "rbmm.region_arguments.m"
          }
#line 319 "rbmm.region_arguments.m"
        else
#line 324 "rbmm.region_arguments.m"
          {
#line 324 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46;

#line 322 "rbmm.region_arguments.m"
            {
#line 322 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CalleePPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46);
            }
#line 328 "rbmm.region_arguments.m"
            /* direct tailcall eliminated */
#line 328 "rbmm.region_arguments.m"
            {
#line 328 "rbmm.region_arguments.m"
              MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0__tmp_copy_34 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_46_46;

#line 328 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_34 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0__tmp_copy_34;
#line 328 "rbmm.region_arguments.m"
            }
#line 328 "rbmm.region_arguments.m"
            continue;
#line 324 "rbmm.region_arguments.m"
          }
#line 319 "rbmm.region_arguments.m"
      }
#line 319 "rbmm.region_arguments.m"
      break;
#line 319 "rbmm.region_arguments.m"
    }
#line 291 "rbmm.region_arguments.m"
}

#line 271 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Case_18,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24,
#line 271 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25,
#line 271 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26,
#line 271 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27)
#line 271 "rbmm.region_arguments.m"
{
#line 279 "rbmm.region_arguments.m"
  {
#line 279 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 279 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 2)));
#line 279 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_23, (MR_Integer) 0)));
#line 279 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Info_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_23, (MR_Integer) 1)));
#line 280 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 0)));
#line 280 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Case_18, (MR_Integer) 1)));

#line 191 "rbmm.region_arguments.m"
    {
#line 191 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__Expr_43, transform_hlds__rbmm__region_arguments__Info_44, transform_hlds__rbmm__region_arguments__PPId_13, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_25, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_26, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_27);
#line 191 "rbmm.region_arguments.m"
      return;
    }
#line 279 "rbmm.region_arguments.m"
  }
#line 271 "rbmm.region_arguments.m"
}

#line 243 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3(
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 243 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 243 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 243 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
#line 243 "rbmm.region_arguments.m"
{
#line 243 "rbmm.region_arguments.m"
  {
#line 243 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 243 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25;
#line 243 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27;

#line 243 "rbmm.region_arguments.m"
    {
#line 243 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_case_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27);
    }
#line 243 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv9_STATE_VARIABLE_FormalRegionArgTable_25));
#line 243 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv8_STATE_VARIABLE_ActualRegionArgProc_27));
#line 243 "rbmm.region_arguments.m"
  }
#line 243 "rbmm.region_arguments.m"
}

#line 226 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2(
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 226 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 226 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 226 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
#line 226 "rbmm.region_arguments.m"
{
#line 226 "rbmm.region_arguments.m"
  {
#line 226 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 226 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24;
#line 226 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26;

#line 226 "rbmm.region_arguments.m"
    {
#line 226 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26);
    }
#line 226 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv5_STATE_VARIABLE_FormalRegionArgTable_24));
#line 226 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv4_STATE_VARIABLE_ActualRegionArgProc_26));
#line 226 "rbmm.region_arguments.m"
  }
#line 226 "rbmm.region_arguments.m"
}

#line 220 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1(
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 220 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 220 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 220 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
#line 220 "rbmm.region_arguments.m"
{
#line 220 "rbmm.region_arguments.m"
  {
#line 220 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 220 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24;
#line 220 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26;

#line 220 "rbmm.region_arguments.m"
    {
#line 220 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26);
    }
#line 220 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_24));
#line 220 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgProc_26));
#line 220 "rbmm.region_arguments.m"
  }
#line 220 "rbmm.region_arguments.m"
}

#line 195 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_13,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__GoalExpr_14,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__GoalInfo_15,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__CallerPPId_16,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_17,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_18,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_19,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_20,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61,
#line 195 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62,
#line 195 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63,
#line 195 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64)
#line 195 "rbmm.region_arguments.m"
{
#line 206 "rbmm.region_arguments.m"
  {
#line 206 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;

#line 206 "rbmm.region_arguments.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 0))))
#line 253 "rbmm.region_arguments.m"
      {
#line 253 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__SubGoal_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14), (MR_Integer) 0);

#line 254 "rbmm.region_arguments.m"
        {
#line 254 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__SubGoal_53, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
#line 254 "rbmm.region_arguments.m"
          return;
        }
#line 253 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 2))))
#line 206 "rbmm.region_arguments.m"
      {
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)));
#line 206 "rbmm.region_arguments.m"
        MR_Integer transform_hlds__rbmm__region_arguments__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__CalleePPId_29;
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 4)));
#line 206 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 5)));
#line 208 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_93_93;

#line 207 "rbmm.region_arguments.m"
        {
#line 207 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__CalleePPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CalleePPId_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_23));
#line 207 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__CalleePPId_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ProcId_24));
#line 207 "rbmm.region_arguments.m"
        }
#line 208 "rbmm.region_arguments.m"
        {
#line 208 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_93_93, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CalleePPId_29));
#line 208 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "rbmm.region_arguments.m"
        }
#line 208 "rbmm.region_arguments.m"
        {
#line 208 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_arguments__V_93_93, transform_hlds__rbmm__region_arguments__ModuleInfo_13);
        }
#line 210 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 209 "rbmm.region_arguments.m"
          {
#line 209 "rbmm.region_arguments.m"
            *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63;
#line 209 "rbmm.region_arguments.m"
            *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61;
#line 209 "rbmm.region_arguments.m"
          }
#line 210 "rbmm.region_arguments.m"
        else
#line 211 "rbmm.region_arguments.m"
          {
#line 211 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__CallSite_30;

#line 211 "rbmm.region_arguments.m"
            {
#line 211 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__CallSite_30 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__region_arguments__GoalInfo_15);
            }
#line 212 "rbmm.region_arguments.m"
            {
#line 212 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__record_actual_region_arguments_call_site_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__CallSite_30, transform_hlds__rbmm__region_arguments__CalleePPId_29, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
#line 212 "rbmm.region_arguments.m"
              return;
            }
#line 211 "rbmm.region_arguments.m"
          }
#line 206 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 1))))
#line 258 "rbmm.region_arguments.m"
      {
#line 258 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61;
#line 258 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63;
#line 258 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 250 "rbmm.region_arguments.m"
      {
#line 251 "rbmm.region_arguments.m"
        {
#line 251 "rbmm.region_arguments.m"
          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "call_foreign_proc NYI");
#line 251 "rbmm.region_arguments.m"
          return;
        }
#line 250 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 218 "rbmm.region_arguments.m"
      {
#line 218 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Conjuncts_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
#line 218 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_90_90;
#line 218 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
#line 219 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62;
#line 219 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64;

#line 220 "rbmm.region_arguments.m"
        {
#line 220 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_1));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
#line 220 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_90_90, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
#line 220 "rbmm.region_arguments.m"
        }
#line 219 "rbmm.region_arguments.m"
        {
#line 219 "rbmm.region_arguments.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_90_90, transform_hlds__rbmm__region_arguments__Conjuncts_32, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64);
        }
#line 219 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_62);
#line 219 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgProc_64);
#line 218 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 224 "rbmm.region_arguments.m"
      {
#line 224 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Disjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
#line 224 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_87_87;
#line 225 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62;
#line 225 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64;

#line 226 "rbmm.region_arguments.m"
        {
#line 226 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[1]));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_2));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
#line 226 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_87_87, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
#line 226 "rbmm.region_arguments.m"
        }
#line 225 "rbmm.region_arguments.m"
        {
#line 225 "rbmm.region_arguments.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_87_87, transform_hlds__rbmm__region_arguments__Disjuncts_33, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64);
        }
#line 225 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv7_STATE_VARIABLE_FormalRegionArgTable_62);
#line 225 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv6_STATE_VARIABLE_ActualRegionArgProc_64);
#line 224 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 247 "rbmm.region_arguments.m"
      {
#line 248 "rbmm.region_arguments.m"
        {
#line 248 "rbmm.region_arguments.m"
          mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "generic_call NYI");
#line 248 "rbmm.region_arguments.m"
          return;
        }
#line 247 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 230 "rbmm.region_arguments.m"
      {
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Cond_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Then_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Else_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 4)));
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81;
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82;
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83;
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84;
#line 230 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));

#line 231 "rbmm.region_arguments.m"
        {
#line 231 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Cond_35, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82);
        }
#line 234 "rbmm.region_arguments.m"
        {
#line 234 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Then_36, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_81_81, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_82_82, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84);
        }
#line 237 "rbmm.region_arguments.m"
        {
#line 237 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__Else_37, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_83_83, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_84_84, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
#line 237 "rbmm.region_arguments.m"
          return;
        }
#line 230 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 260 "rbmm.region_arguments.m"
      {
#line 260 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__SubGoal_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
#line 260 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));

#line 263 "rbmm.region_arguments.m"
        {
#line 263 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_13, transform_hlds__rbmm__region_arguments__CallerPPId_16, transform_hlds__rbmm__region_arguments__RptaInfoTable_17, transform_hlds__rbmm__region_arguments__ConstantRTable_18, transform_hlds__rbmm__region_arguments__DeadRTable_19, transform_hlds__rbmm__region_arguments__BornRTable_20, transform_hlds__rbmm__region_arguments__SubGoal_97, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64);
#line 263 "rbmm.region_arguments.m"
          return;
        }
#line 260 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 206 "rbmm.region_arguments.m"
    if (((((MR_tag((MR_Word) transform_hlds__rbmm__region_arguments__GoalExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 267 "rbmm.region_arguments.m"
      {
#line 268 "rbmm.region_arguments.m"
        {
#line 268 "rbmm.region_arguments.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.region_arguments", (MR_String) "predicate \140transform_hlds.rbmm.region_arguments.record_actual_region_arguments_expr\'/12", (MR_String) "shorthand");
#line 268 "rbmm.region_arguments.m"
          return;
        }
#line 267 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
    else
#line 241 "rbmm.region_arguments.m"
      {
#line 241 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 3)));
#line 241 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_78_78;
#line 241 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 1)));
#line 241 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__region_arguments__GoalExpr_14, (MR_Integer) 2)));
#line 242 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62;
#line 242 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64;

#line 243 "rbmm.region_arguments.m"
        {
#line 243 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[2]));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0_3));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_13));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__CallerPPId_16));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_17));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_18));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_19));
#line 243 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_78_78, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_20));
#line 243 "rbmm.region_arguments.m"
        }
#line 242 "rbmm.region_arguments.m"
        {
#line 242 "rbmm.region_arguments.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], transform_hlds__rbmm__region_arguments__V_78_78, transform_hlds__rbmm__region_arguments__Cases_40, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_61)), &transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_63)), &transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64);
        }
#line 242 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_62 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv11_STATE_VARIABLE_FormalRegionArgTable_62);
#line 242 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_64 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv10_STATE_VARIABLE_ActualRegionArgProc_64);
#line 241 "rbmm.region_arguments.m"
      }
#line 206 "rbmm.region_arguments.m"
  }
#line 195 "rbmm.region_arguments.m"
}

#line 181 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_13,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__Goal_18,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23,
#line 181 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24,
#line 181 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25,
#line 181 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26)
#line 181 "rbmm.region_arguments.m"
{
#line 189 "rbmm.region_arguments.m"
  {
#line 189 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 189 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Expr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_18, (MR_Integer) 0)));
#line 189 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__Info_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__Goal_18, (MR_Integer) 1)));

#line 191 "rbmm.region_arguments.m"
    {
#line 191 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_expr_12_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__Expr_21, transform_hlds__rbmm__region_arguments__Info_22, transform_hlds__rbmm__region_arguments__PPId_13, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_23, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_0_25, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgProc_26);
#line 191 "rbmm.region_arguments.m"
      return;
    }
#line 189 "rbmm.region_arguments.m"
  }
#line 181 "rbmm.region_arguments.m"
}

#line 163 "rbmm.region_arguments.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1(
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1)
#line 163 "rbmm.region_arguments.m"
{
#line 163 "rbmm.region_arguments.m"
  {
#line 163 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 163 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;

#line 163 "rbmm.region_arguments.m"
    {
#line 163 "rbmm.region_arguments.m"
      return transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1));
    }
#line 163 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 163 "rbmm.region_arguments.m"
  }
#line 163 "rbmm.region_arguments.m"
}

#line 135 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0(
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_9,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PPId_10,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_11,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_12,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_13,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_14,
#line 135 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30,
#line 135 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31)
#line 135 "rbmm.region_arguments.m"
{
#line 145 "rbmm.region_arguments.m"
  {
#line 145 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 143 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_16_16;
#line 143 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv0_V_16_16;

#line 143 "rbmm.region_arguments.m"
    {
#line 143 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv0_V_16_16);
    }
#line 143 "rbmm.region_arguments.m"
    if (transform_hlds__rbmm__region_arguments__succeeded)
#line 143 "rbmm.region_arguments.m"
      {
#line 143 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__V_16_16 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_V_16_16);
#line 143 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
#line 143 "rbmm.region_arguments.m"
      }
#line 145 "rbmm.region_arguments.m"
    if (transform_hlds__rbmm__region_arguments__succeeded)
#line 145 "rbmm.region_arguments.m"
      *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30;
#line 145 "rbmm.region_arguments.m"
    else
#line 146 "rbmm.region_arguments.m"
      {
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_38_38 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[0];
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__ConstantR_17;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__DeadR_18;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__BornR_19;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__RptaInfo_20;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Graph_21;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__LConstantR_23;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Globals_24;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__UseAllocRegions_25;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__FormalDeadR_27;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__FormalBornR_28;
#line 146 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__RegionArgs_29;
#line 146 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv1_ConstantR_17;
#line 147 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv2_DeadR_18;
#line 148 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv3_BornR_19;
#line 150 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20;
#line 151 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_22_22;

#line 146 "rbmm.region_arguments.m"
        {
#line 146 "rbmm.region_arguments.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__ConstantRTable_12, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv1_ConstantR_17);
        }
#line 146 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__ConstantR_17 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_ConstantR_17);
#line 147 "rbmm.region_arguments.m"
        {
#line 147 "rbmm.region_arguments.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__DeadRTable_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv2_DeadR_18);
        }
#line 147 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__DeadR_18 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_DeadR_18);
#line 148 "rbmm.region_arguments.m"
        {
#line 148 "rbmm.region_arguments.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, transform_hlds__rbmm__region_arguments__TypeInfo_38_38, transform_hlds__rbmm__region_arguments__BornRTable_14, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv3_BornR_19);
        }
#line 148 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__BornR_19 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_BornR_19);
#line 150 "rbmm.region_arguments.m"
        {
#line 150 "rbmm.region_arguments.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_11, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), &transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20);
        }
#line 150 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__RptaInfo_20 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_RptaInfo_20);
#line 151 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__Graph_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_20, (MR_Integer) 0)));
#line 151 "rbmm.region_arguments.m"
        transform_hlds__rbmm__region_arguments__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_20, (MR_Integer) 1)));
#line 2637 "transform_hlds.rbmm.region_arguments.c"
        transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 154 "rbmm.region_arguments.m"
        {
#line 154 "rbmm.region_arguments.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__ConstantR_17, &transform_hlds__rbmm__region_arguments__LConstantR_23);
        }
#line 158 "rbmm.region_arguments.m"
        {
#line 158 "rbmm.region_arguments.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_9, &transform_hlds__rbmm__region_arguments__Globals_24);
        }
#line 159 "rbmm.region_arguments.m"
        {
#line 159 "rbmm.region_arguments.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__region_arguments__Globals_24, (MR_Integer) 230, &transform_hlds__rbmm__region_arguments__UseAllocRegions_25);
        }
#line 165 "rbmm.region_arguments.m"
        if ((transform_hlds__rbmm__region_arguments__UseAllocRegions_25 == (MR_Integer) 0))
#line 167 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26 = transform_hlds__rbmm__region_arguments__LConstantR_23;
#line 165 "rbmm.region_arguments.m"
        else
#line 162 "rbmm.region_arguments.m"
          {
#line 162 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__V_33_33;

#line 163 "rbmm.region_arguments.m"
            {
#line 163 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_5[0]));
#line 163 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_formal_region_arguments_proc_8_p_0_1));
#line 163 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_33_33, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Graph_21));
#line 163 "rbmm.region_arguments.m"
            }
#line 163 "rbmm.region_arguments.m"
            {
#line 163 "rbmm.region_arguments.m"
              mercury__list__filter_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__V_33_33, transform_hlds__rbmm__region_arguments__LConstantR_23, &transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26);
            }
#line 162 "rbmm.region_arguments.m"
          }
#line 171 "rbmm.region_arguments.m"
        {
#line 171 "rbmm.region_arguments.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__DeadR_18, &transform_hlds__rbmm__region_arguments__FormalDeadR_27);
        }
#line 174 "rbmm.region_arguments.m"
        {
#line 174 "rbmm.region_arguments.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_40, transform_hlds__rbmm__region_arguments__BornR_19, &transform_hlds__rbmm__region_arguments__FormalBornR_28);
        }
#line 176 "rbmm.region_arguments.m"
        {
#line 176 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__RegionArgs_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 176 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_26));
#line 176 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalDeadR_27));
#line 176 "rbmm.region_arguments.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_29, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalBornR_28));
#line 176 "rbmm.region_arguments.m"
        }
#line 178 "rbmm.region_arguments.m"
        {
#line 178 "rbmm.region_arguments.m"
          mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_37, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_10)), ((MR_Box) (transform_hlds__rbmm__region_arguments__RegionArgs_29)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_30, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_31);
#line 178 "rbmm.region_arguments.m"
          return;
        }
#line 146 "rbmm.region_arguments.m"
      }
#line 145 "rbmm.region_arguments.m"
  }
#line 135 "rbmm.region_arguments.m"
}

#line 163 "rbmm.region_arguments.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1(
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 163 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1)
#line 163 "rbmm.region_arguments.m"
{
#line 163 "rbmm.region_arguments.m"
  {
#line 163 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 163 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;

#line 163 "rbmm.region_arguments.m"
    {
#line 163 "rbmm.region_arguments.m"
      return transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1));
    }
#line 163 "rbmm.region_arguments.m"
    return transform_hlds__rbmm__region_arguments__succeeded;
#line 163 "rbmm.region_arguments.m"
  }
#line 163 "rbmm.region_arguments.m"
}

#line 107 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_12,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PredId_13,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_14,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_15,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_16,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_17,
#line 107 "rbmm.region_arguments.m"
  MR_Integer transform_hlds__rbmm__region_arguments__ProcId_18,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26,
#line 107 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27,
#line 107 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28,
#line 107 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29)
#line 107 "rbmm.region_arguments.m"
{
#line 117 "rbmm.region_arguments.m"
  {
#line 117 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 117 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__PPId_21;
#line 119 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_30_30;

#line 118 "rbmm.region_arguments.m"
    {
#line 118 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__PPId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__PPId_21, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_13));
#line 118 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__PPId_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ProcId_18));
#line 118 "rbmm.region_arguments.m"
    }
#line 119 "rbmm.region_arguments.m"
    {
#line 119 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_30_30, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21));
#line 119 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__region_arguments__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "rbmm.region_arguments.m"
    }
#line 119 "rbmm.region_arguments.m"
    {
#line 119 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__region_arguments__V_30_30, transform_hlds__rbmm__region_arguments__ModuleInfo_12);
    }
#line 121 "rbmm.region_arguments.m"
    if (transform_hlds__rbmm__region_arguments__succeeded)
#line 120 "rbmm.region_arguments.m"
      {
#line 120 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28;
#line 120 "rbmm.region_arguments.m"
        *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26;
#line 120 "rbmm.region_arguments.m"
      }
#line 121 "rbmm.region_arguments.m"
    else
#line 124 "rbmm.region_arguments.m"
      {
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__ProcInfo0_22;
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__ProcInfo_23;
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__Body_24;
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25;
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32;
#line 124 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_34_34;
#line 143 "rbmm.region_arguments.m"
        MR_Word transform_hlds__rbmm__region_arguments__V_49_49;
#line 143 "rbmm.region_arguments.m"
        MR_Box transform_hlds__rbmm__region_arguments__conv0_V_49_49;

#line 143 "rbmm.region_arguments.m"
        {
#line 143 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv0_V_49_49);
        }
#line 143 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 143 "rbmm.region_arguments.m"
          {
#line 143 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__V_49_49 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv0_V_49_49);
#line 143 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__succeeded = MR_TRUE;
#line 143 "rbmm.region_arguments.m"
          }
#line 145 "rbmm.region_arguments.m"
        if (transform_hlds__rbmm__region_arguments__succeeded)
#line 145 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32 = transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26;
#line 145 "rbmm.region_arguments.m"
        else
#line 146 "rbmm.region_arguments.m"
          {
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeInfo_38_69 = (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_2[0];
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__ConstantR_50;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__DeadR_51;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__BornR_52;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__RptaInfo_53;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__Graph_54;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__LConstantR_56;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__Globals_57;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__UseAllocRegions_58;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__FormalDeadR_60;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__FormalBornR_61;
#line 146 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__RegionArgs_62;
#line 146 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv1_ConstantR_50;
#line 147 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv2_DeadR_51;
#line 148 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv3_BornR_52;
#line 150 "rbmm.region_arguments.m"
            MR_Box transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53;
#line 151 "rbmm.region_arguments.m"
            MR_Word transform_hlds__rbmm__region_arguments__V_55_55;

#line 146 "rbmm.region_arguments.m"
            {
#line 146 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__ConstantRTable_15, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv1_ConstantR_50);
            }
#line 146 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__ConstantR_50 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv1_ConstantR_50);
#line 147 "rbmm.region_arguments.m"
            {
#line 147 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__DeadRTable_16, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv2_DeadR_51);
            }
#line 147 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__DeadR_51 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_DeadR_51);
#line 148 "rbmm.region_arguments.m"
            {
#line 148 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, transform_hlds__rbmm__region_arguments__TypeInfo_38_69, transform_hlds__rbmm__region_arguments__BornRTable_17, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv3_BornR_52);
            }
#line 148 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__BornR_52 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_BornR_52);
#line 150 "rbmm.region_arguments.m"
            {
#line 150 "rbmm.region_arguments.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), &transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53);
            }
#line 150 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__RptaInfo_53 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv4_RptaInfo_53);
#line 151 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__Graph_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_53, (MR_Integer) 0)));
#line 151 "rbmm.region_arguments.m"
            transform_hlds__rbmm__region_arguments__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RptaInfo_53, (MR_Integer) 1)));
#line 2938 "transform_hlds.rbmm.region_arguments.c"
            transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 154 "rbmm.region_arguments.m"
            {
#line 154 "rbmm.region_arguments.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__ConstantR_50, &transform_hlds__rbmm__region_arguments__LConstantR_56);
            }
#line 158 "rbmm.region_arguments.m"
            {
#line 158 "rbmm.region_arguments.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, &transform_hlds__rbmm__region_arguments__Globals_57);
            }
#line 159 "rbmm.region_arguments.m"
            {
#line 159 "rbmm.region_arguments.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__rbmm__region_arguments__Globals_57, (MR_Integer) 230, &transform_hlds__rbmm__region_arguments__UseAllocRegions_58);
            }
#line 165 "rbmm.region_arguments.m"
            if ((transform_hlds__rbmm__region_arguments__UseAllocRegions_58 == (MR_Integer) 0))
#line 167 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59 = transform_hlds__rbmm__region_arguments__LConstantR_56;
#line 165 "rbmm.region_arguments.m"
            else
#line 162 "rbmm.region_arguments.m"
              {
#line 162 "rbmm.region_arguments.m"
                MR_Word transform_hlds__rbmm__region_arguments__V_64_64;

#line 163 "rbmm.region_arguments.m"
                {
#line 163 "rbmm.region_arguments.m"
                  transform_hlds__rbmm__region_arguments__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "rbmm.region_arguments.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_5[0]));
#line 163 "rbmm.region_arguments.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0_1));
#line 163 "rbmm.region_arguments.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "rbmm.region_arguments.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_64_64, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__Graph_54));
#line 163 "rbmm.region_arguments.m"
                }
#line 163 "rbmm.region_arguments.m"
                {
#line 163 "rbmm.region_arguments.m"
                  mercury__list__filter_3_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__V_64_64, transform_hlds__rbmm__region_arguments__LConstantR_56, &transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59);
                }
#line 162 "rbmm.region_arguments.m"
              }
#line 171 "rbmm.region_arguments.m"
            {
#line 171 "rbmm.region_arguments.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__DeadR_51, &transform_hlds__rbmm__region_arguments__FormalDeadR_60);
            }
#line 174 "rbmm.region_arguments.m"
            {
#line 174 "rbmm.region_arguments.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_40_71, transform_hlds__rbmm__region_arguments__BornR_52, &transform_hlds__rbmm__region_arguments__FormalBornR_61);
            }
#line 176 "rbmm.region_arguments.m"
            {
#line 176 "rbmm.region_arguments.m"
              transform_hlds__rbmm__region_arguments__RegionArgs_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 176 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 0) = ((MR_Box) (transform_hlds__rbmm__region_arguments__LFormalConstantAllocR_59));
#line 176 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalDeadR_60));
#line 176 "rbmm.region_arguments.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__RegionArgs_62, 2) = ((MR_Box) (transform_hlds__rbmm__region_arguments__FormalBornR_61));
#line 176 "rbmm.region_arguments.m"
            }
#line 178 "rbmm.region_arguments.m"
            {
#line 178 "rbmm.region_arguments.m"
              mercury__map__det_insert_4_p_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_37_68, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0, ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), ((MR_Box) (transform_hlds__rbmm__region_arguments__RegionArgs_62)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_26, &transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32);
            }
#line 146 "rbmm.region_arguments.m"
          }
#line 126 "rbmm.region_arguments.m"
        {
#line 126 "rbmm.region_arguments.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__PPId_21, &transform_hlds__rbmm__region_arguments__ProcInfo0_22);
        }
#line 127 "rbmm.region_arguments.m"
        {
#line 127 "rbmm.region_arguments.m"
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__ProcInfo0_22, &transform_hlds__rbmm__region_arguments__ProcInfo_23);
        }
#line 128 "rbmm.region_arguments.m"
        {
#line 128 "rbmm.region_arguments.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__region_arguments__ProcInfo_23, &transform_hlds__rbmm__region_arguments__Body_24);
        }
#line 131 "rbmm.region_arguments.m"
        {
#line 131 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__V_34_34 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
        }
#line 129 "rbmm.region_arguments.m"
        {
#line 129 "rbmm.region_arguments.m"
          transform_hlds__rbmm__region_arguments__record_actual_region_arguments_goal_11_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_12, transform_hlds__rbmm__region_arguments__PPId_21, transform_hlds__rbmm__region_arguments__RptaInfoTable_14, transform_hlds__rbmm__region_arguments__ConstantRTable_15, transform_hlds__rbmm__region_arguments__DeadRTable_16, transform_hlds__rbmm__region_arguments__BornRTable_17, transform_hlds__rbmm__region_arguments__Body_24, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_32_32, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_27, transform_hlds__rbmm__region_arguments__V_34_34, &transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25);
        }
#line 132 "rbmm.region_arguments.m"
        {
#line 132 "rbmm.region_arguments.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__region_arguments__PPId_21)), ((MR_Box) (transform_hlds__rbmm__region_arguments__ActualRegionArgProc_25)), transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_28, transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_29);
#line 132 "rbmm.region_arguments.m"
          return;
        }
#line 124 "rbmm.region_arguments.m"
      }
#line 117 "rbmm.region_arguments.m"
  }
#line 107 "rbmm.region_arguments.m"
}

#line 103 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1(
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 103 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 103 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 103 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
#line 103 "rbmm.region_arguments.m"
{
#line 103 "rbmm.region_arguments.m"
  {
#line 103 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 103 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27;
#line 103 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29;

#line 103 "rbmm.region_arguments.m"
    {
#line 103 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_region_arguments_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 8))), ((MR_Integer) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29);
    }
#line 103 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_27));
#line 103 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_29));
#line 103 "rbmm.region_arguments.m"
  }
#line 103 "rbmm.region_arguments.m"
}

#line 90 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_11,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_12,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_13,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_14,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_15,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__PredId_16,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21,
#line 90 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22,
#line 90 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23,
#line 90 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24)
#line 90 "rbmm.region_arguments.m"
{
#line 100 "rbmm.region_arguments.m"
  {
#line 100 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 100 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__PredInfo_19;
#line 100 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__ProcIds_20;
#line 100 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_25_25;
#line 103 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22;
#line 103 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24;

#line 101 "rbmm.region_arguments.m"
    {
#line 101 "rbmm.region_arguments.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_11, transform_hlds__rbmm__region_arguments__PredId_16, &transform_hlds__rbmm__region_arguments__PredInfo_19);
    }
#line 102 "rbmm.region_arguments.m"
    {
#line 102 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__ProcIds_20 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__region_arguments__PredInfo_19);
    }
#line 103 "rbmm.region_arguments.m"
    {
#line 103 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_4[0]));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0_1));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_11));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__PredId_16));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_12));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_13));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_14));
#line 103 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_25_25, 8) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_15));
#line 103 "rbmm.region_arguments.m"
    }
#line 103 "rbmm.region_arguments.m"
    {
#line 103 "rbmm.region_arguments.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__V_25_25, transform_hlds__rbmm__region_arguments__ProcIds_20, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_0_21)), &transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Box) (transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_0_23)), &transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24);
    }
#line 103 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_FormalRegionArgTable_22 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_STATE_VARIABLE_FormalRegionArgTable_22);
#line 103 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__STATE_VARIABLE_ActualRegionArgTable_24 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_STATE_VARIABLE_ActualRegionArgTable_24);
#line 100 "rbmm.region_arguments.m"
  }
#line 90 "rbmm.region_arguments.m"
}

#line 85 "rbmm.region_arguments.m"
static void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1(
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__closure_arg,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_1,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_2,
#line 85 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_3,
#line 85 "rbmm.region_arguments.m"
  MR_Box transform_hlds__rbmm__region_arguments__wrapper_arg_4,
#line 85 "rbmm.region_arguments.m"
  MR_Box * transform_hlds__rbmm__region_arguments__wrapper_arg_5)
#line 85 "rbmm.region_arguments.m"
{
#line 85 "rbmm.region_arguments.m"
  {
#line 85 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__closure = transform_hlds__rbmm__region_arguments__closure_arg;
#line 85 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22;
#line 85 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24;

#line 85 "rbmm.region_arguments.m"
    {
#line 85 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__record_actual_region_arguments_pred_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_2), &transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22, ((MR_Word) transform_hlds__rbmm__region_arguments__wrapper_arg_4), &transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24);
    }
#line 85 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv1_STATE_VARIABLE_FormalRegionArgTable_22));
#line 85 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__region_arguments__conv0_STATE_VARIABLE_ActualRegionArgTable_24));
#line 85 "rbmm.region_arguments.m"
  }
#line 85 "rbmm.region_arguments.m"
}

#line 62 "rbmm.region_arguments.m"
void MR_CALL 
transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(
#line 62 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ModuleInfo_8,
#line 62 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__RptaInfoTable_9,
#line 62 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__ConstantRTable_10,
#line 62 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__DeadRTable_11,
#line 62 "rbmm.region_arguments.m"
  MR_Word transform_hlds__rbmm__region_arguments__BornRTable_12,
#line 62 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__FormalRegionArgTable_13,
#line 62 "rbmm.region_arguments.m"
  MR_Word * transform_hlds__rbmm__region_arguments__ActualRegionArgTable_14)
#line 62 "rbmm.region_arguments.m"
{
#line 83 "rbmm.region_arguments.m"
  {
#line 83 "rbmm.region_arguments.m"
    MR_bool transform_hlds__rbmm__region_arguments__succeeded;
#line 83 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24;
#line 83 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__PredIds_15;
#line 83 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_16_16;
#line 83 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_17_17;
#line 83 "rbmm.region_arguments.m"
    MR_Word transform_hlds__rbmm__region_arguments__V_18_18;
#line 85 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13;
#line 85 "rbmm.region_arguments.m"
    MR_Box transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14;

#line 84 "rbmm.region_arguments.m"
    {
#line 84 "rbmm.region_arguments.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__region_arguments__ModuleInfo_8, &transform_hlds__rbmm__region_arguments__PredIds_15);
    }
#line 85 "rbmm.region_arguments.m"
    {
#line 85 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__region_arguments_scalar_common_3[0]));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0_1));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ModuleInfo_8));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 4) = ((MR_Box) (transform_hlds__rbmm__region_arguments__RptaInfoTable_9));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 5) = ((MR_Box) (transform_hlds__rbmm__region_arguments__ConstantRTable_10));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 6) = ((MR_Box) (transform_hlds__rbmm__region_arguments__DeadRTable_11));
#line 85 "rbmm.region_arguments.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__region_arguments__V_16_16, 7) = ((MR_Box) (transform_hlds__rbmm__region_arguments__BornRTable_12));
#line 85 "rbmm.region_arguments.m"
    }
#line 3288 "transform_hlds.rbmm.region_arguments.c"
    transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 87 "rbmm.region_arguments.m"
    {
#line 87 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__V_17_17 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0);
    }
#line 88 "rbmm.region_arguments.m"
    {
#line 88 "rbmm.region_arguments.m"
      transform_hlds__rbmm__region_arguments__V_18_18 = mercury__map__init_0_f_0(transform_hlds__rbmm__region_arguments__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[0]);
    }
#line 85 "rbmm.region_arguments.m"
    {
#line 85 "rbmm.region_arguments.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__region_arguments_scalar_common_1[2], transform_hlds__rbmm__region_arguments__V_16_16, transform_hlds__rbmm__region_arguments__PredIds_15, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_17_17)), &transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13, ((MR_Box) (transform_hlds__rbmm__region_arguments__V_18_18)), &transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14);
    }
#line 85 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__FormalRegionArgTable_13 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv3_FormalRegionArgTable_13);
#line 85 "rbmm.region_arguments.m"
    *transform_hlds__rbmm__region_arguments__ActualRegionArgTable_14 = ((MR_Word) transform_hlds__rbmm__region_arguments__conv2_ActualRegionArgTable_14);
#line 83 "rbmm.region_arguments.m"
  }
#line 62 "rbmm.region_arguments.m"
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
