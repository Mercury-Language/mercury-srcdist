/*
** Automatically generated from `rbmm.points_to_analysis.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module transform_hlds.rbmm.points_to_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__points_to_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_analysis.mih"


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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.fixpoint_table.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"



#line 728 "rbmm.points_to_analysis.m"
struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s {
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2;
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3;
#line 731 "rbmm.points_to_analysis.m"
  MR_bool transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded;
#line 732 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10;
#line 750 "rbmm.points_to_analysis.m"
  jmp_buf transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0;
#line 728 "rbmm.points_to_analysis.m"
};


#line 173 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 176 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 179 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 185 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 188 "transform_hlds.rbmm.points_to_analysis.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
#line 191 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 193 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2);

#line 196 "transform_hlds.rbmm.points_to_analysis.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
#line 199 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 201 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 203 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 1045 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1045__1_2_p_0(
#line 1045 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_13,
#line 1045 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_14);

#line 1022 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3);

#line 1022 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2);

#line 1049 "rbmm.points_to_analysis.m"
static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
#line 1049 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
#line 1049 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_5);

#line 971 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

#line 937 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

#line 855 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_2,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_3,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

#line 818 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_2,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Processed_3,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6);

#line 765 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_3,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7);

#line 750 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
#line 750 "rbmm.points_to_analysis.m"
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg);

#line 750 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
#line 750 "rbmm.points_to_analysis.m"
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg);

#line 728 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__NY_2,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__5_5);

#line 685 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
#line 685 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
#line 685 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12,
#line 685 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13);

#line 650 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Sel_1,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__M_2,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);

#line 588 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_1,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6);

#line 551 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
#line 551 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
#line 551 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11,
#line 551 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12);

#line 522 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_5,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_6,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);

#line 496 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_7,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_8,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__RptaInfo_10,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__Init_11);

#line 480 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_10,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19);

#line 430 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

#line 439 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

#line 371 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

#line 365 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_2,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_3,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__7_7,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);

#line 355 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_10,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18);

#line 1044 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2);

#line 315 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_7,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_8,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17);

#line 306 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 301 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 296 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable0_7,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13);

#line 1030 "rbmm.points_to_analysis.m"
static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
#line 1030 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 1030 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1);

#line 282 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);

#line 222 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__LVar_8,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_9,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__RVar_10,
#line 222 "rbmm.points_to_analysis.m"
  MR_Integer transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18,
#line 222 "rbmm.points_to_analysis.m"
  MR_Integer * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21);

#line 205 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

#line 201 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5);

#line 188 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
#line 188 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 188 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 188 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__3_3);

#line 171 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
#line 171 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_4,
#line 171 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9,
#line 171 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10);

#line 134 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 136 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 124 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 120 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
#line 120 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 120 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2,
#line 120 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);

#line 113 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
#line 113 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_4,
#line 113 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8,
#line 113 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9);

#line 98 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_7,
#line 98 "rbmm.points_to_analysis.m"
  MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_8,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16);

#line 96 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 90 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_6,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11);

#line 280 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);

#line 88 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_1[7][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_2[3][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_3[3][7];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_5[3][6];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_6[3][10];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_7[1][5];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_6[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_analysis_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1031 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1040 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1048 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1056 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1065 "transform_hlds.rbmm.points_to_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1074 "transform_hlds.rbmm.points_to_analysis.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_analysis__transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_analysis",
  (MR_String) "rpta_fixpoint_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_analysis__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1091 "transform_hlds.rbmm.points_to_analysis.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0_10001(
#line 1094 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 1096 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2)
#line 1098 "transform_hlds.rbmm.points_to_analysis.c"
{
#line 1100 "transform_hlds.rbmm.points_to_analysis.c"
  {
#line 1102 "transform_hlds.rbmm.points_to_analysis.c"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 1105 "transform_hlds.rbmm.points_to_analysis.c"
    {
#line 1107 "transform_hlds.rbmm.points_to_analysis.c"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2));
    }
#line 1110 "transform_hlds.rbmm.points_to_analysis.c"
    return transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1112 "transform_hlds.rbmm.points_to_analysis.c"
  }
#line 1114 "transform_hlds.rbmm.points_to_analysis.c"
}

#line 1117 "transform_hlds.rbmm.points_to_analysis.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0_10001(
#line 1120 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 1122 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 1124 "transform_hlds.rbmm.points_to_analysis.c"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 1126 "transform_hlds.rbmm.points_to_analysis.c"
{
#line 1128 "transform_hlds.rbmm.points_to_analysis.c"
  {
#line 1130 "transform_hlds.rbmm.points_to_analysis.c"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1;

#line 1133 "transform_hlds.rbmm.points_to_analysis.c"
    {
#line 1135 "transform_hlds.rbmm.points_to_analysis.c"
      transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(&transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_3));
    }
#line 1138 "transform_hlds.rbmm.points_to_analysis.c"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_HeadVar__1_1));
#line 1140 "transform_hlds.rbmm.points_to_analysis.c"
  }
#line 1142 "transform_hlds.rbmm.points_to_analysis.c"
}

#line 1045 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1045__1_2_p_0(
#line 1045 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_13,
#line 1045 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_14)
#line 1045 "rbmm.points_to_analysis.m"
{
#line 1045 "rbmm.points_to_analysis.m"
  {
#line 1045 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 1045 "rbmm.points_to_analysis.m"
    {
#line 1045 "rbmm.points_to_analysis.m"
      return transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_equal_2_p_0(transform_hlds__rbmm__points_to_analysis__HeadVar__2_14, transform_hlds__rbmm__points_to_analysis__HeadVar__1_13);
    }
#line 1045 "rbmm.points_to_analysis.m"
    return transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1045 "rbmm.points_to_analysis.m"
  }
#line 1045 "rbmm.points_to_analysis.m"
}

#line 1022 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis____Compare____rpta_fixpoint_table_0_0(
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3)
#line 1022 "rbmm.points_to_analysis.m"
{
#line 1022 "rbmm.points_to_analysis.m"
  {
#line 1022 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1022 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;
#line 1022 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_analysis__HeadVar__3_3;

#line 1022 "rbmm.points_to_analysis.m"
    {
#line 1022 "rbmm.points_to_analysis.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_5)));
#line 1022 "rbmm.points_to_analysis.m"
      return;
    }
#line 1022 "rbmm.points_to_analysis.m"
  }
#line 1022 "rbmm.points_to_analysis.m"
}

#line 1022 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis____Unify____rpta_fixpoint_table_0_0(
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 1022 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2)
#line 1022 "rbmm.points_to_analysis.m"
{
#line 1022 "rbmm.points_to_analysis.m"
  {
#line 1022 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1022 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__1_1;
#line 1022 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;

#line 1022 "rbmm.points_to_analysis.m"
    {
#line 1022 "rbmm.points_to_analysis.m"
      return transform_hlds__rbmm__points_to_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Cast_HeadVar2_4)));
    }
#line 1022 "rbmm.points_to_analysis.m"
    return transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1022 "rbmm.points_to_analysis.m"
  }
#line 1022 "rbmm.points_to_analysis.m"
}

#line 1049 "rbmm.points_to_analysis.m"
static MR_Word MR_CALL 
transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(
#line 1049 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
#line 1049 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_5)
#line 1049 "rbmm.points_to_analysis.m"
{
#line 1054 "rbmm.points_to_analysis.m"
  {
#line 1054 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1054 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Entry_6;
#line 1054 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Entry0_7;

#line 1052 "rbmm.points_to_analysis.m"
    {
#line 1052 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_5, transform_hlds__rbmm__points_to_analysis__InfoTable_4, &transform_hlds__rbmm__points_to_analysis__Entry0_7);
    }
#line 1054 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 1053 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__Entry_6 = transform_hlds__rbmm__points_to_analysis__Entry0_7;
#line 1054 "rbmm.points_to_analysis.m"
    else
#line 1057 "rbmm.points_to_analysis.m"
      {
#line 1057 "rbmm.points_to_analysis.m"
        {
#line 1057 "rbmm.points_to_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "function \140transform_hlds.rbmm.points_to_analysis.wrapped_init\'/2", (MR_String) "no rpta_info");
        }
#line 1057 "rbmm.points_to_analysis.m"
      }
#line 1054 "rbmm.points_to_analysis.m"
    return transform_hlds__rbmm__points_to_analysis__Entry_6;
#line 1054 "rbmm.points_to_analysis.m"
  }
#line 1049 "rbmm.points_to_analysis.m"
}

#line 971 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 971 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
#line 971 "rbmm.points_to_analysis.m"
{
#line 976 "rbmm.points_to_analysis.m"
  {
#line 976 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 0)));
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_16;
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Label_17;
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_18;
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29;
#line 976 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30;
#line 979 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 1)));
#line 980 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_15;
#line 983 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_19_19;

#line 980 "rbmm.points_to_analysis.m"
    {
#line 980 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__Edge_7, &transform_hlds__rbmm__points_to_analysis___CalleeNode_15, &transform_hlds__rbmm__points_to_analysis__CalleeM_16, &transform_hlds__rbmm__points_to_analysis__Label_17);
    }
#line 981 "rbmm.points_to_analysis.m"
    {
#line 981 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, transform_hlds__rbmm__points_to_analysis__CallerNode_10, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_18);
    }
#line 983 "rbmm.points_to_analysis.m"
    {
#line 983 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, &transform_hlds__rbmm__points_to_analysis__V_19_19);
    }
#line 987 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 986 "rbmm.points_to_analysis.m"
      {
#line 986 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28;
#line 986 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27;
#line 986 "rbmm.points_to_analysis.m"
      }
#line 987 "rbmm.points_to_analysis.m"
    else
#line 994 "rbmm.points_to_analysis.m"
      {
#line 990 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44;
#line 990 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20;
#line 990 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20;
#line 991 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__V_21_21;
#line 991 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_V_21_21;

#line 990 "rbmm.points_to_analysis.m"
        {
#line 990 "rbmm.points_to_analysis.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20);
        }
#line 990 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite0_20);
#line 1369 "transform_hlds.rbmm.points_to_analysis.c"
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 991 "rbmm.points_to_analysis.m"
        {
#line 991 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_44_44, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), &transform_hlds__rbmm__points_to_analysis__conv1_V_21_21);
        }
#line 991 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 991 "rbmm.points_to_analysis.m"
          {
#line 991 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_21_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_V_21_21);
#line 991 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 991 "rbmm.points_to_analysis.m"
          }
#line 994 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 993 "rbmm.points_to_analysis.m"
          {
#line 993 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28;
#line 993 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27;
#line 993 "rbmm.points_to_analysis.m"
          }
#line 994 "rbmm.points_to_analysis.m"
        else
#line 998 "rbmm.points_to_analysis.m"
          {
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48;
#line 998 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22;
#line 998 "rbmm.points_to_analysis.m"
            MR_String transform_hlds__rbmm__points_to_analysis__RegName_23;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerMContent_24;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_25;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26;
#line 998 "rbmm.points_to_analysis.m"
            MR_String transform_hlds__rbmm__points_to_analysis__V_32_32;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_33_33;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_34_34;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_35_35;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_36_36;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38;
#line 998 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41;
#line 1007 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41;

#line 998 "rbmm.points_to_analysis.m"
            {
#line 998 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22 = transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27);
            }
#line 999 "rbmm.points_to_analysis.m"
            {
#line 999 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_32_32 = mercury__string__int_to_string_1_f_0(transform_hlds__rbmm__points_to_analysis__CallerNextNodeId_22);
            }
#line 999 "rbmm.points_to_analysis.m"
            {
#line 999 "rbmm.points_to_analysis.m"
              mercury__string__append_3_p_2((MR_String) "R", transform_hlds__rbmm__points_to_analysis__V_32_32, &transform_hlds__rbmm__points_to_analysis__RegName_23);
            }
#line 1001 "rbmm.points_to_analysis.m"
            {
#line 1001 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_33_33 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0]);
            }
#line 1455 "transform_hlds.rbmm.points_to_analysis.c"
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 1001 "rbmm.points_to_analysis.m"
            {
#line 1001 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_34_34 = mercury__set__init_0_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46);
            }
#line 1002 "rbmm.points_to_analysis.m"
            {
#line 1002 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_35_35 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__CalleeM_16);
            }
#line 1003 "rbmm.points_to_analysis.m"
            {
#line 1003 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_36_36 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__CalleeM_16);
            }
#line 1001 "rbmm.points_to_analysis.m"
            {
#line 1001 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__CallerMContent_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_33_33));
#line 1001 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__RegName_23));
#line 1001 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_34_34));
#line 1001 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_35_35));
#line 1001 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerMContent_24, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_36_36));
#line 1001 "rbmm.points_to_analysis.m"
            }
#line 1004 "rbmm.points_to_analysis.m"
            {
#line 1004 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(transform_hlds__rbmm__points_to_analysis__CallerMContent_24, &transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_27, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37);
            }
#line 1005 "rbmm.points_to_analysis.m"
            {
#line 1005 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_37_37, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38);
            }
#line 1498 "transform_hlds.rbmm.points_to_analysis.c"
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 1500 "transform_hlds.rbmm.points_to_analysis.c"
            transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
#line 1007 "rbmm.points_to_analysis.m"
            {
#line 1007 "rbmm.points_to_analysis.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47, transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41);
            }
#line 1007 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_41);
#line 1008 "rbmm.points_to_analysis.m"
            {
#line 1008 "rbmm.points_to_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_46_46, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerM_25)), transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_41, &transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26);
            }
#line 1009 "rbmm.points_to_analysis.m"
            {
#line 1009 "rbmm.points_to_analysis.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_47_47, transform_hlds__rbmm__points_to_analysis__TypeInfo_48_48, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_26)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_28, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30);
            }
#line 1011 "rbmm.points_to_analysis.m"
            {
#line 1011 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__CallerM_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_38_38, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29);
            }
#line 998 "rbmm.points_to_analysis.m"
          }
#line 994 "rbmm.points_to_analysis.m"
      }
#line 976 "rbmm.points_to_analysis.m"
    {
#line 976 "rbmm.points_to_analysis.m"
      MR_Word base;
#line 976 "rbmm.points_to_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 976 "rbmm.points_to_analysis.m"
      *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = base;
#line 976 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_29));
#line 976 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_30));
#line 976 "rbmm.points_to_analysis.m"
    }
#line 976 "rbmm.points_to_analysis.m"
  }
#line 971 "rbmm.points_to_analysis.m"
}

#line 937 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_7,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_8,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_10,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 937 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
#line 937 "rbmm.points_to_analysis.m"
{
#line 942 "rbmm.points_to_analysis.m"
  {
#line 942 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 0)));
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_16;
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Label_17;
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_18;
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
#line 942 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24;
#line 945 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_9, (MR_Integer) 1)));
#line 946 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_15;
#line 949 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_19_19;

#line 946 "rbmm.points_to_analysis.m"
    {
#line 946 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_13, transform_hlds__rbmm__points_to_analysis__Edge_7, &transform_hlds__rbmm__points_to_analysis___CalleeNode_15, &transform_hlds__rbmm__points_to_analysis__CalleeM_16, &transform_hlds__rbmm__points_to_analysis__Label_17);
    }
#line 947 "rbmm.points_to_analysis.m"
    {
#line 947 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, transform_hlds__rbmm__points_to_analysis__CallerNode_10, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_18);
    }
#line 949 "rbmm.points_to_analysis.m"
    {
#line 949 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, &transform_hlds__rbmm__points_to_analysis__V_19_19);
    }
#line 953 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 953 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23;
#line 953 "rbmm.points_to_analysis.m"
    else
#line 966 "rbmm.points_to_analysis.m"
      {
#line 966 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_21;
#line 956 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29;
#line 956 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20;
#line 956 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20;
#line 957 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21;

#line 956 "rbmm.points_to_analysis.m"
        {
#line 956 "rbmm.points_to_analysis.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_8)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20);
        }
#line 956 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_20);
#line 1630 "transform_hlds.rbmm.points_to_analysis.c"
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 957 "rbmm.points_to_analysis.m"
        {
#line 957 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_16)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21);
        }
#line 957 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 957 "rbmm.points_to_analysis.m"
          {
#line 957 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CallerM_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerM_21);
#line 957 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 957 "rbmm.points_to_analysis.m"
          }
#line 966 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 961 "rbmm.points_to_analysis.m"
          {
#line 961 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerM_22;
#line 961 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25;

#line 961 "rbmm.points_to_analysis.m"
            {
#line 961 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, transform_hlds__rbmm__points_to_analysis__CallerM_21, &transform_hlds__rbmm__points_to_analysis__RealCallerM_22);
            }
#line 962 "rbmm.points_to_analysis.m"
            {
#line 962 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_18, transform_hlds__rbmm__points_to_analysis__RealCallerM_22, transform_hlds__rbmm__points_to_analysis__Label_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25);
            }
#line 965 "rbmm.points_to_analysis.m"
            {
#line 965 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_22, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_25, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24);
            }
#line 961 "rbmm.points_to_analysis.m"
          }
#line 966 "rbmm.points_to_analysis.m"
        else
#line 966 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_23;
#line 966 "rbmm.points_to_analysis.m"
      }
#line 942 "rbmm.points_to_analysis.m"
    {
#line 942 "rbmm.points_to_analysis.m"
      MR_Word base;
#line 942 "rbmm.points_to_analysis.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "rbmm.points_to_analysis.m"
      *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = base;
#line 942 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_24));
#line 942 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping_12));
#line 942 "rbmm.points_to_analysis.m"
    }
#line 942 "rbmm.points_to_analysis.m"
  }
#line 937 "rbmm.points_to_analysis.m"
}

#line 855 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_2,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_3,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5_5,
#line 855 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
#line 855 "rbmm.points_to_analysis.m"
{
#line 858 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 858 "rbmm.points_to_analysis.m"
    {
#line 858 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 858 "rbmm.points_to_analysis.m"
      {
#line 858 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 858 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = transform_hlds__rbmm__points_to_analysis__HeadVar__5_5;
#line 858 "rbmm.points_to_analysis.m"
        else
#line 860 "rbmm.points_to_analysis.m"
          {
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Edge_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Edges_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_35;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Label_36;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_37;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 0)));
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_58;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeM_61;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Label_62;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerNode_63;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__5_5, (MR_Integer) 1)));
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70;
#line 860 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71;
#line 876 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
#line 877 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_34;
#line 894 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerMPrime_38;
#line 894 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__RealCallerM_41;
#line 882 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46;
#line 882 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47;
#line 882 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48;
#line 882 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39;
#line 882 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_40;
#line 883 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39;
#line 884 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40;
#line 886 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_50_50;
#line 886 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_51_51;
#line 906 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_59_59;
#line 907 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis___CalleeNode_60;
#line 933 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerM_64;

#line 877 "rbmm.points_to_analysis.m"
            {
#line 877 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_32, transform_hlds__rbmm__points_to_analysis__Edge_13, &transform_hlds__rbmm__points_to_analysis___CalleeNode_34, &transform_hlds__rbmm__points_to_analysis__CalleeM_35, &transform_hlds__rbmm__points_to_analysis__Label_36);
            }
#line 879 "rbmm.points_to_analysis.m"
            {
#line 879 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, transform_hlds__rbmm__points_to_analysis__CallerNode_2, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_37);
            }
#line 881 "rbmm.points_to_analysis.m"
            {
#line 881 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_37, transform_hlds__rbmm__points_to_analysis__Label_36, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, &transform_hlds__rbmm__points_to_analysis__CallerMPrime_38);
            }
#line 882 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 882 "rbmm.points_to_analysis.m"
              {
#line 1822 "transform_hlds.rbmm.points_to_analysis.c"
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 1824 "transform_hlds.rbmm.points_to_analysis.c"
                transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
#line 883 "rbmm.points_to_analysis.m"
                {
#line 883 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_27_46, transform_hlds__rbmm__points_to_analysis__TypeInfo_28_47, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39);
                }
#line 883 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 883 "rbmm.points_to_analysis.m"
                  {
#line 883 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_39);
#line 883 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 883 "rbmm.points_to_analysis.m"
                  }
#line 882 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 882 "rbmm.points_to_analysis.m"
                  {
#line 1845 "transform_hlds.rbmm.points_to_analysis.c"
                    transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 884 "rbmm.points_to_analysis.m"
                    {
#line 884 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_29_48, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_39, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_35)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40);
                    }
#line 884 "rbmm.points_to_analysis.m"
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 884 "rbmm.points_to_analysis.m"
                      {
#line 884 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__CallerM_40 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerM_40);
#line 884 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 884 "rbmm.points_to_analysis.m"
                      }
#line 882 "rbmm.points_to_analysis.m"
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 882 "rbmm.points_to_analysis.m"
                      {
#line 885 "rbmm.points_to_analysis.m"
                        {
#line 885 "rbmm.points_to_analysis.m"
                          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, transform_hlds__rbmm__points_to_analysis__CallerM_40, &transform_hlds__rbmm__points_to_analysis__RealCallerM_41);
                        }
#line 886 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__V_50_50 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__CallerMPrime_38;
#line 886 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__V_51_51 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__RealCallerM_41;
#line 886 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__V_50_50 == transform_hlds__rbmm__points_to_analysis__V_51_51);
#line 886 "rbmm.points_to_analysis.m"
                        transform_hlds__rbmm__points_to_analysis__succeeded = !(transform_hlds__rbmm__points_to_analysis__succeeded);
#line 882 "rbmm.points_to_analysis.m"
                      }
#line 882 "rbmm.points_to_analysis.m"
                  }
#line 882 "rbmm.points_to_analysis.m"
              }
#line 894 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 890 "rbmm.points_to_analysis.m"
              {
#line 890 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44;

#line 890 "rbmm.points_to_analysis.m"
                {
#line 890 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_41, transform_hlds__rbmm__points_to_analysis__CallerMPrime_38, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44);
                }
#line 893 "rbmm.points_to_analysis.m"
                {
#line 893 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerM_41, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_25_44, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68);
                }
#line 890 "rbmm.points_to_analysis.m"
              }
#line 894 "rbmm.points_to_analysis.m"
            else
#line 894 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_42;
#line 906 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
#line 906 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
#line 907 "rbmm.points_to_analysis.m"
            {
#line 907 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_58, transform_hlds__rbmm__points_to_analysis__Edge_13, &transform_hlds__rbmm__points_to_analysis___CalleeNode_60, &transform_hlds__rbmm__points_to_analysis__CalleeM_61, &transform_hlds__rbmm__points_to_analysis__Label_62);
            }
#line 908 "rbmm.points_to_analysis.m"
            {
#line 908 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, transform_hlds__rbmm__points_to_analysis__CallerNode_2, &transform_hlds__rbmm__points_to_analysis__RealCallerNode_63);
            }
#line 910 "rbmm.points_to_analysis.m"
            {
#line 910 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(transform_hlds__rbmm__points_to_analysis__RealCallerNode_63, transform_hlds__rbmm__points_to_analysis__Label_62, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, &transform_hlds__rbmm__points_to_analysis__CallerM_64);
            }
#line 933 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 914 "rbmm.points_to_analysis.m"
              {
#line 914 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 914 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76 = (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2];
#line 914 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65;
#line 914 "rbmm.points_to_analysis.m"
                MR_Box transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65;
#line 916 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77;
#line 916 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__V_66_66;
#line 916 "rbmm.points_to_analysis.m"
                MR_Box transform_hlds__rbmm__points_to_analysis__conv3_V_66_66;

#line 914 "rbmm.points_to_analysis.m"
                {
#line 914 "rbmm.points_to_analysis.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75, transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), &transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65);
                }
#line 914 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_AlphaAtCallSite0_65);
#line 1953 "transform_hlds.rbmm.points_to_analysis.c"
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 916 "rbmm.points_to_analysis.m"
                {
#line 916 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_32_77, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_61)), &transform_hlds__rbmm__points_to_analysis__conv3_V_66_66);
                }
#line 916 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 916 "rbmm.points_to_analysis.m"
                  {
#line 916 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__V_66_66 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_V_66_66);
#line 916 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 916 "rbmm.points_to_analysis.m"
                  }
#line 920 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 919 "rbmm.points_to_analysis.m"
                  {
#line 919 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69;
#line 919 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
#line 919 "rbmm.points_to_analysis.m"
                  }
#line 920 "rbmm.points_to_analysis.m"
                else
#line 923 "rbmm.points_to_analysis.m"
                  {
#line 923 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 923 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67;

#line 923 "rbmm.points_to_analysis.m"
                    {
#line 923 "rbmm.points_to_analysis.m"
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_33_78, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeM_61)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerM_64)), transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite0_65, &transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67);
                    }
#line 924 "rbmm.points_to_analysis.m"
                    {
#line 924 "rbmm.points_to_analysis.m"
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_30_75, transform_hlds__rbmm__points_to_analysis__TypeInfo_31_76, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_3)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite1_67)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71);
                    }
#line 928 "rbmm.points_to_analysis.m"
                    {
#line 928 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_58, transform_hlds__rbmm__points_to_analysis__CalleeM_61);
                    }
#line 930 "rbmm.points_to_analysis.m"
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 929 "rbmm.points_to_analysis.m"
                      {
#line 929 "rbmm.points_to_analysis.m"
                        {
#line 929 "rbmm.points_to_analysis.m"
                          transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(transform_hlds__rbmm__points_to_analysis__CallerM_64, (MR_Integer) 1, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70);
                        }
#line 929 "rbmm.points_to_analysis.m"
                      }
#line 930 "rbmm.points_to_analysis.m"
                    else
#line 930 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
#line 923 "rbmm.points_to_analysis.m"
                  }
#line 914 "rbmm.points_to_analysis.m"
              }
#line 933 "rbmm.points_to_analysis.m"
            else
#line 934 "rbmm.points_to_analysis.m"
              {
#line 934 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_0_69;
#line 934 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_68;
#line 934 "rbmm.points_to_analysis.m"
              }
#line 903 "rbmm.points_to_analysis.m"
            {
#line 903 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_70));
#line 903 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerAlphaMapping_71));
#line 903 "rbmm.points_to_analysis.m"
            }
#line 863 "rbmm.points_to_analysis.m"
            {
#line 863 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_7_6_p_0(transform_hlds__rbmm__points_to_analysis__Edge_13, transform_hlds__rbmm__points_to_analysis__CallSite_3, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__CallerNode_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_22_22, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23);
            }
#line 864 "rbmm.points_to_analysis.m"
            {
#line 864 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_8_6_p_0(transform_hlds__rbmm__points_to_analysis__Edge_13, transform_hlds__rbmm__points_to_analysis__CallSite_3, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__CallerNode_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_23_23, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24);
            }
#line 865 "rbmm.points_to_analysis.m"
            /* direct tailcall eliminated */
