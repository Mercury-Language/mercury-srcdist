/*
** Automatically generated from `rbmm.interproc_region_lifetime.m'
** by the Mercury compiler,
** version rotd-2025-09-05
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


// :- module transform_hlds.rbmm.interproc_region_lifetime.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__interproc_region_lifetime__init
ENDINIT
*/

#include "transform_hlds.rbmm.interproc_region_lifetime.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"



struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_VA_PseudoTypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_VA_TypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Graph_8,
  MR_Word ProgPoint_9,
  MR_Word RegionSet0_10,
  MR_Word STATE_VARIABLE_LRProc_0_13,
  MR_Word * STATE_VARIABLE_LRProc_14);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word LRProc0_10,
  MR_Word STATE_VARIABLE_LRTable_0_16,
  MR_Word * STATE_VARIABLE_LRTable_17);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Graph_7,
  MR_Word Region_8,
  MR_Word STATE_VARIABLE_RegionSet_0_11,
  MR_Word * STATE_VARIABLE_RegionSet_12);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word RegionSet0_10,
  MR_Word STATE_VARIABLE_RegionSetTable_0_16,
  MR_Word * STATE_VARIABLE_RegionSetTable_17);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
  MR_Word ToBeRemovedRegion_6,
  MR_Word Source_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
  MR_Word PPId_8,
  MR_Word ExecPathTable_9,
  MR_Word ModuleInfo_10,
  MR_Word RptaInfoTable_11,
  MR_Word Region_12,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_15,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_16);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2,
  MR_Word Region_3,
  MR_Word ExecPathTable_4,
  MR_Word ModuleInfo_5,
  MR_Word RptaInfoTable_6,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_7,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_8);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2,
  MR_Word ToBeRemovedRegion_3,
  MR_Word ExecPathTable_4,
  MR_Word ModuleInfo_5,
  MR_Word RptaInfoTable_6,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_7,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_8);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
  MR_Word _Source_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Candidates_0_11,
  MR_Word * STATE_VARIABLE_Candidates_12,
  MR_Word STATE_VARIABLE_Targets_0_13,
  MR_Word * STATE_VARIABLE_Targets_14);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Candidates_0_11,
  MR_Word * STATE_VARIABLE_Candidates_12,
  MR_Word STATE_VARIABLE_Targets_0_13,
  MR_Word * STATE_VARIABLE_Targets_14);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_BornR_q_0_10,
  MR_Word * STATE_VARIABLE_BornR_q_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_BornR_q_0_10,
  MR_Word * STATE_VARIABLE_BornR_q_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word HeadVar__3_9,
  MR_Word BornRTable_10,
  MR_Word AlphaAtCallSite_11,
  MR_Word * BornR_q_12);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word BornRTable_10,
  MR_Word AlphaAtCallSite_11,
  MR_Word * BornR_q_12);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_DeadR_q_0_10,
  MR_Word * STATE_VARIABLE_DeadR_q_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_DeadR_q_0_10,
  MR_Word * STATE_VARIABLE_DeadR_q_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word LRAfter_9,
  MR_Word DeadRTable_10,
  MR_Word AlphaAtPP_11,
  MR_Word * DeadR_q_12);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
  MR_Word Rule_10,
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ExecPathTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_22,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_23);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ExecPathTable_3,
  MR_Word ModuleInfo_4,
  MR_Word RptaInfo_6,
  MR_Word RptaInfoTable_7,
  MR_Word ProcLRBefore_8,
  MR_Word ProcLRAfter_9,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_10,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ExecPathTable_3,
  MR_Word ModuleInfo_4,
  MR_Word RptaInfo_6,
  MR_Word RptaInfoTable_7,
  MR_Word ProcLRBefore_8,
  MR_Word ProcLRAfter_9,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_10,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_11);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
  MR_Word Rule_10,
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ExecPathTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word SCC_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_18,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_19);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
  MR_Word Rule_10,
  MR_Word SCC_11,
  MR_Word ModuleInfo_12,
  MR_Word RptaInfoTable_13,
  MR_Word ExecPathTable_14,
  MR_Word LRBeforeTable_15,
  MR_Word LRAfterTable_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_19,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_20);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
  MR_Word InputRTable_8,
  MR_Word OutputRTable_9,
  MR_Word BornRTable_10,
  MR_Word PPId_11,
  MR_Word DeadR_12,
  MR_Word STATE_VARIABLE_ConstantRTable_0_20,
  MR_Word * STATE_VARIABLE_ConstantRTable_21);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[5][9];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[2][10];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1][7];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[2][8];




