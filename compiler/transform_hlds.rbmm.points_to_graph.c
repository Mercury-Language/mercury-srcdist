/*
** Automatically generated from `rbmm.points_to_graph.m'
** by the Mercury compiler,
** version rotd-2026-04-29
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


// :- module transform_hlds.rbmm.points_to_graph.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__points_to_graph__init
ENDINIT
*/

#include "transform_hlds.rbmm.points_to_graph.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
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



struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__HeadVar__3_31;
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__conv0_HeadVar__3_31;
};

struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0_s {
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__HeadVar__3_13;
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont_env_ptr;
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__conv0_HeadVar__3_13;
};

struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s {
  MR_Box * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont;
  void * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_31;
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
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17;
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
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17;
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18;
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

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

static const MR_DuArgLocn transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_locns_rptg_node_content_0_0[5];

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1];

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1];

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0(
  MR_Word Node_2,
  MR_Word OutEdgesOfN0_19,
  MR_Word * HeadVar__3_31,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0(
  MR_Word End_7,
  MR_Word OutEdgesOfStart_9,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
  MR_Word End_6,
  MR_Word Edge_7,
  MR_Word EdgeInfo_8,
  MR_Word STATE_VARIABLE_L_0_13,
  MR_Word * STATE_VARIABLE_L_14);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
  MR_Word Selector0_9,
  MR_Word HLDS_10,
  MR_Word TypeX_11,
  MR_Word Graph_12,
  MR_Word Processed_13,
  MR_Word OutEdge_14,
  MR_Word STATE_VARIABLE_List_0_21,
  MR_Word * STATE_VARIABLE_List_22);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
  MR_Word Node_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node_2,
  MR_Word STATE_VARIABLE_Edges_0_3,
  MR_Word * STATE_VARIABLE_Edges_4,
  MR_Word STATE_VARIABLE_OutEdges_0_5,
  MR_Word * STATE_VARIABLE_OutEdges_6);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
  MR_Word Node1_5,
  MR_Word Node2_6,
  MR_Word STATE_VARIABLE_Graph_0_9,
  MR_Word * STATE_VARIABLE_Graph_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node1_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
  MR_Word Node1_5,
  MR_Word Node2_6,
  MR_Word STATE_VARIABLE_Graph_0_9,
  MR_Word * STATE_VARIABLE_Graph_10);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node1_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
  MR_Word TypeInfo_for_K1_12,
  MR_Word TypeInfo_for_K2_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word Map1_2,
  MR_Word Map2_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
  MR_Word TypeInfo_for_K1_12,
  MR_Word TypeInfo_for_V1_13,
  MR_Word HeadVar__1_1,
  MR_Word Map1_2,
  MR_Word Map2_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Graph_2,
  MR_Word HLDS_3,
  MR_Word TypeX_4,
  MR_Word Processed0_5,
  MR_Word STATE_VARIABLE_Reach_X_0_6,
  MR_Word * STATE_VARIABLE_Reach_X_7);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
  MR_Word EdgeContent_5,
  MR_Word HeadVar__2_2,
  MR_Word G_8,
  MR_Word * M_9);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word HeadVar__2_2,
  MR_Word Node_8,
  MR_Word * MergedNode_9);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word List_6,
  MR_Word Vars_7,
  MR_Word * Node_8);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word NodeList_6,
  MR_String RegName_7,
  MR_Word * Node_8);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
  MR_Word Graph_6,
  MR_Word HeadVar__2_2,
  MR_Word VisitedNodes0_9,
  MR_Word EType_10,
  MR_Word * E_11);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Graph_7,
  MR_Word Type_8,
  MR_Word * End_9);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
  MR_Word G_6,
  MR_Word S_7,
  MR_Word * E_8,
  MR_Word Nodes0_9,
  MR_Word * Path_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
  MR_Word G_6,
  MR_Word S_7,
  MR_Word E_8,
  MR_Word Nodes0_9,
  MR_Word * Path_10,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][11];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][8];




static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0 };

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0 };

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rpt_graph",
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0 },
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0,

};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 = {
  (MR_String) "rptg_edge",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge",
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 },
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0,

};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 = {
  (MR_String) "rptg_edge_content",
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0),
  (MR_String) "rptg_ec_label",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_content",
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 },
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0,

};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0)
};

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3] = {
  (MR_String) "rptg_edge_from_node",
  (MR_String) "rptg_edge_to_node",
  (MR_String) "rptg_edge_label"
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0 = {
  (MR_String) "rptg_edge_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0 };

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0 };

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_info",
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0 },
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edges_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edges",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 = {
  (MR_String) "rptg_node",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node",
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 },
  { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5] = {
  (MR_String) "rptg_nc_vars",
  (MR_String) "rptg_nc_reg_var_name",
  (MR_String) "rptg_nc_merged_from",
  (MR_String) "rptg_nc_node_type",
  (MR_String) "rptg_nc_is_allocated"
};

static const MR_DuArgLocn transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_locns_rptg_node_content_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0 = {
  (MR_String) "rptg_node_content",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_locns_rptg_node_content_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0 };

static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1] = { &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0 };