#line 865 "rbmm.points_to_analysis.m"
            {
#line 865 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_analysis__Edges_14;
#line 865 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__5__tmp_copy_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_24_24;

#line 865 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = transform_hlds__rbmm__points_to_analysis__HeadVar__5__tmp_copy_5;
#line 865 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1;
#line 865 "rbmm.points_to_analysis.m"
            }
#line 865 "rbmm.points_to_analysis.m"
            continue;
#line 860 "rbmm.points_to_analysis.m"
          }
#line 858 "rbmm.points_to_analysis.m"
      }
#line 858 "rbmm.points_to_analysis.m"
      break;
#line 858 "rbmm.points_to_analysis.m"
    }
#line 855 "rbmm.points_to_analysis.m"
}

#line 818 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_2,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Processed_3,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5,
#line 818 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6)
#line 818 "rbmm.points_to_analysis.m"
{
#line 822 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 822 "rbmm.points_to_analysis.m"
    {
#line 822 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 822 "rbmm.points_to_analysis.m"
      {
#line 822 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 822 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5;
#line 822 "rbmm.points_to_analysis.m"
        else
#line 824 "rbmm.points_to_analysis.m"
          {
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, (MR_Integer) 1)));
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CallerNode_22;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_23;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__SsList_26;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodes_28;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_32_32;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_44;
#line 824 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46;
#line 826 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, (MR_Integer) 0)));
#line 827 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21;
#line 828 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22;
#line 848 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_45_45;
#line 835 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_24_24;

#line 827 "rbmm.points_to_analysis.m"
            {
#line 827 "rbmm.points_to_analysis.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], transform_hlds__rbmm__points_to_analysis__CallerAlphaMapping0_20, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_2)), &transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21);
            }
#line 827 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_AlphaAtCallSite_21);
#line 2165 "transform_hlds.rbmm.points_to_analysis.c"
            transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 828 "rbmm.points_to_analysis.m"
            {
#line 828 "rbmm.points_to_analysis.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__AlphaAtCallSite_21, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeNode_13)), &transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22);
            }
#line 828 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CallerNode_22 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_CallerNode_22);
#line 848 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
#line 848 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
#line 851 "rbmm.points_to_analysis.m"
            {
#line 851 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_44, transform_hlds__rbmm__points_to_analysis__CalleeNode_13);
            }
#line 852 "rbmm.points_to_analysis.m"
            {
#line 852 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__apply_rules_outedges_6_p_0(transform_hlds__rbmm__points_to_analysis__CalleeNodeOutEdges_46, transform_hlds__rbmm__points_to_analysis__CallerNode_22, transform_hlds__rbmm__points_to_analysis__CallSite_2, transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31);
            }
#line 835 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CalleeGraph_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 0)));
#line 835 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_4, (MR_Integer) 1)));
#line 836 "rbmm.points_to_analysis.m"
            {
#line 836 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25 = transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_23, transform_hlds__rbmm__points_to_analysis__CalleeNode_13);
            }
#line 837 "rbmm.points_to_analysis.m"
            {
#line 837 "rbmm.points_to_analysis.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__SuccessorsCalleeNode_25, &transform_hlds__rbmm__points_to_analysis__SsList_26);
            }
#line 838 "rbmm.points_to_analysis.m"
            {
#line 838 "rbmm.points_to_analysis.m"
              mercury__list__delete_elems_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__SsList_26, transform_hlds__rbmm__points_to_analysis__Processed_3, &transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27);
            }
#line 839 "rbmm.points_to_analysis.m"
            {
#line 839 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__CalleeNodes_28 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_analysis__ToBeProcessed_27, transform_hlds__rbmm__points_to_analysis__CalleeNodes0_14);
            }
#line 840 "rbmm.points_to_analysis.m"
            {
#line 840 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__V_32_32, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CalleeNode_13));
#line 840 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__V_32_32, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Processed_3));
#line 840 "rbmm.points_to_analysis.m"
            }