static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_VA_TypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__interproc_region_lifetime__transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.interproc_region_lifetime",
  (MR_String) "rule_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__HeadVar__3_13 = HeadVar__3_13;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_5, ((MR_Box) (Region_6)), &(env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__HeadVar__3_13 = HeadVar__3_13;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_5, ((MR_Box) (Region_6)), &(env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__HeadVar__3_13 = HeadVar__3_13;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_5, ((MR_Box) (Region_6)), &(env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__HeadVar__3_13 = HeadVar__3_13;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), AlphaAtCallSite_5, ((MR_Box) (Region_6)), &(env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RegionSet_12;

  transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RegionSet_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RegionSet_12));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Graph_8,
  MR_Word ProgPoint_9,
  MR_Word RegionSet0_10,
  MR_Word STATE_VARIABLE_LRProc_0_13,
  MR_Word * STATE_VARIABLE_LRProc_14)
{
  MR_Word RegionSet_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Box conv1_RegionSet_12;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Graph_8));
  }
  Var_16 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_15, RegionSet0_10, ((MR_Box) (Var_16)), &conv1_RegionSet_12);
  RegionSet_12 = ((MR_Word) (conv1_RegionSet_12));
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ((MR_Box) (ProgPoint_9)), ((MR_Box) (RegionSet_12)), STATE_VARIABLE_LRProc_0_13, STATE_VARIABLE_LRProc_14);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_LRProc_14;

  transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_LRProc_14);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_LRProc_14));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word LRProc0_10,
  MR_Word STATE_VARIABLE_LRTable_0_16,
  MR_Word * STATE_VARIABLE_LRTable_17)
{
  MR_Word RptaInfo_12;
  MR_Word Graph_13;
  MR_Word LRProc_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv0_RptaInfo_12;
  MR_Box conv2_LRProc_15;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_8, ((MR_Box) (PPId_9)), &conv0_RptaInfo_12);
  RptaInfo_12 = ((MR_Word) (conv0_RptaInfo_12));
  Graph_13 = ((MR_Word) ((MR_hl_field(0, RptaInfo_12, 0))));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[4]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Graph_13));
  }
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), Var_18, LRProc0_10, ((MR_Box) (Var_19)), &conv2_LRProc_15);
  LRProc_15 = ((MR_Word) (conv2_LRProc_15));
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), ((MR_Box) (PPId_9)), ((MR_Box) (LRProc_15)), STATE_VARIABLE_LRTable_0_16, STATE_VARIABLE_LRTable_17);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Graph_7,
  MR_Word Region_8,
  MR_Word STATE_VARIABLE_RegionSet_0_11,
  MR_Word * STATE_VARIABLE_RegionSet_12)
{
  MR_bool succeeded;
  MR_Word NodeType_10;

  NodeType_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(Graph_7, Region_8);
  succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(NodeType_10, ModuleInfo_6);
  if (succeeded)
    *STATE_VARIABLE_RegionSet_12 = STATE_VARIABLE_RegionSet_0_11;
  else
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (Region_8)), STATE_VARIABLE_RegionSet_0_11, STATE_VARIABLE_RegionSet_12);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RegionSet_12;

  transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RegionSet_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RegionSet_12));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word RegionSet0_10,
  MR_Word STATE_VARIABLE_RegionSetTable_0_16,
  MR_Word * STATE_VARIABLE_RegionSetTable_17)
{
  MR_Word RptaInfo_12;
  MR_Word Graph_13;
  MR_Word RegionSet_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv0_RptaInfo_12;
  MR_Box conv2_RegionSet_15;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_8, ((MR_Box) (PPId_9)), &conv0_RptaInfo_12);
  RptaInfo_12 = ((MR_Word) (conv0_RptaInfo_12));
  Graph_13 = ((MR_Word) ((MR_hl_field(0, RptaInfo_12, 0))));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Graph_13));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_18, RegionSet0_10, ((MR_Box) (Var_19)), &conv2_RegionSet_15);
  RegionSet_15 = ((MR_Word) (conv2_RegionSet_15));
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ((MR_Box) (PPId_9)), ((MR_Box) (RegionSet_15)), STATE_VARIABLE_RegionSetTable_0_16, STATE_VARIABLE_RegionSetTable_17);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
  MR_Word ToBeRemovedRegion_6,
  MR_Word Source_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11)
{
  MR_bool succeeded;
  MR_Integer Var_14 = (MR_Integer) (ToBeRemovedRegion_6);
  MR_Integer Var_15 = (MR_Integer) (Target_8);

  succeeded = (Var_14 == Var_15);
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (Source_7)), STATE_VARIABLE_Rs_0_10, STATE_VARIABLE_Rs_11);
  else
    *STATE_VARIABLE_Rs_11 = STATE_VARIABLE_Rs_0_10;
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
  MR_Word PPId_8,
  MR_Word ExecPathTable_9,
  MR_Word ModuleInfo_10,
  MR_Word RptaInfoTable_11,
  MR_Word Region_12,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_15,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_16)
{
  MR_Word ExecPaths_14;
  MR_Box conv0_ExecPaths_14;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3]), ExecPathTable_9, ((MR_Box) (PPId_8)), &conv0_ExecPaths_14);
  ExecPaths_14 = ((MR_Word) (conv0_ExecPaths_14));
  transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(ExecPaths_14, PPId_8, Region_12, ExecPathTable_9, ModuleInfo_10, RptaInfoTable_11, STATE_VARIABLE_ProcRegionSetTable_0_15, STATE_VARIABLE_ProcRegionSetTable_16);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2,
  MR_Word Region_3,
  MR_Word ExecPathTable_4,
  MR_Word ModuleInfo_5,
  MR_Word RptaInfoTable_6,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_7,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcRegionSetTable_8 = STATE_VARIABLE_ProcRegionSetTable_0_7;
    else
    {
      MR_Word ExecPath_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ExecPaths_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ProcRegionSetTable_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7;

      transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(ExecPath_17, PPId_2, Region_3, ExecPathTable_4, ModuleInfo_5, RptaInfoTable_6, STATE_VARIABLE_ProcRegionSetTable_0_7, &STATE_VARIABLE_ProcRegionSetTable_1_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ExecPaths_18;
      next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7 = STATE_VARIABLE_ProcRegionSetTable_1_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcRegionSetTable_0_7 = next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ProcRegionSetTable_16;

  transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ProcRegionSetTable_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ProcRegionSetTable_16));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Rs_11;

  transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Rs_11);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Rs_11));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PPId_2,
  MR_Word ToBeRemovedRegion_3,
  MR_Word ExecPathTable_4,
  MR_Word ModuleInfo_5,
  MR_Word RptaInfoTable_6,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_7,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcRegionSetTable_8 = STATE_VARIABLE_ProcRegionSetTable_0_7;
    else
    {
      MR_Word ProgPoint_17;
      MR_Word Goal_18;
      MR_Word ProgPoint_Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Expr_26;
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_ProcRegionSetTable_2_53;
      MR_Word CalleePredId_28;
      MR_Integer CalleeProcId_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7;

      ProgPoint_17 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
      Goal_18 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
      Expr_26 = ((MR_Word) ((MR_hl_field(0, Goal_18, 0))));
      succeeded = ((MR_tag((MR_Word) Expr_26)) == (MR_Integer) 2);
      if (succeeded)
      {
        CalleePredId_28 = ((MR_Word) ((MR_hl_field(2, Expr_26, 0))));
        CalleeProcId_29 = ((MR_Integer) ((MR_hl_field(2, Expr_26, 1))));
        {
          MR_Word CalleePPId_34;
          MR_Word Var_46;

          {
            CalleePPId_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePPId_34, 0) = ((MR_Box) (CalleePredId_28));
            MR_hl_field(0, CalleePPId_34, 1) = ((MR_Box) (CalleeProcId_29));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (CalleePPId_34));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_46, ModuleInfo_5);
          if (succeeded)
            STATE_VARIABLE_ProcRegionSetTable_2_53 = STATE_VARIABLE_ProcRegionSetTable_0_7;
          else
          {
            MR_Word RptaInfo_p_35;
            MR_Word AlphaMapping_37;
            MR_Word AlphaAtCallSite_38;
            MR_Word Rs_39;
            MR_Word RegionSet0_40;
            MR_Word RegionSet1_41;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Box conv0_RptaInfo_p_35;
            MR_Box conv1_AlphaAtCallSite_38;
            MR_Box conv3_Rs_39;
            MR_Box conv4_RegionSet0_40;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_6, ((MR_Box) (PPId_2)), &conv0_RptaInfo_p_35);
            RptaInfo_p_35 = ((MR_Word) (conv0_RptaInfo_p_35));
            AlphaMapping_37 = ((MR_Word) ((MR_hl_field(0, RptaInfo_p_35, 1))));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4]), AlphaMapping_37, ((MR_Box) (ProgPoint_17)), &conv1_AlphaAtCallSite_38);
            AlphaAtCallSite_38 = ((MR_Word) (conv1_AlphaAtCallSite_38));
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (ToBeRemovedRegion_3));
            }
            Var_49 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_48, AlphaAtCallSite_38, ((MR_Box) (Var_49)), &conv3_Rs_39);
            Rs_39 = ((MR_Word) (conv3_Rs_39));
            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), STATE_VARIABLE_ProcRegionSetTable_0_7, ((MR_Box) (CalleePPId_34)), &conv4_RegionSet0_40);
            RegionSet0_40 = ((MR_Word) (conv4_RegionSet0_40));
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RegionSet0_40, Rs_39, &RegionSet1_41);
            succeeded = mercury__set__equal_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RegionSet0_40, RegionSet1_41);
            if (succeeded)
              STATE_VARIABLE_ProcRegionSetTable_2_53 = STATE_VARIABLE_ProcRegionSetTable_0_7;
            else
            {
              MR_Word RemovedFromQ_42;
              MR_Word STATE_VARIABLE_ProcRegionSetTable_1_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Box conv6_STATE_VARIABLE_ProcRegionSetTable_2_53;

              mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ((MR_Box) (CalleePPId_34)), ((MR_Box) (RegionSet1_41)), STATE_VARIABLE_ProcRegionSetTable_0_7, &STATE_VARIABLE_ProcRegionSetTable_1_50);
              mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RegionSet0_40, RegionSet1_41, &RemovedFromQ_42);
              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[1]));
                MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2));
                MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_51, 3) = ((MR_Box) (CalleePPId_34));
                MR_hl_field(0, Var_51, 4) = ((MR_Box) (ExecPathTable_4));
                MR_hl_field(0, Var_51, 5) = ((MR_Box) (ModuleInfo_5));
                MR_hl_field(0, Var_51, 6) = ((MR_Box) (RptaInfoTable_6));
              }
              Var_52 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RemovedFromQ_42);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_51, Var_52, ((MR_Box) (STATE_VARIABLE_ProcRegionSetTable_1_50)), &conv6_STATE_VARIABLE_ProcRegionSetTable_2_53);
              STATE_VARIABLE_ProcRegionSetTable_2_53 = ((MR_Word) (conv6_STATE_VARIABLE_ProcRegionSetTable_2_53));
            }
          }
        }
      }
      else
        STATE_VARIABLE_ProcRegionSetTable_2_53 = STATE_VARIABLE_ProcRegionSetTable_0_7;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProgPoint_Goals_19;
      next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7 = STATE_VARIABLE_ProcRegionSetTable_2_53;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcRegionSetTable_0_7 = next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
  MR_Word _Source_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Candidates_0_11,
  MR_Word * STATE_VARIABLE_Candidates_12,
  MR_Word STATE_VARIABLE_Targets_0_13,
  MR_Word * STATE_VARIABLE_Targets_14)
{
  transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(Target_8, STATE_VARIABLE_Candidates_0_11, STATE_VARIABLE_Candidates_12, STATE_VARIABLE_Targets_0_13, STATE_VARIABLE_Targets_14);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Candidates_0_11,
  MR_Word * STATE_VARIABLE_Candidates_12,
  MR_Word STATE_VARIABLE_Targets_0_13,
  MR_Word * STATE_VARIABLE_Targets_14)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_Candidates_0_11, ((MR_Box) (Target_8)));
  if (succeeded)
  {
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (Target_8)), STATE_VARIABLE_Targets_0_13, STATE_VARIABLE_Targets_14);
    *STATE_VARIABLE_Candidates_12 = STATE_VARIABLE_Candidates_0_11;
  }
  else
  {
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (Target_8)), STATE_VARIABLE_Candidates_0_11, STATE_VARIABLE_Candidates_12);
    *STATE_VARIABLE_Targets_14 = STATE_VARIABLE_Targets_0_13;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__397__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_BornR_q_0_10,
  MR_Word * STATE_VARIABLE_BornR_q_11)
{
  MR_Word SourceList_8;
  MR_Word RPrimes_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (AlphaAtCallSite_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Region_6));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_12, &SourceList_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SourceList_8, &RPrimes_9);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_BornR_q_0_10, RPrimes_9, STATE_VARIABLE_BornR_q_11);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__386__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_BornR_q_0_10,
  MR_Word * STATE_VARIABLE_BornR_q_11)
{
  MR_Word SourceList_8;
  MR_Word RPrimes_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (AlphaAtCallSite_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Region_6));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_12, &SourceList_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SourceList_8, &RPrimes_9);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_BornR_q_0_10, RPrimes_9, STATE_VARIABLE_BornR_q_11);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word HeadVar__3_9,
  MR_Word BornRTable_10,
  MR_Word AlphaAtCallSite_11,
  MR_Word * BornR_q_12)
{
  transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(Q_Id_7, LRBefore_8, BornRTable_10, AlphaAtCallSite_11, BornR_q_12);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_BornR_q_11;

  transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_BornR_q_11);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_BornR_q_11));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Candidates_12;
  MR_Word conv3_STATE_VARIABLE_Targets_14;

  transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Targets_14);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Candidates_12));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Targets_14));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_BornR_q_11;

  transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BornR_q_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BornR_q_11));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word BornRTable_10,
  MR_Word AlphaAtCallSite_11,
  MR_Word * BornR_q_12)
{
  MR_Word BornR_q0_13;
  MR_Word BornR_q1_14;
  MR_Word Targets_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Box conv0_BornR_q0_13;
  MR_Box conv2_BornR_q1_14;
  MR_Box conv6__Processed_24;
  MR_Box conv5_Targets_15;
  MR_Box conv8_BornR_q_12;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), BornRTable_10, ((MR_Box) (Q_Id_7)), &conv0_BornR_q0_13);
  BornR_q0_13 = ((MR_Word) (conv0_BornR_q0_13));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (AlphaAtCallSite_11));
  }
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_16, LRBefore_8, ((MR_Box) (BornR_q0_13)), &conv2_BornR_q1_14);
  BornR_q1_14 = ((MR_Word) (conv2_BornR_q1_14));
  Var_26 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  Var_27 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[8]), AlphaAtCallSite_11, ((MR_Box) (Var_26)), &conv6__Processed_24, ((MR_Box) (Var_27)), &conv5_Targets_15);
  Targets_15 = ((MR_Word) (conv5_Targets_15));
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (AlphaAtCallSite_11));
  }
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_17, Targets_15, ((MR_Box) (BornR_q1_14)), &conv8_BornR_q_12);
  *BornR_q_12 = ((MR_Word) (conv8_BornR_q_12));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__358__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_DeadR_q_0_10,
  MR_Word * STATE_VARIABLE_DeadR_q_11)
{
  MR_Word SourceList_8;
  MR_Word RPrimes_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (AlphaAtCallSite_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Region_6));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_12, &SourceList_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SourceList_8, &RPrimes_9);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_DeadR_q_0_10, RPrimes_9, STATE_VARIABLE_DeadR_q_11);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__348__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
  MR_Word AlphaAtCallSite_5,
  MR_Word Region_6,
  MR_Word STATE_VARIABLE_DeadR_q_0_10,
  MR_Word * STATE_VARIABLE_DeadR_q_11)
{
  MR_Word SourceList_8;
  MR_Word RPrimes_9;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (AlphaAtCallSite_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Region_6));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_12, &SourceList_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SourceList_8, &RPrimes_9);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_DeadR_q_0_10, RPrimes_9, STATE_VARIABLE_DeadR_q_11);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_DeadR_q_11;

  transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_DeadR_q_11);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_DeadR_q_11));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Candidates_12;
  MR_Word conv3_STATE_VARIABLE_Targets_14;

  transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Targets_14);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Candidates_12));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Targets_14));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DeadR_q_11;

  transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeadR_q_11);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeadR_q_11));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
  MR_Word Q_Id_7,
  MR_Word LRBefore_8,
  MR_Word LRAfter_9,
  MR_Word DeadRTable_10,
  MR_Word AlphaAtPP_11,
  MR_Word * DeadR_q_12)
{
  MR_Word DeadR_q0_13;
  MR_Word Rule1_Candidate_14;
  MR_Word DeadR_q1_15;
  MR_Word Targets_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Box conv0_DeadR_q0_13;
  MR_Box conv2_DeadR_q1_15;
  MR_Box conv6__Processed_22;
  MR_Box conv5_Targets_16;
  MR_Box conv8_DeadR_q_12;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), DeadRTable_10, ((MR_Box) (Q_Id_7)), &conv0_DeadR_q0_13);
  DeadR_q0_13 = ((MR_Word) (conv0_DeadR_q0_13));
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRBefore_8, LRAfter_9, &Rule1_Candidate_14);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (AlphaAtPP_11));
  }
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_17, Rule1_Candidate_14, ((MR_Box) (DeadR_q0_13)), &conv2_DeadR_q1_15);
  DeadR_q1_15 = ((MR_Word) (conv2_DeadR_q1_15));
  Var_24 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  Var_25 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[7]), AlphaAtPP_11, ((MR_Box) (Var_24)), &conv6__Processed_22, ((MR_Box) (Var_25)), &conv5_Targets_16);
  Targets_16 = ((MR_Word) (conv5_Targets_16));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (AlphaAtPP_11));
  }
  mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), Var_18, Targets_16, ((MR_Box) (DeadR_q1_15)), &conv8_DeadR_q_12);
  *DeadR_q_12 = ((MR_Word) (conv8_DeadR_q_12));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
  MR_Word Rule_10,
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ExecPathTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_22,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_23)
{
  MR_Word RptaInfo_18;
  MR_Word EPs_19;
  MR_Word ProcLRBefore_20;
  MR_Word ProcLRAfter_21;
  MR_Box conv0_RptaInfo_18;
  MR_Box conv1_EPs_19;
  MR_Box conv2_ProcLRBefore_20;
  MR_Box conv3_ProcLRAfter_21;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_12, ((MR_Box) (PPId_16)), &conv0_RptaInfo_18);
  RptaInfo_18 = ((MR_Word) (conv0_RptaInfo_18));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3]), ExecPathTable_13, ((MR_Box) (PPId_16)), &conv1_EPs_19);
  EPs_19 = ((MR_Word) (conv1_EPs_19));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), LRBeforeTable_14, ((MR_Box) (PPId_16)), &conv2_ProcLRBefore_20);
  ProcLRBefore_20 = ((MR_Word) (conv2_ProcLRBefore_20));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), LRAfterTable_15, ((MR_Box) (PPId_16)), &conv3_ProcLRAfter_21);
  ProcLRAfter_21 = ((MR_Word) (conv3_ProcLRAfter_21));
  transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(Rule_10, EPs_19, ExecPathTable_13, ModuleInfo_11, RptaInfo_18, RptaInfoTable_12, ProcLRBefore_20, ProcLRAfter_21, STATE_VARIABLE_ProcRegionSetTable_0_22, STATE_VARIABLE_ProcRegionSetTable_23);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ExecPathTable_3,
  MR_Word ModuleInfo_4,
  MR_Word RptaInfo_6,
  MR_Word RptaInfoTable_7,
  MR_Word ProcLRBefore_8,
  MR_Word ProcLRAfter_9,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_10,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcRegionSetTable_11 = STATE_VARIABLE_ProcRegionSetTable_0_10;
    else
    {
      MR_Word ExecPath_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ExecPaths_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ProcRegionSetTable_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10;

      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(HeadVar__1_1, ExecPath_24, ExecPathTable_3, ModuleInfo_4, RptaInfo_6, RptaInfoTable_7, ProcLRBefore_8, ProcLRAfter_9, STATE_VARIABLE_ProcRegionSetTable_0_10, &STATE_VARIABLE_ProcRegionSetTable_1_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ExecPaths_25;
      next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10 = STATE_VARIABLE_ProcRegionSetTable_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProcRegionSetTable_0_10 = next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ProcRegionSetTable_16;

  transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ProcRegionSetTable_16);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ProcRegionSetTable_16));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ExecPathTable_3,
  MR_Word ModuleInfo_4,
  MR_Word RptaInfo_6,
  MR_Word RptaInfoTable_7,
  MR_Word ProcLRBefore_8,
  MR_Word ProcLRAfter_9,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_10,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcRegionSetTable_11 = STATE_VARIABLE_ProcRegionSetTable_0_10;
    else
    {
      MR_Word ProgPoint_24;
      MR_Word Goal_25;
      MR_Word ProgPoint_Goals_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Expr_35;
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_ProcRegionSetTable_2_60;
      MR_Word CalleePredId_37;
      MR_Integer CalleeProcId_38;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10;

      ProgPoint_24 = ((MR_Word) ((MR_hl_field(0, Var_54, 0))));
      Goal_25 = ((MR_Word) ((MR_hl_field(0, Var_54, 1))));
      Expr_35 = ((MR_Word) ((MR_hl_field(0, Goal_25, 0))));
      succeeded = ((MR_tag((MR_Word) Expr_35)) == (MR_Integer) 2);
      if (succeeded)
      {
        CalleePredId_37 = ((MR_Word) ((MR_hl_field(2, Expr_35, 0))));
        CalleeProcId_38 = ((MR_Integer) ((MR_hl_field(2, Expr_35, 1))));
        {
          MR_Word CalleePPId_43;
          MR_Word Var_55;

          {
            CalleePPId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePPId_43, 0) = ((MR_Box) (CalleePredId_37));
            MR_hl_field(0, CalleePPId_43, 1) = ((MR_Box) (CalleeProcId_38));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (CalleePPId_43));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_55, ModuleInfo_4);
          if (succeeded)
            STATE_VARIABLE_ProcRegionSetTable_2_60 = STATE_VARIABLE_ProcRegionSetTable_0_10;
          else
          {
            MR_Word AlphaMapping_45 = ((MR_Word) ((MR_hl_field(0, RptaInfo_6, 1))));
            MR_Word AlphaAtProgPoint_46;
            MR_Word LRBefore_47;
            MR_Word LRAfter_48;
            MR_Word RegionSet_49;
            MR_Word RegionSet0_50;
            MR_Box conv0_AlphaAtProgPoint_46;
            MR_Box conv1_LRBefore_47;
            MR_Box conv2_LRAfter_48;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv4_RegionSet_49;
            MR_Box conv5_RegionSet0_50;

            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4]), AlphaMapping_45, ((MR_Box) (ProgPoint_24)), &conv0_AlphaAtProgPoint_46);
            AlphaAtProgPoint_46 = ((MR_Word) (conv0_AlphaAtProgPoint_46));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ProcLRBefore_8, ((MR_Box) (ProgPoint_24)), &conv1_LRBefore_47);
            LRBefore_47 = ((MR_Word) (conv1_LRBefore_47));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ProcLRAfter_9, ((MR_Box) (ProgPoint_24)), &conv2_LRAfter_48);
            LRAfter_48 = ((MR_Word) (conv2_LRAfter_48));
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__1_1, 1))));
            func_3(((MR_Box) (HeadVar__1_1)), ((MR_Box) (CalleePPId_43)), ((MR_Box) (LRBefore_47)), ((MR_Box) (LRAfter_48)), ((MR_Box) (STATE_VARIABLE_ProcRegionSetTable_0_10)), ((MR_Box) (AlphaAtProgPoint_46)), &conv4_RegionSet_49);
            RegionSet_49 = ((MR_Word) (conv4_RegionSet_49));
            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), STATE_VARIABLE_ProcRegionSetTable_0_10, ((MR_Box) (CalleePPId_43)), &conv5_RegionSet0_50);
            RegionSet0_50 = ((MR_Word) (conv5_RegionSet0_50));
            succeeded = mercury__set__equal_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RegionSet_49, RegionSet0_50);
            if (succeeded)
              STATE_VARIABLE_ProcRegionSetTable_2_60 = STATE_VARIABLE_ProcRegionSetTable_0_10;
            else
            {
              MR_Word ToBeRemoved_51;
              MR_Word STATE_VARIABLE_ProcRegionSetTable_1_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Box conv7_STATE_VARIABLE_ProcRegionSetTable_2_60;

              mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ((MR_Box) (CalleePPId_43)), ((MR_Box) (RegionSet_49)), STATE_VARIABLE_ProcRegionSetTable_0_10, &STATE_VARIABLE_ProcRegionSetTable_1_57);
              mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RegionSet0_50, RegionSet_49, &ToBeRemoved_51);
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_58, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[1]));
                MR_hl_field(0, Var_58, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1));
                MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_58, 3) = ((MR_Box) (CalleePPId_43));
                MR_hl_field(0, Var_58, 4) = ((MR_Box) (ExecPathTable_3));
                MR_hl_field(0, Var_58, 5) = ((MR_Box) (ModuleInfo_4));
                MR_hl_field(0, Var_58, 6) = ((MR_Box) (RptaInfoTable_7));
              }
              Var_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ToBeRemoved_51);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_58, Var_59, ((MR_Box) (STATE_VARIABLE_ProcRegionSetTable_1_57)), &conv7_STATE_VARIABLE_ProcRegionSetTable_2_60);
              STATE_VARIABLE_ProcRegionSetTable_2_60 = ((MR_Word) (conv7_STATE_VARIABLE_ProcRegionSetTable_2_60));
            }
          }
        }
      }
      else
        STATE_VARIABLE_ProcRegionSetTable_2_60 = STATE_VARIABLE_ProcRegionSetTable_0_10;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProgPoint_Goals_26;
      next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10 = STATE_VARIABLE_ProcRegionSetTable_2_60;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProcRegionSetTable_0_10 = next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
  MR_Word Rule_10,
  MR_Word ModuleInfo_11,
  MR_Word RptaInfoTable_12,
  MR_Word ExecPathTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word SCC_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_18,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_19)
{
  MR_bool succeeded;
  MR_Word Var_20;

  Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_16);
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_20, ModuleInfo_11);
  if (succeeded)
    *STATE_VARIABLE_ProcRegionSetTable_19 = STATE_VARIABLE_ProcRegionSetTable_0_18;
  else
    transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(Rule_10, SCC_16, ModuleInfo_11, RptaInfoTable_12, ExecPathTable_13, LRBeforeTable_14, LRAfterTable_15, STATE_VARIABLE_ProcRegionSetTable_0_18, STATE_VARIABLE_ProcRegionSetTable_19);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcRegionSetTable_23;

  transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcRegionSetTable_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcRegionSetTable_23));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
  MR_Word Rule_10,
  MR_Word SCC_11,
  MR_Word ModuleInfo_12,
  MR_Word RptaInfoTable_13,
  MR_Word ExecPathTable_14,
  MR_Word LRBeforeTable_15,
  MR_Word LRAfterTable_16,
  MR_Word STATE_VARIABLE_ProcRegionSetTable_0_19,
  MR_Word * STATE_VARIABLE_ProcRegionSetTable_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ProcRegionSetTable1_18;
    MR_Word Var_21;
    MR_Box conv1_ProcRegionSetTable1_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[1]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (Rule_10));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(0, Var_21, 5) = ((MR_Box) (RptaInfoTable_13));
      MR_hl_field(0, Var_21, 6) = ((MR_Box) (ExecPathTable_14));
      MR_hl_field(0, Var_21, 7) = ((MR_Box) (LRBeforeTable_15));
      MR_hl_field(0, Var_21, 8) = ((MR_Box) (LRAfterTable_16));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_21, SCC_11, ((MR_Box) (STATE_VARIABLE_ProcRegionSetTable_0_19)), &conv1_ProcRegionSetTable1_18);
    ProcRegionSetTable1_18 = ((MR_Word) (conv1_ProcRegionSetTable1_18));
    succeeded = transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_p_0(ProcRegionSetTable1_18, STATE_VARIABLE_ProcRegionSetTable_0_19);
    if (succeeded)
      *STATE_VARIABLE_ProcRegionSetTable_20 = ProcRegionSetTable1_18;
    else
    {
      MR_Word next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_19 = ProcRegionSetTable1_18;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_ProcRegionSetTable_0_19 = next_value_of_STATE_VARIABLE_ProcRegionSetTable_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
  MR_Word InputRTable_8,
  MR_Word OutputRTable_9,
  MR_Word BornRTable_10,
  MR_Word PPId_11,
  MR_Word DeadR_12,
  MR_Word STATE_VARIABLE_ConstantRTable_0_20,
  MR_Word * STATE_VARIABLE_ConstantRTable_21)
{
  MR_Word InputR_14;
  MR_Word OutputR_15;
  MR_Word BornR_16;
  MR_Word InputOutputR0_17;
  MR_Word InputOutputR_18;
  MR_Word ConstantR_19;
  MR_Box conv0_InputR_14;
  MR_Box conv1_OutputR_15;
  MR_Box conv2_BornR_16;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), InputRTable_8, ((MR_Box) (PPId_11)), &conv0_InputR_14);
  InputR_14 = ((MR_Word) (conv0_InputR_14));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), OutputRTable_9, ((MR_Box) (PPId_11)), &conv1_OutputR_15);
  OutputR_15 = ((MR_Word) (conv1_OutputR_15));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), BornRTable_10, ((MR_Box) (PPId_11)), &conv2_BornR_16);
  BornR_16 = ((MR_Word) (conv2_BornR_16));
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), InputR_14, OutputR_15, &InputOutputR0_17);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), InputOutputR0_17, BornR_16, &InputOutputR_18);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), InputOutputR_18, DeadR_12, &ConstantR_19);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), ((MR_Box) (PPId_11)), ((MR_Box) (ConstantR_19)), STATE_VARIABLE_ConstantRTable_0_20, STATE_VARIABLE_ConstantRTable_21);
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_LRTable_17;

  transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_LRTable_17);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_LRTable_17));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RegionSetTable_17;

  transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RegionSetTable_17);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RegionSetTable_17));
}

