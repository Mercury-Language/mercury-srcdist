/*
** Automatically generated from `rbmm.points_to_graph.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module transform_hlds.rbmm.points_to_graph. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__points_to_graph__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_graph.mih"


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
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "counter.mih"
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
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"



struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__HeadVar__3_33;
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__conv0_HeadVar__3_33;
};

struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33;
};

struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13;
};

struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s {
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6;
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9;
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10;
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr;
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14;
};

struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s {
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9;
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10;
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5];

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5];

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1];

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0;

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1];

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3];

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1];

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5];

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5];

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1];

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][11];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][8];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5] = {
  (MR_String) "rptg_node_supply",
  (MR_String) "rptg_edge_supply",
  (MR_String) "rptg_nodes",
  (MR_String) "rptg_edges",
  (MR_String) "rptg_outedges"
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0 = {
  (MR_String) "rpt_graph",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rpt_graph",
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0 },
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 = {
  (MR_String) "rptg_edge",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge",
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 },
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 = {
  (MR_String) "rptg_edge_content",
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0,
  (MR_String) "rptg_ec_label",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_content",
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 },
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0
};

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3] = {
  (MR_String) "rptg_edge_from_node",
  (MR_String) "rptg_edge_to_node",
  (MR_String) "rptg_edge_label"
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0 = {
  (MR_String) "rptg_edge_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_info",
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0 },
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edges",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 = {
  (MR_String) "rptg_node",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node",
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 },
  {     &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5] = {
  (MR_String) "rptg_nc_vars",
  (MR_String) "rptg_nc_reg_var_name",
  (MR_String) "rptg_nc_merged_from",
  (MR_String) "rptg_nc_node_type",
  (MR_String) "rptg_nc_is_allocated"
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0 = {
  (MR_String) "rptg_node_content",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node_content",
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0 },
  {     transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_nodes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_nodes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_outedges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_outedges",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__HeadVar__3_33) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__conv0_HeadVar__3_33);
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__HeadVar__3_33 = transform_hlds__rbmm__points_to_graph__HeadVar__3_33;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

      {
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_env_0__conv0_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__conv0_HeadVar__3_13);
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__HeadVar__3_13 = transform_hlds__rbmm__points_to_graph__HeadVar__3_13;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

      {
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_String transform_hlds__rbmm__points_to_graph__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_String transform_hlds__rbmm__points_to_graph__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[4], &transform_hlds__rbmm__points_to_graph__Var_14, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY1_5)));
        }
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_14 == (MR_Integer) 0);
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_14;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Var_15;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__rbmm__points_to_graph__Var_15, transform_hlds__rbmm__points_to_graph__ArgX2_6, transform_hlds__rbmm__points_to_graph__ArgY2_7);
            }
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_15 == (MR_Integer) 0);
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_15;
            else
              {
                MR_Word transform_hlds__rbmm__points_to_graph__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[5], &transform_hlds__rbmm__points_to_graph__Var_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX3_8)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY3_9)));
                }
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_16 == (MR_Integer) 0);
                transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_16;
                else
                  {
                    MR_Word transform_hlds__rbmm__points_to_graph__Var_17;

                    {
                      parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__rbmm__points_to_graph__Var_17, transform_hlds__rbmm__points_to_graph__ArgX4_10, transform_hlds__rbmm__points_to_graph__ArgY4_11);
                    }
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_17 == (MR_Integer) 0);
                    transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_17;
                    else
                      {
                        MR_Integer transform_hlds__rbmm__points_to_graph__Var_25 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX5_12;
                        MR_Integer transform_hlds__rbmm__points_to_graph__Var_26 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__Var_25, transform_hlds__rbmm__points_to_graph__Var_26);
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_16_16;
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_String transform_hlds__rbmm__points_to_graph__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_String transform_hlds__rbmm__points_to_graph__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[4], ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY1_4)));
        }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__ArgX2_5, transform_hlds__rbmm__points_to_graph__ArgY2_6) == 0);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[5];
                {
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX3_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY3_8)));
                }
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  {
                    {
                      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__ArgX4_9, transform_hlds__rbmm__points_to_graph__ArgY4_10);
                    }
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX5_11 == transform_hlds__rbmm__points_to_graph__ArgY5_12);
                  }
              }
          }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__ArgX1_4, transform_hlds__rbmm__points_to_graph__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_3 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_3 == transform_hlds__rbmm__points_to_graph__ArgY1_4);
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_12 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_12 == transform_hlds__rbmm__points_to_graph__CastY_13);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_10;
        MR_Integer transform_hlds__rbmm__points_to_graph__Var_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX1_4;
        MR_Integer transform_hlds__rbmm__points_to_graph__Var_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__rbmm__points_to_graph__Var_10, transform_hlds__rbmm__points_to_graph__Var_17, transform_hlds__rbmm__points_to_graph__Var_18);
        }
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_10 == (MR_Integer) 0);
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_10;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Var_11;
            MR_Integer transform_hlds__rbmm__points_to_graph__Var_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX2_6;
            MR_Integer transform_hlds__rbmm__points_to_graph__Var_20 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__rbmm__points_to_graph__Var_11, transform_hlds__rbmm__points_to_graph__Var_19, transform_hlds__rbmm__points_to_graph__Var_20);
            }
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_11 == (MR_Integer) 0);
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_11;
            else
              {
                transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__ArgX3_8, transform_hlds__rbmm__points_to_graph__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_9 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_10 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_9 == transform_hlds__rbmm__points_to_graph__CastY_10);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX1_3;
        MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY1_4;
        MR_Integer transform_hlds__rbmm__points_to_graph__CastX_17;
        MR_Integer transform_hlds__rbmm__points_to_graph__CastY_18;

        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
        else
          {
            MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_11 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX1_3;
            MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_12 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY1_4;

            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_11 == transform_hlds__rbmm__points_to_graph__ArgY1_12);
          }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__CastX_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX2_5;
            transform_hlds__rbmm__points_to_graph__CastY_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY2_6;
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_17 == transform_hlds__rbmm__points_to_graph__CastY_18);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
            else
              {
                MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_15 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgX2_5;
                MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_16 = (MR_Integer) transform_hlds__rbmm__points_to_graph__ArgY2_6;

                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_15 == transform_hlds__rbmm__points_to_graph__ArgY1_16);
              }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__ArgX3_7, transform_hlds__rbmm__points_to_graph__ArgY3_8);
              }
          }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_4 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_5 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY1_5)));
        }
      }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__ArgX1_4, transform_hlds__rbmm__points_to_graph__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_3 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_3 == transform_hlds__rbmm__points_to_graph__ArgY1_4);
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_14;

        {
          mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__Var_14, transform_hlds__rbmm__points_to_graph__ArgX1_4, transform_hlds__rbmm__points_to_graph__ArgY1_5);
        }
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_14 == (MR_Integer) 0);
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_14;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Var_15;

            {
              mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__Var_15, transform_hlds__rbmm__points_to_graph__ArgX2_6, transform_hlds__rbmm__points_to_graph__ArgY2_7);
            }
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_15 == (MR_Integer) 0);
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_15;
            else
              {
                MR_Word transform_hlds__rbmm__points_to_graph__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], &transform_hlds__rbmm__points_to_graph__Var_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX3_8)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY3_9)));
                }
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_16 == (MR_Integer) 0);
                transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_16;
                else
                  {
                    MR_Word transform_hlds__rbmm__points_to_graph__Var_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], &transform_hlds__rbmm__points_to_graph__Var_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX4_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY4_11)));
                    }
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__Var_17 == (MR_Integer) 0);
                    transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Var_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX5_12)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY5_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_18;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_19_19;
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__ArgX1_3, transform_hlds__rbmm__points_to_graph__ArgY1_4);
        }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            {
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__ArgX2_5, transform_hlds__rbmm__points_to_graph__ArgY2_6);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2];
                {
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX3_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY3_8)));
                }
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  {
                    transform_hlds__rbmm__points_to_graph__TypeInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3];
                    {
                      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_18_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX4_9)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY4_10)));
                    }
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      {
                        transform_hlds__rbmm__points_to_graph__TypeInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4];
                        {
                          transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX5_11)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY5_12)));
                        }
                      }
                  }
              }
          }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__End_17;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_18;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSelector_19;
    MR_Word transform_hlds__rbmm__points_to_graph__Selector_20;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_38;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38;
    MR_Word transform_hlds__rbmm__points_to_graph___Start_16;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_37, ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdge_14)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
    }
    transform_hlds__rbmm__points_to_graph__EdgeInfo_38 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
    transform_hlds__rbmm__points_to_graph___Start_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__End_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__EdgeContent_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__EdgeSelector_19 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeContent_18;
    {
      transform_hlds__rbmm__points_to_graph__Selector_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0, transform_hlds__rbmm__points_to_graph__Selector0_9, transform_hlds__rbmm__points_to_graph__EdgeSelector_19);
    }
    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__smm_common__check_type_of_node_3_p_0(transform_hlds__rbmm__points_to_graph__HLDS_10, transform_hlds__rbmm__points_to_graph__TypeX_11, transform_hlds__rbmm__points_to_graph__Selector_20);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      {
        {
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), transform_hlds__rbmm__points_to_graph__Processed_13);
        }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_25;

            {
              transform_hlds__rbmm__points_to_graph__Var_25 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_20)));
            }
            {
              transform_hlds__rbmm__points_to_graph__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_25));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[1], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21, transform_hlds__rbmm__points_to_graph__Var_24);
            }
          }
      }
    else
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph___S_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph___C_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 2)));
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__E_11;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__End_6;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_16 = (MR_Integer) transform_hlds__rbmm__points_to_graph__E_11;
        MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__End_6;

        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_16 == transform_hlds__rbmm__points_to_graph__ArgY1_17);
      }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13));
      }
    else
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_set_label_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Label_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(transform_hlds__rbmm__points_to_graph__Label_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7);
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Label_4,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7 = (MR_Word) transform_hlds__rbmm__points_to_graph__Label_4;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_get_label_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__AC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__AC_3;

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_node_type_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NodeType_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeType_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_13));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_region_name_3_p_0(
  MR_String transform_hlds__rbmm__points_to_graph__Name_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Name_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_13));
    }
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_is_allocated_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_node_type_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_merged_from_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_region_name_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_String transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_vars_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Start_6,
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
  MR_Word transform_hlds__rbmm__points_to_graph__Info_8,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_11,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_12)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph___Edge_10;

    {
      transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Start_6, transform_hlds__rbmm__points_to_graph__End_7, transform_hlds__rbmm__points_to_graph__Info_8, &transform_hlds__rbmm__points_to_graph___Edge_10, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_11, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_12);
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent1_9;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent2_10;
    MR_Word transform_hlds__rbmm__points_to_graph__UnionVars_11;
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent0_12;
    MR_Word transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13;
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent1_14;
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_15;
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent_16;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_17;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_81;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_85;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_86;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_87;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_88;
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10;
    MR_String transform_hlds__rbmm__points_to_graph__Var_30;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_31;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_32;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_33;
    MR_String transform_hlds__rbmm__points_to_graph__Var_34;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_35;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_36;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_37;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_38;
    MR_String transform_hlds__rbmm__points_to_graph__Var_39;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_40;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_41;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_42;
    MR_String transform_hlds__rbmm__points_to_graph__Var_43;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_44;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_45;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_46;
    MR_String transform_hlds__rbmm__points_to_graph__Var_47;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_48;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_49;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_50;
    MR_String transform_hlds__rbmm__points_to_graph__Var_51;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_52;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_53;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_54;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_55;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_57;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_58;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_56;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Nodes0_8, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent1_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
    transform_hlds__rbmm__points_to_graph__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_81, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
    transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
    transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
    {
      mercury__set__union_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], transform_hlds__rbmm__points_to_graph__Var_20, transform_hlds__rbmm__points_to_graph__Var_21, &transform_hlds__rbmm__points_to_graph__UnionVars_11);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(transform_hlds__rbmm__points_to_graph__UnionVars_11, transform_hlds__rbmm__points_to_graph__NodeContent1_9, &transform_hlds__rbmm__points_to_graph__NewContent0_12);
    }
    transform_hlds__rbmm__points_to_graph__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
    transform_hlds__rbmm__points_to_graph__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    {
      mercury__set__union_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, transform_hlds__rbmm__points_to_graph__Var_22, transform_hlds__rbmm__points_to_graph__Var_23, &transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13, transform_hlds__rbmm__points_to_graph__NewContent0_12, &transform_hlds__rbmm__points_to_graph__NewContent1_14);
    }
    transform_hlds__rbmm__points_to_graph__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
    transform_hlds__rbmm__points_to_graph__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__IsAllocated_15 = mercury__bool__or_2_f_0(transform_hlds__rbmm__points_to_graph__Var_24, transform_hlds__rbmm__points_to_graph__Var_25);
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(transform_hlds__rbmm__points_to_graph__IsAllocated_15, transform_hlds__rbmm__points_to_graph__NewContent1_14, &transform_hlds__rbmm__points_to_graph__NewContent_16);
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NewContent_16)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_17);
    }
    transform_hlds__rbmm__points_to_graph__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_54));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_55));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_17));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_57));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_58));
    }
    {
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27);
    }
    {
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28);
    }
    {
      transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_35;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36;
    MR_Word transform_hlds__rbmm__points_to_graph__NS_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__AS_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30;
    MR_Word transform_hlds__rbmm__points_to_graph__TheEdges_31;
    MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_45;
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30;

    {
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13);
    }
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    transform_hlds__rbmm__points_to_graph__TypeInfo_18_35 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
    {
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
    {
      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30, &transform_hlds__rbmm__points_to_graph__TheEdges_31);
    }
    {
      mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__TheEdges_31, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17);
    }
    {
      mercury__map__delete_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18);
    }
    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__StartNodes_45);
    }
    {
      transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(transform_hlds__rbmm__points_to_graph__StartNodes_45, transform_hlds__rbmm__points_to_graph__Node_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__AS_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33));
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

      {
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__820__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5;
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3;
          }
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_32_32 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36;
            MR_Word transform_hlds__rbmm__points_to_graph__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Ns_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19;
            MR_Word transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20;
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19;

            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
            }
            transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
            {
              transform_hlds__rbmm__points_to_graph__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19));
            }
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
            {
              mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__Var_26, &transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20);
            }
            {
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27);
            }
            {
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, &transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21);
            }
            {
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Ns_15;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Edges_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_OutEdges_0_5 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;

              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5 = transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_OutEdges_0_5;
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3 = transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Edges_0_3;
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14;

    {
      transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3), &transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14);
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__InEdges_8;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_InEdges_8;

    {
      transform_hlds__rbmm__points_to_graph__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_16, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[2], transform_hlds__rbmm__points_to_graph__Var_16, transform_hlds__rbmm__points_to_graph__Edges_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
    }
    transform_hlds__rbmm__points_to_graph__InEdges_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
    {
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__InEdges_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Node_13;
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_14;

            {
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            transform_hlds__rbmm__points_to_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph___Node2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
            {
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
            else
              {
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

                {
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Graph_0_3;
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_8;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15, &transform_hlds__rbmm__points_to_graph__EdgeList_8);
    }
    {
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeList_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Node_14;
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
            MR_Word transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_13;

            {
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            transform_hlds__rbmm__points_to_graph___Node2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Node_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
            {
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
            else
              {
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

                {
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Graph_0_3;
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAllocated_4));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
    MR_String transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_13));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_4,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_String transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Vars_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_13));
    }
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_map_outedges_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
    return transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_endnodes_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__EndNodeList_6;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    {
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EndNodeList_6);
    }
    return transform_hlds__rbmm__points_to_graph__EndNodeList_6;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_6;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EdgeList_6);
    }
    return transform_hlds__rbmm__points_to_graph__EdgeList_6;
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_3,
  MR_Word transform_hlds__rbmm__points_to_graph__Region_4)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__IsAlloc_5;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_String transform_hlds__rbmm__points_to_graph__Var_23;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Region_4)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__IsAlloc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 4)));
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__IsAlloc_5 == (MR_Integer) 1);
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_6;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20;
    MR_String transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__IsAllocated_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
    return transform_hlds__rbmm__points_to_graph__IsAllocated_6;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_vars_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_6;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
    MR_String transform_hlds__rbmm__points_to_graph__Var_20;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    transform_hlds__rbmm__points_to_graph__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
    return transform_hlds__rbmm__points_to_graph__Vars_6;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeType_6;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20;
    MR_String transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__NodeType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
    return transform_hlds__rbmm__points_to_graph__NodeType_6;
  }
}

MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_String transform_hlds__rbmm__points_to_graph__RegionName_6;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__RegionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
    return transform_hlds__rbmm__points_to_graph__RegionName_6;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13));
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

      {
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__858__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Start_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Label_6,
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_8)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
    {
      transform_hlds__rbmm__points_to_graph__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__Var_12, &transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10);
    }
    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__Label_6, transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10, transform_hlds__rbmm__points_to_graph__Graph_8, &transform_hlds__rbmm__points_to_graph__Var_11);
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__N_5,
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_6,
  MR_Word transform_hlds__rbmm__points_to_graph__G_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__M_8)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_9;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13, &transform_hlds__rbmm__points_to_graph__EdgeList_9);
    }
    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeContent_6, transform_hlds__rbmm__points_to_graph__EdgeList_9, transform_hlds__rbmm__points_to_graph__G_7, transform_hlds__rbmm__points_to_graph__M_8);
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21;
        MR_Word transform_hlds__rbmm__points_to_graph__Edge_6;
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_7;
        MR_Word transform_hlds__rbmm__points_to_graph__M0_11;
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent0_12;
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_18;
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_19;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_23;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19;
        MR_Word transform_hlds__rbmm__points_to_graph___N_10;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__Edge_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Edges_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21, transform_hlds__rbmm__points_to_graph__Edges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_6)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
            }
            transform_hlds__rbmm__points_to_graph__EdgeInfo_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
            transform_hlds__rbmm__points_to_graph___N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__M0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__EdgeContent0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 2)));
            {
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__EdgeContent0_12, transform_hlds__rbmm__points_to_graph__EdgeContent_5);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__M_9 = transform_hlds__rbmm__points_to_graph__M0_11;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__Edges_7;

                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__ArgX1_3 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
        MR_Word transform_hlds__rbmm__points_to_graph__ArgY1_4 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

        {
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgX1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__ArgY1_4)));
        }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_8,
  MR_Word transform_hlds__rbmm__points_to_graph__ProcInfo_9,
  MR_Word transform_hlds__rbmm__points_to_graph__X_10,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_16,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_17)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__N_X_12;
    MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_13;
    MR_Word transform_hlds__rbmm__points_to_graph__VarTypes_14;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeX_15;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19;
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_28;

    {
      transform_hlds__rbmm__points_to_graph__Vars_28 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__X_10)));
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__Vars_28, &transform_hlds__rbmm__points_to_graph__N_X_12);
    }
    {
      transform_hlds__rbmm__points_to_graph__Node_Selector_13 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_X_12)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_graph__ProcInfo_9, &transform_hlds__rbmm__points_to_graph__VarTypes_14);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_graph__VarTypes_14, transform_hlds__rbmm__points_to_graph__X_10, &transform_hlds__rbmm__points_to_graph__TypeX_15);
    }
    {
      transform_hlds__rbmm__points_to_graph__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selector_13));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(transform_hlds__rbmm__points_to_graph__Var_19, transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__HLDS_8, transform_hlds__rbmm__points_to_graph__TypeX_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_17);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
    MR_Word transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22;

    {
      transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), &transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22);
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Node_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__points_to_graph__Selector_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__Processed_24;
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_25;
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_30;
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41;
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_47;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_51;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_52;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_53;
            MR_Word transform_hlds__rbmm__points_to_graph__Var_54;
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41;
            MR_Box transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26;

            {
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29);
            }
            {
              transform_hlds__rbmm__points_to_graph__Processed_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22));
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed0_5));
            }
            transform_hlds__rbmm__points_to_graph__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__OutEdges_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 4)));
            {
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_47, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
            }
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
            {
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41, &transform_hlds__rbmm__points_to_graph__EdgeList_25);
            }
            {
              transform_hlds__rbmm__points_to_graph__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_23));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__HLDS_3));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 5) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeX_4));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 6) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Graph_2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_30, 7) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed_24));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[3], transform_hlds__rbmm__points_to_graph__Var_30, transform_hlds__rbmm__points_to_graph__EdgeList_25, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selectors0_16)), &transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
            }
            transform_hlds__rbmm__points_to_graph__Node_Selectors_26 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_Processed0_5 = transform_hlds__rbmm__points_to_graph__Processed_24;
              MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Reach_X_0_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;

              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6 = transform_hlds__rbmm__points_to_graph__next_value_of_STATE_VARIABLE_Reach_X_0_6;
              transform_hlds__rbmm__points_to_graph__Processed0_5 = transform_hlds__rbmm__points_to_graph__next_value_of_Processed0_5;
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph1_3,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph2_4)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_12_37;
    MR_Word transform_hlds__rbmm__points_to_graph__NS1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__AS1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Edges1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__NS2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__AS2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Edges2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 4)));
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_23;
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_24;
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_25;
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_28;
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_29;
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_30;
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_33;
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_34;
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_35;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__NS1_5, transform_hlds__rbmm__points_to_graph__NS2_10);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      {
        {
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__AS1_6, transform_hlds__rbmm__points_to_graph__AS2_11);
        }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
            {
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__C1_23);
            }
            {
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes2_12, &transform_hlds__rbmm__points_to_graph__C2_24);
            }
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_23 == transform_hlds__rbmm__points_to_graph__C2_24);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                {
                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__Ks1_25);
                }
                {
                  transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Ks1_25, transform_hlds__rbmm__points_to_graph__Nodes1_7, transform_hlds__rbmm__points_to_graph__Nodes2_12);
                }
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  {
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
                    {
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__C1_28);
                    }
                    {
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges2_13, &transform_hlds__rbmm__points_to_graph__C2_29);
                    }
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_28 == transform_hlds__rbmm__points_to_graph__C2_29);
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      {
                        {
                          mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__Ks1_30);
                        }
                        {
                          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Ks1_30, transform_hlds__rbmm__points_to_graph__Edges1_8, transform_hlds__rbmm__points_to_graph__Edges2_13);
                        }
                        if (transform_hlds__rbmm__points_to_graph__succeeded)
                          {
                            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
                            transform_hlds__rbmm__points_to_graph__TypeInfo_12_37 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
                            {
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__C1_33);
                            }
                            {
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges2_14, &transform_hlds__rbmm__points_to_graph__C2_34);
                            }
                            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_33 == transform_hlds__rbmm__points_to_graph__C2_34);
                            if (transform_hlds__rbmm__points_to_graph__succeeded)
                              {
                                {
                                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__Ks1_35);
                                }
                                {
                                  transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__Ks1_35, transform_hlds__rbmm__points_to_graph__OutEdges1_9, transform_hlds__rbmm__points_to_graph__OutEdges2_14);
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_16_16;
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__points_to_graph__V2_10;
            MR_Word transform_hlds__rbmm__points_to_graph__V1_11;
            MR_Integer transform_hlds__rbmm__points_to_graph__C1_19;
            MR_Integer transform_hlds__rbmm__points_to_graph__C2_20;
            MR_Word transform_hlds__rbmm__points_to_graph__Ks1_21;
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_V2_10;
            MR_Box transform_hlds__rbmm__points_to_graph__conv1_V1_11;

            {
              transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13));
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14));
            }
            {
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv0_V2_10);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                transform_hlds__rbmm__points_to_graph__V2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_V2_10);
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                {
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv1_V1_11);
                }
                transform_hlds__rbmm__points_to_graph__V1_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_V1_11);
                {
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__C1_19);
                }
                {
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V2_10, &transform_hlds__rbmm__points_to_graph__C2_20);
                }
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_19 == transform_hlds__rbmm__points_to_graph__C2_20);
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  {
                    {
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__Ks1_21);
                    }
                    {
                      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__Ks1_21, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                    }
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

                          transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
        else
          {
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box transform_hlds__rbmm__points_to_graph__V2_10;
            MR_Box transform_hlds__rbmm__points_to_graph__V1_11;

            {
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V2_10);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                {
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V1_11);
                }
                {
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                }
                if (transform_hlds__rbmm__points_to_graph__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

                      transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph___NodeContent_8;
    MR_Box transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__NodeMap_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      {
        transform_hlds__rbmm__points_to_graph___NodeContent_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
      }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__Node_5;
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_9;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
        MR_Word transform_hlds__rbmm__points_to_graph__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
        MR_Word transform_hlds__rbmm__points_to_graph__MergedNode0_10;

        {
          mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_23, &transform_hlds__rbmm__points_to_graph__AllNodes_9);
        }
        {
          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_9, transform_hlds__rbmm__points_to_graph__Node_5, &transform_hlds__rbmm__points_to_graph__MergedNode0_10);
        }
        if (transform_hlds__rbmm__points_to_graph__succeeded)
          *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__MergedNode0_10;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_node\'/3", (MR_String) "node not found");
              return;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22;
        MR_Word transform_hlds__rbmm__points_to_graph__N_6;
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_7;
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_10;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_20;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_27;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_11;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_12;
        MR_String transform_hlds__rbmm__points_to_graph__Var_13;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_14;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_15;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22, transform_hlds__rbmm__points_to_graph__Var_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
            }
            transform_hlds__rbmm__points_to_graph__NodeContent_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
            transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            {
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__member_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_8)), transform_hlds__rbmm__points_to_graph__Var_11);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__MergedNode_9 = transform_hlds__rbmm__points_to_graph__N_6;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__Ns_7;

                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Var_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_7;

    {
      transform_hlds__rbmm__points_to_graph__Vars_7 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_5)));
    }
    {
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__Node_6);
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_14, &transform_hlds__rbmm__points_to_graph__Nodes_7);
    }
    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Nodes_7, transform_hlds__rbmm__points_to_graph__Vars_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_vars\'/3", (MR_String) "node not found");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__List_6)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23;
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_11;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_21;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_27;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_28;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_12;
        MR_String transform_hlds__rbmm__points_to_graph__Var_13;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_14;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_15;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_16;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23, transform_hlds__rbmm__points_to_graph__Var_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
            }
            transform_hlds__rbmm__points_to_graph__NodeContent_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
            transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0];
            {
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__subset_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__Var_12);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_List_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

                  transform_hlds__rbmm__points_to_graph__List_6 = transform_hlds__rbmm__points_to_graph__next_value_of_List_6;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_region_name_3_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_String transform_hlds__rbmm__points_to_graph__RegionName_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_7;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_14, &transform_hlds__rbmm__points_to_graph__AllNodes_7);
    }
    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_7, transform_hlds__rbmm__points_to_graph__RegionName_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_region_name\'/3", (MR_String) "node not found");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__NodeList_6)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
        MR_String transform_hlds__rbmm__points_to_graph__RegionANode_11;
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_19;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_23;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_28;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_29;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_30;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_31;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__Var_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__RegionANode_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__RegionANode_11, transform_hlds__rbmm__points_to_graph__RegName_7) == 0);
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_NodeList_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

                  transform_hlds__rbmm__points_to_graph__NodeList_6 = transform_hlds__rbmm__points_to_graph__next_value_of_NodeList_6;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
  MR_Word transform_hlds__rbmm__points_to_graph__Start_6,
  MR_Word transform_hlds__rbmm__points_to_graph__EType_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Type_9;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_18;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_31;
    MR_String transform_hlds__rbmm__points_to_graph__Var_32;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_33;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_34;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_22, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
    transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__Type_9, transform_hlds__rbmm__points_to_graph__EType_7);
    }
    if (transform_hlds__rbmm__points_to_graph__succeeded)
      {
        *transform_hlds__rbmm__points_to_graph__E_8 = transform_hlds__rbmm__points_to_graph__Start_6;
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__rbmm__points_to_graph__Var_10;

        {
          transform_hlds__rbmm__points_to_graph__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6));
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(transform_hlds__rbmm__points_to_graph__Graph_5, transform_hlds__rbmm__points_to_graph__Var_10, transform_hlds__rbmm__points_to_graph__Var_10, transform_hlds__rbmm__points_to_graph__EType_7, transform_hlds__rbmm__points_to_graph__E_8);
        }
      }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_9_30;
        MR_Word transform_hlds__rbmm__points_to_graph__StartNode_7;
        MR_Word transform_hlds__rbmm__points_to_graph__StartNodes0_8;
        MR_Word transform_hlds__rbmm__points_to_graph__Ends_12;
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22;
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_28;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_32;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_33;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_34;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_35;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22;
        MR_Word transform_hlds__rbmm__points_to_graph__E1_13;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__StartNode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__StartNodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__OutEdges_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeInfo_9_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29, transform_hlds__rbmm__points_to_graph__TypeInfo_9_30, transform_hlds__rbmm__points_to_graph__OutEdges_28, ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
            }
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            {
              mercury__map__values_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22, &transform_hlds__rbmm__points_to_graph__Ends_12);
            }
            {
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(transform_hlds__rbmm__points_to_graph__Ends_12, transform_hlds__rbmm__points_to_graph__Graph_6, transform_hlds__rbmm__points_to_graph__EType_10, &transform_hlds__rbmm__points_to_graph__E1_13);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__E_11 = transform_hlds__rbmm__points_to_graph__E1_13;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes1_14;
                MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes_15;
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_16;
                MR_Word transform_hlds__rbmm__points_to_graph__Var_17;

                {
                  transform_hlds__rbmm__points_to_graph__StartNodes1_14 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes0_8, transform_hlds__rbmm__points_to_graph__Ends_12);
                }
                {
                  transform_hlds__rbmm__points_to_graph__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_17, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7));
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Var_17, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__VisitedNodes0_9));
                }
                {
                  mercury__list__remove_dups_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Var_17, &transform_hlds__rbmm__points_to_graph__VisitedNodes_15);
                }
                {
                  mercury__list__delete_elems_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes1_14, transform_hlds__rbmm__points_to_graph__VisitedNodes_15, &transform_hlds__rbmm__points_to_graph__StartNodes_16);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__StartNodes_16;
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_VisitedNodes0_9 = transform_hlds__rbmm__points_to_graph__VisitedNodes_15;

                  transform_hlds__rbmm__points_to_graph__VisitedNodes0_9 = transform_hlds__rbmm__points_to_graph__next_value_of_VisitedNodes0_9;
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
        MR_Word transform_hlds__rbmm__points_to_graph__N_5;
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_6;
        MR_Word transform_hlds__rbmm__points_to_graph__NType_10;
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_19;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_23;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_28;
        MR_String transform_hlds__rbmm__points_to_graph__Var_29;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_30;
        MR_Word transform_hlds__rbmm__points_to_graph__Var_31;

        if (transform_hlds__rbmm__points_to_graph__succeeded)
          {
            transform_hlds__rbmm__points_to_graph__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 4)));
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__Var_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
            transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
            transform_hlds__rbmm__points_to_graph__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
            transform_hlds__rbmm__points_to_graph__NType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
            transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
            {
              transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__NType_10, transform_hlds__rbmm__points_to_graph__Type_8);
            }
            if (transform_hlds__rbmm__points_to_graph__succeeded)
              {
                *transform_hlds__rbmm__points_to_graph__End_9 = transform_hlds__rbmm__points_to_graph__N_5;
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__Ns_6;

                  transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return transform_hlds__rbmm__points_to_graph__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_1(
  MR_Word transform_hlds__rbmm__points_to_graph__G_5,
  MR_Word transform_hlds__rbmm__points_to_graph__S_6,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_8,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13);
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8);
    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(transform_hlds__rbmm__points_to_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) (*((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8))), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
      {
        (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17));
        }
        {
          ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18);
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14);
    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(transform_hlds__rbmm__points_to_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15));
    }
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9));
        }
        {
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 4)));
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
      MR_Word transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 2)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 3)));
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
      {
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      {
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2, &transform_hlds__rbmm__points_to_graph__env);
      }
      {
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_5,
  MR_Word transform_hlds__rbmm__points_to_graph__S_6,
  MR_Word transform_hlds__rbmm__points_to_graph__E_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_8,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13);
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23);
    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(transform_hlds__rbmm__points_to_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      MR_Integer transform_hlds__rbmm__points_to_graph__CastX_31 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
      MR_Integer transform_hlds__rbmm__points_to_graph__CastY_32 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23;

      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_31 == transform_hlds__rbmm__points_to_graph__CastY_32);
      if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
        (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = MR_TRUE;
      else
        {
          MR_Integer transform_hlds__rbmm__points_to_graph__ArgX1_29 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
          MR_Integer transform_hlds__rbmm__points_to_graph__ArgY1_30 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23;

          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_graph__ArgX1_29 == transform_hlds__rbmm__points_to_graph__ArgY1_30);
        }
      if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
        {
          {
            (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
          }
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
          if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
            {
              (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17));
              }
              {
                ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
              }
            }
        }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18);
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14);
    {
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(transform_hlds__rbmm__points_to_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15));
    }
    {
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

    {
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
    }
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9));
        }
        {
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
{
  {
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
    {
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 4)));
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
      MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 0)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 1)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 2)));
      MR_Word transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 3)));
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
      {
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      {
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2, &transform_hlds__rbmm__points_to_graph__env);
      }
      {
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4, &transform_hlds__rbmm__points_to_graph__env);
      }
    }
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Successors_6;
    MR_Word transform_hlds__rbmm__points_to_graph__SuccessorList_7;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
    }
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
    {
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12, &transform_hlds__rbmm__points_to_graph__SuccessorList_7);
    }
    {
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__SuccessorList_7, &transform_hlds__rbmm__points_to_graph__Successors_6);
    }
    return transform_hlds__rbmm__points_to_graph__Successors_6;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Start_7,
  MR_Word transform_hlds__rbmm__points_to_graph__End_8,
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Edge_10,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_22)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_30_30;
    MR_Word transform_hlds__rbmm__points_to_graph__ES0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
    MR_Integer transform_hlds__rbmm__points_to_graph__EdgeId_13;
    MR_Word transform_hlds__rbmm__points_to_graph__ES_14;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges0_15;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_16;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_17;
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges0_18;
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges_19;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_41;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_43;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_45;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_42;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_56;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_57;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_58;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_59;
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_71;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_72;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_73;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_74;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_75;

    {
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__EdgeId_13, transform_hlds__rbmm__points_to_graph__ES0_12, &transform_hlds__rbmm__points_to_graph__ES_14);
    }
    transform_hlds__rbmm__points_to_graph__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Edges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_41));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__ES_14));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_43));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_45));
    }
    *transform_hlds__rbmm__points_to_graph__Edge_10 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeId_13;
    {
      transform_hlds__rbmm__points_to_graph__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Var_24, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeContent_9));
    }
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
    {
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_24)), transform_hlds__rbmm__points_to_graph__Edges0_15, &transform_hlds__rbmm__points_to_graph__Edges_16);
    }
    transform_hlds__rbmm__points_to_graph__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__OutEdges0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_56));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_57));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_58));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_16));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_17));
    }
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    transform_hlds__rbmm__points_to_graph__TypeInfo_30_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
    {
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, transform_hlds__rbmm__points_to_graph__OutEdges0_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), &transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
    }
    transform_hlds__rbmm__points_to_graph__StartOutEdges0_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
    {
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8)), transform_hlds__rbmm__points_to_graph__StartOutEdges0_18, &transform_hlds__rbmm__points_to_graph__StartOutEdges_19);
    }
    {
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartOutEdges_19)), transform_hlds__rbmm__points_to_graph__OutEdges0_17, &transform_hlds__rbmm__points_to_graph__OutEdges_20);
    }
    transform_hlds__rbmm__points_to_graph__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_71));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_72));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_73));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_74));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_20));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
  MR_Word * transform_hlds__rbmm__points_to_graph__Start_8,
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9,
  MR_Word * transform_hlds__rbmm__points_to_graph__Content_10)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_12;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
    }
    transform_hlds__rbmm__points_to_graph__EdgeInfo_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
    *transform_hlds__rbmm__points_to_graph__Start_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 0)));
    *transform_hlds__rbmm__points_to_graph__End_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 1)));
    *transform_hlds__rbmm__points_to_graph__Content_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 2)));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Content0_5,
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_18)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
    MR_Integer transform_hlds__rbmm__points_to_graph__NodeId_6;
    MR_Word transform_hlds__rbmm__points_to_graph__NS0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__NS_9;
    MR_Word transform_hlds__rbmm__points_to_graph__MergedFrom_11;
    MR_Word transform_hlds__rbmm__points_to_graph__Content_12;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap0_13;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_14;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_15;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_16;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19;
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_42;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_43;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_44;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_45;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_41;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_51;
    MR_String transform_hlds__rbmm__points_to_graph__Var_52;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_54;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_55;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_53;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_24;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_61;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_62;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_64;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_63;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_76;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_77;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_78;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_79;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_80;

    {
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NodeId_6, transform_hlds__rbmm__points_to_graph__NS0_8, &transform_hlds__rbmm__points_to_graph__NS_9);
    }
    *transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__NodeId_6;
    transform_hlds__rbmm__points_to_graph__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_9));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_42));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_43));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_44));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_45));
    }
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    {
      transform_hlds__rbmm__points_to_graph__MergedFrom_11 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)));
    }
    transform_hlds__rbmm__points_to_graph__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__Content_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_51));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_52));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__MergedFrom_11));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_54));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_55));
    }
    transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__NodeMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
    {
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Content_12)), transform_hlds__rbmm__points_to_graph__NodeMap0_13, &transform_hlds__rbmm__points_to_graph__NodeMap_14);
    }
    transform_hlds__rbmm__points_to_graph__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__OutEdges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_61));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_62));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeMap_14));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_64));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_15));
    }
    {
      transform_hlds__rbmm__points_to_graph__Var_21 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27);
    }
    {
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_21)), transform_hlds__rbmm__points_to_graph__OutEdges0_15, &transform_hlds__rbmm__points_to_graph__OutEdges_16);
    }
    transform_hlds__rbmm__points_to_graph__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_76));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_77));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_78));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_79));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_16));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
  MR_Word transform_hlds__rbmm__points_to_graph__IsAlloc_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent0_8;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_39;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_40;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_29;
    MR_String transform_hlds__rbmm__points_to_graph__Var_30;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_31;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_32;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_33;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_45;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_46;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_47;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_48;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_54;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_55;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_57;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_58;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_56;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent0_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
    transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 4)));
    {
      transform_hlds__rbmm__points_to_graph__NodeContent_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_29));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_30));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_31));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_32));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAlloc_6));
    }
    transform_hlds__rbmm__points_to_graph__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Nodes0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
    {
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_9)), transform_hlds__rbmm__points_to_graph__Nodes0_39, &transform_hlds__rbmm__points_to_graph__Nodes_40);
    }
    transform_hlds__rbmm__points_to_graph__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_57));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_58));
    }
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
  MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_6,
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10,
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_9;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_25;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_26;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_28;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_29;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_27;

    {
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_6)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_9);
    }
    transform_hlds__rbmm__points_to_graph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
    transform_hlds__rbmm__points_to_graph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
    transform_hlds__rbmm__points_to_graph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
    transform_hlds__rbmm__points_to_graph__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
    transform_hlds__rbmm__points_to_graph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_29));
    }
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_6;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
    }
    transform_hlds__rbmm__points_to_graph__NodeContent_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
    return transform_hlds__rbmm__points_to_graph__NodeContent_6;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0(void)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__Graph_2;
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_3;
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSupply_4;
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_5;
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_6;
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7;

    {
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__NodeSupply_3);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__EdgeSupply_4);
    }
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
    {
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, &transform_hlds__rbmm__points_to_graph__Nodes_5);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, &transform_hlds__rbmm__points_to_graph__Edges_6);
    }
    {
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], &transform_hlds__rbmm__points_to_graph__OutEdges_7);
    }
    {
      transform_hlds__rbmm__points_to_graph__Graph_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeSupply_3));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeSupply_4));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_5));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_6));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_7));
    }
    return transform_hlds__rbmm__points_to_graph__Graph_2;
  }
}

MR_Integer MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Integer transform_hlds__rbmm__points_to_graph__NextNodeId_4;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6;

    {
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NextNodeId_4, transform_hlds__rbmm__points_to_graph__NodeSupply_5, &transform_hlds__rbmm__points_to_graph__Var_6);
    }
    return transform_hlds__rbmm__points_to_graph__NextNodeId_4;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_outedges_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edges_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__NodeList_4;
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));

    {
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Var_5, &transform_hlds__rbmm__points_to_graph__NodeList_4);
    }
    return transform_hlds__rbmm__points_to_graph__NodeList_4;
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
    MR_Word transform_hlds__rbmm__points_to_graph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

    {
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
    return transform_hlds__rbmm__points_to_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__rbmm__points_to_graph__init(void)
{
}

void mercury__transform_hlds__rbmm__points_to_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edges_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_nodes_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_outedges_0);
}

void mercury__transform_hlds__rbmm__points_to_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__points_to_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.rbmm.points_to_graph. */