#line 840 "rbmm.points_to_analysis.m"
            /* direct tailcall eliminated */
#line 840 "rbmm.points_to_analysis.m"
            {
#line 840 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_analysis__CalleeNodes_28;
#line 840 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Processed__tmp_copy_3 = transform_hlds__rbmm__points_to_analysis__V_32_32;
#line 840 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0__tmp_copy_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_31_31;

#line 840 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerRptaInfo_0__tmp_copy_5;
#line 840 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__Processed_3 = transform_hlds__rbmm__points_to_analysis__Processed__tmp_copy_3;
#line 840 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1;
#line 840 "rbmm.points_to_analysis.m"
            }
#line 840 "rbmm.points_to_analysis.m"
            continue;
#line 824 "rbmm.points_to_analysis.m"
          }
#line 822 "rbmm.points_to_analysis.m"
      }
#line 822 "rbmm.points_to_analysis.m"
      break;
#line 822 "rbmm.points_to_analysis.m"
    }
#line 818 "rbmm.points_to_analysis.m"
}

#line 765 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_3,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6,
#line 765 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7)
#line 765 "rbmm.points_to_analysis.m"
{
#line 769 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 769 "rbmm.points_to_analysis.m"
    {
#line 769 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 769 "rbmm.points_to_analysis.m"
      {
#line 769 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 769 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "rbmm.points_to_analysis.m"
          if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "rbmm.points_to_analysis.m"
            {
#line 769 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_7 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6;
#line 769 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
#line 769 "rbmm.points_to_analysis.m"
            }
#line 769 "rbmm.points_to_analysis.m"
          else
#line 770 "rbmm.points_to_analysis.m"
            {
#line 771 "rbmm.points_to_analysis.m"
              {
#line 771 "rbmm.points_to_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
#line 771 "rbmm.points_to_analysis.m"
                return;
              }
#line 770 "rbmm.points_to_analysis.m"
            }
#line 769 "rbmm.points_to_analysis.m"
        else
#line 769 "rbmm.points_to_analysis.m"
          {
#line 769 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));

#line 769 "rbmm.points_to_analysis.m"
            if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "rbmm.points_to_analysis.m"
              {
#line 773 "rbmm.points_to_analysis.m"
                {
#line 773 "rbmm.points_to_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.alpha_mapping_at_call_site\'/7", (MR_String) "mismatched lists");
#line 773 "rbmm.points_to_analysis.m"
                  return;
                }
#line 772 "rbmm.points_to_analysis.m"
              }
#line 769 "rbmm.points_to_analysis.m"
            else
#line 775 "rbmm.points_to_analysis.m"
              {
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__Yi_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__Ys_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Xi_42;
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Yi_43;
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50;
#line 775 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51;
#line 791 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__N_Y_44;
#line 779 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56;
#line 779 "rbmm.points_to_analysis.m"
                MR_Box transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44;

#line 777 "rbmm.points_to_analysis.m"
                {
#line 777 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_3, transform_hlds__rbmm__points_to_analysis__V_59_59, &transform_hlds__rbmm__points_to_analysis__N_Xi_42);
                }
#line 778 "rbmm.points_to_analysis.m"
                {
#line 778 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, transform_hlds__rbmm__points_to_analysis__Yi_37, &transform_hlds__rbmm__points_to_analysis__N_Yi_43);
                }
#line 2364 "transform_hlds.rbmm.points_to_analysis.c"
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 779 "rbmm.points_to_analysis.m"
                {
#line 779 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_56_56, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Xi_42)), &transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44);
                }
#line 779 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 779 "rbmm.points_to_analysis.m"
                  {
#line 779 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__N_Y_44 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_N_Y_44);
#line 779 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 779 "rbmm.points_to_analysis.m"
                  }
#line 791 "rbmm.points_to_analysis.m"
                if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 784 "rbmm.points_to_analysis.m"
                  {
#line 782 "rbmm.points_to_analysis.m"
                    MR_Integer transform_hlds__rbmm__points_to_analysis__V_61_61 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__N_Y_44;
#line 782 "rbmm.points_to_analysis.m"
                    MR_Integer transform_hlds__rbmm__points_to_analysis__V_62_62 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__N_Yi_43;

#line 782 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__V_61_61 == transform_hlds__rbmm__points_to_analysis__V_62_62);
#line 784 "rbmm.points_to_analysis.m"
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 784 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
#line 784 "rbmm.points_to_analysis.m"
                    else
#line 786 "rbmm.points_to_analysis.m"
                      {
#line 786 "rbmm.points_to_analysis.m"
                        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49;

#line 786 "rbmm.points_to_analysis.m"
                        {
#line 786 "rbmm.points_to_analysis.m"
                          transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__N_Y_44, transform_hlds__rbmm__points_to_analysis__N_Yi_43, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49);
                        }
#line 789 "rbmm.points_to_analysis.m"
                        {
#line 789 "rbmm.points_to_analysis.m"
                          transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__N_Y_44, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_49_49, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50);
                        }
#line 786 "rbmm.points_to_analysis.m"
                      }
#line 784 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6;
#line 784 "rbmm.points_to_analysis.m"
                  }
#line 791 "rbmm.points_to_analysis.m"
                else
#line 792 "rbmm.points_to_analysis.m"
                  {
#line 792 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 792 "rbmm.points_to_analysis.m"
                    {
#line 792 "rbmm.points_to_analysis.m"
                      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_57_57, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Xi_42)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__N_Yi_43)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51);
                    }
#line 796 "rbmm.points_to_analysis.m"
                    {
#line 796 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeGraph_3, transform_hlds__rbmm__points_to_analysis__N_Xi_42);
                    }
#line 798 "rbmm.points_to_analysis.m"
                    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 797 "rbmm.points_to_analysis.m"
                      {
#line 797 "rbmm.points_to_analysis.m"
                        {
#line 797 "rbmm.points_to_analysis.m"
                          transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(transform_hlds__rbmm__points_to_analysis__N_Yi_43, (MR_Integer) 1, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50);
                        }
#line 797 "rbmm.points_to_analysis.m"
                      }
#line 798 "rbmm.points_to_analysis.m"
                    else
#line 798 "rbmm.points_to_analysis.m"
                      transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4;
#line 792 "rbmm.points_to_analysis.m"
                  }
#line 802 "rbmm.points_to_analysis.m"
                /* direct tailcall eliminated */
#line 802 "rbmm.points_to_analysis.m"
                {
#line 802 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_analysis__V_58_58;
#line 802 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_analysis__Ys_38;
#line 802 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0__tmp_copy_4 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_50_50;
#line 802 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0__tmp_copy_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_51_51;

#line 802 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_AlphaMap_0__tmp_copy_6;
#line 802 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0_4 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_CallerGraph_0__tmp_copy_4;
#line 802 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2;
#line 802 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1;
#line 802 "rbmm.points_to_analysis.m"
                }
#line 802 "rbmm.points_to_analysis.m"
                continue;
#line 775 "rbmm.points_to_analysis.m"
              }
#line 769 "rbmm.points_to_analysis.m"
          }
#line 769 "rbmm.points_to_analysis.m"
      }
#line 769 "rbmm.points_to_analysis.m"
      break;
#line 769 "rbmm.points_to_analysis.m"
    }
#line 765 "rbmm.points_to_analysis.m"
}

#line 750 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1(
#line 750 "rbmm.points_to_analysis.m"
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg)
#line 750 "rbmm.points_to_analysis.m"
{
#line 750 "rbmm.points_to_analysis.m"
  {
#line 750 "rbmm.points_to_analysis.m"
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_analysis__env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_analysis__env_ptr_arg;

#line 750 "rbmm.points_to_analysis.m"
    MR_builtin_longjmp((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0, 1);
#line 750 "rbmm.points_to_analysis.m"
  }
#line 750 "rbmm.points_to_analysis.m"
}

#line 750 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(
#line 750 "rbmm.points_to_analysis.m"
  void * transform_hlds__rbmm__points_to_analysis__env_ptr_arg)