void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word RptaInfoTable_18,
  MR_Word STATE_VARIABLE_BornRTable_0_26,
  MR_Word * STATE_VARIABLE_BornRTable_27,
  MR_Word STATE_VARIABLE_DeadRTable_0_28,
  MR_Word * STATE_VARIABLE_DeadRTable_29,
  MR_Word STATE_VARIABLE_ConstantRTable_0_30,
  MR_Word * STATE_VARIABLE_ConstantRTable_31,
  MR_Word STATE_VARIABLE_LocalRTable_0_32,
  MR_Word * STATE_VARIABLE_LocalRTable_33,
  MR_Word STATE_VARIABLE_LRBeforeTable_0_34,
  MR_Word * STATE_VARIABLE_LRBeforeTable_35,
  MR_Word STATE_VARIABLE_LRAfterTable_0_36,
  MR_Word * STATE_VARIABLE_LRAfterTable_37,
  MR_Word STATE_VARIABLE_VoidVarRegionTable_0_38,
  MR_Word * STATE_VARIABLE_VoidVarRegionTable_39)
{
  MR_Word Var_40;
  MR_Word Var_52;
  MR_Box conv1_STATE_VARIABLE_BornRTable_27;
  MR_Box conv2_STATE_VARIABLE_DeadRTable_29;
  MR_Box conv3_STATE_VARIABLE_ConstantRTable_31;
  MR_Box conv4_STATE_VARIABLE_LocalRTable_33;
  MR_Box conv6_STATE_VARIABLE_LRBeforeTable_35;
  MR_Box conv7_STATE_VARIABLE_LRAfterTable_37;
  MR_Box conv8_STATE_VARIABLE_VoidVarRegionTable_39;

  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[1]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (ModuleInfo_17));
    MR_hl_field(0, Var_40, 4) = ((MR_Box) (RptaInfoTable_18));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_40, STATE_VARIABLE_BornRTable_0_26, ((MR_Box) (STATE_VARIABLE_BornRTable_0_26)), &conv1_STATE_VARIABLE_BornRTable_27);
  *STATE_VARIABLE_BornRTable_27 = ((MR_Word) (conv1_STATE_VARIABLE_BornRTable_27));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_40, STATE_VARIABLE_DeadRTable_0_28, ((MR_Box) (STATE_VARIABLE_DeadRTable_0_28)), &conv2_STATE_VARIABLE_DeadRTable_29);
  *STATE_VARIABLE_DeadRTable_29 = ((MR_Word) (conv2_STATE_VARIABLE_DeadRTable_29));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_40, STATE_VARIABLE_ConstantRTable_0_30, ((MR_Box) (STATE_VARIABLE_ConstantRTable_0_30)), &conv3_STATE_VARIABLE_ConstantRTable_31);
  *STATE_VARIABLE_ConstantRTable_31 = ((MR_Word) (conv3_STATE_VARIABLE_ConstantRTable_31));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_40, STATE_VARIABLE_LocalRTable_0_32, ((MR_Box) (STATE_VARIABLE_LocalRTable_0_32)), &conv4_STATE_VARIABLE_LocalRTable_33);
  *STATE_VARIABLE_LocalRTable_33 = ((MR_Word) (conv4_STATE_VARIABLE_LocalRTable_33));
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[2]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_17));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (RptaInfoTable_18));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[2]), Var_52, STATE_VARIABLE_LRBeforeTable_0_34, ((MR_Box) (STATE_VARIABLE_LRBeforeTable_0_34)), &conv6_STATE_VARIABLE_LRBeforeTable_35);
  *STATE_VARIABLE_LRBeforeTable_35 = ((MR_Word) (conv6_STATE_VARIABLE_LRBeforeTable_35));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[2]), Var_52, STATE_VARIABLE_LRAfterTable_0_36, ((MR_Box) (STATE_VARIABLE_LRAfterTable_0_36)), &conv7_STATE_VARIABLE_LRAfterTable_37);
  *STATE_VARIABLE_LRAfterTable_37 = ((MR_Word) (conv7_STATE_VARIABLE_LRAfterTable_37));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[2]), Var_52, STATE_VARIABLE_VoidVarRegionTable_0_38, ((MR_Box) (STATE_VARIABLE_VoidVarRegionTable_0_38)), &conv8_STATE_VARIABLE_VoidVarRegionTable_39);
  *STATE_VARIABLE_VoidVarRegionTable_39 = ((MR_Word) (conv8_STATE_VARIABLE_VoidVarRegionTable_39));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ConstantRTable_21;

  transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ConstantRTable_21);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ConstantRTable_21));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ProcRegionSetTable_19;

  transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ProcRegionSetTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ProcRegionSetTable_19));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_DeadR_q_12;

  transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv3_DeadR_q_12);
  *wrapper_arg_6 = ((MR_Box) (conv3_DeadR_q_12));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcRegionSetTable_19;

  transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcRegionSetTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcRegionSetTable_19));
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BornR_q_12;

  transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_BornR_q_12);
  *wrapper_arg_6 = ((MR_Box) (conv0_BornR_q_12));
}