static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node_content",
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0 },
  { transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_nodes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_nodes",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_outedges_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_outedges",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__HeadVar__3_31) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__conv0_HeadVar__3_31));
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0(
  MR_Word Node_2,
  MR_Word OutEdgesOfN0_19,
  MR_Word * HeadVar__3_31,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__HeadVar__3_31 = HeadVar__3_31;
  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfN0_19, ((MR_Box) (Node_2)), &(env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_env_0__conv0_HeadVar__3_31, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0_1, &env);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__conv0_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0(
  MR_Word End_7,
  MR_Word OutEdgesOfStart_9,
  MR_Word * HeadVar__3_13,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__HeadVar__3_13 = HeadVar__3_13;
  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__map__inverse_search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfStart_9, ((MR_Box) (End_7)), &(env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0_1, &env);
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer CastX_13 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_14 = (MR_Integer) (ArgY1_4);
    MR_Integer CastX_17;
    MR_Integer CastY_18;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_11 = (MR_Integer) (ArgX1_3);
      MR_Integer ArgY1_12 = (MR_Integer) (ArgY1_4);

      succeeded = (ArgX1_11 == ArgY1_12);
    }
    if (succeeded)
    {
      CastX_17 = (MR_Integer) (ArgX2_5);
      CastY_18 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_17 == CastY_18);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_15 = (MR_Integer) (ArgX2_5);
        MR_Integer ArgY1_16 = (MR_Integer) (ArgY2_6);

        succeeded = (ArgX1_15 == ArgY1_16);
      }
      if (succeeded)
        succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
  MR_Word End_6,
  MR_Word Edge_7,
  MR_Word EdgeInfo_8,
  MR_Word STATE_VARIABLE_L_0_13,
  MR_Word * STATE_VARIABLE_L_14)
{
  MR_bool succeeded;
  MR_Word E_11 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_8, 1))));
  MR_Integer CastX_17 = (MR_Integer) (E_11);
  MR_Integer CastY_18 = (MR_Integer) (End_6);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_15 = (MR_Integer) (E_11);
    MR_Integer ArgY1_16 = (MR_Integer) (End_6);

    succeeded = (ArgX1_15 == ArgY1_16);
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_L_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Edge_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_L_0_13));
    }
  else
    *STATE_VARIABLE_L_14 = STATE_VARIABLE_L_0_13;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
  MR_Word Selector0_9,
  MR_Word HLDS_10,
  MR_Word TypeX_11,
  MR_Word Graph_12,
  MR_Word Processed_13,
  MR_Word OutEdge_14,
  MR_Word STATE_VARIABLE_List_0_21,
  MR_Word * STATE_VARIABLE_List_22)
{
  MR_bool succeeded;
  MR_Word End_17;
  MR_Word EdgeContent_18;
  MR_Word EdgeSelector_19;
  MR_Word Selector_20;
  MR_Word Edges_32 = ((MR_Word) ((MR_hl_field(0, Graph_12, 3))));
  MR_Word EdgeInfo_33;
  MR_Box conv0_EdgeInfo_33;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), Edges_32, ((MR_Box) (OutEdge_14)), &conv0_EdgeInfo_33);
  EdgeInfo_33 = ((MR_Word) (conv0_EdgeInfo_33));
  End_17 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_33, 1))));
  EdgeContent_18 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_33, 2))));
  EdgeSelector_19 = (MR_Word) (EdgeContent_18);
  Selector_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), Selector0_9, EdgeSelector_19);
  succeeded = transform_hlds__smm_common__check_type_of_node_3_p_0(HLDS_10, TypeX_11, Selector_20);
  if (succeeded)
  {
    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (End_17)), Processed_13);
    if (succeeded)
      *STATE_VARIABLE_List_22 = STATE_VARIABLE_List_0_21;
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;

      Var_25 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]), ((MR_Box) (End_17)), ((MR_Box) (Selector_20)));
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_List_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[1]), STATE_VARIABLE_List_0_21, Var_24);
    }
  }
  else
    *STATE_VARIABLE_List_22 = STATE_VARIABLE_List_0_21;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_set_label_3_p_0(
  MR_Word Label_4,
  MR_Word STATE_VARIABLE_AC_0_6,
  MR_Word * STATE_VARIABLE_AC_7)
{
  transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(Label_4, STATE_VARIABLE_AC_7);
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(
  MR_Word Label_4,
  MR_Word * STATE_VARIABLE_AC_7)
{
  *STATE_VARIABLE_AC_7 = (MR_Word) (Label_4);
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_get_label_1_f_0(
  MR_Word AC_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (AC_3);

  return HeadVar__2_2;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(
  MR_Word IsAllocated_4,
  MR_Word STATE_VARIABLE_NC_0_6,
  MR_Word * STATE_VARIABLE_NC_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 0))));
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NC_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (IsAllocated_4));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_node_type_3_p_0(
  MR_Word NodeType_4,
  MR_Word STATE_VARIABLE_NC_0_6,
  MR_Word * STATE_VARIABLE_NC_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 0))));
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 2))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 4))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NC_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (NodeType_4));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_12));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(
  MR_Word Nodes_4,
  MR_Word STATE_VARIABLE_NC_0_6,
  MR_Word * STATE_VARIABLE_NC_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 0))));
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 3))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 4))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NC_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Nodes_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_12));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_region_name_3_p_0(
  MR_String Name_4,
  MR_Word STATE_VARIABLE_NC_0_6,
  MR_Word * STATE_VARIABLE_NC_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 3))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 4))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NC_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Name_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_12));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_NC_0_6,
  MR_Word * STATE_VARIABLE_NC_7)
{
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 3))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_NC_0_6, 4))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_NC_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Vars_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_12));
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_is_allocated_1_f_0(
  MR_Word NC_3)
{
  MR_Word HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(0, NC_3, 4))) & (MR_Integer) 1);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_node_type_1_f_0(
  MR_Word NC_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NC_3, 3))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_merged_from_1_f_0(
  MR_Word NC_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NC_3, 2))));

  return HeadVar__2_2;
}

MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_region_name_1_f_0(
  MR_Word NC_3)
{
  MR_String HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, NC_3, 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_vars_1_f_0(
  MR_Word NC_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, NC_3, 0))));

  return HeadVar__2_2;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(
  MR_Word Start_6,
  MR_Word End_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_G_0_11,
  MR_Word * STATE_VARIABLE_G_12)
{
  MR_Word _Edge_10;

  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(Start_6, End_7, Info_8, &_Edge_10, STATE_VARIABLE_G_0_11, STATE_VARIABLE_G_12);
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(
  MR_Word Node1_5,
  MR_Word Node2_6,
  MR_Word STATE_VARIABLE_Graph_0_18,
  MR_Word * STATE_VARIABLE_Graph_19)
{
  MR_Word Nodes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 2))));
  MR_Word NodeContent1_9;
  MR_Word NodeContent2_10;
  MR_Word UnionVars_11;
  MR_Word NewContent0_12;
  MR_Word UnionMergedFrom_13;
  MR_Word NewContent1_14;
  MR_Word IsAllocated_15;
  MR_Word NewContent_16;
  MR_Word Nodes_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_Graph_1_26;
  MR_Word STATE_VARIABLE_Graph_2_27;
  MR_Word STATE_VARIABLE_Graph_3_28;
  MR_Word Var_72;
  MR_Word Var_81;
  MR_Box conv0_NodeContent1_9;
  MR_Box conv1_NodeContent2_10;
  MR_String Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_String Var_85;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_String Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Nodes0_8, ((MR_Box) (Node1_5)), &conv0_NodeContent1_9);
  NodeContent1_9 = ((MR_Word) (conv0_NodeContent1_9));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 2))));
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_72, ((MR_Box) (Node2_6)), &conv1_NodeContent2_10);
  NodeContent2_10 = ((MR_Word) (conv1_NodeContent2_10));
  Var_20 = ((MR_Word) ((MR_hl_field(0, NodeContent1_9, 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, NodeContent2_10, 0))));
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]), Var_20, Var_21, &UnionVars_11);
  Var_80 = ((MR_String) ((MR_hl_field(0, NodeContent1_9, 1))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, NodeContent1_9, 2))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, NodeContent1_9, 3))));
  Var_83 = ((MR_Unsigned) ((MR_hl_field(0, NodeContent1_9, 4))) & (MR_Integer) 1);
  {
    NewContent0_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewContent0_12, 0) = ((MR_Box) (UnionVars_11));
    MR_hl_field(0, NewContent0_12, 1) = ((MR_Box) (Var_80));
    MR_hl_field(0, NewContent0_12, 2) = ((MR_Box) (Var_81));
    MR_hl_field(0, NewContent0_12, 3) = ((MR_Box) (Var_82));
    MR_hl_field(0, NewContent0_12, 4) = (MR_Box) ((MR_Unsigned) (Var_83));
  }
  Var_23 = ((MR_Word) ((MR_hl_field(0, NodeContent2_10, 2))));
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_81, Var_23, &UnionMergedFrom_13);
  Var_84 = ((MR_Word) ((MR_hl_field(0, NewContent0_12, 0))));
  Var_85 = ((MR_String) ((MR_hl_field(0, NewContent0_12, 1))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, NewContent0_12, 3))));
  Var_88 = ((MR_Unsigned) ((MR_hl_field(0, NewContent0_12, 4))) & (MR_Integer) 1);
  {
    NewContent1_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewContent1_14, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, NewContent1_14, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, NewContent1_14, 2) = ((MR_Box) (UnionMergedFrom_13));
    MR_hl_field(0, NewContent1_14, 3) = ((MR_Box) (Var_87));
    MR_hl_field(0, NewContent1_14, 4) = (MR_Box) ((MR_Unsigned) (Var_88));
  }
  Var_24 = ((MR_Unsigned) ((MR_hl_field(0, NodeContent1_9, 4))) & (MR_Integer) 1);
  Var_25 = ((MR_Unsigned) ((MR_hl_field(0, NodeContent2_10, 4))) & (MR_Integer) 1);
  IsAllocated_15 = mercury__bool__or_2_f_0(Var_24, Var_25);
  Var_89 = ((MR_Word) ((MR_hl_field(0, NewContent1_14, 0))));
  Var_90 = ((MR_String) ((MR_hl_field(0, NewContent1_14, 1))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, NewContent1_14, 2))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, NewContent1_14, 3))));
  {
    NewContent_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NewContent_16, 0) = ((MR_Box) (Var_89));
    MR_hl_field(0, NewContent_16, 1) = ((MR_Box) (Var_90));
    MR_hl_field(0, NewContent_16, 2) = ((MR_Box) (Var_91));
    MR_hl_field(0, NewContent_16, 3) = ((MR_Box) (Var_92));
    MR_hl_field(0, NewContent_16, 4) = (MR_Box) ((MR_Unsigned) (IsAllocated_15));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), ((MR_Box) (Node1_5)), ((MR_Box) (NewContent_16)), Nodes0_8, &Nodes_17);
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 0))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 1))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 3))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_18, 4))));
  {
    STATE_VARIABLE_Graph_1_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Graph_1_26, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_Graph_1_26, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_Graph_1_26, 2) = ((MR_Box) (Nodes_17));
    MR_hl_field(0, STATE_VARIABLE_Graph_1_26, 3) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_Graph_1_26, 4) = ((MR_Box) (Var_57));
  }
  transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(Node1_5, Node2_6, STATE_VARIABLE_Graph_1_26, &STATE_VARIABLE_Graph_2_27);
  transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(Node1_5, Node2_6, STATE_VARIABLE_Graph_2_27, &STATE_VARIABLE_Graph_3_28);
  transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(Node2_6, STATE_VARIABLE_Graph_3_28, STATE_VARIABLE_Graph_19);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
  MR_Word Node_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word NS_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word AS_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word STATE_VARIABLE_Nodes_0_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
  MR_Word STATE_VARIABLE_Edges_0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
  MR_Word STATE_VARIABLE_OutEdges_0_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
  MR_Word STATE_VARIABLE_Nodes_13;
  MR_Word STATE_VARIABLE_Edges_14;
  MR_Word STATE_VARIABLE_OutEdges_15;
  MR_Word STATE_VARIABLE_Edges_1_17;
  MR_Word STATE_VARIABLE_OutEdges_1_18;
  MR_Word OutEdgesOfNode_21;
  MR_Word TheEdges_22;
  MR_Word StartNodes_27;
  MR_Box conv0_OutEdgesOfNode_21;

  mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), ((MR_Box) (Node_4)), STATE_VARIABLE_Nodes_0_10, &STATE_VARIABLE_Nodes_13);
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), STATE_VARIABLE_OutEdges_0_12, ((MR_Box) (Node_4)), &conv0_OutEdgesOfNode_21);
  OutEdgesOfNode_21 = ((MR_Word) (conv0_OutEdgesOfNode_21));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_21, &TheEdges_22);
  mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), TheEdges_22, STATE_VARIABLE_Edges_0_11, &STATE_VARIABLE_Edges_1_17);
  mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), ((MR_Box) (Node_4)), STATE_VARIABLE_OutEdges_0_12, &STATE_VARIABLE_OutEdges_1_18);
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), STATE_VARIABLE_OutEdges_1_18, &StartNodes_27);
  transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(StartNodes_27, Node_4, STATE_VARIABLE_Edges_1_17, &STATE_VARIABLE_Edges_14, STATE_VARIABLE_OutEdges_1_18, &STATE_VARIABLE_OutEdges_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NS_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (AS_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_Nodes_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_Edges_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_OutEdges_15));
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_31));
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__1011__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_31, transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node_2,
  MR_Word STATE_VARIABLE_Edges_0_3,
  MR_Word * STATE_VARIABLE_Edges_4,
  MR_Word STATE_VARIABLE_OutEdges_0_5,
  MR_Word * STATE_VARIABLE_OutEdges_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_OutEdges_6 = STATE_VARIABLE_OutEdges_0_5;
      *STATE_VARIABLE_Edges_4 = STATE_VARIABLE_Edges_0_3;
    }
    else
    {
      MR_Word N_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ns_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word OutEdgesOfN0_19;
      MR_Word EdgesFromNPointToNode_20;
      MR_Word OutEdgesOfN_21;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_Edges_1_27;
      MR_Word STATE_VARIABLE_OutEdges_1_28;
      MR_Box conv0_OutEdgesOfN0_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Edges_0_3;
      MR_Word next_value_of_STATE_VARIABLE_OutEdges_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), STATE_VARIABLE_OutEdges_0_5, ((MR_Box) (N_14)), &conv0_OutEdgesOfN0_19);
      OutEdgesOfN0_19 = ((MR_Word) (conv0_OutEdgesOfN0_19));
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (Node_2));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (OutEdgesOfN0_19));
      }
      mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), Var_26, &EdgesFromNPointToNode_20);
      mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), EdgesFromNPointToNode_20, STATE_VARIABLE_Edges_0_3, &STATE_VARIABLE_Edges_1_27);
      mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), EdgesFromNPointToNode_20, OutEdgesOfN0_19, &OutEdgesOfN_21);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), ((MR_Box) (N_14)), ((MR_Box) (OutEdgesOfN_21)), STATE_VARIABLE_OutEdges_0_5, &STATE_VARIABLE_OutEdges_1_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ns_15;
      next_value_of_STATE_VARIABLE_Edges_0_3 = STATE_VARIABLE_Edges_1_27;
      next_value_of_STATE_VARIABLE_OutEdges_0_5 = STATE_VARIABLE_OutEdges_1_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Edges_0_3 = next_value_of_STATE_VARIABLE_Edges_0_3;
      STATE_VARIABLE_OutEdges_0_5 = next_value_of_STATE_VARIABLE_OutEdges_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_L_14;

  transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_L_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_L_14));
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
  MR_Word Node1_5,
  MR_Word Node2_6,
  MR_Word STATE_VARIABLE_Graph_0_9,
  MR_Word * STATE_VARIABLE_Graph_10)
{
  MR_Word InEdges_8;
  MR_Word Edges_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_9, 3))));
  MR_Word Var_12;
  MR_Box conv1_InEdges_8;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_5[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Node2_6));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[3]), Var_12, Edges_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InEdges_8);
  InEdges_8 = ((MR_Word) (conv1_InEdges_8));
  transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(InEdges_8, Node1_5, STATE_VARIABLE_Graph_0_9, STATE_VARIABLE_Graph_10);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node1_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Graph_4 = STATE_VARIABLE_Graph_0_3;
    else
    {
      MR_Word Edge_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Edges_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Node_13;
      MR_Word EdgeContent_15;
      MR_Word STATE_VARIABLE_Graph_1_19;
      MR_Word Edges_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_3, 3))));
      MR_Word EdgeInfo_21;
      MR_Box conv0_EdgeInfo_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Graph_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), Edges_20, ((MR_Box) (Edge_9)), &conv0_EdgeInfo_21);
      EdgeInfo_21 = ((MR_Word) (conv0_EdgeInfo_21));
      Node_13 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_21, 0))));
      EdgeContent_15 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_21, 2))));
      succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(Node_13, EdgeContent_15, Node1_2, STATE_VARIABLE_Graph_0_3);
      if (succeeded)
        STATE_VARIABLE_Graph_1_19 = STATE_VARIABLE_Graph_0_3;
      else
      {
        MR_Word _Edge_16;

        transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(Node_13, Node1_2, EdgeContent_15, &_Edge_16, STATE_VARIABLE_Graph_0_3, &STATE_VARIABLE_Graph_1_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_10;
      next_value_of_STATE_VARIABLE_Graph_0_3 = STATE_VARIABLE_Graph_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Graph_0_3 = next_value_of_STATE_VARIABLE_Graph_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
  MR_Word Node1_5,
  MR_Word Node2_6,
  MR_Word STATE_VARIABLE_Graph_0_9,
  MR_Word * STATE_VARIABLE_Graph_10)
{
  MR_Word EdgeList_8;
  MR_Word OutEdgesOfNode_11;
  MR_Word OutEdges_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_9, 4))));
  MR_Box conv0_OutEdgesOfNode_11;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_14, ((MR_Box) (Node2_6)), &conv0_OutEdgesOfNode_11);
  OutEdgesOfNode_11 = ((MR_Word) (conv0_OutEdgesOfNode_11));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_11, &EdgeList_8);
  transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(EdgeList_8, Node1_5, STATE_VARIABLE_Graph_0_9, STATE_VARIABLE_Graph_10);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Node1_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Graph_4 = STATE_VARIABLE_Graph_0_3;
    else
    {
      MR_Word Edge_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Edges_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Node_14;
      MR_Word EdgeContent_15;
      MR_Word STATE_VARIABLE_Graph_1_19;
      MR_Word Edges_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_3, 3))));
      MR_Word EdgeInfo_21;
      MR_Box conv0_EdgeInfo_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Graph_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), Edges_20, ((MR_Box) (Edge_9)), &conv0_EdgeInfo_21);
      EdgeInfo_21 = ((MR_Word) (conv0_EdgeInfo_21));
      Node_14 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_21, 1))));
      EdgeContent_15 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_21, 2))));
      succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(Node1_2, EdgeContent_15, Node_14, STATE_VARIABLE_Graph_0_3);
      if (succeeded)
        STATE_VARIABLE_Graph_1_19 = STATE_VARIABLE_Graph_0_3;
      else
      {
        MR_Word _Edge_16;

        transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(Node1_2, Node_14, EdgeContent_15, &_Edge_16, STATE_VARIABLE_Graph_0_3, &STATE_VARIABLE_Graph_1_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_10;
      next_value_of_STATE_VARIABLE_Graph_0_3 = STATE_VARIABLE_Graph_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Graph_0_3 = next_value_of_STATE_VARIABLE_Graph_0_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(
  MR_Word Graph1_3,
  MR_Word Graph2_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeCtorInfo_16_16;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TypeCtorInfo_18_18;
  MR_Word TypeInfo_12_31;
  MR_Word NS1_5 = ((MR_Word) ((MR_hl_field(0, Graph1_3, 0))));
  MR_Word AS1_6 = ((MR_Word) ((MR_hl_field(0, Graph1_3, 1))));
  MR_Word Nodes1_7 = ((MR_Word) ((MR_hl_field(0, Graph1_3, 2))));
  MR_Word Edges1_8 = ((MR_Word) ((MR_hl_field(0, Graph1_3, 3))));
  MR_Word OutEdges1_9 = ((MR_Word) ((MR_hl_field(0, Graph1_3, 4))));
  MR_Word NS2_10 = ((MR_Word) ((MR_hl_field(0, Graph2_4, 0))));
  MR_Word AS2_11 = ((MR_Word) ((MR_hl_field(0, Graph2_4, 1))));
  MR_Word Nodes2_12 = ((MR_Word) ((MR_hl_field(0, Graph2_4, 2))));
  MR_Word Edges2_13 = ((MR_Word) ((MR_hl_field(0, Graph2_4, 3))));
  MR_Word OutEdges2_14 = ((MR_Word) ((MR_hl_field(0, Graph2_4, 4))));
  MR_Integer C1_21;
  MR_Integer C2_22;
  MR_Word Ks1_23;
  MR_Integer C1_24;
  MR_Integer C2_25;
  MR_Word Ks1_26;
  MR_Integer C1_27;
  MR_Integer C2_28;
  MR_Word Ks1_29;

  succeeded = mercury__counter____Unify____counter_0_0(NS1_5, NS2_10);
  if (succeeded)
  {
    succeeded = mercury__counter____Unify____counter_0_0(AS1_6, AS2_11);
    if (succeeded)
    {
      TypeCtorInfo_15_15 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeCtorInfo_16_16 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
      mercury__map__count_2_p_0(TypeCtorInfo_15_15, TypeCtorInfo_16_16, Nodes1_7, &C1_21);
      mercury__map__count_2_p_0(TypeCtorInfo_15_15, TypeCtorInfo_16_16, Nodes2_12, &C2_22);
      succeeded = (C1_21 == C2_22);
      if (succeeded)
      {
        mercury__map__keys_2_p_0(TypeCtorInfo_15_15, TypeCtorInfo_16_16, Nodes1_7, &Ks1_23);
        succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(TypeCtorInfo_15_15, TypeCtorInfo_16_16, Ks1_23, Nodes1_7, Nodes2_12);
        if (succeeded)
        {
          TypeCtorInfo_17_17 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0);
          TypeCtorInfo_18_18 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0);
          mercury__map__count_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, Edges1_8, &C1_24);
          mercury__map__count_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, Edges2_13, &C2_25);
          succeeded = (C1_24 == C2_25);
          if (succeeded)
          {
            mercury__map__keys_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, Edges1_8, &Ks1_26);
            succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, Ks1_26, Edges1_8, Edges2_13);
            if (succeeded)
            {
              TypeInfo_12_31 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]);
              mercury__map__count_2_p_0(TypeCtorInfo_15_15, TypeInfo_12_31, OutEdges1_9, &C1_27);
              mercury__map__count_2_p_0(TypeCtorInfo_15_15, TypeInfo_12_31, OutEdges2_14, &C2_28);
              succeeded = (C1_27 == C2_28);
              if (succeeded)
              {
                mercury__map__keys_2_p_0(TypeCtorInfo_15_15, TypeInfo_12_31, OutEdges1_9, &Ks1_29);
                succeeded = transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(TypeCtorInfo_15_15, TypeCtorInfo_17_17, TypeCtorInfo_15_15, Ks1_29, OutEdges1_9, OutEdges2_14);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
  MR_Word TypeInfo_for_K1_12,
  MR_Word TypeInfo_for_K2_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word Map1_2,
  MR_Word Map2_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Box K_6 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Ks_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word V2_10;
      MR_Word V1_11;
      MR_Integer C1_17;
      MR_Integer C2_18;
      MR_Word Ks1_19;
      MR_Box conv0_V2_10;
      MR_Box conv1_V1_11;
      MR_Word next_value_of_HeadVar__1_1;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_K2_13));
        MR_hl_field(0, TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_V_14));
      }
      succeeded = mercury__map__search_3_p_0(TypeInfo_for_K1_12, TypeInfo_16_16, (MR_Word) (Map2_3), K_6, &conv0_V2_10);
      if (succeeded)
      {
        V2_10 = ((MR_Word) (conv0_V2_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__lookup_3_p_0(TypeInfo_for_K1_12, TypeInfo_16_16, (MR_Word) (Map1_2), K_6, &conv1_V1_11);
        V1_11 = ((MR_Word) (conv1_V1_11));
        mercury__map__count_2_p_0(TypeInfo_for_K2_13, TypeInfo_for_V_14, V1_11, &C1_17);
        mercury__map__count_2_p_0(TypeInfo_for_K2_13, TypeInfo_for_V_14, V2_10, &C2_18);
        succeeded = (C1_17 == C2_18);
        if (succeeded)
        {
          mercury__map__keys_2_p_0(TypeInfo_for_K2_13, TypeInfo_for_V_14, V1_11, &Ks1_19);
          succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(TypeInfo_for_K2_13, TypeInfo_for_V_14, Ks1_19, V1_11, V2_10);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ks_7;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
  MR_Word TypeInfo_for_K1_12,
  MR_Word TypeInfo_for_V1_13,
  MR_Word HeadVar__1_1,
  MR_Word Map1_2,
  MR_Word Map2_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Box K_6 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Ks_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box V2_10;
      MR_Box V1_11;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__map__search_3_p_0(TypeInfo_for_K1_12, TypeInfo_for_V1_13, Map2_3, K_6, &V2_10);
      if (succeeded)
      {
        mercury__map__lookup_3_p_0(TypeInfo_for_K1_12, TypeInfo_for_V1_13, Map1_2, K_6, &V1_11);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V1_13, V1_11, V2_10);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Ks_7;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(
  MR_Word Graph_7,
  MR_Word HLDS_8,
  MR_Word ProcInfo_9,
  MR_Word X_10,
  MR_Word STATE_VARIABLE_Reach_X_0_16,
  MR_Word * STATE_VARIABLE_Reach_X_17)
{
  MR_Word N_X_12;
  MR_Word Node_Selector_13;
  MR_Word VarTable_14;
  MR_Word TypeX_15;
  MR_Word Var_19;
  MR_Word Vars_25;

  Vars_25 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]), ((MR_Box) (X_10)));
  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(Graph_7, Vars_25, &N_X_12);
  Node_Selector_13 = mercury__pair__pair_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]), ((MR_Box) (N_X_12)), ((MR_Box) ((MR_Unsigned) 0U)));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_9, &VarTable_14);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_14, X_10, &TypeX_15);
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Node_Selector_13));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(Var_19, Graph_7, HLDS_8, TypeX_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Reach_X_0_16, STATE_VARIABLE_Reach_X_17);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_List_22;

  transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_List_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_List_22));
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Graph_2,
  MR_Word HLDS_3,
  MR_Word TypeX_4,
  MR_Word Processed0_5,
  MR_Word STATE_VARIABLE_Reach_X_0_6,
  MR_Word * STATE_VARIABLE_Reach_X_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Reach_X_7 = STATE_VARIABLE_Reach_X_0_6;
    else
    {
      MR_Word Node_Selector_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Node_Selectors0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Node_22 = ((MR_Word) ((MR_hl_field(0, Node_Selector_15, 0))));
      MR_Word Selector_23 = ((MR_Word) ((MR_hl_field(0, Node_Selector_15, 1))));
      MR_Word Processed_24;
      MR_Word EdgeList_25;
      MR_Word Node_Selectors_26;
      MR_Word STATE_VARIABLE_Reach_X_1_29;
      MR_Word Var_30;
      MR_Word OutEdgesOfNode_37;
      MR_Word OutEdges_40;
      MR_Box conv0_OutEdgesOfNode_37;
      MR_Box conv2_Node_Selectors_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Processed0_5;
      MR_Word next_value_of_STATE_VARIABLE_Reach_X_0_6;

      mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (Node_22)), STATE_VARIABLE_Reach_X_0_6, &STATE_VARIABLE_Reach_X_1_29);
      {
        Processed_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Processed_24, 0) = ((MR_Box) (Node_22));
        MR_hl_field(1, Processed_24, 1) = ((MR_Box) (Processed0_5));
      }
      OutEdges_40 = ((MR_Word) ((MR_hl_field(0, Graph_2, 4))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_40, ((MR_Box) (Node_22)), &conv0_OutEdgesOfNode_37);
      OutEdgesOfNode_37 = ((MR_Word) (conv0_OutEdgesOfNode_37));
      mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_37, &EdgeList_25);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_4[0]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (Selector_23));
        MR_hl_field(0, Var_30, 4) = ((MR_Box) (HLDS_3));
        MR_hl_field(0, Var_30, 5) = ((MR_Box) (TypeX_4));
        MR_hl_field(0, Var_30, 6) = ((MR_Box) (Graph_2));
        MR_hl_field(0, Var_30, 7) = ((MR_Box) (Processed_24));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[2]), Var_30, EdgeList_25, ((MR_Box) (Node_Selectors0_16)), &conv2_Node_Selectors_26);
      Node_Selectors_26 = ((MR_Word) (conv2_Node_Selectors_26));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Node_Selectors_26;
      next_value_of_Processed0_5 = Processed_24;
      next_value_of_STATE_VARIABLE_Reach_X_0_6 = STATE_VARIABLE_Reach_X_1_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Processed0_5 = next_value_of_Processed0_5;
      STATE_VARIABLE_Reach_X_0_6 = next_value_of_STATE_VARIABLE_Reach_X_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13));
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__662__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &(env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1, &env);
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(
  MR_Word Start_5,
  MR_Word Label_6,
  MR_Word End_7,
  MR_Word Graph_8)
{
  MR_bool succeeded;
  MR_Word OutEdgesOfStart_9;
  MR_Word EdgePointToEndList_10;
  MR_Word Var_12;
  MR_Word OutEdges_17 = ((MR_Word) ((MR_hl_field(0, Graph_8, 4))));
  MR_Box conv0_OutEdgesOfStart_9;
  MR_Word Var_11;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_17, ((MR_Box) (Start_5)), &conv0_OutEdgesOfStart_9);
  OutEdgesOfStart_9 = ((MR_Word) (conv0_OutEdgesOfStart_9));
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (End_7));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (OutEdgesOfStart_9));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), Var_12, &EdgePointToEndList_10);
  succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(Label_6, EdgePointToEndList_10, Graph_8, &Var_11);
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(
  MR_Word N_5,
  MR_Word EdgeContent_6,
  MR_Word G_7,
  MR_Word * M_8)
{
  MR_bool succeeded;
  MR_Word EdgeList_9;
  MR_Word OutEdgesOfNode_10;
  MR_Word OutEdges_13 = ((MR_Word) ((MR_hl_field(0, G_7, 4))));
  MR_Box conv0_OutEdgesOfNode_10;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_13, ((MR_Box) (N_5)), &conv0_OutEdgesOfNode_10);
  OutEdgesOfNode_10 = ((MR_Word) (conv0_OutEdgesOfNode_10));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_10, &EdgeList_9);
  succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(EdgeContent_6, EdgeList_9, G_7, M_8);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
  MR_Word EdgeContent_5,
  MR_Word HeadVar__2_2,
  MR_Word G_8,
  MR_Word * M_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_13_15;
    MR_Word TypeCtorInfo_14_16;
    MR_Word Edge_6;
    MR_Word Edges_7;
    MR_Word M0_11;
    MR_Word EdgeContent0_12;
    MR_Word Edges_13;
    MR_Word EdgeInfo_14;
    MR_Box conv0_EdgeInfo_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Edge_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Edges_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Edges_13 = ((MR_Word) ((MR_hl_field(0, G_8, 3))));
      TypeCtorInfo_13_15 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0);
      TypeCtorInfo_14_16 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_13_15, TypeCtorInfo_14_16, Edges_13, ((MR_Box) (Edge_6)), &conv0_EdgeInfo_14);
      EdgeInfo_14 = ((MR_Word) (conv0_EdgeInfo_14));
      M0_11 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_14, 1))));
      EdgeContent0_12 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_14, 2))));
      succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(EdgeContent0_12, EdgeContent_5);
      if (succeeded)
      {
        *M_9 = M0_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Edges_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_endnodes_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word EndNodeList_6;
  MR_Word OutEdgesOfNode_7;
  MR_Word OutEdges_10 = ((MR_Word) ((MR_hl_field(0, Graph_4, 4))));
  MR_Box conv0_OutEdgesOfNode_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_10, ((MR_Box) (Node_5)), &conv0_OutEdgesOfNode_7);
  OutEdgesOfNode_7 = ((MR_Word) (conv0_OutEdgesOfNode_7));
  mercury__map__values_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_7, &EndNodeList_6);
  return EndNodeList_6;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_map_outedges_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word OutEdgesOfNode_6;
  MR_Word OutEdges_7 = ((MR_Word) ((MR_hl_field(0, Graph_4, 4))));
  MR_Box conv0_OutEdgesOfNode_6;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_7, ((MR_Box) (Node_5)), &conv0_OutEdgesOfNode_6);
  OutEdgesOfNode_6 = ((MR_Word) (conv0_OutEdgesOfNode_6));
  return OutEdgesOfNode_6;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word EdgeList_6;
  MR_Word OutEdgesOfNode_7;
  MR_Word OutEdges_10 = ((MR_Word) ((MR_hl_field(0, Graph_4, 4))));
  MR_Box conv0_OutEdgesOfNode_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_10, ((MR_Box) (Node_5)), &conv0_OutEdgesOfNode_7);
  OutEdgesOfNode_7 = ((MR_Word) (conv0_OutEdgesOfNode_7));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_7, &EdgeList_6);
  return EdgeList_6;
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(
  MR_Word Graph_3,
  MR_Word Region_4)
{
  MR_bool succeeded;
  MR_Word IsAlloc_5;
  MR_Word NodeContent_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Graph_3, 2))));
  MR_Box conv0_NodeContent_6;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_7, ((MR_Box) (Region_4)), &conv0_NodeContent_6);
  NodeContent_6 = ((MR_Word) (conv0_NodeContent_6));
  IsAlloc_5 = ((MR_Unsigned) ((MR_hl_field(0, NodeContent_6, 4))) & (MR_Integer) 1);
  succeeded = (IsAlloc_5 == (MR_Integer) 1);
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word IsAllocated_6;
  MR_Word NodeContent_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0_NodeContent_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_8, ((MR_Box) (Node_5)), &conv0_NodeContent_7);
  NodeContent_7 = ((MR_Word) (conv0_NodeContent_7));
  IsAllocated_6 = ((MR_Unsigned) ((MR_hl_field(0, NodeContent_7, 4))) & (MR_Integer) 1);
  return IsAllocated_6;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_vars_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word Vars_6;
  MR_Word NodeContent_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0_NodeContent_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_8, ((MR_Box) (Node_5)), &conv0_NodeContent_7);
  NodeContent_7 = ((MR_Word) (conv0_NodeContent_7));
  Vars_6 = ((MR_Word) ((MR_hl_field(0, NodeContent_7, 0))));
  return Vars_6;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word NodeType_6;
  MR_Word NodeContent_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0_NodeContent_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_8, ((MR_Box) (Node_5)), &conv0_NodeContent_7);
  NodeContent_7 = ((MR_Word) (conv0_NodeContent_7));
  NodeType_6 = ((MR_Word) ((MR_hl_field(0, NodeContent_7, 3))));
  return NodeType_6;
}

MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_String RegionName_6;
  MR_Word NodeContent_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0_NodeContent_7;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_8, ((MR_Box) (Node_5)), &conv0_NodeContent_7);
  NodeContent_7 = ((MR_Word) (conv0_NodeContent_7));
  RegionName_6 = ((MR_String) ((MR_hl_field(0, NodeContent_7, 1))));
  return RegionName_6;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(
  MR_Word Graph_4,
  MR_Word Node_5,
  MR_Word * MergedNode_6)
{
  MR_bool succeeded;
  MR_Word NodeMap_7 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0__NodeContent_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), NodeMap_7, ((MR_Box) (Node_5)), &conv0__NodeContent_8);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *MergedNode_6 = Node_5;
  else
  {
    MR_Word AllNodes_9;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
    MR_Word MergedNode0_10;

    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_19, &AllNodes_9);
    succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(Graph_4, AllNodes_9, Node_5, &MergedNode0_10);
    if (succeeded)
      *MergedNode_6 = MergedNode0_10;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_node\'/3", (MR_String) "node not found");
        return;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word HeadVar__2_2,
  MR_Word Node_8,
  MR_Word * MergedNode_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_8_18;
    MR_Word TypeCtorInfo_9_19;
    MR_Word N_6;
    MR_Word Ns_7;
    MR_Word NodeContent_10;
    MR_Word Var_17;
    MR_Box conv0_NodeContent_10;
    MR_Word TypeCtorInfo_16_16;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      N_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Ns_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, Graph_5, 2))));
      TypeCtorInfo_8_18 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeCtorInfo_9_19 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_18, TypeCtorInfo_9_19, Var_17, ((MR_Box) (N_6)), &conv0_NodeContent_10);
      NodeContent_10 = ((MR_Word) (conv0_NodeContent_10));
      Var_11 = ((MR_Word) ((MR_hl_field(0, NodeContent_10, 2))));
      TypeCtorInfo_16_16 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (Node_8)), Var_11);
      if (succeeded)
      {
        *MergedNode_9 = N_6;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Ns_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(
  MR_Word Graph_4,
  MR_Word Var_5,
  MR_Word * Node_6)
{
  MR_Word Vars_7;

  Vars_7 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]), ((MR_Box) (Var_5)));
  transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(Graph_4, Vars_7, Node_6);
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(
  MR_Word Graph_4,
  MR_Word Vars_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word Nodes_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Word NodePrime_8;

  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_11, &Nodes_7);
  succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(Graph_4, Nodes_7, Vars_5, &NodePrime_8);
  if (succeeded)
    *Node_6 = NodePrime_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_vars\'/3", (MR_String) "node not found");
      return;
    }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word List_6,
  MR_Word Vars_7,
  MR_Word * Node_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (List_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_8_19;
    MR_Word TypeCtorInfo_9_20;
    MR_Word ANode_9;
    MR_Word Rest_10;
    MR_Word NodeContent_11;
    MR_Word Var_18;
    MR_Box conv0_NodeContent_11;
    MR_Word TypeInfo_17_17;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ANode_9 = ((MR_Word) ((MR_hl_field(1, List_6, 0))));
      Rest_10 = ((MR_Word) ((MR_hl_field(1, List_6, 1))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, Graph_5, 2))));
      TypeCtorInfo_8_19 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeCtorInfo_9_20 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_19, TypeCtorInfo_9_20, Var_18, ((MR_Box) (ANode_9)), &conv0_NodeContent_11);
      NodeContent_11 = ((MR_Word) (conv0_NodeContent_11));
      Var_12 = ((MR_Word) ((MR_hl_field(0, NodeContent_11, 0))));
      TypeInfo_17_17 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_2[0]);
      succeeded = mercury__set__subset_2_p_0(TypeInfo_17_17, Vars_7, Var_12);
      if (succeeded)
      {
        *Node_8 = ANode_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_List_6 = Rest_10;

        // direct tailcall eliminated
        ;
        List_6 = next_value_of_List_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_region_name_3_p_0(
  MR_Word Graph_4,
  MR_String RegionName_5,
  MR_Word * Node_6)
{
  MR_bool succeeded;
  MR_Word AllNodes_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Word NodePrime_8;

  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_11, &AllNodes_7);
  succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(Graph_4, AllNodes_7, RegionName_5, &NodePrime_8);
  if (succeeded)
    *Node_6 = NodePrime_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_region_name\'/3", (MR_String) "node not found");
      return;
    }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
  MR_Word Graph_5,
  MR_Word NodeList_6,
  MR_String RegName_7,
  MR_Word * Node_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NodeList_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_8_14;
    MR_Word TypeCtorInfo_9_15;
    MR_Word ANode_9;
    MR_Word Rest_10;
    MR_String RegionANode_11;
    MR_Word NodeContent_12;
    MR_Word Var_13;
    MR_Box conv0_NodeContent_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ANode_9 = ((MR_Word) ((MR_hl_field(1, NodeList_6, 0))));
      Rest_10 = ((MR_Word) ((MR_hl_field(1, NodeList_6, 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, Graph_5, 2))));
      TypeCtorInfo_8_14 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeCtorInfo_9_15 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_14, TypeCtorInfo_9_15, Var_13, ((MR_Box) (ANode_9)), &conv0_NodeContent_12);
      NodeContent_12 = ((MR_Word) (conv0_NodeContent_12));
      RegionANode_11 = ((MR_String) ((MR_hl_field(0, NodeContent_12, 1))));
      succeeded = (strcmp(RegionANode_11, RegName_7) == 0);
      if (succeeded)
      {
        *Node_8 = ANode_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_NodeList_6 = Rest_10;

        // direct tailcall eliminated
        ;
        NodeList_6 = next_value_of_NodeList_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0(
  MR_Word Graph_5,
  MR_Word Start_6,
  MR_Word EType_7,
  MR_Word * E_8)
{
  MR_bool succeeded;
  MR_Word Type_9;
  MR_Word NodeContent_15;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Graph_5, 2))));
  MR_Box conv0_NodeContent_15;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_16, ((MR_Box) (Start_6)), &conv0_NodeContent_15);
  NodeContent_15 = ((MR_Word) (conv0_NodeContent_15));
  Type_9 = ((MR_Word) ((MR_hl_field(0, NodeContent_15, 3))));
  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, EType_7);
  if (succeeded)
  {
    *E_8 = Start_6;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Start_6));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(Graph_5, Var_10, Var_10, EType_7, E_8);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
  MR_Word Graph_6,
  MR_Word HeadVar__2_2,
  MR_Word VisitedNodes0_9,
  MR_Word EType_10,
  MR_Word * E_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_8_20;
    MR_Word TypeCtorInfo_9_21;
    MR_Word TypeCtorInfo_8_23;
    MR_Word TypeInfo_9_24;
    MR_Word StartNode_7;
    MR_Word StartNodes0_8;
    MR_Word Ends_12;
    MR_Word OutEdgesOfNode_19;
    MR_Word OutEdges_22;
    MR_Box conv0_OutEdgesOfNode_19;
    MR_Word E1_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      StartNode_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      StartNodes0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      OutEdges_22 = ((MR_Word) ((MR_hl_field(0, Graph_6, 4))));
      TypeCtorInfo_8_23 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeInfo_9_24 = (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_23, TypeInfo_9_24, OutEdges_22, ((MR_Box) (StartNode_7)), &conv0_OutEdgesOfNode_19);
      OutEdgesOfNode_19 = ((MR_Word) (conv0_OutEdgesOfNode_19));
      TypeCtorInfo_8_20 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0);
      TypeCtorInfo_9_21 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      mercury__map__values_2_p_0(TypeCtorInfo_8_20, TypeCtorInfo_9_21, OutEdgesOfNode_19, &Ends_12);
      succeeded = transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(Ends_12, Graph_6, EType_10, &E1_13);
      if (succeeded)
      {
        *E_11 = E1_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word StartNodes1_14;
        MR_Word VisitedNodes_15;
        MR_Word StartNodes_16;
        MR_Word Var_17;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_VisitedNodes0_9;

        StartNodes1_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), StartNodes0_8, Ends_12);
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (StartNode_7));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (VisitedNodes0_9));
        }
        mercury__list__remove_dups_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_17, &VisitedNodes_15);
        mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), StartNodes1_14, VisitedNodes_15, &StartNodes_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = StartNodes_16;
        next_value_of_VisitedNodes0_9 = VisitedNodes_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        VisitedNodes0_9 = next_value_of_VisitedNodes0_9;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Graph_7,
  MR_Word Type_8,
  MR_Word * End_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_8_14;
    MR_Word TypeCtorInfo_9_15;
    MR_Word N_5;
    MR_Word Ns_6;
    MR_Word NType_10;
    MR_Word NodeContent_12;
    MR_Word Var_13;
    MR_Box conv0_NodeContent_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      N_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Ns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, Graph_7, 2))));
      TypeCtorInfo_8_14 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0);
      TypeCtorInfo_9_15 = (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_14, TypeCtorInfo_9_15, Var_13, ((MR_Box) (N_5)), &conv0_NodeContent_12);
      NodeContent_12 = ((MR_Word) (conv0_NodeContent_12));
      NType_10 = ((MR_Word) ((MR_hl_field(0, NodeContent_12, 3))));
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(NType_10, Type_8);
      if (succeeded)
      {
        *End_9 = N_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Ns_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_1(
  MR_Word G_5,
  MR_Word S_6,
  MR_Word * E_7,
  MR_Word * Path_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(G_5, S_6, E_7, (MR_Word) ((MR_Unsigned) 0U), Path_8, cont, cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13));
  *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8) = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8));
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (*((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8))), (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
  if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
  {
    (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13));
      MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_16));
    }
    ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18));
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14));
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18));
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15));
  }
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14)), (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
  if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9));
    }
    transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Var_17, &(env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5, env_ptr);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
  MR_Word G_6,
  MR_Word S_7,
  MR_Word * E_8,
  MR_Word Nodes0_9,
  MR_Word * Path_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6 = G_6;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8 = E_8;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9 = Nodes0_9;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10 = Path_10;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word OutEdges_11 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, 4))));
    MR_Word OutEdgesOfS_12;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Box conv0_OutEdgesOfS_12;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_11, ((MR_Box) (S_7)), &conv0_OutEdgesOfS_12);
    OutEdgesOfS_12 = ((MR_Word) (conv0_OutEdgesOfS_12));
    mercury__map__member_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfS_12, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2, &env);
    mercury__map__member_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfS_12, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4, &env);
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0(
  MR_Word G_5,
  MR_Word S_6,
  MR_Word E_7,
  MR_Word * Path_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(G_5, S_6, E_7, (MR_Word) ((MR_Unsigned) 0U), Path_8, cont, cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13));
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23));
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer CastX_30 = (MR_Integer) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8);
    MR_Integer CastY_31 = (MR_Integer) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23);

    (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (CastX_30 == CastY_31);
    if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_28 = (MR_Integer) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8);
      MR_Integer ArgY1_29 = (MR_Integer) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_23);

      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (ArgX1_28 == ArgY1_29);
    }
    if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8)), (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13));
          MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_16));
        }
        ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18));
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14 = ((MR_Word) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14));
  transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18));
    MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15));
  }
  ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14)), (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
  (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9));
    }
    transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0((env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8, (env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Var_17, &(env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5, env_ptr);
  }
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
  MR_Word G_6,
  MR_Word S_7,
  MR_Word E_8,
  MR_Word Nodes0_9,
  MR_Word * Path_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s env;

  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6 = G_6;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8 = E_8;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9 = Nodes0_9;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10 = Path_10;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont = cont;
  (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Word OutEdges_11 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, 4))));
    MR_Word OutEdgesOfS_12;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv0_OutEdgesOfS_12;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_11, ((MR_Box) (S_7)), &conv0_OutEdgesOfS_12);
    OutEdgesOfS_12 = ((MR_Word) (conv0_OutEdgesOfS_12));
    mercury__map__member_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfS_12, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_Var_23, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2, &env);
    mercury__map__member_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfS_12, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18, &(env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4, &env);
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word Successors_6;
  MR_Word SuccessorList_7;
  MR_Word OutEdgesOfNode_9;
  MR_Word OutEdges_12 = ((MR_Word) ((MR_hl_field(0, Graph_4, 4))));
  MR_Box conv0_OutEdgesOfNode_9;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges_12, ((MR_Box) (Node_5)), &conv0_OutEdgesOfNode_9);
  OutEdgesOfNode_9 = ((MR_Word) (conv0_OutEdgesOfNode_9));
  mercury__map__values_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), OutEdgesOfNode_9, &SuccessorList_7);
  mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), SuccessorList_7, &Successors_6);
  return Successors_6;
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(
  MR_Word Start_7,
  MR_Word End_8,
  MR_Word EdgeContent_9,
  MR_Word * Edge_10,
  MR_Word STATE_VARIABLE_G_0_21,
  MR_Word * STATE_VARIABLE_G_22)
{
  MR_Word ES0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_21, 1))));
  MR_Integer EdgeId_13;
  MR_Word ES_14;
  MR_Word Edges0_15;
  MR_Word Edges_16;
  MR_Word OutEdges0_17;
  MR_Word StartOutEdges0_18;
  MR_Word StartOutEdges_19;
  MR_Word OutEdges_20;
  MR_Word STATE_VARIABLE_G_1_23;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_G_2_25;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Box conv0_StartOutEdges0_18;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;

  mercury__counter__allocate_3_p_0(&EdgeId_13, ES0_12, &ES_14);
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_21, 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_21, 2))));
  Edges0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_21, 3))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_21, 4))));
  {
    STATE_VARIABLE_G_1_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_G_1_23, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, STATE_VARIABLE_G_1_23, 1) = ((MR_Box) (ES_14));
    MR_hl_field(0, STATE_VARIABLE_G_1_23, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, STATE_VARIABLE_G_1_23, 3) = ((MR_Box) (Edges0_15));
    MR_hl_field(0, STATE_VARIABLE_G_1_23, 4) = ((MR_Box) (Var_38));
  }
  *Edge_10 = (MR_Word) (EdgeId_13);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (Start_7));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (End_8));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) (EdgeContent_9));
  }
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), ((MR_Box) (*Edge_10)), ((MR_Box) (Var_24)), Edges0_15, &Edges_16);
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_23, 0))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_23, 1))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_23, 2))));
  OutEdges0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_23, 4))));
  {
    STATE_VARIABLE_G_2_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_G_2_25, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_G_2_25, 1) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_G_2_25, 2) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_G_2_25, 3) = ((MR_Box) (Edges_16));
    MR_hl_field(0, STATE_VARIABLE_G_2_25, 4) = ((MR_Box) (OutEdges0_17));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), OutEdges0_17, ((MR_Box) (Start_7)), &conv0_StartOutEdges0_18);
  StartOutEdges0_18 = ((MR_Word) (conv0_StartOutEdges0_18));
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (*Edge_10)), ((MR_Box) (End_8)), StartOutEdges0_18, &StartOutEdges_19);
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), ((MR_Box) (Start_7)), ((MR_Box) (StartOutEdges_19)), OutEdges0_17, &OutEdges_20);
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_25, 0))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_25, 1))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_25, 2))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_25, 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_G_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (OutEdges_20));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(
  MR_Word G_6,
  MR_Word Edge_7,
  MR_Word * Start_8,
  MR_Word * End_9,
  MR_Word * Content_10)
{
  MR_Word Edges_11 = ((MR_Word) ((MR_hl_field(0, G_6, 3))));
  MR_Word EdgeInfo_12;
  MR_Box conv0_EdgeInfo_12;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), Edges_11, ((MR_Box) (Edge_7)), &conv0_EdgeInfo_12);
  EdgeInfo_12 = ((MR_Word) (conv0_EdgeInfo_12));
  *Start_8 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_12, 0))));
  *End_9 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_12, 1))));
  *Content_10 = ((MR_Word) ((MR_hl_field(0, EdgeInfo_12, 2))));
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(
  MR_Word Content0_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_G_0_17,
  MR_Word * STATE_VARIABLE_G_18)
{
  MR_Integer NodeId_6;
  MR_Word NS0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_17, 0))));
  MR_Word NS_9;
  MR_Word MergedFrom_11;
  MR_Word Content_12;
  MR_Word NodeMap0_13;
  MR_Word NodeMap_14;
  MR_Word OutEdges0_15;
  MR_Word OutEdges_16;
  MR_Word STATE_VARIABLE_G_1_19;
  MR_Word STATE_VARIABLE_G_2_20;
  MR_Word Var_21;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_String Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;

  mercury__counter__allocate_3_p_0(&NodeId_6, NS0_8, &NS_9);
  *HeadVar__2_2 = (MR_Word) (NodeId_6);
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_17, 1))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_17, 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_17, 3))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_17, 4))));
  {
    STATE_VARIABLE_G_1_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_G_1_19, 0) = ((MR_Box) (NS_9));
    MR_hl_field(0, STATE_VARIABLE_G_1_19, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, STATE_VARIABLE_G_1_19, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, STATE_VARIABLE_G_1_19, 3) = ((MR_Box) (Var_37));
    MR_hl_field(0, STATE_VARIABLE_G_1_19, 4) = ((MR_Box) (Var_38));
  }
  MergedFrom_11 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (*HeadVar__2_2)));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Content0_5, 0))));
  Var_40 = ((MR_String) ((MR_hl_field(0, Content0_5, 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Content0_5, 3))));
  Var_43 = ((MR_Unsigned) ((MR_hl_field(0, Content0_5, 4))) & (MR_Integer) 1);
  {
    Content_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Content_12, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, Content_12, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, Content_12, 2) = ((MR_Box) (MergedFrom_11));
    MR_hl_field(0, Content_12, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, Content_12, 4) = (MR_Box) ((MR_Unsigned) (Var_43));
  }
  NodeMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_19, 2))));
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), ((MR_Box) (*HeadVar__2_2)), ((MR_Box) (Content_12)), NodeMap0_13, &NodeMap_14);
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_19, 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_19, 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_19, 3))));
  OutEdges0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_1_19, 4))));
  {
    STATE_VARIABLE_G_2_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_G_2_20, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_G_2_20, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_G_2_20, 2) = ((MR_Box) (NodeMap_14));
    MR_hl_field(0, STATE_VARIABLE_G_2_20, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_G_2_20, 4) = ((MR_Box) (OutEdges0_15));
  }
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), ((MR_Box) (*HeadVar__2_2)), ((MR_Box) (Var_21)), OutEdges0_15, &OutEdges_16);
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_20, 0))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_20, 1))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_20, 2))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_2_20, 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_G_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 4) = ((MR_Box) (OutEdges_16));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(
  MR_Word Node_5,
  MR_Word IsAlloc_6,
  MR_Word STATE_VARIABLE_Graph_0_10,
  MR_Word * STATE_VARIABLE_Graph_11)
{
  MR_Word NodeContent0_8;
  MR_Word NodeContent_9;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 2))));
  MR_Word Nodes0_24;
  MR_Word Nodes_25;
  MR_Box conv0_NodeContent0_8;
  MR_Word Var_19;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_12, ((MR_Box) (Node_5)), &conv0_NodeContent0_8);
  NodeContent0_8 = ((MR_Word) (conv0_NodeContent0_8));
  Var_19 = ((MR_Word) ((MR_hl_field(0, NodeContent0_8, 0))));
  Var_20 = ((MR_String) ((MR_hl_field(0, NodeContent0_8, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, NodeContent0_8, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, NodeContent0_8, 3))));
  {
    NodeContent_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NodeContent_9, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, NodeContent_9, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, NodeContent_9, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, NodeContent_9, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, NodeContent_9, 4) = (MR_Box) ((MR_Unsigned) (IsAlloc_6));
  }
  Nodes0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 2))));
  mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), ((MR_Box) (Node_5)), ((MR_Box) (NodeContent_9)), Nodes0_24, &Nodes_25);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 3))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Graph_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (Nodes_25));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_36));
  }
}