#line 750 "rbmm.points_to_analysis.m"
{
#line 750 "rbmm.points_to_analysis.m"
  {
#line 750 "rbmm.points_to_analysis.m"
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_analysis__env_ptr = (struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_analysis__env_ptr_arg;

#line 750 "rbmm.points_to_analysis.m"
    if (MR_builtin_setjmp((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__commit_0) == 0)
#line 750 "rbmm.points_to_analysis.m"
      {
#line 750 "rbmm.points_to_analysis.m"
        {
#line 750 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_25_25;

#line 750 "rbmm.points_to_analysis.m"
          {
#line 750 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0((transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, &transform_hlds__rbmm__points_to_analysis__V_25_25, transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_1, transform_hlds__rbmm__points_to_analysis__env_ptr);
          }
#line 750 "rbmm.points_to_analysis.m"
        }
#line 750 "rbmm.points_to_analysis.m"
        (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_FALSE;
#line 750 "rbmm.points_to_analysis.m"
      }
#line 750 "rbmm.points_to_analysis.m"
    else
#line 750 "rbmm.points_to_analysis.m"
      (transform_hlds__rbmm__points_to_analysis__env_ptr)->transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 750 "rbmm.points_to_analysis.m"
  }
#line 750 "rbmm.points_to_analysis.m"
}

#line 728 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__NY_2,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4,
#line 728 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__5_5)
#line 728 "rbmm.points_to_analysis.m"
{
#line 728 "rbmm.points_to_analysis.m"
  {
#line 728 "rbmm.points_to_analysis.m"
    struct transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0_s transform_hlds__rbmm__points_to_analysis__env;

#line 728 "rbmm.points_to_analysis.m"
    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2 = transform_hlds__rbmm__points_to_analysis__NY_2;
#line 728 "rbmm.points_to_analysis.m"
    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_3;
#line 731 "rbmm.points_to_analysis.m"
    while (MR_TRUE)
#line 731 "rbmm.points_to_analysis.m"
      {
#line 731 "rbmm.points_to_analysis.m"
        /* tailcall optimized into a loop */
#line 731 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "rbmm.points_to_analysis.m"
          {
#line 731 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = (MR_Integer) 0;
#line 731 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4 = (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3;
#line 731 "rbmm.points_to_analysis.m"
          }
#line 731 "rbmm.points_to_analysis.m"
        else
#line 732 "rbmm.points_to_analysis.m"
          {
#line 732 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__NZs_11;
#line 741 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__NZ1_15;
#line 749 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__NZType_26;
#line 755 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_28_28;
#line 755 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_29_29;

#line 732 "rbmm.points_to_analysis.m"
            (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 732 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__NZs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "rbmm.points_to_analysis.m"
            {
#line 750 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_2(&transform_hlds__rbmm__points_to_analysis__env);
            }
#line 749 "rbmm.points_to_analysis.m"
            if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
#line 749 "rbmm.points_to_analysis.m"
              {
#line 751 "rbmm.points_to_analysis.m"
                {
#line 751 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__NZType_26 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10);
                }
#line 754 "rbmm.points_to_analysis.m"
                {
#line 754 "rbmm.points_to_analysis.m"
                  (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NY_2, transform_hlds__rbmm__points_to_analysis__NZType_26, &transform_hlds__rbmm__points_to_analysis__NZ1_15);
                }
#line 749 "rbmm.points_to_analysis.m"
                if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
#line 749 "rbmm.points_to_analysis.m"
                  {
#line 755 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__V_28_28 = (MR_Integer) (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10;
#line 755 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__V_29_29 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__NZ1_15;
#line 755 "rbmm.points_to_analysis.m"
                    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_analysis__V_28_28 == transform_hlds__rbmm__points_to_analysis__V_29_29);
#line 755 "rbmm.points_to_analysis.m"
                    (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded);
#line 749 "rbmm.points_to_analysis.m"
                  }
#line 749 "rbmm.points_to_analysis.m"
              }
#line 741 "rbmm.points_to_analysis.m"
            if ((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__succeeded)
#line 736 "rbmm.points_to_analysis.m"
              {
#line 736 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18;

#line 736 "rbmm.points_to_analysis.m"
                {
#line 736 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, transform_hlds__rbmm__points_to_analysis__NZ1_15, (transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18);
                }
#line 739 "rbmm.points_to_analysis.m"
                {
#line 739 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0((transform_hlds__rbmm__points_to_analysis__env).transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0_env_0__NZ_10, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_18_18, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_4);
                }
#line 740 "rbmm.points_to_analysis.m"
                *transform_hlds__rbmm__points_to_analysis__HeadVar__5_5 = (MR_Integer) 1;
#line 736 "rbmm.points_to_analysis.m"
              }
#line 741 "rbmm.points_to_analysis.m"
            else
#line 743 "rbmm.points_to_analysis.m"
              {
#line 743 "rbmm.points_to_analysis.m"
                /* direct tailcall eliminated */
#line 743 "rbmm.points_to_analysis.m"
                {
#line 743 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_analysis__NZs_11;

#line 743 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__HeadVar__1_1 = transform_hlds__rbmm__points_to_analysis__HeadVar__1__tmp_copy_1;
#line 743 "rbmm.points_to_analysis.m"
                }
#line 743 "rbmm.points_to_analysis.m"
                continue;
#line 743 "rbmm.points_to_analysis.m"
              }
#line 732 "rbmm.points_to_analysis.m"
          }
#line 731 "rbmm.points_to_analysis.m"
        break;
#line 731 "rbmm.points_to_analysis.m"
      }
#line 728 "rbmm.points_to_analysis.m"
  }
#line 728 "rbmm.points_to_analysis.m"
}

#line 685 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(
#line 685 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
#line 685 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12,
#line 685 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13)
#line 685 "rbmm.points_to_analysis.m"
{
#line 687 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 687 "rbmm.points_to_analysis.m"
    {
#line 687 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 687 "rbmm.points_to_analysis.m"
      {
#line 687 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 687 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__NodeMap_6;
#line 687 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__Nodes_7;

#line 688 "rbmm.points_to_analysis.m"
        {
#line 688 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__NodeMap_6 = transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12);
        }
#line 689 "rbmm.points_to_analysis.m"
        {
#line 689 "rbmm.points_to_analysis.m"
          mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_analysis__NodeMap_6, &transform_hlds__rbmm__points_to_analysis__Nodes_7);
        }
#line 714 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__Nodes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "rbmm.points_to_analysis.m"
          {
#line 717 "rbmm.points_to_analysis.m"
            {
#line 717 "rbmm.points_to_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.rule_3\'/3", (MR_String) "impossible having no node in graph");
#line 717 "rbmm.points_to_analysis.m"
              return;
            }
#line 715 "rbmm.points_to_analysis.m"
          }
#line 714 "rbmm.points_to_analysis.m"
        else
#line 691 "rbmm.points_to_analysis.m"
          {
#line 691 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__NY_10;
#line 691 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Happened_11;
#line 691 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;

#line 695 "rbmm.points_to_analysis.m"
            {
#line 695 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12, transform_hlds__rbmm__points_to_analysis__Node_4, &transform_hlds__rbmm__points_to_analysis__NY_10);
            }
#line 696 "rbmm.points_to_analysis.m"
            {
#line 696 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__rule_3_2_5_p_0(transform_hlds__rbmm__points_to_analysis__Nodes_7, transform_hlds__rbmm__points_to_analysis__NY_10, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17, &transform_hlds__rbmm__points_to_analysis__Happened_11);
            }
#line 709 "rbmm.points_to_analysis.m"
#line 709 "rbmm.points_to_analysis.m"
            switch (transform_hlds__rbmm__points_to_analysis__Happened_11) {
#line 709 "rbmm.points_to_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 709 "rbmm.points_to_analysis.m"
              case (MR_Integer) 0:
#line 712 "rbmm.points_to_analysis.m"
                *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_13 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;
#line 709 "rbmm.points_to_analysis.m"
                break;
#line 709 "rbmm.points_to_analysis.m"
              case (MR_Integer) 1:
#line 708 "rbmm.points_to_analysis.m"
                {
#line 708 "rbmm.points_to_analysis.m"
                  /* direct tailcall eliminated */
#line 708 "rbmm.points_to_analysis.m"
                  {
#line 708 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0__tmp_copy_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_17_17;

#line 708 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0__tmp_copy_12;
#line 708 "rbmm.points_to_analysis.m"
                  }
#line 708 "rbmm.points_to_analysis.m"
                  continue;
#line 708 "rbmm.points_to_analysis.m"
                }
#line 709 "rbmm.points_to_analysis.m"
                break;
#line 709 "rbmm.points_to_analysis.m"
            }
#line 691 "rbmm.points_to_analysis.m"
          }
#line 687 "rbmm.points_to_analysis.m"
      }
#line 687 "rbmm.points_to_analysis.m"
      break;
#line 687 "rbmm.points_to_analysis.m"
    }
#line 685 "rbmm.points_to_analysis.m"
}

#line 650 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Sel_1,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__M_2,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
#line 650 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5)
#line 650 "rbmm.points_to_analysis.m"
{
#line 653 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 653 "rbmm.points_to_analysis.m"
    {
#line 653 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 653 "rbmm.points_to_analysis.m"
      {
#line 653 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 653 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4;
#line 653 "rbmm.points_to_analysis.m"
        else
#line 654 "rbmm.points_to_analysis.m"
          {
#line 654 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Ed_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 654 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Eds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 654 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__MPrime_17;
#line 654 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__EdgeContent_18;
#line 655 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_16_16;
#line 657 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Selector_19;
#line 659 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_27_27;
#line 659 "rbmm.points_to_analysis.m"
            MR_Integer transform_hlds__rbmm__points_to_analysis__V_28_28;

#line 655 "rbmm.points_to_analysis.m"
            {
#line 655 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Ed_13, &transform_hlds__rbmm__points_to_analysis__V_16_16, &transform_hlds__rbmm__points_to_analysis__MPrime_17, &transform_hlds__rbmm__points_to_analysis__EdgeContent_18);
            }
#line 657 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__Selector_19 = (MR_Word) transform_hlds__rbmm__points_to_analysis__EdgeContent_18;
#line 658 "rbmm.points_to_analysis.m"
            {
#line 658 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Selector_19)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__Sel_1)));
            }
#line 657 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 657 "rbmm.points_to_analysis.m"
              {
#line 659 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_27_27 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__MPrime_17;
#line 659 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_28_28 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__M_2;
#line 659 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__V_27_27 == transform_hlds__rbmm__points_to_analysis__V_28_28);
#line 659 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__succeeded = !(transform_hlds__rbmm__points_to_analysis__succeeded);
#line 657 "rbmm.points_to_analysis.m"
              }
#line 663 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 661 "rbmm.points_to_analysis.m"
              {
#line 661 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22;

#line 661 "rbmm.points_to_analysis.m"
                {
#line 661 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__M_2, transform_hlds__rbmm__points_to_analysis__MPrime_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22);
                }
#line 662 "rbmm.points_to_analysis.m"
                {
#line 662 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__M_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_22_22, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);
#line 662 "rbmm.points_to_analysis.m"
                  return;
                }
#line 661 "rbmm.points_to_analysis.m"
              }
#line 663 "rbmm.points_to_analysis.m"
            else
#line 665 "rbmm.points_to_analysis.m"
              {
#line 665 "rbmm.points_to_analysis.m"
                /* direct tailcall eliminated */
#line 665 "rbmm.points_to_analysis.m"
                {
#line 665 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3__tmp_copy_3 = transform_hlds__rbmm__points_to_analysis__Eds_14;

#line 665 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__3__tmp_copy_3;
#line 665 "rbmm.points_to_analysis.m"
                }
#line 665 "rbmm.points_to_analysis.m"
                continue;
#line 665 "rbmm.points_to_analysis.m"
              }
#line 654 "rbmm.points_to_analysis.m"
          }
#line 653 "rbmm.points_to_analysis.m"
      }
#line 653 "rbmm.points_to_analysis.m"
      break;
#line 653 "rbmm.points_to_analysis.m"
    }
#line 650 "rbmm.points_to_analysis.m"
}

#line 588 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Edge_1,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3_3,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5,
#line 588 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__6_6)
#line 588 "rbmm.points_to_analysis.m"
{
#line 595 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 595 "rbmm.points_to_analysis.m"
    {
#line 595 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 595 "rbmm.points_to_analysis.m"
      {
#line 595 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 595 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "rbmm.points_to_analysis.m"
          if ((transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "rbmm.points_to_analysis.m"
            {
#line 595 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = (MR_Integer) 0;
#line 595 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4;
#line 595 "rbmm.points_to_analysis.m"
            }
#line 595 "rbmm.points_to_analysis.m"
          else
#line 600 "rbmm.points_to_analysis.m"
            {
#line 600 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 600 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Es_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__3_3, (MR_Integer) 1)));

#line 601 "rbmm.points_to_analysis.m"
              /* direct tailcall eliminated */
#line 601 "rbmm.points_to_analysis.m"
              {
#line 601 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__Edge__tmp_copy_1 = transform_hlds__rbmm__points_to_analysis__E_12;
#line 601 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_analysis__Es_13;
#line 601 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__3__tmp_copy_3 = transform_hlds__rbmm__points_to_analysis__Es_13;

#line 601 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__3__tmp_copy_3;
#line 601 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2;
#line 601 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__Edge_1 = transform_hlds__rbmm__points_to_analysis__Edge__tmp_copy_1;
#line 601 "rbmm.points_to_analysis.m"
              }
#line 601 "rbmm.points_to_analysis.m"
              continue;
#line 600 "rbmm.points_to_analysis.m"
            }
#line 595 "rbmm.points_to_analysis.m"
        else
#line 604 "rbmm.points_to_analysis.m"
          {
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Ed_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Eds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__End_27;
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__EdgeContent_28;
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__E_30;
#line 604 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__EdC_31;
#line 608 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis___Start_26;
#line 609 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis___S_29;

#line 608 "rbmm.points_to_analysis.m"
            {
#line 608 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Edge_1, &transform_hlds__rbmm__points_to_analysis___Start_26, &transform_hlds__rbmm__points_to_analysis__End_27, &transform_hlds__rbmm__points_to_analysis__EdgeContent_28);
            }
#line 609 "rbmm.points_to_analysis.m"
            {
#line 609 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, transform_hlds__rbmm__points_to_analysis__Ed_21, &transform_hlds__rbmm__points_to_analysis___S_29, &transform_hlds__rbmm__points_to_analysis__E_30, &transform_hlds__rbmm__points_to_analysis__EdC_31);
            }
#line 611 "rbmm.points_to_analysis.m"
            {
#line 611 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_analysis__EdgeContent_28, transform_hlds__rbmm__points_to_analysis__EdC_31);
            }
#line 619 "rbmm.points_to_analysis.m"
            if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 614 "rbmm.points_to_analysis.m"
              {
#line 614 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__Graph1_32;

#line 614 "rbmm.points_to_analysis.m"
                {
#line 614 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__End_27, transform_hlds__rbmm__points_to_analysis__E_30, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_4, &transform_hlds__rbmm__points_to_analysis__Graph1_32);
                }
#line 617 "rbmm.points_to_analysis.m"
                {
#line 617 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__End_27, transform_hlds__rbmm__points_to_analysis__Graph1_32, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_5);
                }
#line 618 "rbmm.points_to_analysis.m"
                *transform_hlds__rbmm__points_to_analysis__HeadVar__6_6 = (MR_Integer) 1;
#line 614 "rbmm.points_to_analysis.m"
              }
#line 619 "rbmm.points_to_analysis.m"
            else
#line 622 "rbmm.points_to_analysis.m"
              {
#line 622 "rbmm.points_to_analysis.m"
                /* direct tailcall eliminated */
#line 622 "rbmm.points_to_analysis.m"
                {
#line 622 "rbmm.points_to_analysis.m"
                  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_analysis__Eds_22;

#line 622 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__HeadVar__2_2 = transform_hlds__rbmm__points_to_analysis__HeadVar__2__tmp_copy_2;
#line 622 "rbmm.points_to_analysis.m"
                }
#line 622 "rbmm.points_to_analysis.m"
                continue;
#line 622 "rbmm.points_to_analysis.m"
              }
#line 604 "rbmm.points_to_analysis.m"
          }
#line 595 "rbmm.points_to_analysis.m"
      }
#line 595 "rbmm.points_to_analysis.m"
      break;
#line 595 "rbmm.points_to_analysis.m"
    }
#line 588 "rbmm.points_to_analysis.m"
}

#line 551 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(
#line 551 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Node_4,
#line 551 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11,
#line 551 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12)
#line 551 "rbmm.points_to_analysis.m"
{
#line 553 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 553 "rbmm.points_to_analysis.m"
    {
#line 553 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 553 "rbmm.points_to_analysis.m"
      {
#line 553 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 553 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__UnifiedNode_6;
#line 553 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7;

#line 555 "rbmm.points_to_analysis.m"
        {
#line 555 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, transform_hlds__rbmm__points_to_analysis__Node_4, &transform_hlds__rbmm__points_to_analysis__UnifiedNode_6);
        }
#line 557 "rbmm.points_to_analysis.m"
        {
#line 557 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, transform_hlds__rbmm__points_to_analysis__UnifiedNode_6);
        }
#line 571 "rbmm.points_to_analysis.m"
        if ((transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11;
#line 571 "rbmm.points_to_analysis.m"
        else
#line 559 "rbmm.points_to_analysis.m"
          {
#line 559 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7, (MR_Integer) 0)));
#line 559 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Es_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__OutEdgesOfUnifiedNode_7, (MR_Integer) 1)));
#line 559 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__Happened_10;
#line 559 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;

#line 560 "rbmm.points_to_analysis.m"
            {
#line 560 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edges_6_p_0(transform_hlds__rbmm__points_to_analysis__E_8, transform_hlds__rbmm__points_to_analysis__Es_9, transform_hlds__rbmm__points_to_analysis__Es_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14, &transform_hlds__rbmm__points_to_analysis__Happened_10);
            }
#line 564 "rbmm.points_to_analysis.m"
#line 564 "rbmm.points_to_analysis.m"
            switch (transform_hlds__rbmm__points_to_analysis__Happened_10) {
#line 564 "rbmm.points_to_analysis.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 564 "rbmm.points_to_analysis.m"
              case (MR_Integer) 0:
#line 563 "rbmm.points_to_analysis.m"
                *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_12 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;
#line 564 "rbmm.points_to_analysis.m"
                break;
#line 564 "rbmm.points_to_analysis.m"
              case (MR_Integer) 1:
#line 569 "rbmm.points_to_analysis.m"
                {
#line 569 "rbmm.points_to_analysis.m"
                  /* direct tailcall eliminated */
#line 569 "rbmm.points_to_analysis.m"
                  {
#line 569 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__Node__tmp_copy_4 = transform_hlds__rbmm__points_to_analysis__UnifiedNode_6;
#line 569 "rbmm.points_to_analysis.m"
                    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0__tmp_copy_11 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_14_14;

#line 569 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_11 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0__tmp_copy_11;
#line 569 "rbmm.points_to_analysis.m"
                    transform_hlds__rbmm__points_to_analysis__Node_4 = transform_hlds__rbmm__points_to_analysis__Node__tmp_copy_4;
#line 569 "rbmm.points_to_analysis.m"
                  }
#line 569 "rbmm.points_to_analysis.m"
                  continue;
#line 569 "rbmm.points_to_analysis.m"
                }
#line 564 "rbmm.points_to_analysis.m"
                break;
#line 564 "rbmm.points_to_analysis.m"
            }
#line 559 "rbmm.points_to_analysis.m"
          }
#line 553 "rbmm.points_to_analysis.m"
      }
#line 553 "rbmm.points_to_analysis.m"
      break;
#line 553 "rbmm.points_to_analysis.m"
    }
#line 551 "rbmm.points_to_analysis.m"
}

#line 522 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_5,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_6,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
#line 522 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10)
#line 522 "rbmm.points_to_analysis.m"
{
#line 525 "rbmm.points_to_analysis.m"
  {
#line 525 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 525 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo_8;
#line 526 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8;

#line 526 "rbmm.points_to_analysis.m"
    {
#line 526 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_6)), transform_hlds__rbmm__points_to_analysis__FPTable_5);
    }
#line 526 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__RptaInfo_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo_8);
#line 527 "rbmm.points_to_analysis.m"
    {
#line 527 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(transform_hlds__rbmm__points_to_analysis__PPId_6, transform_hlds__rbmm__points_to_analysis__RptaInfo_8, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);
#line 527 "rbmm.points_to_analysis.m"
      return;
    }
#line 525 "rbmm.points_to_analysis.m"
  }
#line 522 "rbmm.points_to_analysis.m"
}

#line 496 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_7,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_8,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__RptaInfo_10,
#line 496 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__Init_11)
#line 496 "rbmm.points_to_analysis.m"
{
#line 508 "rbmm.points_to_analysis.m"
  {
#line 508 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 508 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
#line 508 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__FPtable1_13;
#line 503 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12;

#line 503 "rbmm.points_to_analysis.m"
    {
#line 503 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_7)), &transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14, &transform_hlds__rbmm__points_to_analysis__FPtable1_13);
    }
#line 503 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 503 "rbmm.points_to_analysis.m"
      {
#line 503 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__RptaInfo0_12 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_12);
#line 503 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 503 "rbmm.points_to_analysis.m"
      }
#line 508 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 505 "rbmm.points_to_analysis.m"
      {
#line 505 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
#line 506 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15 = transform_hlds__rbmm__points_to_analysis__FPtable1_13;
#line 507 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 0;
#line 505 "rbmm.points_to_analysis.m"
      }
#line 508 "rbmm.points_to_analysis.m"
    else
#line 515 "rbmm.points_to_analysis.m"
      {
#line 515 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_19;

#line 511 "rbmm.points_to_analysis.m"
        {
#line 511 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_7, transform_hlds__rbmm__points_to_analysis__InfoTable_8, &transform_hlds__rbmm__points_to_analysis__RptaInfo0_19);
        }
#line 515 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 513 "rbmm.points_to_analysis.m"
          {
#line 513 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_19;
#line 514 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 0;
#line 513 "rbmm.points_to_analysis.m"
          }
#line 515 "rbmm.points_to_analysis.m"
        else
#line 517 "rbmm.points_to_analysis.m"
          {
#line 517 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_17_17;
#line 517 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_18_18;

#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_17_17 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
            }
#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_18_18 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]);
            }
#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              MR_Word base;
#line 517 "rbmm.points_to_analysis.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__RptaInfo_10 = base;
#line 517 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_17_17));
#line 517 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_18_18));
#line 517 "rbmm.points_to_analysis.m"
            }
#line 518 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__Init_11 = (MR_Integer) 1;
#line 517 "rbmm.points_to_analysis.m"
          }
#line 515 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_15 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_14;
#line 515 "rbmm.points_to_analysis.m"
      }
#line 508 "rbmm.points_to_analysis.m"
  }
#line 496 "rbmm.points_to_analysis.m"
}

#line 480 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_10,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18,
#line 480 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19)
#line 480 "rbmm.points_to_analysis.m"
{
#line 484 "rbmm.points_to_analysis.m"
  {
#line 484 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 484 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 2)));
#line 484 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_15, (MR_Integer) 0)));
#line 484 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_15, (MR_Integer) 1)));
#line 485 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 0)));
#line 485 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_10, (MR_Integer) 1)));

#line 362 "rbmm.points_to_analysis.m"
    {
#line 362 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_31, transform_hlds__rbmm__points_to_analysis__GoalInfo_32, transform_hlds__rbmm__points_to_analysis__ModuleInfo_8, transform_hlds__rbmm__points_to_analysis__InfoTable_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_18, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_19);
#line 362 "rbmm.points_to_analysis.m"
      return;
    }
#line 484 "rbmm.points_to_analysis.m"
  }
#line 480 "rbmm.points_to_analysis.m"
}

#line 430 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3(
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 430 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
#line 430 "rbmm.points_to_analysis.m"
{
#line 430 "rbmm.points_to_analysis.m"
  {
#line 430 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 430 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17;
#line 430 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19;

#line 430 "rbmm.points_to_analysis.m"
    {
#line 430 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19);
    }
#line 430 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv9_STATE_VARIABLE_FPtable_17));
#line 430 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv8_STATE_VARIABLE_RptaInfo_19));
#line 430 "rbmm.points_to_analysis.m"
  }
#line 430 "rbmm.points_to_analysis.m"
}

#line 439 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2(
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 439 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
#line 439 "rbmm.points_to_analysis.m"
{
#line 439 "rbmm.points_to_analysis.m"
  {
#line 439 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 439 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16;
#line 439 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18;

#line 439 "rbmm.points_to_analysis.m"
    {
#line 439 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18);
    }
#line 439 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_FPtable_16));
#line 439 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_18));
#line 439 "rbmm.points_to_analysis.m"
  }
#line 439 "rbmm.points_to_analysis.m"
}

#line 371 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1(
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 371 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
#line 371 "rbmm.points_to_analysis.m"
{
#line 371 "rbmm.points_to_analysis.m"
  {
#line 371 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 371 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16;
#line 371 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18;

#line 371 "rbmm.points_to_analysis.m"
    {
#line 371 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18);
    }
#line 371 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_FPtable_16));
#line 371 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_18));
#line 371 "rbmm.points_to_analysis.m"
  }
#line 371 "rbmm.points_to_analysis.m"
}

#line 365 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_2,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_3,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_4,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__7_7,
#line 365 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__8_8)
#line 365 "rbmm.points_to_analysis.m"
{
#line 370 "rbmm.points_to_analysis.m"
  {
#line 370 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 370 "rbmm.points_to_analysis.m"
#line 370 "rbmm.points_to_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
#line 370 "rbmm.points_to_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 370 "rbmm.points_to_analysis.m"
      case (MR_Integer) 0:
#line 443 "rbmm.points_to_analysis.m"
        {
#line 443 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__Goal_117 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1), (MR_Integer) 0);

#line 444 "rbmm.points_to_analysis.m"
          {
#line 444 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Goal_117, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
#line 444 "rbmm.points_to_analysis.m"
            return;
          }
#line 443 "rbmm.points_to_analysis.m"
        }
#line 370 "rbmm.points_to_analysis.m"
        break;
#line 370 "rbmm.points_to_analysis.m"
      case (MR_Integer) 1:
#line 435 "rbmm.points_to_analysis.m"
        {
#line 435 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = transform_hlds__rbmm__points_to_analysis__HeadVar__7_7;
#line 435 "rbmm.points_to_analysis.m"
          *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5;
#line 435 "rbmm.points_to_analysis.m"
        }
#line 370 "rbmm.points_to_analysis.m"
        break;
#line 370 "rbmm.points_to_analysis.m"
      case (MR_Integer) 2:
#line 383 "rbmm.points_to_analysis.m"
        {
#line 383 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "rbmm.points_to_analysis.m"
          MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__ActualParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 383 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__CalleePPId_35;
#line 383 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36;
#line 383 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__IsInit_37;
#line 384 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 384 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 384 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));

#line 385 "rbmm.points_to_analysis.m"
          {
#line 385 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__CalleePPId_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleePPId_35, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_29));
#line 385 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleePPId_35, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcId_30));
#line 385 "rbmm.points_to_analysis.m"
          }
#line 396 "rbmm.points_to_analysis.m"
          {
#line 396 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__lookup_rpta_info_6_p_0(transform_hlds__rbmm__points_to_analysis__CalleePPId_35, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, &transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, &transform_hlds__rbmm__points_to_analysis__IsInit_37);
          }
#line 399 "rbmm.points_to_analysis.m"
#line 399 "rbmm.points_to_analysis.m"
          switch (transform_hlds__rbmm__points_to_analysis__IsInit_37) {
#line 399 "rbmm.points_to_analysis.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 399 "rbmm.points_to_analysis.m"
            case (MR_Integer) 0:
#line 400 "rbmm.points_to_analysis.m"
              {
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallSite_38;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CalleeGraph_39;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__FormalParams_42;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerGraph0_43;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerGraph_45;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__FormalNodes_49;
#line 400 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__V_55_55;
#line 402 "rbmm.points_to_analysis.m"
                MR_Word transform_hlds__rbmm__points_to_analysis__V_40_40;

#line 401 "rbmm.points_to_analysis.m"
                {
#line 401 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__CallSite_38 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__points_to_analysis__GoalInfo_2);
                }
#line 402 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__CalleeGraph_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, (MR_Integer) 0)));
#line 402 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, (MR_Integer) 1)));
#line 405 "rbmm.points_to_analysis.m"
                {
#line 405 "rbmm.points_to_analysis.m"
                  hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__CalleePPId_35, &transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41);
                }
#line 406 "rbmm.points_to_analysis.m"
                {
#line 406 "rbmm.points_to_analysis.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__points_to_analysis__CalleeProcInfo_41, &transform_hlds__rbmm__points_to_analysis__FormalParams_42);
                }
#line 407 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__CallerGraph0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, (MR_Integer) 0)));
#line 407 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, (MR_Integer) 1)));
#line 3695 "transform_hlds.rbmm.points_to_analysis.c"
                transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 410 "rbmm.points_to_analysis.m"
                {
#line 410 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__V_55_55 = mercury__map__init_0_f_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202);
                }
#line 408 "rbmm.points_to_analysis.m"
                {
#line 408 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__alpha_mapping_at_call_site_7_p_0(transform_hlds__rbmm__points_to_analysis__FormalParams_42, transform_hlds__rbmm__points_to_analysis__ActualParams_31, transform_hlds__rbmm__points_to_analysis__CalleeGraph_39, transform_hlds__rbmm__points_to_analysis__CallerGraph0_43, &transform_hlds__rbmm__points_to_analysis__CallerGraph_45, transform_hlds__rbmm__points_to_analysis__V_55_55, &transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46);
                }
#line 411 "rbmm.points_to_analysis.m"
                {
#line 411 "rbmm.points_to_analysis.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallSite_38)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46)), transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings0_44, &transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47);
                }
#line 413 "rbmm.points_to_analysis.m"
                {
#line 413 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "rbmm.points_to_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerGraph_45));
#line 413 "rbmm.points_to_analysis.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__CallerAlphaMappings_47));
#line 413 "rbmm.points_to_analysis.m"
                }
#line 419 "rbmm.points_to_analysis.m"
                {
#line 419 "rbmm.points_to_analysis.m"
                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_202_202, transform_hlds__rbmm__points_to_analysis__CallerAlphaMappingAtCallSite_46, &transform_hlds__rbmm__points_to_analysis__FormalNodes_49);
                }
#line 420 "rbmm.points_to_analysis.m"
                {
#line 420 "rbmm.points_to_analysis.m"
                  transform_hlds__rbmm__points_to_analysis__apply_rules_6_p_0(transform_hlds__rbmm__points_to_analysis__FormalNodes_49, transform_hlds__rbmm__points_to_analysis__CallSite_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_analysis__CalleeRptaInfo_36, transform_hlds__rbmm__points_to_analysis__CallerRptaInfo1_48, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
#line 420 "rbmm.points_to_analysis.m"
                  return;
                }
#line 400 "rbmm.points_to_analysis.m"
              }
#line 399 "rbmm.points_to_analysis.m"
              break;
#line 399 "rbmm.points_to_analysis.m"
            case (MR_Integer) 1:
#line 398 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = transform_hlds__rbmm__points_to_analysis__HeadVar__7_7;
#line 399 "rbmm.points_to_analysis.m"
              break;
#line 399 "rbmm.points_to_analysis.m"
          }
#line 383 "rbmm.points_to_analysis.m"
        }
#line 370 "rbmm.points_to_analysis.m"
        break;
#line 370 "rbmm.points_to_analysis.m"
      case (MR_Integer) 3:
#line 370 "rbmm.points_to_analysis.m"
#line 370 "rbmm.points_to_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
#line 370 "rbmm.points_to_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 0:
#line 425 "rbmm.points_to_analysis.m"
            {
#line 426 "rbmm.points_to_analysis.m"
              {
#line 426 "rbmm.points_to_analysis.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "generic_call not handled");
#line 426 "rbmm.points_to_analysis.m"
                return;
              }
#line 425 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 1:
#line 473 "rbmm.points_to_analysis.m"
            {
#line 475 "rbmm.points_to_analysis.m"
              {
#line 475 "rbmm.points_to_analysis.m"
                mercury__require__sorry_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "foreign code");
#line 475 "rbmm.points_to_analysis.m"
                return;
              }
#line 473 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 2:
#line 370 "rbmm.points_to_analysis.m"
            {
#line 370 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 370 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_20_20;
#line 369 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___ConjType_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 371 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6;
#line 371 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8;

#line 371 "rbmm.points_to_analysis.m"
              {
#line 371 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 371 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_20_20, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[1]));
#line 371 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_20_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_1));
#line 371 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 371 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_20_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
#line 371 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_20_20, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
#line 371 "rbmm.points_to_analysis.m"
              }
#line 371 "rbmm.points_to_analysis.m"
              {
#line 371 "rbmm.points_to_analysis.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__V_20_20, transform_hlds__rbmm__points_to_analysis__Goals_10, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8);
              }
#line 371 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_FPTable_6);
#line 371 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_HeadVar__8_8);
#line 370 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 3:
#line 438 "rbmm.points_to_analysis.m"
            {
#line 438 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Disjs_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_114_114;
#line 439 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6;
#line 439 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8;

#line 439 "rbmm.points_to_analysis.m"
              {
#line 439 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_114_114, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[1]));
#line 439 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_114_114, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_2));
#line 439 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_114_114, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
#line 439 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_114_114, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
#line 439 "rbmm.points_to_analysis.m"
              }
#line 439 "rbmm.points_to_analysis.m"
              {
#line 439 "rbmm.points_to_analysis.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__V_114_114, transform_hlds__rbmm__points_to_analysis__Disjs_104, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8);
              }
#line 439 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv7_STATE_VARIABLE_FPTable_6);
#line 439 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv6_HeadVar__8_8);
#line 438 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 4:
#line 429 "rbmm.points_to_analysis.m"
            {
#line 429 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Cases_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 429 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_87_87;
#line 428 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 430 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6;
#line 430 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8;

#line 430 "rbmm.points_to_analysis.m"
              {
#line 430 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_87_87, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[2]));
#line 430 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_87_87, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0_3));
#line 430 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_87_87, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_3));
#line 430 "rbmm.points_to_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_87_87, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable_4));
#line 430 "rbmm.points_to_analysis.m"
              }
#line 430 "rbmm.points_to_analysis.m"
              {
#line 430 "rbmm.points_to_analysis.m"
                mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__V_87_87, transform_hlds__rbmm__points_to_analysis__Cases_77, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5)), &transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__HeadVar__7_7)), &transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8);
              }
#line 430 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv11_STATE_VARIABLE_FPTable_6);
#line 430 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__HeadVar__8_8 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv10_HeadVar__8_8);
#line 429 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 5:
#line 450 "rbmm.points_to_analysis.m"
            {
#line 450 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Goal_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 449 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___Reason_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

#line 460 "rbmm.points_to_analysis.m"
              {
#line 460 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Goal_130, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
#line 460 "rbmm.points_to_analysis.m"
                return;
              }
#line 450 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 6:
#line 468 "rbmm.points_to_analysis.m"
            {
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__If_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Then_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Else_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155;
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156;
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157;
#line 468 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158;
#line 467 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___Vars_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

#line 469 "rbmm.points_to_analysis.m"
              {
#line 469 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__If_143, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_5, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155, transform_hlds__rbmm__points_to_analysis__HeadVar__7_7, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156);
              }
#line 470 "rbmm.points_to_analysis.m"
              {
#line 470 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Then_144, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_155_155, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_156_156, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158);
              }
#line 471 "rbmm.points_to_analysis.m"
              {
#line 471 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_3, transform_hlds__rbmm__points_to_analysis__InfoTable_4, transform_hlds__rbmm__points_to_analysis__Else_145, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_157_157, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_6, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_158_158, transform_hlds__rbmm__points_to_analysis__HeadVar__8_8);
#line 471 "rbmm.points_to_analysis.m"
                return;
              }
#line 468 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
          case (MR_Integer) 7:
#line 477 "rbmm.points_to_analysis.m"
            {
#line 478 "rbmm.points_to_analysis.m"
              {
#line 478 "rbmm.points_to_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_analyse_goal_expr\'/8", (MR_String) "shorthand");
#line 478 "rbmm.points_to_analysis.m"
                return;
              }
#line 477 "rbmm.points_to_analysis.m"
            }
#line 370 "rbmm.points_to_analysis.m"
            break;
#line 370 "rbmm.points_to_analysis.m"
        }
#line 370 "rbmm.points_to_analysis.m"
        break;
#line 370 "rbmm.points_to_analysis.m"
    }
#line 370 "rbmm.points_to_analysis.m"
  }
#line 365 "rbmm.points_to_analysis.m"
}

#line 355 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_7_p_0(
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_9,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_10,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17,
#line 355 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18)
#line 355 "rbmm.points_to_analysis.m"
{
#line 360 "rbmm.points_to_analysis.m"
  {
#line 360 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 360 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_10, (MR_Integer) 0)));
#line 360 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_10, (MR_Integer) 1)));

#line 362 "rbmm.points_to_analysis.m"
    {
#line 362 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_13, transform_hlds__rbmm__points_to_analysis__GoalInfo_14, transform_hlds__rbmm__points_to_analysis__ModuleInfo_8, transform_hlds__rbmm__points_to_analysis__InfoTable_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_0_15, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPtable_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_18);
#line 362 "rbmm.points_to_analysis.m"
      return;
    }
#line 360 "rbmm.points_to_analysis.m"
  }
#line 355 "rbmm.points_to_analysis.m"
}

#line 1044 "rbmm.points_to_analysis.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0_1(
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 1044 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2)
#line 1044 "rbmm.points_to_analysis.m"
{
#line 1044 "rbmm.points_to_analysis.m"
  {
#line 1044 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1044 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;

#line 1044 "rbmm.points_to_analysis.m"
    {
#line 1044 "rbmm.points_to_analysis.m"
      return transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_analysis__IntroducedFrom__pred__rpta_fixpoint_table_new_rpta_info__1045__1_2_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2));
    }
#line 1044 "rbmm.points_to_analysis.m"
    return transform_hlds__rbmm__points_to_analysis__succeeded;
#line 1044 "rbmm.points_to_analysis.m"
  }