void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word RptaInfoTable_14,
  MR_Word ExecPathTable_15,
  MR_Word LRBeforeTable_16,
  MR_Word LRAfterTable_17,
  MR_Word InputRTable_18,
  MR_Word OutputRTable_19,
  MR_Word * ConstantRTable_20,
  MR_Word STATE_VARIABLE_BornRTable_0_23,
  MR_Word * STATE_VARIABLE_BornRTable_24,
  MR_Word STATE_VARIABLE_DeadRTable_0_25,
  MR_Word * STATE_VARIABLE_DeadRTable_26)
{
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word ModuleInfo1_40;
  MR_Word DepInfo_41;
  MR_Word BottomUpSCCs_42;
  MR_Word TopDownSCCs_45;
  MR_Word Var_46;
  MR_Word ModuleInfo1_51;
  MR_Word DepInfo_52;
  MR_Word BottomUpSCCs_53;
  MR_Word TopDownSCCs_56;
  MR_Word Var_57;
  MR_Box conv2_STATE_VARIABLE_BornRTable_24;
  MR_Box conv5_STATE_VARIABLE_DeadRTable_26;
  MR_Box conv7_ConstantRTable_20;

  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(ModuleInfo_13, &ModuleInfo1_40, &DepInfo_41);
  BottomUpSCCs_42 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_41);
  mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1]), BottomUpSCCs_42, &TopDownSCCs_45);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[0]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[5]));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleInfo1_40));
    MR_hl_field(0, Var_46, 5) = ((MR_Box) (RptaInfoTable_14));
    MR_hl_field(0, Var_46, 6) = ((MR_Box) (ExecPathTable_15));
    MR_hl_field(0, Var_46, 7) = ((MR_Box) (LRBeforeTable_16));
    MR_hl_field(0, Var_46, 8) = ((MR_Box) (LRAfterTable_17));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_46, TopDownSCCs_45, ((MR_Box) (STATE_VARIABLE_BornRTable_0_23)), &conv2_STATE_VARIABLE_BornRTable_24);
  *STATE_VARIABLE_BornRTable_24 = ((MR_Word) (conv2_STATE_VARIABLE_BornRTable_24));
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(ModuleInfo_13, &ModuleInfo1_51, &DepInfo_52);
  BottomUpSCCs_53 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_52);
  mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1]), BottomUpSCCs_53, &TopDownSCCs_56);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_4));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[6]));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleInfo1_51));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) (RptaInfoTable_14));
    MR_hl_field(0, Var_57, 6) = ((MR_Box) (ExecPathTable_15));
    MR_hl_field(0, Var_57, 7) = ((MR_Box) (LRBeforeTable_16));
    MR_hl_field(0, Var_57, 8) = ((MR_Box) (LRAfterTable_17));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_57, TopDownSCCs_56, ((MR_Box) (STATE_VARIABLE_DeadRTable_0_25)), &conv5_STATE_VARIABLE_DeadRTable_26);
  *STATE_VARIABLE_DeadRTable_26 = ((MR_Word) (conv5_STATE_VARIABLE_DeadRTable_26));
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_5));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (InputRTable_18));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (OutputRTable_19));
    MR_hl_field(0, Var_29, 5) = ((MR_Box) (*STATE_VARIABLE_BornRTable_24));
  }
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0]), Var_29, *STATE_VARIABLE_DeadRTable_26, ((MR_Box) (Var_30)), &conv7_ConstantRTable_20);
  *ConstantRTable_20 = ((MR_Word) (conv7_ConstantRTable_20));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init(void)
{
}

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__rbmm__interproc_region_lifetime__transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0);
}

void mercury__transform_hlds__rbmm__interproc_region_lifetime__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__interproc_region_lifetime__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.interproc_region_lifetime.