void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(
  MR_Word Node_5,
  MR_Word NodeContent_6,
  MR_Word STATE_VARIABLE_Graph_0_10,
  MR_Word * STATE_VARIABLE_Graph_11)
{
  MR_Word Nodes0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 2))));
  MR_Word Nodes_9;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;

  mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), ((MR_Box) (Node_5)), ((MR_Box) (NodeContent_6)), Nodes0_8, &Nodes_9);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 0))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 3))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Graph_0_10, 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Graph_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Nodes_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
  }
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(
  MR_Word Graph_4,
  MR_Word Node_5)
{
  MR_Word NodeContent_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Graph_4, 2))));
  MR_Box conv0_NodeContent_6;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_7, ((MR_Box) (Node_5)), &conv0_NodeContent_6);
  NodeContent_6 = ((MR_Word) (conv0_NodeContent_6));
  return NodeContent_6;
}

MR_Integer MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(
  MR_Word G_3)
{
  MR_Integer NextNodeId_4;
  MR_Word NodeSupply_5 = ((MR_Word) ((MR_hl_field(0, G_3, 0))));
  MR_Word Var_6;

  mercury__counter__allocate_3_p_0(&NextNodeId_4, NodeSupply_5, &Var_6);
  return NextNodeId_4;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(
  MR_Word Graph_3)
{
  MR_Word NodeList_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Graph_3, 2))));

  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), Var_5, &NodeList_4);
  return NodeList_4;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_outedges_1_f_0(
  MR_Word G_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, G_3, 4))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edges_1_f_0(
  MR_Word G_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, G_3, 3))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(
  MR_Word G_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, G_3, 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0(void)
{
  MR_Word Graph_2;
  MR_Word NodeSupply_3;
  MR_Word EdgeSupply_4;
  MR_Word Nodes_5;
  MR_Word Edges_6;
  MR_Word OutEdges_7;

  mercury__counter__init_2_p_0((MR_Integer) 1, &NodeSupply_3);
  mercury__counter__init_2_p_0((MR_Integer) 1, &EdgeSupply_4);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0), &Nodes_5);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0), &Edges_6);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph_scalar_common_1[0]), &OutEdges_7);
  {
    Graph_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Graph_2, 0) = ((MR_Box) (NodeSupply_3));
    MR_hl_field(0, Graph_2, 1) = ((MR_Box) (EdgeSupply_4));
    MR_hl_field(0, Graph_2, 2) = ((MR_Box) (Nodes_5));
    MR_hl_field(0, Graph_2, 3) = ((MR_Box) (Edges_6));
    MR_hl_field(0, Graph_2, 4) = ((MR_Box) (OutEdges_7));
  }
  return Graph_2;
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.rbmm.points_to_graph.