#line 1044 "rbmm.points_to_analysis.m"
}

#line 315 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable_7,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PPId_8,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16,
#line 315 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17)
#line 315 "rbmm.points_to_analysis.m"
{
#line 319 "rbmm.points_to_analysis.m"
  {
#line 319 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo0_12;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo_13;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_14;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_48;
#line 319 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalInfo_49;
#line 508 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_28;
#line 508 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__FPtable1_29;
#line 503 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28;

#line 503 "rbmm.points_to_analysis.m"
    {
#line 503 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_8)), &transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16, &transform_hlds__rbmm__points_to_analysis__FPtable1_29);
    }
#line 503 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 503 "rbmm.points_to_analysis.m"
      {
#line 503 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__RptaInfo0_28 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv0_RptaInfo0_28);
#line 503 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__succeeded = MR_TRUE;
#line 503 "rbmm.points_to_analysis.m"
      }
#line 508 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 505 "rbmm.points_to_analysis.m"
      {
#line 505 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_28;
#line 506 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18 = transform_hlds__rbmm__points_to_analysis__FPtable1_29;
#line 505 "rbmm.points_to_analysis.m"
      }
#line 508 "rbmm.points_to_analysis.m"
    else
#line 515 "rbmm.points_to_analysis.m"
      {
#line 515 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_33;

#line 511 "rbmm.points_to_analysis.m"
        {
#line 511 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_f_0(transform_hlds__rbmm__points_to_analysis__PPId_8, transform_hlds__rbmm__points_to_analysis__InfoTable_7, &transform_hlds__rbmm__points_to_analysis__RptaInfo0_33);
        }
#line 515 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 513 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = transform_hlds__rbmm__points_to_analysis__RptaInfo0_33;
#line 515 "rbmm.points_to_analysis.m"
        else
#line 517 "rbmm.points_to_analysis.m"
          {
#line 517 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_31_31;
#line 517 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_32_32;

#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_31_31 = transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0();
            }
#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_32_32 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[2]);
            }
#line 517 "rbmm.points_to_analysis.m"
            {
#line 517 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_31_31));
#line 517 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_32_32));
#line 517 "rbmm.points_to_analysis.m"
            }
#line 517 "rbmm.points_to_analysis.m"
          }
#line 515 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_0_16;
#line 515 "rbmm.points_to_analysis.m"
      }
#line 333 "rbmm.points_to_analysis.m"
    {
#line 333 "rbmm.points_to_analysis.m"
      hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__PPId_8, &transform_hlds__rbmm__points_to_analysis__ProcInfo0_12);
    }
#line 334 "rbmm.points_to_analysis.m"
    {
#line 334 "rbmm.points_to_analysis.m"
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__ProcInfo0_12, &transform_hlds__rbmm__points_to_analysis__ProcInfo_13);
    }
#line 336 "rbmm.points_to_analysis.m"
    {
#line 336 "rbmm.points_to_analysis.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_13, &transform_hlds__rbmm__points_to_analysis__Goal_14);
    }
#line 361 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_14, (MR_Integer) 0)));
#line 361 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__GoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_14, (MR_Integer) 1)));
#line 362 "rbmm.points_to_analysis.m"
    {
#line 362 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_goal_expr_8_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_48, transform_hlds__rbmm__points_to_analysis__GoalInfo_49, transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__InfoTable_7, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_18_18, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19, transform_hlds__rbmm__points_to_analysis__ProcRptaInfo0_10, &transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15);
    }
#line 1047 "rbmm.points_to_analysis.m"
    {
#line 1047 "rbmm.points_to_analysis.m"
      transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[6], ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_8)), ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcRptaInfo_15)), transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_19_19, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_FPTable_17);
#line 1047 "rbmm.points_to_analysis.m"
      return;
    }
#line 319 "rbmm.points_to_analysis.m"
  }
#line 315 "rbmm.points_to_analysis.m"
}

#line 306 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2(
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 306 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 306 "rbmm.points_to_analysis.m"
{
#line 306 "rbmm.points_to_analysis.m"
  {
#line 306 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 306 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10;

#line 306 "rbmm.points_to_analysis.m"
    {
#line 306 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__update_rpta_info_in_rpta_info_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10);
    }
#line 306 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10));
#line 306 "rbmm.points_to_analysis.m"
  }
#line 306 "rbmm.points_to_analysis.m"
}

#line 301 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1(
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 301 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 301 "rbmm.points_to_analysis.m"
{
#line 301 "rbmm.points_to_analysis.m"
  {
#line 301 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 301 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17;

#line 301 "rbmm.points_to_analysis.m"
    {
#line 301 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__inter_analyse_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17);
    }
#line 301 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_FPTable_17));
#line 301 "rbmm.points_to_analysis.m"
  }
#line 301 "rbmm.points_to_analysis.m"
}

#line 296 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__FPTable0_7,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_8,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12,
#line 296 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13)
#line 296 "rbmm.points_to_analysis.m"
{
#line 300 "rbmm.points_to_analysis.m"
  while (MR_TRUE)
#line 300 "rbmm.points_to_analysis.m"
    {
#line 300 "rbmm.points_to_analysis.m"
      /* tailcall optimized into a loop */
#line 300 "rbmm.points_to_analysis.m"
      {
#line 300 "rbmm.points_to_analysis.m"
        MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 300 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21;
#line 300 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__FPTable1_10;
#line 300 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__V_14_14;
#line 301 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10;

#line 301 "rbmm.points_to_analysis.m"
        {
#line 301 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 301 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_14_14, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[1]));
#line 301 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_14_14, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_1));
#line 301 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 301 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_14_14, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_8));
#line 301 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_14_14, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12));
#line 301 "rbmm.points_to_analysis.m"
        }
#line 4347 "transform_hlds.rbmm.points_to_analysis.c"
        transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 301 "rbmm.points_to_analysis.m"
        {
#line 301 "rbmm.points_to_analysis.m"
          mercury__list__foldl_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[1], transform_hlds__rbmm__points_to_analysis__V_14_14, transform_hlds__rbmm__points_to_analysis__SCC_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__FPTable0_7)), &transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10);
        }
#line 301 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__FPTable1_10 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_FPTable1_10);
#line 303 "rbmm.points_to_analysis.m"
        {
#line 303 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__FPTable1_10);
        }
#line 308 "rbmm.points_to_analysis.m"
        if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 306 "rbmm.points_to_analysis.m"
          {
#line 306 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__V_15_15;
#line 306 "rbmm.points_to_analysis.m"
            MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13;

#line 306 "rbmm.points_to_analysis.m"
            {
#line 306 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[2]));
#line 306 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0_2));
#line 306 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 306 "rbmm.points_to_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__FPTable1_10));
#line 306 "rbmm.points_to_analysis.m"
            }
#line 306 "rbmm.points_to_analysis.m"
            {
#line 306 "rbmm.points_to_analysis.m"
              mercury__list__foldl_4_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__V_15_15, transform_hlds__rbmm__points_to_analysis__SCC_6, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_12)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13);
            }
#line 306 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_13 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_InfoTable_13);
#line 306 "rbmm.points_to_analysis.m"
          }
#line 308 "rbmm.points_to_analysis.m"
        else
#line 310 "rbmm.points_to_analysis.m"
          {
#line 310 "rbmm.points_to_analysis.m"
            MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_11;

#line 310 "rbmm.points_to_analysis.m"
            {
#line 310 "rbmm.points_to_analysis.m"
              transform_hlds__ctgc__fixpoint_table__new_run_2_p_0(transform_hlds__rbmm__points_to_analysis__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__FPTable1_10, &transform_hlds__rbmm__points_to_analysis__FPTable_11);
            }
#line 311 "rbmm.points_to_analysis.m"
            /* direct tailcall eliminated */
#line 311 "rbmm.points_to_analysis.m"
            {
#line 311 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__FPTable0__tmp_copy_7 = transform_hlds__rbmm__points_to_analysis__FPTable_11;

#line 311 "rbmm.points_to_analysis.m"
              transform_hlds__rbmm__points_to_analysis__FPTable0_7 = transform_hlds__rbmm__points_to_analysis__FPTable0__tmp_copy_7;
#line 311 "rbmm.points_to_analysis.m"
            }
#line 311 "rbmm.points_to_analysis.m"
            continue;
#line 310 "rbmm.points_to_analysis.m"
          }
#line 300 "rbmm.points_to_analysis.m"
      }
#line 300 "rbmm.points_to_analysis.m"
      break;
#line 300 "rbmm.points_to_analysis.m"
    }
#line 296 "rbmm.points_to_analysis.m"
}

#line 1030 "rbmm.points_to_analysis.m"
static MR_Box MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1(
#line 1030 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 1030 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1)
#line 1030 "rbmm.points_to_analysis.m"
{
#line 1030 "rbmm.points_to_analysis.m"
  {
#line 1030 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2;
#line 1030 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 1030 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_Entry_6;

#line 1030 "rbmm.points_to_analysis.m"
    {
#line 1030 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__conv0_Entry_6 = transform_hlds__rbmm__points_to_analysis__wrapped_init_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1));
    }
#line 1030 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__wrapper_arg_2 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_Entry_6));
#line 1030 "rbmm.points_to_analysis.m"
    return transform_hlds__rbmm__points_to_analysis__wrapper_arg_2;
#line 1030 "rbmm.points_to_analysis.m"
  }
#line 1030 "rbmm.points_to_analysis.m"
}

#line 282 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__SCC_6,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9,
#line 282 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10)
#line 282 "rbmm.points_to_analysis.m"
{
#line 289 "rbmm.points_to_analysis.m"
  {
#line 289 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 286 "rbmm.points_to_analysis.m"
    {
#line 286 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__points_to_analysis__SCC_6, transform_hlds__rbmm__points_to_analysis__ModuleInfo_5);
    }
#line 289 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 289 "rbmm.points_to_analysis.m"
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9;
#line 289 "rbmm.points_to_analysis.m"
    else
#line 291 "rbmm.points_to_analysis.m"
      {
#line 291 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__FPTable_8;
#line 291 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__V_15_15;

#line 1030 "rbmm.points_to_analysis.m"
        {
#line 1030 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_5[2]));
#line 1030 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0_1));
#line 1030 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9));
#line 1030 "rbmm.points_to_analysis.m"
        }
#line 1030 "rbmm.points_to_analysis.m"
        {
#line 1030 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__FPTable_8 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__points_to_analysis__V_15_15, transform_hlds__rbmm__points_to_analysis__SCC_6);
        }
#line 292 "rbmm.points_to_analysis.m"
        {
#line 292 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__run_with_dependency_until_fixpoint_5_p_0(transform_hlds__rbmm__points_to_analysis__SCC_6, transform_hlds__rbmm__points_to_analysis__FPTable_8, transform_hlds__rbmm__points_to_analysis__ModuleInfo_5, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_10);
#line 292 "rbmm.points_to_analysis.m"
          return;
        }
#line 291 "rbmm.points_to_analysis.m"
      }
#line 289 "rbmm.points_to_analysis.m"
  }
#line 282 "rbmm.points_to_analysis.m"
}

#line 222 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__LVar_8,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_9,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__RVar_10,
#line 222 "rbmm.points_to_analysis.m"
  MR_Integer transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18,
#line 222 "rbmm.points_to_analysis.m"
  MR_Integer * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20,
#line 222 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21)
#line 222 "rbmm.points_to_analysis.m"
{
#line 225 "rbmm.points_to_analysis.m"
  {
#line 225 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 225 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__LNode_13;
#line 225 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__RNode_14;
#line 225 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Sel_15;
#line 225 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__EdgeLabel_16;
#line 225 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_22_22;

#line 226 "rbmm.points_to_analysis.m"
    {
#line 226 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, transform_hlds__rbmm__points_to_analysis__LVar_8, &transform_hlds__rbmm__points_to_analysis__LNode_13);
    }
#line 227 "rbmm.points_to_analysis.m"
    {
#line 227 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, transform_hlds__rbmm__points_to_analysis__RVar_10, &transform_hlds__rbmm__points_to_analysis__RNode_14);
    }
#line 228 "rbmm.points_to_analysis.m"
    {
#line 228 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_22_22, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_9));
#line 228 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_22_22, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18));
#line 228 "rbmm.points_to_analysis.m"
    }
#line 228 "rbmm.points_to_analysis.m"
    {
#line 228 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__Sel_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Sel_15, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__V_22_22));
#line 228 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__Sel_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "rbmm.points_to_analysis.m"
    }
#line 229 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__EdgeLabel_16 = (MR_Word) transform_hlds__rbmm__points_to_analysis__Sel_15;
#line 237 "rbmm.points_to_analysis.m"
    {
#line 237 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__EdgeLabel_16, transform_hlds__rbmm__points_to_analysis__RNode_14, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20);
    }
#line 239 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 239 "rbmm.points_to_analysis.m"
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20;
#line 239 "rbmm.points_to_analysis.m"
    else
#line 240 "rbmm.points_to_analysis.m"
      {
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__RVarNode_17;
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24;
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25;
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__N_36;
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__M_37;
#line 240 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__OutEdgeList_39;

#line 240 "rbmm.points_to_analysis.m"
        {
#line 240 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__RNode_14, transform_hlds__rbmm__points_to_analysis__EdgeLabel_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_20, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24);
        }
#line 641 "rbmm.points_to_analysis.m"
        {
#line 641 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__LNode_13, &transform_hlds__rbmm__points_to_analysis__N_36);
        }
#line 642 "rbmm.points_to_analysis.m"
        {
#line 642 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__RNode_14, &transform_hlds__rbmm__points_to_analysis__M_37);
        }
#line 644 "rbmm.points_to_analysis.m"
        {
#line 644 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__OutEdgeList_39 = transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, transform_hlds__rbmm__points_to_analysis__N_36);
        }
#line 645 "rbmm.points_to_analysis.m"
        {
#line 645 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__merge_nodes_reached_by_same_labelled_edge_5_p_0(transform_hlds__rbmm__points_to_analysis__Sel_15, transform_hlds__rbmm__points_to_analysis__M_37, transform_hlds__rbmm__points_to_analysis__OutEdgeList_39, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_24_24, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25);
        }
#line 247 "rbmm.points_to_analysis.m"
        {
#line 247 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25, transform_hlds__rbmm__points_to_analysis__RVar_10, &transform_hlds__rbmm__points_to_analysis__RVarNode_17);
        }
#line 248 "rbmm.points_to_analysis.m"
        {
#line 248 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__rule_3_3_p_0(transform_hlds__rbmm__points_to_analysis__RVarNode_17, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_21);
        }
#line 240 "rbmm.points_to_analysis.m"
      }
#line 250 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_19 = (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Component_0_18 + (MR_Integer) 1);
#line 225 "rbmm.points_to_analysis.m"
  }
#line 222 "rbmm.points_to_analysis.m"
}

#line 205 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2(
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 205 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
#line 205 "rbmm.points_to_analysis.m"
{
#line 205 "rbmm.points_to_analysis.m"
  {
#line 205 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 205 "rbmm.points_to_analysis.m"
    MR_Integer transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19;
#line 205 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21;

#line 205 "rbmm.points_to_analysis.m"
    {
#line 205 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21);
    }
#line 205 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_Component_19));
#line 205 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_Graph_21));
#line 205 "rbmm.points_to_analysis.m"
  }
#line 205 "rbmm.points_to_analysis.m"
}

#line 201 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1(
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_4,
#line 201 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_5)
#line 201 "rbmm.points_to_analysis.m"
{
#line 201 "rbmm.points_to_analysis.m"
  {
#line 201 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 201 "rbmm.points_to_analysis.m"
    MR_Integer transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19;
#line 201 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21;

#line 201 "rbmm.points_to_analysis.m"
    {
#line 201 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__process_cons_and_decons_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19, ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_4), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21);
    }
#line 201 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_Component_19));
#line 201 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_Graph_21));
#line 201 "rbmm.points_to_analysis.m"
  }
#line 201 "rbmm.points_to_analysis.m"
}

#line 188 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(
#line 188 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 188 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__2_2,
#line 188 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__HeadVar__3_3)
#line 188 "rbmm.points_to_analysis.m"
{
#line 192 "rbmm.points_to_analysis.m"
  {
#line 192 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 192 "rbmm.points_to_analysis.m"
#line 192 "rbmm.points_to_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
#line 192 "rbmm.points_to_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "rbmm.points_to_analysis.m"
      case (MR_Integer) 0:
#line 192 "rbmm.points_to_analysis.m"
        {
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__LVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__RVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__LNode_13;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__LNodeContent0_14;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__A_15;
#line 192 "rbmm.points_to_analysis.m"
          MR_String transform_hlds__rbmm__points_to_analysis__B_16;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__C_17;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__D_18;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__LNodeContent_20;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25;
#line 192 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_26_26;
#line 191 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 191 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 191 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 191 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 6)));
#line 196 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis___IsAlloc_19;
#line 201 "rbmm.points_to_analysis.m"
          MR_Integer transform_hlds__rbmm__points_to_analysis__V_21_21;
#line 201 "rbmm.points_to_analysis.m"
          MR_Box transform_hlds__rbmm__points_to_analysis__conv3_V_21_21;
#line 201 "rbmm.points_to_analysis.m"
          MR_Box transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23;

#line 194 "rbmm.points_to_analysis.m"
          {
#line 194 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, transform_hlds__rbmm__points_to_analysis__LVar_4, &transform_hlds__rbmm__points_to_analysis__LNode_13);
          }
#line 195 "rbmm.points_to_analysis.m"
          {
#line 195 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__LNodeContent0_14 = transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, transform_hlds__rbmm__points_to_analysis__LNode_13);
          }
#line 196 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__A_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 0)));
#line 196 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__B_16 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 1)));
#line 196 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__C_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 2)));
#line 196 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__D_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 3)));
#line 196 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis___IsAlloc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent0_14, (MR_Integer) 4)));
#line 197 "rbmm.points_to_analysis.m"
          {
#line 197 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__LNodeContent_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 197 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__A_15));
#line 197 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__B_16));
#line 197 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__C_17));
#line 197 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__D_18));
#line 197 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__LNodeContent_20, 4) = ((MR_Box) ((MR_Integer) 1));
#line 197 "rbmm.points_to_analysis.m"
          }
#line 198 "rbmm.points_to_analysis.m"
          {
#line 198 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(transform_hlds__rbmm__points_to_analysis__LNode_13, transform_hlds__rbmm__points_to_analysis__LNodeContent_20, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_22, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25);
          }
#line 201 "rbmm.points_to_analysis.m"
          {
#line 201 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 201 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[0]));
#line 201 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_1));
#line 201 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 201 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__LVar_4));
#line 201 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_5));
#line 201 "rbmm.points_to_analysis.m"
          }
#line 201 "rbmm.points_to_analysis.m"
          {
#line 201 "rbmm.points_to_analysis.m"
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_analysis__V_26_26, transform_hlds__rbmm__points_to_analysis__RVars_6, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_analysis__conv3_V_21_21, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_25_25)), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23);
          }
#line 201 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_21_21 = ((MR_Integer) transform_hlds__rbmm__points_to_analysis__conv3_V_21_21);
#line 201 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_Graph_23);
#line 192 "rbmm.points_to_analysis.m"
          {
#line 192 "rbmm.points_to_analysis.m"
            MR_Word base;
#line 192 "rbmm.points_to_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 192 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
#line 192 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_23));
#line 192 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_12));
#line 192 "rbmm.points_to_analysis.m"
          }
#line 192 "rbmm.points_to_analysis.m"
        }
#line 192 "rbmm.points_to_analysis.m"
        break;
#line 192 "rbmm.points_to_analysis.m"
      case (MR_Integer) 1:
#line 204 "rbmm.points_to_analysis.m"
        {
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__LVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__RVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39;
#line 204 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_40_40;
#line 203 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 203 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 203 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 205 "rbmm.points_to_analysis.m"
          MR_Integer transform_hlds__rbmm__points_to_analysis__V_37_37;
#line 205 "rbmm.points_to_analysis.m"
          MR_Box transform_hlds__rbmm__points_to_analysis__conv7_V_37_37;
#line 205 "rbmm.points_to_analysis.m"
          MR_Box transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39;

#line 205 "rbmm.points_to_analysis.m"
          {
#line 205 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 205 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_6[0]));
#line 205 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0_2));
#line 205 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 205 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__LVar_29));
#line 205 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ConsId_30));
#line 205 "rbmm.points_to_analysis.m"
          }
#line 205 "rbmm.points_to_analysis.m"
          {
#line 205 "rbmm.points_to_analysis.m"
            mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0, transform_hlds__rbmm__points_to_analysis__V_40_40, transform_hlds__rbmm__points_to_analysis__RVars_31, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__rbmm__points_to_analysis__conv7_V_37_37, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_38)), &transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39);
          }
#line 205 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_37_37 = ((MR_Integer) transform_hlds__rbmm__points_to_analysis__conv7_V_37_37);
#line 205 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv6_STATE_VARIABLE_Graph_39);
#line 204 "rbmm.points_to_analysis.m"
          {
#line 204 "rbmm.points_to_analysis.m"
            MR_Word base;
#line 204 "rbmm.points_to_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
#line 204 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_39));
#line 204 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_36));
#line 204 "rbmm.points_to_analysis.m"
          }
#line 204 "rbmm.points_to_analysis.m"
        }
#line 192 "rbmm.points_to_analysis.m"
        break;
#line 192 "rbmm.points_to_analysis.m"
      case (MR_Integer) 2:
#line 207 "rbmm.points_to_analysis.m"
        {
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__ToVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__FromVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__AlphaMapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__ToNode_47;
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__FromNode_48;
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50;
#line 210 "rbmm.points_to_analysis.m"
          MR_Integer transform_hlds__rbmm__points_to_analysis__V_83_83;
#line 210 "rbmm.points_to_analysis.m"
          MR_Integer transform_hlds__rbmm__points_to_analysis__V_84_84;

#line 208 "rbmm.points_to_analysis.m"
          {
#line 208 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, transform_hlds__rbmm__points_to_analysis__ToVar_43, &transform_hlds__rbmm__points_to_analysis__ToNode_47);
          }
#line 209 "rbmm.points_to_analysis.m"
          {
#line 209 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, transform_hlds__rbmm__points_to_analysis__FromVar_44, &transform_hlds__rbmm__points_to_analysis__FromNode_48);
          }
#line 210 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_83_83 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__ToNode_47;
#line 210 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_84_84 = (MR_Integer) transform_hlds__rbmm__points_to_analysis__FromNode_48;
#line 210 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__succeeded = (transform_hlds__rbmm__points_to_analysis__V_83_83 == transform_hlds__rbmm__points_to_analysis__V_84_84);
#line 212 "rbmm.points_to_analysis.m"
          if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 212 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49;
#line 212 "rbmm.points_to_analysis.m"
          else
#line 213 "rbmm.points_to_analysis.m"
            {
#line 213 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51;

#line 213 "rbmm.points_to_analysis.m"
              {
#line 213 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(transform_hlds__rbmm__points_to_analysis__ToNode_47, transform_hlds__rbmm__points_to_analysis__FromNode_48, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_0_49, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51);
              }
#line 216 "rbmm.points_to_analysis.m"
              {
#line 216 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__rule_1_3_p_0(transform_hlds__rbmm__points_to_analysis__ToNode_47, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_51_51, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50);
              }
#line 213 "rbmm.points_to_analysis.m"
            }
#line 207 "rbmm.points_to_analysis.m"
          {
#line 207 "rbmm.points_to_analysis.m"
            MR_Word base;
#line 207 "rbmm.points_to_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = base;
#line 207 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_Graph_50));
#line 207 "rbmm.points_to_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__AlphaMapping_46));
#line 207 "rbmm.points_to_analysis.m"
          }
#line 207 "rbmm.points_to_analysis.m"
        }
#line 192 "rbmm.points_to_analysis.m"
        break;
#line 192 "rbmm.points_to_analysis.m"
      case (MR_Integer) 3:
#line 192 "rbmm.points_to_analysis.m"
#line 192 "rbmm.points_to_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
#line 192 "rbmm.points_to_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 192 "rbmm.points_to_analysis.m"
          case (MR_Integer) 0:
#line 218 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__HeadVar__3_3 = transform_hlds__rbmm__points_to_analysis__HeadVar__2_2;
#line 192 "rbmm.points_to_analysis.m"
            break;
#line 192 "rbmm.points_to_analysis.m"
          case (MR_Integer) 1:
#line 219 "rbmm.points_to_analysis.m"
            {
#line 220 "rbmm.points_to_analysis.m"
              {
#line 220 "rbmm.points_to_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_unification\'/3", (MR_String) "complicated_unify");
#line 220 "rbmm.points_to_analysis.m"
                return;
              }
#line 219 "rbmm.points_to_analysis.m"
            }
#line 192 "rbmm.points_to_analysis.m"
            break;
#line 192 "rbmm.points_to_analysis.m"
        }
#line 192 "rbmm.points_to_analysis.m"
        break;
#line 192 "rbmm.points_to_analysis.m"
    }
#line 192 "rbmm.points_to_analysis.m"
  }
#line 188 "rbmm.points_to_analysis.m"
}

#line 171 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(
#line 171 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Case_4,
#line 171 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9,
#line 171 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10)
#line 171 "rbmm.points_to_analysis.m"
{
#line 173 "rbmm.points_to_analysis.m"
  {
#line 173 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 173 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 2)));
#line 173 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_8, (MR_Integer) 0)));
#line 174 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 0)));
#line 174 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Case_4, (MR_Integer) 1)));
#line 117 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_8, (MR_Integer) 1)));

#line 118 "rbmm.points_to_analysis.m"
    {
#line 118 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_16, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_9, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_10);
#line 118 "rbmm.points_to_analysis.m"
      return;
    }
#line 173 "rbmm.points_to_analysis.m"
  }
#line 171 "rbmm.points_to_analysis.m"
}

#line 134 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_3(
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 134 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 134 "rbmm.points_to_analysis.m"
{
#line 134 "rbmm.points_to_analysis.m"
  {
#line 134 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 134 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10;

#line 134 "rbmm.points_to_analysis.m"
    {
#line 134 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_analyse_case_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10);
    }
#line 134 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv4_STATE_VARIABLE_RptaInfo_10));
#line 134 "rbmm.points_to_analysis.m"
  }
#line 134 "rbmm.points_to_analysis.m"
}

#line 136 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_2(
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 136 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 136 "rbmm.points_to_analysis.m"
{
#line 136 "rbmm.points_to_analysis.m"
  {
#line 136 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 136 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9;

#line 136 "rbmm.points_to_analysis.m"
    {
#line 136 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9);
    }
#line 136 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_RptaInfo_9));
#line 136 "rbmm.points_to_analysis.m"
  }
#line 136 "rbmm.points_to_analysis.m"
}

#line 124 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0_1(
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 124 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 124 "rbmm.points_to_analysis.m"
{
#line 124 "rbmm.points_to_analysis.m"
  {
#line 124 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 124 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9;

#line 124 "rbmm.points_to_analysis.m"
    {
#line 124 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9);
    }
#line 124 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_RptaInfo_9));
#line 124 "rbmm.points_to_analysis.m"
  }
#line 124 "rbmm.points_to_analysis.m"
}

#line 120 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(
#line 120 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__HeadVar__1_1,
#line 120 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2,
#line 120 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3)
#line 120 "rbmm.points_to_analysis.m"
{
#line 123 "rbmm.points_to_analysis.m"
  {
#line 123 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;

#line 123 "rbmm.points_to_analysis.m"
#line 123 "rbmm.points_to_analysis.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1)) {
#line 123 "rbmm.points_to_analysis.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 123 "rbmm.points_to_analysis.m"
      case (MR_Integer) 0:
#line 137 "rbmm.points_to_analysis.m"
        {
#line 137 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__Goal_52 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__points_to_analysis__HeadVar__1_1), (MR_Integer) 0);

#line 138 "rbmm.points_to_analysis.m"
          {
#line 138 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Goal_52, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
#line 138 "rbmm.points_to_analysis.m"
            return;
          }
#line 137 "rbmm.points_to_analysis.m"
        }
#line 123 "rbmm.points_to_analysis.m"
        break;
#line 123 "rbmm.points_to_analysis.m"
      case (MR_Integer) 1:
#line 139 "rbmm.points_to_analysis.m"
        {
#line 139 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__Unification_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "rbmm.points_to_analysis.m"
          MR_Word transform_hlds__rbmm__points_to_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));

#line 140 "rbmm.points_to_analysis.m"
          {
#line 140 "rbmm.points_to_analysis.m"
            transform_hlds__rbmm__points_to_analysis__intra_analyse_unification_3_p_0(transform_hlds__rbmm__points_to_analysis__Unification_60, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
#line 140 "rbmm.points_to_analysis.m"
            return;
          }
#line 139 "rbmm.points_to_analysis.m"
        }
#line 123 "rbmm.points_to_analysis.m"
        break;
#line 123 "rbmm.points_to_analysis.m"
      case (MR_Integer) 2:
#line 129 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
#line 123 "rbmm.points_to_analysis.m"
        break;
#line 123 "rbmm.points_to_analysis.m"
      case (MR_Integer) 3:
#line 123 "rbmm.points_to_analysis.m"
#line 123 "rbmm.points_to_analysis.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 0)))) {
#line 123 "rbmm.points_to_analysis.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 0:
#line 130 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 1:
#line 131 "rbmm.points_to_analysis.m"
            *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2;
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 2:
#line 123 "rbmm.points_to_analysis.m"
            {
#line 123 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 123 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___ConjType_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3;

#line 124 "rbmm.points_to_analysis.m"
              {
#line 124 "rbmm.points_to_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[3], transform_hlds__rbmm__points_to_analysis__Goals_5, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3);
              }
#line 124 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_RptaInfo_3);
#line 123 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 3:
#line 135 "rbmm.points_to_analysis.m"
            {
#line 135 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Goals_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3;

#line 136 "rbmm.points_to_analysis.m"
              {
#line 136 "rbmm.points_to_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[4], transform_hlds__rbmm__points_to_analysis__Goals_46, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3);
              }
#line 136 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_STATE_VARIABLE_RptaInfo_3);
#line 135 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 4:
#line 133 "rbmm.points_to_analysis.m"
            {
#line 133 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 133 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 134 "rbmm.points_to_analysis.m"
              MR_Box transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3;

#line 134 "rbmm.points_to_analysis.m"
              {
#line 134 "rbmm.points_to_analysis.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[5], transform_hlds__rbmm__points_to_analysis__Cases_40, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2)), &transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3);
              }
#line 134 "rbmm.points_to_analysis.m"
              *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv5_STATE_VARIABLE_RptaInfo_3);
#line 133 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 5:
#line 145 "rbmm.points_to_analysis.m"
            {
#line 145 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Goal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 145 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___Reason_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

#line 155 "rbmm.points_to_analysis.m"
              {
#line 155 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Goal_67, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
#line 155 "rbmm.points_to_analysis.m"
                return;
              }
#line 145 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 6:
#line 162 "rbmm.points_to_analysis.m"
            {
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__If_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Then_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__Else_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79;
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80;
#line 162 "rbmm.points_to_analysis.m"
              MR_Word transform_hlds__rbmm__points_to_analysis___Vars_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__points_to_analysis__HeadVar__1_1, (MR_Integer) 1)));

#line 163 "rbmm.points_to_analysis.m"
              {
#line 163 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__If_73, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_2, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79);
              }
#line 164 "rbmm.points_to_analysis.m"
              {
#line 164 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Then_74, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_79_79, &transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80);
              }
#line 165 "rbmm.points_to_analysis.m"
              {
#line 165 "rbmm.points_to_analysis.m"
                transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(transform_hlds__rbmm__points_to_analysis__Else_75, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_80_80, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_3);
#line 165 "rbmm.points_to_analysis.m"
                return;
              }
#line 162 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
          case (MR_Integer) 7:
#line 167 "rbmm.points_to_analysis.m"
            {
#line 169 "rbmm.points_to_analysis.m"
              {
#line 169 "rbmm.points_to_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.intra_analyse_goal_expr\'/3", (MR_String) "shorthand");
#line 169 "rbmm.points_to_analysis.m"
                return;
              }
#line 167 "rbmm.points_to_analysis.m"
            }
#line 123 "rbmm.points_to_analysis.m"
            break;
#line 123 "rbmm.points_to_analysis.m"
        }
#line 123 "rbmm.points_to_analysis.m"
        break;
#line 123 "rbmm.points_to_analysis.m"
    }
#line 123 "rbmm.points_to_analysis.m"
  }
#line 120 "rbmm.points_to_analysis.m"
}

#line 113 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_3_p_0(
#line 113 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__Goal_4,
#line 113 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8,
#line 113 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9)
#line 113 "rbmm.points_to_analysis.m"
{
#line 116 "rbmm.points_to_analysis.m"
  {
#line 116 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 116 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_4, (MR_Integer) 0)));
#line 117 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_4, (MR_Integer) 1)));

#line 118 "rbmm.points_to_analysis.m"
    {
#line 118 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_6, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_0_8, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_RptaInfo_9);
#line 118 "rbmm.points_to_analysis.m"
      return;
    }
#line 116 "rbmm.points_to_analysis.m"
  }
#line 113 "rbmm.points_to_analysis.m"
}

#line 98 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_6,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_7,
#line 98 "rbmm.points_to_analysis.m"
  MR_Integer transform_hlds__rbmm__points_to_analysis__ProcId_8,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15,
#line 98 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16)
#line 98 "rbmm.points_to_analysis.m"
{
#line 101 "rbmm.points_to_analysis.m"
  {
#line 101 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 101 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__PPId_10;
#line 103 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_17_17;

#line 102 "rbmm.points_to_analysis.m"
    {
#line 102 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__PPId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 102 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__PPId_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_7));
#line 102 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__PPId_10, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ProcId_8));
#line 102 "rbmm.points_to_analysis.m"
    }
#line 103 "rbmm.points_to_analysis.m"
    {
#line 103 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__V_17_17, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PPId_10));
#line 103 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "rbmm.points_to_analysis.m"
    }
#line 103 "rbmm.points_to_analysis.m"
    {
#line 103 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__points_to_analysis__V_17_17, transform_hlds__rbmm__points_to_analysis__ModuleInfo_6);
    }
#line 105 "rbmm.points_to_analysis.m"
    if (transform_hlds__rbmm__points_to_analysis__succeeded)
#line 105 "rbmm.points_to_analysis.m"
      *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15;
#line 105 "rbmm.points_to_analysis.m"
    else
#line 106 "rbmm.points_to_analysis.m"
      {
#line 106 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__ProcInfo_11;
#line 106 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo0_12;
#line 106 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__Goal_13;
#line 106 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__RptaInfo_14;
#line 106 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__GoalExpr_24;
#line 117 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__V_25_25;

#line 106 "rbmm.points_to_analysis.m"
        {
#line 106 "rbmm.points_to_analysis.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_6, transform_hlds__rbmm__points_to_analysis__PPId_10, &transform_hlds__rbmm__points_to_analysis__ProcInfo_11);
        }
#line 107 "rbmm.points_to_analysis.m"
        {
#line 107 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__RptaInfo0_12 = transform_hlds__rbmm__points_to_info__rpta_info_init_1_f_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_11);
        }
#line 108 "rbmm.points_to_analysis.m"
        {
#line 108 "rbmm.points_to_analysis.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__points_to_analysis__ProcInfo_11, &transform_hlds__rbmm__points_to_analysis__Goal_13);
        }
#line 117 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_13, (MR_Integer) 0)));
#line 117 "rbmm.points_to_analysis.m"
        transform_hlds__rbmm__points_to_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__Goal_13, (MR_Integer) 1)));
#line 118 "rbmm.points_to_analysis.m"
        {
#line 118 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__intra_analyse_goal_expr_3_p_0(transform_hlds__rbmm__points_to_analysis__GoalExpr_24, transform_hlds__rbmm__points_to_analysis__RptaInfo0_12, &transform_hlds__rbmm__points_to_analysis__RptaInfo_14);
        }
#line 110 "rbmm.points_to_analysis.m"
        {
#line 110 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_p_0(transform_hlds__rbmm__points_to_analysis__PPId_10, transform_hlds__rbmm__points_to_analysis__RptaInfo_14, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_15, transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_16);
#line 110 "rbmm.points_to_analysis.m"
          return;
        }
#line 106 "rbmm.points_to_analysis.m"
      }
#line 101 "rbmm.points_to_analysis.m"
  }
#line 98 "rbmm.points_to_analysis.m"
}

#line 96 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1(
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 96 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 96 "rbmm.points_to_analysis.m"
{
#line 96 "rbmm.points_to_analysis.m"
  {
#line 96 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 96 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16;

#line 96 "rbmm.points_to_analysis.m"
    {
#line 96 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16);
    }
#line 96 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_16));
#line 96 "rbmm.points_to_analysis.m"
  }
#line 96 "rbmm.points_to_analysis.m"
}

#line 90 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_5,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__PredId_6,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10,
#line 90 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11)
#line 90 "rbmm.points_to_analysis.m"
{
#line 93 "rbmm.points_to_analysis.m"
  {
#line 93 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 93 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__PredInfo_8;
#line 93 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ProcIds_9;
#line 93 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_12_12;
#line 96 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11;

#line 94 "rbmm.points_to_analysis.m"
    {
#line 94 "rbmm.points_to_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_5, transform_hlds__rbmm__points_to_analysis__PredId_6, &transform_hlds__rbmm__points_to_analysis__PredInfo_8);
    }
#line 95 "rbmm.points_to_analysis.m"
    {
#line 95 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__points_to_analysis__PredInfo_8);
    }
#line 96 "rbmm.points_to_analysis.m"
    {
#line 96 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 96 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_4[0]));
#line 96 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0_1));
#line 96 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 96 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_5));
#line 96 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__PredId_6));
#line 96 "rbmm.points_to_analysis.m"
    }
#line 96 "rbmm.points_to_analysis.m"
    {
#line 96 "rbmm.points_to_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__V_12_12, transform_hlds__rbmm__points_to_analysis__ProcIds_9, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_0_10)), &transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11);
    }
#line 96 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_InfoTable_11 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_STATE_VARIABLE_InfoTable_11);
#line 93 "rbmm.points_to_analysis.m"
  }
#line 90 "rbmm.points_to_analysis.m"
}

#line 280 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2(
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 280 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 280 "rbmm.points_to_analysis.m"
{
#line 280 "rbmm.points_to_analysis.m"
  {
#line 280 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 280 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10;

#line 280 "rbmm.points_to_analysis.m"
    {
#line 280 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__run_with_dependency_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10);
    }
#line 280 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv2_STATE_VARIABLE_InfoTable_10));
#line 280 "rbmm.points_to_analysis.m"
  }
#line 280 "rbmm.points_to_analysis.m"
}

#line 88 "rbmm.points_to_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1(
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__closure_arg,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_1,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box transform_hlds__rbmm__points_to_analysis__wrapper_arg_2,
#line 88 "rbmm.points_to_analysis.m"
  MR_Box * transform_hlds__rbmm__points_to_analysis__wrapper_arg_3)
#line 88 "rbmm.points_to_analysis.m"
{
#line 88 "rbmm.points_to_analysis.m"
  {
#line 88 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__closure = transform_hlds__rbmm__points_to_analysis__closure_arg;
#line 88 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11;

#line 88 "rbmm.points_to_analysis.m"
    {
#line 88 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__intra_proc_rpta_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_analysis__wrapper_arg_2), &transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11);
    }
#line 88 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__conv0_STATE_VARIABLE_InfoTable_11));
#line 88 "rbmm.points_to_analysis.m"
  }
#line 88 "rbmm.points_to_analysis.m"
}

#line 42 "rbmm.points_to_analysis.m"
void MR_CALL 
transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(
#line 42 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__InfoTable_4,
#line 42 "rbmm.points_to_analysis.m"
  MR_Word transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8,
#line 42 "rbmm.points_to_analysis.m"
  MR_Word * transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_9)
#line 42 "rbmm.points_to_analysis.m"
{
#line 73 "rbmm.points_to_analysis.m"
  {
#line 73 "rbmm.points_to_analysis.m"
    MR_bool transform_hlds__rbmm__points_to_analysis__succeeded;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable0_6;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__InfoTable1_7;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__PredIds_14;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__V_15_15;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__ModuleInfo_26;
#line 73 "rbmm.points_to_analysis.m"
    MR_Word transform_hlds__rbmm__points_to_analysis__MaybeDepInfo_27;
#line 88 "rbmm.points_to_analysis.m"
    MR_Box transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7;

#line 74 "rbmm.points_to_analysis.m"
    {
#line 74 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__InfoTable0_6 = transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_f_0();
    }
#line 87 "rbmm.points_to_analysis.m"
    {
#line 87 "rbmm.points_to_analysis.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__rbmm__points_to_analysis__PredIds_14);
    }
#line 88 "rbmm.points_to_analysis.m"
    {
#line 88 "rbmm.points_to_analysis.m"
      transform_hlds__rbmm__points_to_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 88 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[0]));
#line 88 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_1));
#line 88 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 88 "rbmm.points_to_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8));
#line 88 "rbmm.points_to_analysis.m"
    }
#line 88 "rbmm.points_to_analysis.m"
    {
#line 88 "rbmm.points_to_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__V_15_15, transform_hlds__rbmm__points_to_analysis__PredIds_14, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable0_6)), &transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7);
    }
#line 88 "rbmm.points_to_analysis.m"
    transform_hlds__rbmm__points_to_analysis__InfoTable1_7 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv1_InfoTable1_7);
#line 265 "rbmm.points_to_analysis.m"
    {
#line 265 "rbmm.points_to_analysis.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__rbmm__points_to_analysis__ModuleInfo_26);
    }
#line 266 "rbmm.points_to_analysis.m"
    {
#line 266 "rbmm.points_to_analysis.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__rbmm__points_to_analysis__ModuleInfo_26, &transform_hlds__rbmm__points_to_analysis__MaybeDepInfo_27);
    }
#line 271 "rbmm.points_to_analysis.m"
    if ((transform_hlds__rbmm__points_to_analysis__MaybeDepInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "rbmm.points_to_analysis.m"
      {
#line 273 "rbmm.points_to_analysis.m"
        {
#line 273 "rbmm.points_to_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_analysis", (MR_String) "predicate \140transform_hlds.rbmm.points_to_analysis.inter_proc_rpta\'/3", (MR_String) "no dependency information");
#line 273 "rbmm.points_to_analysis.m"
          return;
        }
#line 272 "rbmm.points_to_analysis.m"
      }
#line 271 "rbmm.points_to_analysis.m"
    else
#line 268 "rbmm.points_to_analysis.m"
      {
#line 268 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__DepInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_analysis__MaybeDepInfo_27, (MR_Integer) 0)));
#line 268 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__DepOrdering_29;
#line 268 "rbmm.points_to_analysis.m"
        MR_Word transform_hlds__rbmm__points_to_analysis__V_40_40;
#line 280 "rbmm.points_to_analysis.m"
        MR_Box transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4;

#line 269 "rbmm.points_to_analysis.m"
        {
#line 269 "rbmm.points_to_analysis.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__points_to_analysis__DepInfo_28, &transform_hlds__rbmm__points_to_analysis__DepOrdering_29);
        }
#line 280 "rbmm.points_to_analysis.m"
        {
#line 280 "rbmm.points_to_analysis.m"
          transform_hlds__rbmm__points_to_analysis__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_analysis_scalar_common_3[1]));
#line 280 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0_2));
#line 280 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "rbmm.points_to_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_analysis__V_40_40, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_analysis__ModuleInfo_26));
#line 280 "rbmm.points_to_analysis.m"
        }
#line 280 "rbmm.points_to_analysis.m"
        {
#line 280 "rbmm.points_to_analysis.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_2[1], (MR_Word) &transform_hlds__rbmm__points_to_analysis_scalar_common_1[0], transform_hlds__rbmm__points_to_analysis__V_40_40, transform_hlds__rbmm__points_to_analysis__DepOrdering_29, ((MR_Box) (transform_hlds__rbmm__points_to_analysis__InfoTable1_7)), &transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4);
        }
#line 280 "rbmm.points_to_analysis.m"
        *transform_hlds__rbmm__points_to_analysis__InfoTable_4 = ((MR_Word) transform_hlds__rbmm__points_to_analysis__conv3_InfoTable_4);
#line 268 "rbmm.points_to_analysis.m"
      }
#line 73 "rbmm.points_to_analysis.m"
    *transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__rbmm__points_to_analysis__STATE_VARIABLE_ModuleInfo_0_8;
#line 73 "rbmm.points_to_analysis.m"
  }
#line 42 "rbmm.points_to_analysis.m"
}

void mercury__transform_hlds__rbmm__points_to_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__points_to_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_analysis__transform_hlds__rbmm__points_to_analysis__type_ctor_info_rpta_fixpoint_table_0);
}

void mercury__transform_hlds__rbmm__points_to_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.points_to_analysis. */
