/*
** Automatically generated from `rbmm.points_to_graph.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"



#line 818 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0_s {
#line 818 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__HeadVar__3_33;
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont;
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont_env_ptr;
#line 818 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__conv0_HeadVar__3_33;
#line 818 "rbmm.points_to_graph.m"
};

#line 856 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0_s {
#line 856 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__HeadVar__3_13;
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont;
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont_env_ptr;
#line 856 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__conv0_HeadVar__3_13;
#line 856 "rbmm.points_to_graph.m"
};

#line 818 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s {
#line 818 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1;
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont;
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr;
#line 818 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33;
#line 818 "rbmm.points_to_graph.m"
};

#line 429 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s {
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6;
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8;
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9;
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10;
#line 429 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont;
#line 429 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr;
#line 431 "rbmm.points_to_graph.m"
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded;
#line 431 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19;
#line 435 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13;
#line 435 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17;
#line 435 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13;
#line 435 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18;
#line 439 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18;
#line 439 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14;
#line 429 "rbmm.points_to_graph.m"
};

#line 428 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s {
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6;
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9;
#line 428 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10;
#line 428 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont;
#line 428 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr;
#line 431 "rbmm.points_to_graph.m"
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded;
#line 431 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19;
#line 435 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13;
#line 435 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17;
#line 435 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23;
#line 435 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13;
#line 435 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16;
#line 439 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18;
#line 439 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18;
#line 439 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14;
#line 428 "rbmm.points_to_graph.m"
};

#line 856 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s {
#line 856 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1;
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont;
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr;
#line 856 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13;
#line 856 "rbmm.points_to_graph.m"
};


#line 283 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 286 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;

#line 289 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 292 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 295 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 298 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 301 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 304 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;

#line 307 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;

#line 310 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 313 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 316 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5];

#line 319 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5];

#line 322 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0;

#line 325 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1];

#line 328 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1];

#line 331 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1];

#line 334 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1];

#line 337 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1];

#line 340 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0;

#line 343 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1];

#line 346 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0;

#line 349 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3];

#line 352 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3];

#line 355 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0;

#line 358 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1];

#line 361 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1];

#line 364 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1];

#line 367 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1];

#line 370 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1];

#line 373 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0;

#line 376 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 379 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 382 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 385 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5];

#line 388 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5];

#line 391 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0;

#line 394 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1];

#line 397 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1];

#line 400 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1];

#line 403 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1];

#line 406 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
#line 409 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 411 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 414 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
#line 417 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 419 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 421 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 424 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
#line 427 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 429 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 432 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
#line 435 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 437 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 439 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 442 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
#line 445 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 447 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 450 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
#line 453 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 455 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 457 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 460 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
#line 463 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 465 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 468 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
#line 471 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 473 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 475 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 478 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
#line 481 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 483 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 486 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
#line 489 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 491 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 493 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 496 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
#line 499 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 501 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 504 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
#line 507 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 509 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 511 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 514 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
#line 517 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 519 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 522 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
#line 525 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 527 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 529 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 532 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
#line 535 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 537 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 540 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
#line 543 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 545 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 547 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 550 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
#line 553 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 555 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 558 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
#line 561 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 563 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 565 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_1(
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0(
#line 818 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 818 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
#line 818 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_1(
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0(
#line 856 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 856 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
#line 856 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 988 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
#line 988 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22);

#line 977 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 977 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 958 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
#line 958 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7);

#line 925 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

#line 898 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

#line 841 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
#line 841 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9);

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
#line 818 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 818 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 809 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
#line 809 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
#line 809 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6);

#line 764 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
#line 764 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
#line 764 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 764 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3);

#line 747 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 747 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

#line 733 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
#line 733 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14);

#line 731 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
#line 731 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4);

#line 710 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 710 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

#line 692 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 692 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

#line 671 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 671 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

#line 552 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
#line 552 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9);

#line 520 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
#line 520 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

#line 500 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
#line 500 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 500 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
#line 500 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
#line 500 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

#line 478 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
#line 478 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9);

#line 456 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
#line 456 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11);

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 429 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 429 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 429 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 428 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 428 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 428 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 428 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
#line 856 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 856 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);


static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][11];




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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
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

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_4[1][8] = {
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

static /* final */ const MR_Box transform_hlds__rbmm__points_to_graph_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0))
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



#line 1136 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1145 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0
  }
};

#line 1153 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1161 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1169 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1177 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1186 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1194 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0
  }
};

#line 1203 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0
  }
};

#line 1212 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1221 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1230 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

#line 1239 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5] = {
  (MR_String) "rptg_node_supply",
  (MR_String) "rptg_edge_supply",
  (MR_String) "rptg_nodes",
  (MR_String) "rptg_edges",
  (MR_String) "rptg_outedges"
};

#line 1248 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0 = {
  (MR_String) "rpt_graph",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0,
  NULL,
  NULL
};

#line 1263 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

#line 1268 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0
  }
};

#line 1277 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

#line 1282 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1] = {
  (MR_Integer) 0
};

#line 1287 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rpt_graph",
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0
  },
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0
};

#line 1308 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1] = {
  (MR_Integer) 0
};

#line 1313 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 = {
  (MR_String) "rptg_edge",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1320 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge",
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0
  },
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0
};

#line 1341 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1] = {
  (MR_Integer) 0
};

#line 1346 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 = {
  (MR_String) "rptg_edge_content",
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0,
  (MR_String) "rptg_ec_label"
};

#line 1353 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_content",
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0
  },
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0
};

#line 1374 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0
};

#line 1381 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3] = {
  (MR_String) "rptg_edge_from_node",
  (MR_String) "rptg_edge_to_node",
  (MR_String) "rptg_edge_label"
};

#line 1388 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0 = {
  (MR_String) "rptg_edge_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0,
  NULL,
  NULL
};

#line 1403 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

#line 1408 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0
  }
};

#line 1417 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

#line 1422 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1] = {
  (MR_Integer) 0
};

#line 1427 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edge_info",
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0
  },
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0
};

#line 1448 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_edges",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1469 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1] = {
  (MR_Integer) 0
};

#line 1474 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 = {
  (MR_String) "rptg_node",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1481 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node",
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0
  },
  {
    &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0
};

#line 1502 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1510 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1518 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1526 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1535 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5] = {
  (MR_String) "rptg_nc_vars",
  (MR_String) "rptg_nc_reg_var_name",
  (MR_String) "rptg_nc_merged_from",
  (MR_String) "rptg_nc_node_type",
  (MR_String) "rptg_nc_is_allocated"
};

#line 1544 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0 = {
  (MR_String) "rptg_node_content",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0,
  NULL,
  NULL
};

#line 1559 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

#line 1564 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0
  }
};

#line 1573 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

#line 1578 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1] = {
  (MR_Integer) 0
};

#line 1583 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_node_content",
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0
  },
  {
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0
};

#line 1604 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_nodes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_nodes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1625 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_outedges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.points_to_graph",
  (MR_String) "rptg_outedges",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1646 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
#line 1649 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1651 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1653 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1655 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1657 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1660 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1662 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1665 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1667 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1669 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1672 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
#line 1675 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1677 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1679 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1681 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1683 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1685 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1688 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1690 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1693 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1695 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1697 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1700 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
#line 1703 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1705 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1707 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1709 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1711 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1714 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1716 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1719 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1721 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1723 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1726 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
#line 1729 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1731 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1733 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1735 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1737 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1739 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1742 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1744 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1747 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1749 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1751 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1754 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
#line 1757 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1759 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1761 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1763 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1765 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1768 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1770 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1773 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1775 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1777 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1780 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
#line 1783 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1785 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1787 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1789 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1791 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1793 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1796 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1798 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1801 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1803 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1805 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1808 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
#line 1811 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1813 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1815 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1817 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1819 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1822 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1824 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1827 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1829 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1831 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1834 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
#line 1837 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1839 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1841 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1843 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1845 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1847 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1850 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1852 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1855 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1857 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1859 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1862 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
#line 1865 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1867 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1869 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1871 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1873 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1876 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1878 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1881 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1883 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1885 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1888 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
#line 1891 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1893 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1895 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1897 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1899 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1901 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1904 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1906 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1909 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1911 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1913 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1916 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
#line 1919 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1921 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1923 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1925 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1927 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1930 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1932 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1935 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1937 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1939 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1942 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
#line 1945 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1947 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1949 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1951 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1953 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1955 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1958 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1960 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1963 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1965 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1967 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1970 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
#line 1973 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1975 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1977 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1979 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1981 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1984 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1986 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1989 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1991 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1993 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1996 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
#line 1999 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2001 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 2003 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 2005 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2007 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2009 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 2012 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2014 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 2017 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 2019 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2021 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2024 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
#line 2027 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2029 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 2031 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2033 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2035 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 2038 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2040 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 2043 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 2045 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2047 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2050 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
#line 2053 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2055 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 2057 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 2059 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2061 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2063 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 2066 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2068 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 2071 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 2073 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2075 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2078 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
#line 2081 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2083 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 2085 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2087 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2089 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 2092 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2094 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 2097 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 2099 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2101 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2104 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
#line 2107 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2109 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 2111 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 2113 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2115 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2117 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 2120 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2122 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 2125 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 2127 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2129 "transform_hlds.rbmm.points_to_graph.c"
}

#line 256 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(
#line 256 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Label_4,
#line 256 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7)
#line 256 "rbmm.points_to_graph.m"
{
#line 624 "rbmm.points_to_graph.m"
  {
#line 624 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 624 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7 = (MR_Word) transform_hlds__rbmm__points_to_graph__Label_4;
#line 624 "rbmm.points_to_graph.m"
  }
#line 256 "rbmm.points_to_graph.m"
}

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_1(
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 818 "rbmm.points_to_graph.m"
{
#line 818 "rbmm.points_to_graph.m"
  {
#line 818 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 818 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__HeadVar__3_33) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__conv0_HeadVar__3_33);
#line 818 "rbmm.points_to_graph.m"
    {
#line 818 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont_env_ptr);
#line 818 "rbmm.points_to_graph.m"
      return;
    }
#line 818 "rbmm.points_to_graph.m"
  }
#line 818 "rbmm.points_to_graph.m"
}

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0(
#line 818 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 818 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
#line 818 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 818 "rbmm.points_to_graph.m"
{
#line 818 "rbmm.points_to_graph.m"
  {
#line 818 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__HeadVar__3_33 = transform_hlds__rbmm__points_to_graph__HeadVar__3_33;
#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 818 "rbmm.points_to_graph.m"
    {
#line 818 "rbmm.points_to_graph.m"
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 818 "rbmm.points_to_graph.m"
      {
#line 818 "rbmm.points_to_graph.m"
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_env_0__conv0_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 818 "rbmm.points_to_graph.m"
    }
#line 818 "rbmm.points_to_graph.m"
  }
#line 818 "rbmm.points_to_graph.m"
}

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_1(
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 856 "rbmm.points_to_graph.m"
{
#line 856 "rbmm.points_to_graph.m"
  {
#line 856 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 856 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__conv0_HeadVar__3_13);
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont_env_ptr);
#line 856 "rbmm.points_to_graph.m"
      return;
    }
#line 856 "rbmm.points_to_graph.m"
  }
#line 856 "rbmm.points_to_graph.m"
}

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0(
#line 856 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 856 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
#line 856 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 856 "rbmm.points_to_graph.m"
{
#line 856 "rbmm.points_to_graph.m"
  {
#line 856 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__HeadVar__3_13 = transform_hlds__rbmm__points_to_graph__HeadVar__3_13;
#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 856 "rbmm.points_to_graph.m"
      {
#line 856 "rbmm.points_to_graph.m"
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 856 "rbmm.points_to_graph.m"
    }
#line 856 "rbmm.points_to_graph.m"
  }
#line 856 "rbmm.points_to_graph.m"
}

#line 35 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(
#line 35 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 35 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 35 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 35 "rbmm.points_to_graph.m"
{
#line 35 "rbmm.points_to_graph.m"
  {
#line 35 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 35 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 35 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 35 "rbmm.points_to_graph.m"
    {
#line 35 "rbmm.points_to_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
#line 35 "rbmm.points_to_graph.m"
      return;
    }
#line 35 "rbmm.points_to_graph.m"
  }
#line 35 "rbmm.points_to_graph.m"
}

#line 35 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(
#line 35 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 35 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 35 "rbmm.points_to_graph.m"
{
#line 35 "rbmm.points_to_graph.m"
  {
#line 35 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 35 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 35 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 35 "rbmm.points_to_graph.m"
    {
#line 35 "rbmm.points_to_graph.m"
      return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
#line 35 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 35 "rbmm.points_to_graph.m"
  }
#line 35 "rbmm.points_to_graph.m"
}

#line 33 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(
#line 33 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 33 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 33 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 33 "rbmm.points_to_graph.m"
{
#line 33 "rbmm.points_to_graph.m"
  {
#line 33 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 33 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 33 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 33 "rbmm.points_to_graph.m"
    {
#line 33 "rbmm.points_to_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
#line 33 "rbmm.points_to_graph.m"
      return;
    }
#line 33 "rbmm.points_to_graph.m"
  }
#line 33 "rbmm.points_to_graph.m"
}

#line 33 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(
#line 33 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 33 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 33 "rbmm.points_to_graph.m"
{
#line 33 "rbmm.points_to_graph.m"
  {
#line 33 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 33 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 33 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 33 "rbmm.points_to_graph.m"
    {
#line 33 "rbmm.points_to_graph.m"
      return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
#line 33 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 33 "rbmm.points_to_graph.m"
  }
#line 33 "rbmm.points_to_graph.m"
}

#line 213 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(
#line 213 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 213 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 213 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 213 "rbmm.points_to_graph.m"
{
#line 213 "rbmm.points_to_graph.m"
  {
#line 213 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 213 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 213 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 213 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
#line 213 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2439 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 213 "rbmm.points_to_graph.m"
    else
#line 213 "rbmm.points_to_graph.m"
      {
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 4)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;

#line 213 "rbmm.points_to_graph.m"
        {
#line 213 "rbmm.points_to_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[4], &transform_hlds__rbmm__points_to_graph__V_14_14, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_4_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9)));
        }
#line 2473 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_14_14 == (MR_Integer) 0);
#line 213 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 213 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_14_14;
#line 213 "rbmm.points_to_graph.m"
        else
#line 213 "rbmm.points_to_graph.m"
          {
#line 213 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;

#line 213 "rbmm.points_to_graph.m"
            {
#line 213 "rbmm.points_to_graph.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&transform_hlds__rbmm__points_to_graph__V_15_15, transform_hlds__rbmm__points_to_graph__V_5_5, transform_hlds__rbmm__points_to_graph__V_10_10);
            }
#line 2493 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_15_15 == (MR_Integer) 0);
#line 213 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 213 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_15_15;
#line 213 "rbmm.points_to_graph.m"
            else
#line 213 "rbmm.points_to_graph.m"
              {
#line 213 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;

#line 213 "rbmm.points_to_graph.m"
                {
#line 213 "rbmm.points_to_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[5], &transform_hlds__rbmm__points_to_graph__V_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_6_6)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11)));
                }
#line 2513 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_16_16 == (MR_Integer) 0);
#line 213 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 213 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
                  *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_16_16;
#line 213 "rbmm.points_to_graph.m"
                else
#line 213 "rbmm.points_to_graph.m"
                  {
#line 213 "rbmm.points_to_graph.m"
                    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17;

#line 213 "rbmm.points_to_graph.m"
                    {
#line 213 "rbmm.points_to_graph.m"
                      parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__rbmm__points_to_graph__V_17_17, transform_hlds__rbmm__points_to_graph__V_7_7, transform_hlds__rbmm__points_to_graph__V_12_12);
                    }
#line 2533 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_17_17 == (MR_Integer) 0);
#line 213 "rbmm.points_to_graph.m"
                    transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 213 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
                      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_17_17;
#line 213 "rbmm.points_to_graph.m"
                    else
#line 213 "rbmm.points_to_graph.m"
                      {
#line 213 "rbmm.points_to_graph.m"
                        MR_Integer transform_hlds__rbmm__points_to_graph__V_25_25 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_8_8;
#line 213 "rbmm.points_to_graph.m"
                        MR_Integer transform_hlds__rbmm__points_to_graph__V_26_26 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_13_13;

#line 213 "rbmm.points_to_graph.m"
                        {
#line 213 "rbmm.points_to_graph.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__V_25_25, transform_hlds__rbmm__points_to_graph__V_26_26);
#line 213 "rbmm.points_to_graph.m"
                          return;
                        }
#line 213 "rbmm.points_to_graph.m"
                      }
#line 213 "rbmm.points_to_graph.m"
                  }
#line 213 "rbmm.points_to_graph.m"
              }
#line 213 "rbmm.points_to_graph.m"
          }
#line 213 "rbmm.points_to_graph.m"
      }
#line 213 "rbmm.points_to_graph.m"
  }
#line 213 "rbmm.points_to_graph.m"
}

#line 213 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(
#line 213 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 213 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 213 "rbmm.points_to_graph.m"
{
#line 213 "rbmm.points_to_graph.m"
  {
#line 213 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 213 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 213 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 213 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
#line 213 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 213 "rbmm.points_to_graph.m"
    else
#line 213 "rbmm.points_to_graph.m"
      {
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_16_16;
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 4)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 213 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));

#line 2623 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 2625 "transform_hlds.rbmm.points_to_graph.c"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[4], ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_3_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_8_8)));
        }
#line 213 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
          {
#line 2632 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9) == 0);
#line 213 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
              {
#line 2638 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[5];
#line 2640 "transform_hlds.rbmm.points_to_graph.c"
                {
#line 2642 "transform_hlds.rbmm.points_to_graph.c"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_5_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10)));
                }
#line 213 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
                  {
#line 2649 "transform_hlds.rbmm.points_to_graph.c"
                    {
#line 2651 "transform_hlds.rbmm.points_to_graph.c"
                      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__V_6_6, transform_hlds__rbmm__points_to_graph__V_11_11);
                    }
#line 213 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2656 "transform_hlds.rbmm.points_to_graph.c"
                      transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_7_7 == transform_hlds__rbmm__points_to_graph__V_12_12);
#line 213 "rbmm.points_to_graph.m"
                  }
#line 213 "rbmm.points_to_graph.m"
              }
#line 213 "rbmm.points_to_graph.m"
          }
#line 213 "rbmm.points_to_graph.m"
      }
#line 213 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 213 "rbmm.points_to_graph.m"
  }
#line 213 "rbmm.points_to_graph.m"
}

#line 210 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(
#line 210 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 210 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 210 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 210 "rbmm.points_to_graph.m"
{
#line 210 "rbmm.points_to_graph.m"
  {
#line 210 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 210 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
#line 210 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2697 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "rbmm.points_to_graph.m"
    else
#line 210 "rbmm.points_to_graph.m"
      {
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_5_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 210 "rbmm.points_to_graph.m"
        {
#line 210 "rbmm.points_to_graph.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_5_5);
#line 210 "rbmm.points_to_graph.m"
          return;
        }
#line 210 "rbmm.points_to_graph.m"
      }
#line 210 "rbmm.points_to_graph.m"
  }
#line 210 "rbmm.points_to_graph.m"
}

#line 210 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(
#line 210 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 210 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 210 "rbmm.points_to_graph.m"
{
#line 210 "rbmm.points_to_graph.m"
  {
#line 210 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 210 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
#line 210 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 210 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 210 "rbmm.points_to_graph.m"
    else
#line 210 "rbmm.points_to_graph.m"
      {
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_3_3 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 2755 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_3_3 == transform_hlds__rbmm__points_to_graph__V_4_4);
#line 210 "rbmm.points_to_graph.m"
      }
#line 210 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 210 "rbmm.points_to_graph.m"
  }
#line 210 "rbmm.points_to_graph.m"
}

#line 34 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(
#line 34 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 34 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 34 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 34 "rbmm.points_to_graph.m"
{
#line 34 "rbmm.points_to_graph.m"
  {
#line 34 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 34 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 34 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5 = transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 34 "rbmm.points_to_graph.m"
    {
#line 34 "rbmm.points_to_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_5)));
#line 34 "rbmm.points_to_graph.m"
      return;
    }
#line 34 "rbmm.points_to_graph.m"
  }
#line 34 "rbmm.points_to_graph.m"
}

#line 34 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(
#line 34 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 34 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 34 "rbmm.points_to_graph.m"
{
#line 34 "rbmm.points_to_graph.m"
  {
#line 34 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 34 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3 = transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 34 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4 = transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 34 "rbmm.points_to_graph.m"
    {
#line 34 "rbmm.points_to_graph.m"
      return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Cast_HeadVar2_4)));
    }
#line 34 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 34 "rbmm.points_to_graph.m"
  }
#line 34 "rbmm.points_to_graph.m"
}

#line 259 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(
#line 259 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 259 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 259 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 259 "rbmm.points_to_graph.m"
{
#line 259 "rbmm.points_to_graph.m"
  {
#line 259 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 259 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_12 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 259 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 259 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_12 == transform_hlds__rbmm__points_to_graph__CastY_13);
#line 259 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2852 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "rbmm.points_to_graph.m"
    else
#line 259 "rbmm.points_to_graph.m"
      {
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10;
#line 259 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_17_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_4_4;
#line 259 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_18_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_7_7;

#line 259 "rbmm.points_to_graph.m"
        {
#line 259 "rbmm.points_to_graph.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__rbmm__points_to_graph__V_10_10, transform_hlds__rbmm__points_to_graph__V_17_17, transform_hlds__rbmm__points_to_graph__V_18_18);
        }
#line 2882 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_10_10 == (MR_Integer) 0);
#line 259 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 259 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 259 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_10_10;
#line 259 "rbmm.points_to_graph.m"
        else
#line 259 "rbmm.points_to_graph.m"
          {
#line 259 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_11_11;
#line 259 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__V_19_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_5_5;
#line 259 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__V_20_20 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_8_8;

#line 259 "rbmm.points_to_graph.m"
            {
#line 259 "rbmm.points_to_graph.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__rbmm__points_to_graph__V_11_11, transform_hlds__rbmm__points_to_graph__V_19_19, transform_hlds__rbmm__points_to_graph__V_20_20);
            }
#line 2906 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_11_11 == (MR_Integer) 0);
#line 259 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 259 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 259 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_11_11;
#line 259 "rbmm.points_to_graph.m"
            else
#line 259 "rbmm.points_to_graph.m"
              {
#line 259 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__V_6_6, transform_hlds__rbmm__points_to_graph__V_9_9);
#line 259 "rbmm.points_to_graph.m"
                return;
              }
#line 259 "rbmm.points_to_graph.m"
          }
#line 259 "rbmm.points_to_graph.m"
      }
#line 259 "rbmm.points_to_graph.m"
  }
#line 259 "rbmm.points_to_graph.m"
}

#line 259 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(
#line 259 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 259 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 259 "rbmm.points_to_graph.m"
{
#line 259 "rbmm.points_to_graph.m"
  {
#line 259 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 259 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_9 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 259 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_10 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 259 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_9 == transform_hlds__rbmm__points_to_graph__CastY_10);
#line 259 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 259 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 259 "rbmm.points_to_graph.m"
    else
#line 259 "rbmm.points_to_graph.m"
      {
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_3_3;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_6_6;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__CastX_17;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__CastY_18;

#line 210 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
#line 210 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 210 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 210 "rbmm.points_to_graph.m"
        else
#line 210 "rbmm.points_to_graph.m"
          {
#line 210 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__V_11_11 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_3_3;
#line 210 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__V_12_12 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_6_6;

#line 2996 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_11_11 == transform_hlds__rbmm__points_to_graph__V_12_12);
#line 210 "rbmm.points_to_graph.m"
          }
#line 259 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 259 "rbmm.points_to_graph.m"
          {
#line 210 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__CastX_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_4_4;
#line 210 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__CastY_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_7_7;
#line 210 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_17 == transform_hlds__rbmm__points_to_graph__CastY_18);
#line 210 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 210 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 210 "rbmm.points_to_graph.m"
            else
#line 210 "rbmm.points_to_graph.m"
              {
#line 210 "rbmm.points_to_graph.m"
                MR_Integer transform_hlds__rbmm__points_to_graph__V_15_15 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_4_4;
#line 210 "rbmm.points_to_graph.m"
                MR_Integer transform_hlds__rbmm__points_to_graph__V_16_16 = (MR_Integer) transform_hlds__rbmm__points_to_graph__V_7_7;

#line 3023 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_15_15 == transform_hlds__rbmm__points_to_graph__V_16_16);
#line 210 "rbmm.points_to_graph.m"
              }
#line 259 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 3029 "transform_hlds.rbmm.points_to_graph.c"
              {
#line 3031 "transform_hlds.rbmm.points_to_graph.c"
                return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__V_5_5, transform_hlds__rbmm__points_to_graph__V_8_8);
              }
#line 259 "rbmm.points_to_graph.m"
          }
#line 259 "rbmm.points_to_graph.m"
      }
#line 259 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 259 "rbmm.points_to_graph.m"
  }
#line 259 "rbmm.points_to_graph.m"
}

#line 249 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(
#line 249 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 249 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 249 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 249 "rbmm.points_to_graph.m"
{
#line 249 "rbmm.points_to_graph.m"
  {
#line 249 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 249 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 249 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 249 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
#line 249 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 3069 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "rbmm.points_to_graph.m"
    else
#line 249 "rbmm.points_to_graph.m"
      {
#line 249 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 249 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 249 "rbmm.points_to_graph.m"
        {
#line 249 "rbmm.points_to_graph.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_4_4)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_5_5)));
#line 249 "rbmm.points_to_graph.m"
          return;
        }
#line 249 "rbmm.points_to_graph.m"
      }
#line 249 "rbmm.points_to_graph.m"
  }
#line 249 "rbmm.points_to_graph.m"
}

#line 249 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(
#line 249 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 249 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 249 "rbmm.points_to_graph.m"
{
#line 249 "rbmm.points_to_graph.m"
  {
#line 249 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 249 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 249 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 249 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
#line 249 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 249 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 249 "rbmm.points_to_graph.m"
    else
#line 249 "rbmm.points_to_graph.m"
      {
#line 249 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_3_3 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 249 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 3127 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 3129 "transform_hlds.rbmm.points_to_graph.c"
          return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_3_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_4_4)));
        }
#line 249 "rbmm.points_to_graph.m"
      }
#line 249 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 249 "rbmm.points_to_graph.m"
  }
#line 249 "rbmm.points_to_graph.m"
}

#line 246 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(
#line 246 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 246 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 246 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 246 "rbmm.points_to_graph.m"
{
#line 246 "rbmm.points_to_graph.m"
  {
#line 246 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 246 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 246 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_7 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 246 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_6 == transform_hlds__rbmm__points_to_graph__CastY_7);
#line 246 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 3165 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "rbmm.points_to_graph.m"
    else
#line 246 "rbmm.points_to_graph.m"
      {
#line 246 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 246 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_5_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 246 "rbmm.points_to_graph.m"
        {
#line 246 "rbmm.points_to_graph.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__rbmm__points_to_graph__HeadVar__1_1, transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_5_5);
#line 246 "rbmm.points_to_graph.m"
          return;
        }
#line 246 "rbmm.points_to_graph.m"
      }
#line 246 "rbmm.points_to_graph.m"
  }
#line 246 "rbmm.points_to_graph.m"
}

#line 246 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(
#line 246 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 246 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 246 "rbmm.points_to_graph.m"
{
#line 246 "rbmm.points_to_graph.m"
  {
#line 246 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 246 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_5 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 246 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_6 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 246 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_5 == transform_hlds__rbmm__points_to_graph__CastY_6);
#line 246 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 246 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 246 "rbmm.points_to_graph.m"
    else
#line 246 "rbmm.points_to_graph.m"
      {
#line 246 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_3_3 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 246 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_4_4 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 3223 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_3_3 == transform_hlds__rbmm__points_to_graph__V_4_4);
#line 246 "rbmm.points_to_graph.m"
      }
#line 246 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 246 "rbmm.points_to_graph.m"
  }
#line 246 "rbmm.points_to_graph.m"
}

#line 299 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(
#line 299 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 299 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 299 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 299 "rbmm.points_to_graph.m"
{
#line 299 "rbmm.points_to_graph.m"
  {
#line 299 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 299 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 299 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 299 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
#line 299 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 3258 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 299 "rbmm.points_to_graph.m"
    else
#line 299 "rbmm.points_to_graph.m"
      {
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 4)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;

#line 299 "rbmm.points_to_graph.m"
        {
#line 299 "rbmm.points_to_graph.m"
          mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__V_14_14, transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9);
        }
#line 3292 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_14_14 == (MR_Integer) 0);
#line 299 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 299 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_14_14;
#line 299 "rbmm.points_to_graph.m"
        else
#line 299 "rbmm.points_to_graph.m"
          {
#line 299 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;

#line 299 "rbmm.points_to_graph.m"
            {
#line 299 "rbmm.points_to_graph.m"
              mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__V_15_15, transform_hlds__rbmm__points_to_graph__V_5_5, transform_hlds__rbmm__points_to_graph__V_10_10);
            }
#line 3312 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_15_15 == (MR_Integer) 0);
#line 299 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 299 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_15_15;
#line 299 "rbmm.points_to_graph.m"
            else
#line 299 "rbmm.points_to_graph.m"
              {
#line 299 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;

#line 299 "rbmm.points_to_graph.m"
                {
#line 299 "rbmm.points_to_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], &transform_hlds__rbmm__points_to_graph__V_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_6_6)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11)));
                }
#line 3332 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_16_16 == (MR_Integer) 0);
#line 299 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 299 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
                  *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_16_16;
#line 299 "rbmm.points_to_graph.m"
                else
#line 299 "rbmm.points_to_graph.m"
                  {
#line 299 "rbmm.points_to_graph.m"
                    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17;

#line 299 "rbmm.points_to_graph.m"
                    {
#line 299 "rbmm.points_to_graph.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], &transform_hlds__rbmm__points_to_graph__V_17_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_7_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12)));
                    }
#line 3352 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_17_17 == (MR_Integer) 0);
#line 299 "rbmm.points_to_graph.m"
                    transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 299 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
                      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_17_17;
#line 299 "rbmm.points_to_graph.m"
                    else
#line 299 "rbmm.points_to_graph.m"
                      {
#line 299 "rbmm.points_to_graph.m"
                        {
#line 299 "rbmm.points_to_graph.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_8_8)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13)));
#line 299 "rbmm.points_to_graph.m"
                          return;
                        }
#line 299 "rbmm.points_to_graph.m"
                      }
#line 299 "rbmm.points_to_graph.m"
                  }
#line 299 "rbmm.points_to_graph.m"
              }
#line 299 "rbmm.points_to_graph.m"
          }
#line 299 "rbmm.points_to_graph.m"
      }
#line 299 "rbmm.points_to_graph.m"
  }
#line 299 "rbmm.points_to_graph.m"
}

#line 299 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(
#line 299 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 299 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 299 "rbmm.points_to_graph.m"
{
#line 299 "rbmm.points_to_graph.m"
  {
#line 299 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 299 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 299 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 299 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
#line 299 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 299 "rbmm.points_to_graph.m"
    else
#line 299 "rbmm.points_to_graph.m"
      {
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_18;
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_19_19;
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 4)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 299 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));

#line 3441 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 3443 "transform_hlds.rbmm.points_to_graph.c"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__V_3_3, transform_hlds__rbmm__points_to_graph__V_8_8);
        }
#line 299 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
          {
#line 3450 "transform_hlds.rbmm.points_to_graph.c"
            {
#line 3452 "transform_hlds.rbmm.points_to_graph.c"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9);
            }
#line 299 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
              {
#line 3459 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2];
#line 3461 "transform_hlds.rbmm.points_to_graph.c"
                {
#line 3463 "transform_hlds.rbmm.points_to_graph.c"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_5_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10)));
                }
#line 299 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
                  {
#line 3470 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3];
#line 3472 "transform_hlds.rbmm.points_to_graph.c"
                    {
#line 3474 "transform_hlds.rbmm.points_to_graph.c"
                      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_18_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_6_6)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11)));
                    }
#line 299 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 299 "rbmm.points_to_graph.m"
                      {
#line 3481 "transform_hlds.rbmm.points_to_graph.c"
                        transform_hlds__rbmm__points_to_graph__TypeInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4];
#line 3483 "transform_hlds.rbmm.points_to_graph.c"
                        {
#line 3485 "transform_hlds.rbmm.points_to_graph.c"
                          return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_7_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12)));
                        }
#line 299 "rbmm.points_to_graph.m"
                      }
#line 299 "rbmm.points_to_graph.m"
                  }
#line 299 "rbmm.points_to_graph.m"
              }
#line 299 "rbmm.points_to_graph.m"
          }
#line 299 "rbmm.points_to_graph.m"
      }
#line 299 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 299 "rbmm.points_to_graph.m"
  }
#line 299 "rbmm.points_to_graph.m"
}

#line 988 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
#line 988 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
#line 988 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22)
#line 988 "rbmm.points_to_graph.m"
{
#line 993 "rbmm.points_to_graph.m"
  {
#line 993 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__End_17;
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_18;
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSelector_19;
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Selector_20;
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 3)));
#line 993 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_38;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 4)));
#line 420 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38;
#line 421 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___Start_16;

#line 420 "rbmm.points_to_graph.m"
    {
#line 420 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_37, ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdge_14)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
    }
#line 420 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeInfo_38 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
#line 421 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph___Start_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 0)));
#line 421 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__End_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 1)));
#line 421 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeContent_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 2)));
#line 622 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeSelector_19 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeContent_18;
#line 996 "rbmm.points_to_graph.m"
    {
#line 996 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Selector_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__rbmm__points_to_graph__Selector0_9, transform_hlds__rbmm__points_to_graph__EdgeSelector_19);
    }
#line 997 "rbmm.points_to_graph.m"
    {
#line 997 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__smm_common__check_type_of_node_3_p_0(transform_hlds__rbmm__points_to_graph__HLDS_10, transform_hlds__rbmm__points_to_graph__TypeX_11, transform_hlds__rbmm__points_to_graph__Selector_20);
    }
#line 1007 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 1002 "rbmm.points_to_graph.m"
      {
#line 999 "rbmm.points_to_graph.m"
        {
#line 999 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), transform_hlds__rbmm__points_to_graph__Processed_13);
        }
#line 1002 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 999 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
#line 1002 "rbmm.points_to_graph.m"
        else
#line 1005 "rbmm.points_to_graph.m"
          {
#line 1005 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 1005 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;

#line 1005 "rbmm.points_to_graph.m"
            {
#line 1005 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_25_25 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_20)));
            }
#line 1005 "rbmm.points_to_graph.m"
            {
#line 1005 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_25_25));
#line 1005 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "rbmm.points_to_graph.m"
            }
#line 1005 "rbmm.points_to_graph.m"
            {
#line 1005 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[1], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21, transform_hlds__rbmm__points_to_graph__V_24_24);
            }
#line 1005 "rbmm.points_to_graph.m"
          }
#line 1002 "rbmm.points_to_graph.m"
      }
#line 1007 "rbmm.points_to_graph.m"
    else
#line 1005 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
#line 993 "rbmm.points_to_graph.m"
  }
#line 988 "rbmm.points_to_graph.m"
}

#line 977 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 977 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 977 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 977 "rbmm.points_to_graph.m"
{
#line 977 "rbmm.points_to_graph.m"
  {
#line 977 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
#line 977 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22;

#line 977 "rbmm.points_to_graph.m"
    {
#line 977 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), &transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22);
    }
#line 977 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22));
#line 977 "rbmm.points_to_graph.m"
  }
#line 977 "rbmm.points_to_graph.m"
}

#line 958 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
#line 958 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
#line 958 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7)
#line 958 "rbmm.points_to_graph.m"
{
#line 962 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 962 "rbmm.points_to_graph.m"
    {
#line 962 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 962 "rbmm.points_to_graph.m"
      {
#line 962 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 962 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6;
#line 962 "rbmm.points_to_graph.m"
        else
#line 964 "rbmm.points_to_graph.m"
          {
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 0)));
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Selector_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 1)));
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Processed_24;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_25;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41;
#line 964 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_47;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_51_51;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_52_52;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 589 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41;
#line 977 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26;

#line 968 "rbmm.points_to_graph.m"
            {
#line 968 "rbmm.points_to_graph.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29);
            }
#line 973 "rbmm.points_to_graph.m"
            {
#line 973 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__Processed_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22));
#line 973 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed0_5));
#line 973 "rbmm.points_to_graph.m"
            }
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 3)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdges_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 4)));
#line 589 "rbmm.points_to_graph.m"
            {
#line 589 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_47, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
            }
#line 589 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
#line 585 "rbmm.points_to_graph.m"
            {
#line 585 "rbmm.points_to_graph.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41, &transform_hlds__rbmm__points_to_graph__EdgeList_25);
            }
#line 977 "rbmm.points_to_graph.m"
            {
#line 977 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_5[0]));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_23));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__HLDS_3));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 5) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeX_4));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 6) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Graph_2));
#line 977 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 7) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed_24));
#line 977 "rbmm.points_to_graph.m"
            }
#line 977 "rbmm.points_to_graph.m"
            {
#line 977 "rbmm.points_to_graph.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[3], transform_hlds__rbmm__points_to_graph__V_30_30, transform_hlds__rbmm__points_to_graph__EdgeList_25, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selectors0_16)), &transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
            }
#line 977 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_Selectors_26 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
#line 981 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 981 "rbmm.points_to_graph.m"
            {
#line 981 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
#line 981 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__Processed0__tmp_copy_5 = transform_hlds__rbmm__points_to_graph__Processed_24;
#line 981 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;

#line 981 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0__tmp_copy_6;
#line 981 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__Processed0_5 = transform_hlds__rbmm__points_to_graph__Processed0__tmp_copy_5;
#line 981 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 981 "rbmm.points_to_graph.m"
            }
#line 981 "rbmm.points_to_graph.m"
            continue;
#line 964 "rbmm.points_to_graph.m"
          }
#line 962 "rbmm.points_to_graph.m"
      }
#line 962 "rbmm.points_to_graph.m"
      break;
#line 962 "rbmm.points_to_graph.m"
    }
#line 958 "rbmm.points_to_graph.m"
}

#line 925 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 925 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
#line 925 "rbmm.points_to_graph.m"
{
#line 928 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 928 "rbmm.points_to_graph.m"
    {
#line 928 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 928 "rbmm.points_to_graph.m"
      {
#line 928 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 928 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 928 "rbmm.points_to_graph.m"
        else
#line 929 "rbmm.points_to_graph.m"
          {
#line 929 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_16_16;
#line 929 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
#line 929 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 929 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V2_10;
#line 929 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V1_11;
#line 929 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__C1_19;
#line 929 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__C2_20;
#line 929 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks1_21;
#line 930 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_V2_10;
#line 933 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv1_V1_11;

#line 3895 "transform_hlds.rbmm.points_to_graph.c"
            {
#line 3897 "transform_hlds.rbmm.points_to_graph.c"
              transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3899 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3901 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13));
#line 3903 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14));
#line 3905 "transform_hlds.rbmm.points_to_graph.c"
            }
#line 930 "rbmm.points_to_graph.m"
            {
#line 930 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv0_V2_10);
            }
#line 930 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 930 "rbmm.points_to_graph.m"
              {
#line 930 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__V2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_V2_10);
#line 930 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 930 "rbmm.points_to_graph.m"
              }
#line 929 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 929 "rbmm.points_to_graph.m"
              {
#line 933 "rbmm.points_to_graph.m"
                {
#line 933 "rbmm.points_to_graph.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv1_V1_11);
                }
#line 933 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__V1_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_V1_11);
#line 886 "rbmm.points_to_graph.m"
                {
#line 886 "rbmm.points_to_graph.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__C1_19);
                }
#line 887 "rbmm.points_to_graph.m"
                {
#line 887 "rbmm.points_to_graph.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V2_10, &transform_hlds__rbmm__points_to_graph__C2_20);
                }
#line 888 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_19 == transform_hlds__rbmm__points_to_graph__C2_20);
#line 929 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 929 "rbmm.points_to_graph.m"
                  {
#line 891 "rbmm.points_to_graph.m"
                    {
#line 891 "rbmm.points_to_graph.m"
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__Ks1_21);
                    }
#line 892 "rbmm.points_to_graph.m"
                    {
#line 892 "rbmm.points_to_graph.m"
                      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__Ks1_21, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                    }
#line 929 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 935 "rbmm.points_to_graph.m"
                      {
#line 935 "rbmm.points_to_graph.m"
                        /* direct tailcall eliminated */
#line 935 "rbmm.points_to_graph.m"
                        {
#line 935 "rbmm.points_to_graph.m"
                          MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

#line 935 "rbmm.points_to_graph.m"
                          transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 935 "rbmm.points_to_graph.m"
                        }
#line 935 "rbmm.points_to_graph.m"
                        continue;
#line 935 "rbmm.points_to_graph.m"
                      }
#line 929 "rbmm.points_to_graph.m"
                  }
#line 929 "rbmm.points_to_graph.m"
              }
#line 929 "rbmm.points_to_graph.m"
          }
#line 928 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 928 "rbmm.points_to_graph.m"
      }
#line 928 "rbmm.points_to_graph.m"
      break;
#line 928 "rbmm.points_to_graph.m"
    }
#line 925 "rbmm.points_to_graph.m"
}

#line 898 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 898 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
#line 898 "rbmm.points_to_graph.m"
{
#line 901 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 901 "rbmm.points_to_graph.m"
    {
#line 901 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 901 "rbmm.points_to_graph.m"
      {
#line 901 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 901 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 901 "rbmm.points_to_graph.m"
        else
#line 902 "rbmm.points_to_graph.m"
          {
#line 902 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
#line 902 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__V2_10;
#line 902 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__V1_11;

#line 904 "rbmm.points_to_graph.m"
            {
#line 904 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V2_10);
            }
#line 902 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 902 "rbmm.points_to_graph.m"
              {
#line 907 "rbmm.points_to_graph.m"
                {
#line 907 "rbmm.points_to_graph.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V1_11);
                }
#line 908 "rbmm.points_to_graph.m"
                {
#line 908 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                }
#line 902 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 909 "rbmm.points_to_graph.m"
                  {
#line 909 "rbmm.points_to_graph.m"
                    /* direct tailcall eliminated */
#line 909 "rbmm.points_to_graph.m"
                    {
#line 909 "rbmm.points_to_graph.m"
                      MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

#line 909 "rbmm.points_to_graph.m"
                      transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 909 "rbmm.points_to_graph.m"
                    }
#line 909 "rbmm.points_to_graph.m"
                    continue;
#line 909 "rbmm.points_to_graph.m"
                  }
#line 902 "rbmm.points_to_graph.m"
              }
#line 902 "rbmm.points_to_graph.m"
          }
#line 901 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 901 "rbmm.points_to_graph.m"
      }
#line 901 "rbmm.points_to_graph.m"
      break;
#line 901 "rbmm.points_to_graph.m"
    }
#line 898 "rbmm.points_to_graph.m"
}

#line 841 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 841 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
#line 841 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9)
#line 841 "rbmm.points_to_graph.m"
{
#line 844 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 844 "rbmm.points_to_graph.m"
    {
#line 844 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 844 "rbmm.points_to_graph.m"
      {
#line 844 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edge_6;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_7;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__M0_11;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent0_12;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_18;
#line 844 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_19;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 420 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19;
#line 421 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph___N_10;

#line 844 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 844 "rbmm.points_to_graph.m"
          {
#line 844 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edge_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 844 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edges_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 4)));
#line 4161 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 4163 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
#line 420 "rbmm.points_to_graph.m"
            {
#line 420 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21, transform_hlds__rbmm__points_to_graph__Edges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_6)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
            }
#line 420 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 0)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__M0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 1)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 2)));
#line 846 "rbmm.points_to_graph.m"
            {
#line 846 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__EdgeContent0_12, transform_hlds__rbmm__points_to_graph__EdgeContent_5);
            }
#line 848 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 847 "rbmm.points_to_graph.m"
              {
#line 847 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__M_9 = transform_hlds__rbmm__points_to_graph__M0_11;
#line 847 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 847 "rbmm.points_to_graph.m"
              }
#line 848 "rbmm.points_to_graph.m"
            else
#line 849 "rbmm.points_to_graph.m"
              {
#line 849 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 849 "rbmm.points_to_graph.m"
                {
#line 849 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__Edges_7;

#line 849 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 849 "rbmm.points_to_graph.m"
                }
#line 849 "rbmm.points_to_graph.m"
                continue;
#line 849 "rbmm.points_to_graph.m"
              }
#line 844 "rbmm.points_to_graph.m"
          }
#line 844 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 844 "rbmm.points_to_graph.m"
      }
#line 844 "rbmm.points_to_graph.m"
      break;
#line 844 "rbmm.points_to_graph.m"
    }
#line 841 "rbmm.points_to_graph.m"
}

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 818 "rbmm.points_to_graph.m"
{
#line 818 "rbmm.points_to_graph.m"
  {
#line 818 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 818 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33));
#line 818 "rbmm.points_to_graph.m"
    {
#line 818 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr);
#line 818 "rbmm.points_to_graph.m"
      return;
    }
#line 818 "rbmm.points_to_graph.m"
  }
#line 818 "rbmm.points_to_graph.m"
}

#line 818 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
#line 818 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 818 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 818 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 818 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 818 "rbmm.points_to_graph.m"
{
#line 818 "rbmm.points_to_graph.m"
  {
#line 818 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 818 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 818 "rbmm.points_to_graph.m"
    {
#line 818 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

#line 818 "rbmm.points_to_graph.m"
      {
#line 818 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__818__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 818 "rbmm.points_to_graph.m"
    }
#line 818 "rbmm.points_to_graph.m"
  }
#line 818 "rbmm.points_to_graph.m"
}

#line 809 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
#line 809 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
#line 809 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
#line 809 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6)
#line 809 "rbmm.points_to_graph.m"
{
#line 813 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 813 "rbmm.points_to_graph.m"
    {
#line 813 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 813 "rbmm.points_to_graph.m"
      {
#line 813 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 813 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "rbmm.points_to_graph.m"
          {
#line 813 "rbmm.points_to_graph.m"
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5;
#line 813 "rbmm.points_to_graph.m"
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3;
#line 813 "rbmm.points_to_graph.m"
          }
#line 813 "rbmm.points_to_graph.m"
        else
#line 814 "rbmm.points_to_graph.m"
          {
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_32_32 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ns_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
#line 814 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;
#line 815 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19;

#line 815 "rbmm.points_to_graph.m"
            {
#line 815 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
            }
#line 815 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
#line 818 "rbmm.points_to_graph.m"
            {
#line 818 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 818 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
#line 818 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2));
#line 818 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 818 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2));
#line 818 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19));
#line 818 "rbmm.points_to_graph.m"
            }
#line 4382 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 818 "rbmm.points_to_graph.m"
            {
#line 818 "rbmm.points_to_graph.m"
              mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__V_26_26, &transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20);
            }
#line 821 "rbmm.points_to_graph.m"
            {
#line 821 "rbmm.points_to_graph.m"
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27);
            }
#line 824 "rbmm.points_to_graph.m"
            {
#line 824 "rbmm.points_to_graph.m"
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, &transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21);
            }
#line 825 "rbmm.points_to_graph.m"
            {
#line 825 "rbmm.points_to_graph.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28);
            }
#line 826 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 826 "rbmm.points_to_graph.m"
            {
#line 826 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ns_15;
#line 826 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
#line 826 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0__tmp_copy_5 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;

#line 826 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0__tmp_copy_5;
#line 826 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0__tmp_copy_3;
#line 826 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 826 "rbmm.points_to_graph.m"
            }
#line 826 "rbmm.points_to_graph.m"
            continue;
#line 814 "rbmm.points_to_graph.m"
          }
#line 813 "rbmm.points_to_graph.m"
      }
#line 813 "rbmm.points_to_graph.m"
      break;
#line 813 "rbmm.points_to_graph.m"
    }
#line 809 "rbmm.points_to_graph.m"
}

#line 764 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
#line 764 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
#line 764 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 764 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 764 "rbmm.points_to_graph.m"
{
#line 768 "rbmm.points_to_graph.m"
  {
#line 768 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_35;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TheEdges_31;
#line 768 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_45;
#line 783 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30;

#line 769 "rbmm.points_to_graph.m"
    {
#line 769 "rbmm.points_to_graph.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13);
    }
#line 4491 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 4493 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeInfo_18_35 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 783 "rbmm.points_to_graph.m"
    {
#line 783 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
    }
#line 783 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
#line 4502 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 784 "rbmm.points_to_graph.m"
    {
#line 784 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30, &transform_hlds__rbmm__points_to_graph__TheEdges_31);
    }
#line 785 "rbmm.points_to_graph.m"
    {
#line 785 "rbmm.points_to_graph.m"
      mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__TheEdges_31, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17);
    }
#line 788 "rbmm.points_to_graph.m"
    {
#line 788 "rbmm.points_to_graph.m"
      mercury__map__delete_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18);
    }
#line 799 "rbmm.points_to_graph.m"
    {
#line 799 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__StartNodes_45);
    }
#line 803 "rbmm.points_to_graph.m"
    {
#line 803 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(transform_hlds__rbmm__points_to_graph__StartNodes_45, transform_hlds__rbmm__points_to_graph__Node_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15);
    }
#line 768 "rbmm.points_to_graph.m"
    {
#line 768 "rbmm.points_to_graph.m"
      MR_Word base;
#line 768 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 768 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__HeadVar__3_3 = base;
#line 768 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_5));
#line 768 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__AS_6));
#line 768 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13));
#line 768 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14));
#line 768 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15));
#line 768 "rbmm.points_to_graph.m"
    }
#line 768 "rbmm.points_to_graph.m"
  }
#line 764 "rbmm.points_to_graph.m"
}

#line 747 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 747 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 747 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
#line 747 "rbmm.points_to_graph.m"
{
#line 750 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 750 "rbmm.points_to_graph.m"
    {
#line 750 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 750 "rbmm.points_to_graph.m"
      {
#line 750 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 750 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 750 "rbmm.points_to_graph.m"
        else
#line 751 "rbmm.points_to_graph.m"
          {
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_13;
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
#line 751 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
#line 420 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
#line 421 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_14;

#line 420 "rbmm.points_to_graph.m"
            {
#line 420 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
#line 420 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___Node2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
#line 753 "rbmm.points_to_graph.m"
            {
#line 753 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
#line 755 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 753 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 755 "rbmm.points_to_graph.m"
            else
#line 757 "rbmm.points_to_graph.m"
              {
#line 757 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

#line 757 "rbmm.points_to_graph.m"
                {
#line 757 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
#line 757 "rbmm.points_to_graph.m"
              }
#line 759 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 759 "rbmm.points_to_graph.m"
            {
#line 759 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
#line 759 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

#line 759 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3;
#line 759 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 759 "rbmm.points_to_graph.m"
            }
#line 759 "rbmm.points_to_graph.m"
            continue;
#line 751 "rbmm.points_to_graph.m"
          }
#line 750 "rbmm.points_to_graph.m"
      }
#line 750 "rbmm.points_to_graph.m"
      break;
#line 750 "rbmm.points_to_graph.m"
    }
#line 747 "rbmm.points_to_graph.m"
}

#line 733 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
#line 733 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
#line 733 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14)
#line 733 "rbmm.points_to_graph.m"
{
#line 736 "rbmm.points_to_graph.m"
  {
#line 736 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 736 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 1)));
#line 737 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___S_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 0)));
#line 737 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___C_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 2)));
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__E_11;
#line 210 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__End_6;

#line 210 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
#line 210 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 210 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 210 "rbmm.points_to_graph.m"
    else
#line 210 "rbmm.points_to_graph.m"
      {
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_16_16 = (MR_Integer) transform_hlds__rbmm__points_to_graph__E_11;
#line 210 "rbmm.points_to_graph.m"
        MR_Integer transform_hlds__rbmm__points_to_graph__V_17_17 = (MR_Integer) transform_hlds__rbmm__points_to_graph__End_6;

#line 4722 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_16_16 == transform_hlds__rbmm__points_to_graph__V_17_17);
#line 210 "rbmm.points_to_graph.m"
      }
#line 740 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 739 "rbmm.points_to_graph.m"
      {
#line 739 "rbmm.points_to_graph.m"
        MR_Word base;
#line 739 "rbmm.points_to_graph.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "rbmm.points_to_graph.m"
        *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = base;
#line 739 "rbmm.points_to_graph.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7));
#line 739 "rbmm.points_to_graph.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13));
#line 739 "rbmm.points_to_graph.m"
      }
#line 740 "rbmm.points_to_graph.m"
    else
#line 739 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13;
#line 736 "rbmm.points_to_graph.m"
  }
#line 733 "rbmm.points_to_graph.m"
}

#line 731 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 731 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
#line 731 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4)
#line 731 "rbmm.points_to_graph.m"
{
#line 731 "rbmm.points_to_graph.m"
  {
#line 731 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
#line 731 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14;

#line 731 "rbmm.points_to_graph.m"
    {
#line 731 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3), &transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14);
    }
#line 731 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14));
#line 731 "rbmm.points_to_graph.m"
  }
#line 731 "rbmm.points_to_graph.m"
}

#line 710 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 710 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 710 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
#line 710 "rbmm.points_to_graph.m"
{
#line 713 "rbmm.points_to_graph.m"
  {
#line 713 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 713 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__InEdges_8;
#line 713 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
#line 713 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
#line 731 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_InEdges_8;

#line 731 "rbmm.points_to_graph.m"
    {
#line 731 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 731 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_4[0]));
#line 731 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1));
#line 731 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6));
#line 731 "rbmm.points_to_graph.m"
    }
#line 731 "rbmm.points_to_graph.m"
    {
#line 731 "rbmm.points_to_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[2], transform_hlds__rbmm__points_to_graph__V_16_16, transform_hlds__rbmm__points_to_graph__Edges_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
    }
#line 731 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__InEdges_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
#line 718 "rbmm.points_to_graph.m"
    {
#line 718 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__InEdges_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
#line 718 "rbmm.points_to_graph.m"
      return;
    }
#line 713 "rbmm.points_to_graph.m"
  }
#line 710 "rbmm.points_to_graph.m"
}

#line 692 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 692 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 692 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
#line 692 "rbmm.points_to_graph.m"
{
#line 695 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 695 "rbmm.points_to_graph.m"
    {
#line 695 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 695 "rbmm.points_to_graph.m"
      {
#line 695 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 695 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 695 "rbmm.points_to_graph.m"
        else
#line 696 "rbmm.points_to_graph.m"
          {
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_14;
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
#line 696 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
#line 420 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
#line 421 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_13;

#line 420 "rbmm.points_to_graph.m"
            {
#line 420 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
#line 420 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___Node2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
#line 698 "rbmm.points_to_graph.m"
            {
#line 698 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
#line 700 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 698 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 700 "rbmm.points_to_graph.m"
            else
#line 702 "rbmm.points_to_graph.m"
              {
#line 702 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

#line 702 "rbmm.points_to_graph.m"
                {
#line 702 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
#line 702 "rbmm.points_to_graph.m"
              }
#line 704 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 704 "rbmm.points_to_graph.m"
            {
#line 704 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
#line 704 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

#line 704 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3;
#line 704 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 704 "rbmm.points_to_graph.m"
            }
#line 704 "rbmm.points_to_graph.m"
            continue;
#line 696 "rbmm.points_to_graph.m"
          }
#line 695 "rbmm.points_to_graph.m"
      }
#line 695 "rbmm.points_to_graph.m"
      break;
#line 695 "rbmm.points_to_graph.m"
    }
#line 692 "rbmm.points_to_graph.m"
}

#line 671 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 671 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 671 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
#line 671 "rbmm.points_to_graph.m"
{
#line 674 "rbmm.points_to_graph.m"
  {
#line 674 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 674 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_8;
#line 674 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15;
#line 674 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
#line 585 "rbmm.points_to_graph.m"
    {
#line 585 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15, &transform_hlds__rbmm__points_to_graph__EdgeList_8);
    }
#line 679 "rbmm.points_to_graph.m"
    {
#line 679 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeList_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
#line 679 "rbmm.points_to_graph.m"
      return;
    }
#line 674 "rbmm.points_to_graph.m"
  }
#line 671 "rbmm.points_to_graph.m"
}

#line 552 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 552 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
#line 552 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9)
#line 552 "rbmm.points_to_graph.m"
{
#line 555 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 555 "rbmm.points_to_graph.m"
    {
#line 555 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 555 "rbmm.points_to_graph.m"
      {
#line 555 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21;
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22;
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__N_6;
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_7;
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_10;
#line 555 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;
#line 391 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10;
#line 557 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
#line 557 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11;
#line 557 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 557 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_13_13;
#line 557 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;
#line 557 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;

#line 555 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 555 "rbmm.points_to_graph.m"
          {
#line 555 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5109 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5111 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 391 "rbmm.points_to_graph.m"
            {
#line 391 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22, transform_hlds__rbmm__points_to_graph__V_20_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
            }
#line 391 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
#line 557 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 0)));
#line 557 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 1)));
#line 557 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 2)));
#line 557 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 3)));
#line 557 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 4)));
#line 5130 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 557 "rbmm.points_to_graph.m"
            {
#line 557 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__member_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_8)), transform_hlds__rbmm__points_to_graph__V_11_11);
            }
#line 559 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 558 "rbmm.points_to_graph.m"
              {
#line 558 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__MergedNode_9 = transform_hlds__rbmm__points_to_graph__N_6;
#line 558 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 558 "rbmm.points_to_graph.m"
              }
#line 559 "rbmm.points_to_graph.m"
            else
#line 560 "rbmm.points_to_graph.m"
              {
#line 560 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 560 "rbmm.points_to_graph.m"
                {
#line 560 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__Ns_7;

#line 560 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 560 "rbmm.points_to_graph.m"
                }
#line 560 "rbmm.points_to_graph.m"
                continue;
#line 560 "rbmm.points_to_graph.m"
              }
#line 555 "rbmm.points_to_graph.m"
          }
#line 555 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 555 "rbmm.points_to_graph.m"
      }
#line 555 "rbmm.points_to_graph.m"
      break;
#line 555 "rbmm.points_to_graph.m"
    }
#line 552 "rbmm.points_to_graph.m"
}

#line 520 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
#line 520 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
#line 520 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
#line 520 "rbmm.points_to_graph.m"
{
#line 523 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 523 "rbmm.points_to_graph.m"
    {
#line 523 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 523 "rbmm.points_to_graph.m"
      {
#line 523 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__List_6)) == (MR_mktag((MR_Integer) 1)));
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22;
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23;
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_11;
#line 523 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 391 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11;
#line 526 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
#line 526 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 526 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_13_13;
#line 526 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;
#line 526 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;
#line 526 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;

#line 524 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 524 "rbmm.points_to_graph.m"
          {
#line 524 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 0)));
#line 524 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5255 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5257 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 391 "rbmm.points_to_graph.m"
            {
#line 391 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23, transform_hlds__rbmm__points_to_graph__V_21_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
            }
#line 391 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
#line 526 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 0)));
#line 526 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 1)));
#line 526 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 2)));
#line 526 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 3)));
#line 526 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 4)));
#line 5276 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0];
#line 526 "rbmm.points_to_graph.m"
            {
#line 526 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__subset_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__V_12_12);
            }
#line 528 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 527 "rbmm.points_to_graph.m"
              {
#line 527 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
#line 527 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 527 "rbmm.points_to_graph.m"
              }
#line 528 "rbmm.points_to_graph.m"
            else
#line 529 "rbmm.points_to_graph.m"
              {
#line 529 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 529 "rbmm.points_to_graph.m"
                {
#line 529 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__List__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

#line 529 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__List_6 = transform_hlds__rbmm__points_to_graph__List__tmp_copy_6;
#line 529 "rbmm.points_to_graph.m"
                }
#line 529 "rbmm.points_to_graph.m"
                continue;
#line 529 "rbmm.points_to_graph.m"
              }
#line 524 "rbmm.points_to_graph.m"
          }
#line 523 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 523 "rbmm.points_to_graph.m"
      }
#line 523 "rbmm.points_to_graph.m"
      break;
#line 523 "rbmm.points_to_graph.m"
    }
#line 520 "rbmm.points_to_graph.m"
}

#line 500 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
#line 500 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 500 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
#line 500 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
#line 500 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
#line 500 "rbmm.points_to_graph.m"
{
#line 503 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 503 "rbmm.points_to_graph.m"
    {
#line 503 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 503 "rbmm.points_to_graph.m"
      {
#line 503 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__NodeList_6)) == (MR_mktag((MR_Integer) 1)));
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
#line 503 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__RegionANode_11;
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
#line 503 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 391 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
#line 606 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 606 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 606 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 606 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;

#line 504 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 504 "rbmm.points_to_graph.m"
          {
#line 504 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 0)));
#line 504 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5399 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5401 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 391 "rbmm.points_to_graph.m"
            {
#line 391 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__V_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
#line 391 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
#line 606 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
#line 606 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__RegionANode_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
#line 606 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
#line 606 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
#line 606 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
#line 506 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__RegionANode_11, transform_hlds__rbmm__points_to_graph__RegName_7) == 0);
#line 508 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 507 "rbmm.points_to_graph.m"
              {
#line 507 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
#line 507 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 507 "rbmm.points_to_graph.m"
              }
#line 508 "rbmm.points_to_graph.m"
            else
#line 509 "rbmm.points_to_graph.m"
              {
#line 509 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 509 "rbmm.points_to_graph.m"
                {
#line 509 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__NodeList__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

#line 509 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__NodeList_6 = transform_hlds__rbmm__points_to_graph__NodeList__tmp_copy_6;
#line 509 "rbmm.points_to_graph.m"
                }
#line 509 "rbmm.points_to_graph.m"
                continue;
#line 509 "rbmm.points_to_graph.m"
              }
#line 504 "rbmm.points_to_graph.m"
          }
#line 503 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 503 "rbmm.points_to_graph.m"
      }
#line 503 "rbmm.points_to_graph.m"
      break;
#line 503 "rbmm.points_to_graph.m"
    }
#line 500 "rbmm.points_to_graph.m"
}

#line 478 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
#line 478 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
#line 478 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9)
#line 478 "rbmm.points_to_graph.m"
{
#line 481 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 481 "rbmm.points_to_graph.m"
    {
#line 481 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 481 "rbmm.points_to_graph.m"
      {
#line 481 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__N_5;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_6;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NType_10;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
#line 481 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 391 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
#line 608 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 608 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_29_29;
#line 608 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 608 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;

#line 481 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 481 "rbmm.points_to_graph.m"
          {
#line 481 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 481 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 4)));
#line 5538 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5540 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 391 "rbmm.points_to_graph.m"
            {
#line 391 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__V_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
#line 391 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
#line 608 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
#line 608 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
#line 608 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
#line 608 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
#line 608 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
#line 483 "rbmm.points_to_graph.m"
            {
#line 483 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__NType_10, transform_hlds__rbmm__points_to_graph__Type_8);
            }
#line 485 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 484 "rbmm.points_to_graph.m"
              {
#line 484 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__End_9 = transform_hlds__rbmm__points_to_graph__N_5;
#line 484 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 484 "rbmm.points_to_graph.m"
              }
#line 485 "rbmm.points_to_graph.m"
            else
#line 486 "rbmm.points_to_graph.m"
              {
#line 486 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 486 "rbmm.points_to_graph.m"
                {
#line 486 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ns_6;

#line 486 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 486 "rbmm.points_to_graph.m"
                }
#line 486 "rbmm.points_to_graph.m"
                continue;
#line 486 "rbmm.points_to_graph.m"
              }
#line 481 "rbmm.points_to_graph.m"
          }
#line 481 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 481 "rbmm.points_to_graph.m"
      }
#line 481 "rbmm.points_to_graph.m"
      break;
#line 481 "rbmm.points_to_graph.m"
    }
#line 478 "rbmm.points_to_graph.m"
}

#line 456 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
#line 456 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
#line 456 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11)
#line 456 "rbmm.points_to_graph.m"
{
#line 460 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 460 "rbmm.points_to_graph.m"
    {
#line 460 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 460 "rbmm.points_to_graph.m"
      {
#line 460 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_9_30;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__StartNode_7;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__StartNodes0_8;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ends_12;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22;
#line 460 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_28;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_34_34;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_35_35;
#line 589 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22;
#line 465 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__E1_13;

#line 460 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 460 "rbmm.points_to_graph.m"
          {
#line 460 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__StartNode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 460 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__StartNodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 3)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdges_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 4)));
#line 5680 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5682 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeInfo_9_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 589 "rbmm.points_to_graph.m"
            {
#line 589 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29, transform_hlds__rbmm__points_to_graph__TypeInfo_9_30, transform_hlds__rbmm__points_to_graph__OutEdges_28, ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
            }
#line 589 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
#line 5691 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 5693 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 593 "rbmm.points_to_graph.m"
            {
#line 593 "rbmm.points_to_graph.m"
              mercury__map__values_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22, &transform_hlds__rbmm__points_to_graph__Ends_12);
            }
#line 462 "rbmm.points_to_graph.m"
            {
#line 462 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(transform_hlds__rbmm__points_to_graph__Ends_12, transform_hlds__rbmm__points_to_graph__Graph_6, transform_hlds__rbmm__points_to_graph__EType_10, &transform_hlds__rbmm__points_to_graph__E1_13);
            }
#line 465 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 464 "rbmm.points_to_graph.m"
              {
#line 464 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__E_11 = transform_hlds__rbmm__points_to_graph__E1_13;
#line 464 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 464 "rbmm.points_to_graph.m"
              }
#line 465 "rbmm.points_to_graph.m"
            else
#line 468 "rbmm.points_to_graph.m"
              {
#line 468 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 468 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes1_14;
#line 468 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes_15;
#line 468 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_16;
#line 468 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__V_17_17;

#line 468 "rbmm.points_to_graph.m"
                {
#line 468 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__StartNodes1_14 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes0_8, transform_hlds__rbmm__points_to_graph__Ends_12);
                }
#line 469 "rbmm.points_to_graph.m"
                {
#line 469 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "rbmm.points_to_graph.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_17_17, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7));
#line 469 "rbmm.points_to_graph.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__VisitedNodes0_9));
#line 469 "rbmm.points_to_graph.m"
                }
#line 469 "rbmm.points_to_graph.m"
                {
#line 469 "rbmm.points_to_graph.m"
                  mercury__list__remove_dups_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__V_17_17, &transform_hlds__rbmm__points_to_graph__VisitedNodes_15);
                }
#line 470 "rbmm.points_to_graph.m"
                {
#line 470 "rbmm.points_to_graph.m"
                  mercury__list__delete_elems_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes1_14, transform_hlds__rbmm__points_to_graph__VisitedNodes_15, &transform_hlds__rbmm__points_to_graph__StartNodes_16);
                }
#line 472 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 472 "rbmm.points_to_graph.m"
                {
#line 472 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__StartNodes_16;
#line 472 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0__tmp_copy_9 = transform_hlds__rbmm__points_to_graph__VisitedNodes_15;

#line 472 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__VisitedNodes0_9 = transform_hlds__rbmm__points_to_graph__VisitedNodes0__tmp_copy_9;
#line 472 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 472 "rbmm.points_to_graph.m"
                }
#line 472 "rbmm.points_to_graph.m"
                continue;
#line 468 "rbmm.points_to_graph.m"
              }
#line 460 "rbmm.points_to_graph.m"
          }
#line 460 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 460 "rbmm.points_to_graph.m"
      }
#line 460 "rbmm.points_to_graph.m"
      break;
#line 460 "rbmm.points_to_graph.m"
    }
#line 456 "rbmm.points_to_graph.m"
}

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 435 "rbmm.points_to_graph.m"
{
#line 435 "rbmm.points_to_graph.m"
  {
#line 435 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 435 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13);
#line 435 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8);
#line 435 "rbmm.points_to_graph.m"
    {
#line 435 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 435 "rbmm.points_to_graph.m"
      return;
    }
#line 435 "rbmm.points_to_graph.m"
  }
#line 435 "rbmm.points_to_graph.m"
}

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 435 "rbmm.points_to_graph.m"
{
#line 435 "rbmm.points_to_graph.m"
  {
#line 435 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 436 "rbmm.points_to_graph.m"
    {
#line 436 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) (*((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8))), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
#line 436 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
#line 435 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
#line 435 "rbmm.points_to_graph.m"
      {
#line 437 "rbmm.points_to_graph.m"
        (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "rbmm.points_to_graph.m"
        {
#line 437 "rbmm.points_to_graph.m"
          MR_Word base;
#line 437 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "rbmm.points_to_graph.m"
          *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
#line 437 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13));
#line 437 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17));
#line 437 "rbmm.points_to_graph.m"
        }
#line 437 "rbmm.points_to_graph.m"
        {
#line 437 "rbmm.points_to_graph.m"
          ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
#line 437 "rbmm.points_to_graph.m"
          return;
        }
#line 435 "rbmm.points_to_graph.m"
      }
#line 435 "rbmm.points_to_graph.m"
  }
#line 435 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 439 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18);
#line 439 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14);
#line 439 "rbmm.points_to_graph.m"
    {
#line 439 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 439 "rbmm.points_to_graph.m"
      return;
    }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 442 "rbmm.points_to_graph.m"
    {
#line 442 "rbmm.points_to_graph.m"
      MR_Word base;
#line 442 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "rbmm.points_to_graph.m"
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
#line 442 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18));
#line 442 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15));
#line 442 "rbmm.points_to_graph.m"
    }
#line 442 "rbmm.points_to_graph.m"
    {
#line 442 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
#line 442 "rbmm.points_to_graph.m"
      return;
    }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 440 "rbmm.points_to_graph.m"
    {
#line 440 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
#line 439 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
#line 439 "rbmm.points_to_graph.m"
      {
#line 441 "rbmm.points_to_graph.m"
        {
#line 441 "rbmm.points_to_graph.m"
          MR_Word base;
#line 441 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16 = base;
#line 441 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14));
#line 441 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9));
#line 441 "rbmm.points_to_graph.m"
        }
#line 441 "rbmm.points_to_graph.m"
        {
#line 441 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
#line 439 "rbmm.points_to_graph.m"
      }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 429 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 429 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 429 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 429 "rbmm.points_to_graph.m"
{
#line 429 "rbmm.points_to_graph.m"
  {
#line 429 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 431 "rbmm.points_to_graph.m"
    {
#line 431 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 4)));
#line 431 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 3)));
#line 433 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

#line 6036 "transform_hlds.rbmm.points_to_graph.c"
      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 433 "rbmm.points_to_graph.m"
      {
#line 433 "rbmm.points_to_graph.m"
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
#line 433 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
#line 435 "rbmm.points_to_graph.m"
      {
#line 435 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 439 "rbmm.points_to_graph.m"
      {
#line 439 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 431 "rbmm.points_to_graph.m"
    }
#line 429 "rbmm.points_to_graph.m"
  }
#line 429 "rbmm.points_to_graph.m"
}

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 435 "rbmm.points_to_graph.m"
{
#line 435 "rbmm.points_to_graph.m"
  {
#line 435 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 435 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13);
#line 435 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23);
#line 435 "rbmm.points_to_graph.m"
    {
#line 435 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 435 "rbmm.points_to_graph.m"
      return;
    }
#line 435 "rbmm.points_to_graph.m"
  }
#line 435 "rbmm.points_to_graph.m"
}

#line 435 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
#line 435 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 435 "rbmm.points_to_graph.m"
{
#line 435 "rbmm.points_to_graph.m"
  {
#line 435 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 435 "rbmm.points_to_graph.m"
    {
#line 210 "rbmm.points_to_graph.m"
      MR_Integer transform_hlds__rbmm__points_to_graph__CastX_31 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
#line 210 "rbmm.points_to_graph.m"
      MR_Integer transform_hlds__rbmm__points_to_graph__CastY_32 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23;

#line 210 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_31 == transform_hlds__rbmm__points_to_graph__CastY_32);
#line 210 "rbmm.points_to_graph.m"
      if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 210 "rbmm.points_to_graph.m"
        (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 210 "rbmm.points_to_graph.m"
      else
#line 210 "rbmm.points_to_graph.m"
        {
#line 210 "rbmm.points_to_graph.m"
          MR_Integer transform_hlds__rbmm__points_to_graph__V_29_29 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
#line 210 "rbmm.points_to_graph.m"
          MR_Integer transform_hlds__rbmm__points_to_graph__V_30_30 = (MR_Integer) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23;

#line 6124 "transform_hlds.rbmm.points_to_graph.c"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_graph__V_29_29 == transform_hlds__rbmm__points_to_graph__V_30_30);
#line 210 "rbmm.points_to_graph.m"
        }
#line 435 "rbmm.points_to_graph.m"
      if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 435 "rbmm.points_to_graph.m"
        {
#line 436 "rbmm.points_to_graph.m"
          {
#line 436 "rbmm.points_to_graph.m"
            (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
          }
#line 436 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
#line 435 "rbmm.points_to_graph.m"
          if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 435 "rbmm.points_to_graph.m"
            {
#line 437 "rbmm.points_to_graph.m"
              (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "rbmm.points_to_graph.m"
              {
#line 437 "rbmm.points_to_graph.m"
                MR_Word base;
#line 437 "rbmm.points_to_graph.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "rbmm.points_to_graph.m"
                *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
#line 437 "rbmm.points_to_graph.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13));
#line 437 "rbmm.points_to_graph.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17));
#line 437 "rbmm.points_to_graph.m"
              }
#line 437 "rbmm.points_to_graph.m"
              {
#line 437 "rbmm.points_to_graph.m"
                ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
#line 437 "rbmm.points_to_graph.m"
                return;
              }
#line 435 "rbmm.points_to_graph.m"
            }
#line 435 "rbmm.points_to_graph.m"
        }
#line 435 "rbmm.points_to_graph.m"
    }
#line 435 "rbmm.points_to_graph.m"
  }
#line 435 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 439 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18);
#line 439 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14);
#line 439 "rbmm.points_to_graph.m"
    {
#line 439 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 439 "rbmm.points_to_graph.m"
      return;
    }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 442 "rbmm.points_to_graph.m"
    {
#line 442 "rbmm.points_to_graph.m"
      MR_Word base;
#line 442 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "rbmm.points_to_graph.m"
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
#line 442 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18));
#line 442 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15));
#line 442 "rbmm.points_to_graph.m"
    }
#line 442 "rbmm.points_to_graph.m"
    {
#line 442 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
#line 442 "rbmm.points_to_graph.m"
      return;
    }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 439 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
#line 439 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 439 "rbmm.points_to_graph.m"
{
#line 439 "rbmm.points_to_graph.m"
  {
#line 439 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 440 "rbmm.points_to_graph.m"
    {
#line 440 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
    }
#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
#line 439 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 439 "rbmm.points_to_graph.m"
      {
#line 441 "rbmm.points_to_graph.m"
        {
#line 441 "rbmm.points_to_graph.m"
          MR_Word base;
#line 441 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16 = base;
#line 441 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14));
#line 441 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9));
#line 441 "rbmm.points_to_graph.m"
        }
#line 441 "rbmm.points_to_graph.m"
        {
#line 441 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
#line 439 "rbmm.points_to_graph.m"
      }
#line 439 "rbmm.points_to_graph.m"
  }
#line 439 "rbmm.points_to_graph.m"
}

#line 428 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
#line 428 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 428 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 428 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 428 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 428 "rbmm.points_to_graph.m"
{
#line 428 "rbmm.points_to_graph.m"
  {
#line 428 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 428 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 431 "rbmm.points_to_graph.m"
    {
#line 431 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 4)));
#line 431 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 3)));
#line 433 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

#line 6345 "transform_hlds.rbmm.points_to_graph.c"
      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 433 "rbmm.points_to_graph.m"
      {
#line 433 "rbmm.points_to_graph.m"
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
#line 433 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
#line 435 "rbmm.points_to_graph.m"
      {
#line 435 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 439 "rbmm.points_to_graph.m"
      {
#line 439 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 431 "rbmm.points_to_graph.m"
    }
#line 428 "rbmm.points_to_graph.m"
  }
#line 428 "rbmm.points_to_graph.m"
}

#line 256 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_set_label_3_p_0(
#line 256 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Label_4,
#line 256 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_0_6,
#line 256 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7)
#line 256 "rbmm.points_to_graph.m"
{
#line 624 "rbmm.points_to_graph.m"
  {
#line 624 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 624 "rbmm.points_to_graph.m"
    {
#line 624 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(transform_hlds__rbmm__points_to_graph__Label_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7);
#line 624 "rbmm.points_to_graph.m"
      return;
    }
#line 624 "rbmm.points_to_graph.m"
  }
#line 256 "rbmm.points_to_graph.m"
}

#line 255 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_content_get_label_1_f_0(
#line 255 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__AC_3)
#line 255 "rbmm.points_to_graph.m"
{
#line 622 "rbmm.points_to_graph.m"
  {
#line 622 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 622 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__AC_3;

#line 622 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 622 "rbmm.points_to_graph.m"
  }
#line 255 "rbmm.points_to_graph.m"
}

#line 240 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(
#line 240 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_4,
#line 240 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
#line 240 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
#line 240 "rbmm.points_to_graph.m"
{
#line 620 "rbmm.points_to_graph.m"
  {
#line 620 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 620 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));

#line 620 "rbmm.points_to_graph.m"
    {
#line 620 "rbmm.points_to_graph.m"
      MR_Word base;
#line 620 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 620 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAllocated_4));
#line 620 "rbmm.points_to_graph.m"
    }
#line 620 "rbmm.points_to_graph.m"
  }
#line 240 "rbmm.points_to_graph.m"
}

#line 238 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_node_type_3_p_0(
#line 238 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeType_4,
#line 238 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
#line 238 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
#line 238 "rbmm.points_to_graph.m"
{
#line 618 "rbmm.points_to_graph.m"
  {
#line 618 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 618 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 618 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 618 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 618 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 618 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));

#line 618 "rbmm.points_to_graph.m"
    {
#line 618 "rbmm.points_to_graph.m"
      MR_Word base;
#line 618 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 618 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 618 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 618 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 618 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 618 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeType_4));
#line 618 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 618 "rbmm.points_to_graph.m"
    }
#line 618 "rbmm.points_to_graph.m"
  }
#line 238 "rbmm.points_to_graph.m"
}

#line 236 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(
#line 236 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes_4,
#line 236 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
#line 236 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
#line 236 "rbmm.points_to_graph.m"
{
#line 616 "rbmm.points_to_graph.m"
  {
#line 616 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 616 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));

#line 616 "rbmm.points_to_graph.m"
    {
#line 616 "rbmm.points_to_graph.m"
      MR_Word base;
#line 616 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 616 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_4));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 616 "rbmm.points_to_graph.m"
    }
#line 616 "rbmm.points_to_graph.m"
  }
#line 236 "rbmm.points_to_graph.m"
}

#line 234 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_region_name_3_p_0(
#line 234 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__Name_4,
#line 234 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
#line 234 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
#line 234 "rbmm.points_to_graph.m"
{
#line 614 "rbmm.points_to_graph.m"
  {
#line 614 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 614 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 614 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 614 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 614 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 614 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));

#line 614 "rbmm.points_to_graph.m"
    {
#line 614 "rbmm.points_to_graph.m"
      MR_Word base;
#line 614 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 614 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 614 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 614 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Name_4));
#line 614 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 614 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 614 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 614 "rbmm.points_to_graph.m"
    }
#line 614 "rbmm.points_to_graph.m"
  }
#line 234 "rbmm.points_to_graph.m"
}

#line 232 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(
#line 232 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_4,
#line 232 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6,
#line 232 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7)
#line 232 "rbmm.points_to_graph.m"
{
#line 612 "rbmm.points_to_graph.m"
  {
#line 612 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 612 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 612 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 612 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 612 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 612 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));

#line 612 "rbmm.points_to_graph.m"
    {
#line 612 "rbmm.points_to_graph.m"
      MR_Word base;
#line 612 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 612 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 612 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Vars_4));
#line 612 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 612 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 612 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 612 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 612 "rbmm.points_to_graph.m"
    }
#line 612 "rbmm.points_to_graph.m"
  }
#line 232 "rbmm.points_to_graph.m"
}

#line 230 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_is_allocated_1_f_0(
#line 230 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
#line 230 "rbmm.points_to_graph.m"
{
#line 609 "rbmm.points_to_graph.m"
  {
#line 609 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));

#line 609 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 609 "rbmm.points_to_graph.m"
  }
#line 230 "rbmm.points_to_graph.m"
}

#line 229 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_node_type_1_f_0(
#line 229 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
#line 229 "rbmm.points_to_graph.m"
{
#line 608 "rbmm.points_to_graph.m"
  {
#line 608 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 608 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 608 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 608 "rbmm.points_to_graph.m"
  }
#line 229 "rbmm.points_to_graph.m"
}

#line 228 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_merged_from_1_f_0(
#line 228 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
#line 228 "rbmm.points_to_graph.m"
{
#line 607 "rbmm.points_to_graph.m"
  {
#line 607 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 607 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 607 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 607 "rbmm.points_to_graph.m"
  }
#line 228 "rbmm.points_to_graph.m"
}

#line 227 "rbmm.points_to_graph.m"
MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_region_name_1_f_0(
#line 227 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
#line 227 "rbmm.points_to_graph.m"
{
#line 606 "rbmm.points_to_graph.m"
  {
#line 606 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 606 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 606 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 606 "rbmm.points_to_graph.m"
  }
#line 227 "rbmm.points_to_graph.m"
}

#line 226 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_node_content_get_vars_1_f_0(
#line 226 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NC_3)
#line 226 "rbmm.points_to_graph.m"
{
#line 605 "rbmm.points_to_graph.m"
  {
#line 605 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 605 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 605 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 605 "rbmm.points_to_graph.m"
  }
#line 226 "rbmm.points_to_graph.m"
}

#line 204 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_operator_5_p_0(
#line 204 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Start_6,
#line 204 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 204 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Info_8,
#line 204 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_11,
#line 204 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_12)
#line 204 "rbmm.points_to_graph.m"
{
#line 829 "rbmm.points_to_graph.m"
  {
#line 829 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 829 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___Edge_10;

#line 829 "rbmm.points_to_graph.m"
    {
#line 829 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Start_6, transform_hlds__rbmm__points_to_graph__End_7, transform_hlds__rbmm__points_to_graph__Info_8, &transform_hlds__rbmm__points_to_graph___Edge_10, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_11, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_12);
    }
#line 829 "rbmm.points_to_graph.m"
  }
#line 204 "rbmm.points_to_graph.m"
}

#line 199 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__unify_operator_4_p_0(
#line 199 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 199 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 199 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18,
#line 199 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19)
#line 199 "rbmm.points_to_graph.m"
{
#line 631 "rbmm.points_to_graph.m"
  {
#line 631 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent1_9;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent2_10;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__UnionVars_11;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent0_12;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent1_14;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_15;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent_16;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_17;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28;
#line 631 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_81_81;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_85_85;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_86_86;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_87_87;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_88_88;
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10;
#line 637 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_30_30;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 637 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_34_34;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_36_36;
#line 637 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_37_37;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_38_38;
#line 642 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_39_39;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_40_40;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 642 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_43_43;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44;
#line 642 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_46_46;
#line 649 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_47_47;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_48_48;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_49_49;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_50_50;
#line 649 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_51_51;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_52_52;
#line 649 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 656 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 656 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 656 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 656 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 656 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Nodes0_8, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent1_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_81_81, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 637 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 637 "rbmm.points_to_graph.m"
    {
#line 637 "rbmm.points_to_graph.m"
      mercury__set__union_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], transform_hlds__rbmm__points_to_graph__V_20_20, transform_hlds__rbmm__points_to_graph__V_21_21, &transform_hlds__rbmm__points_to_graph__UnionVars_11);
    }
#line 639 "rbmm.points_to_graph.m"
    {
#line 639 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(transform_hlds__rbmm__points_to_graph__UnionVars_11, transform_hlds__rbmm__points_to_graph__NodeContent1_9, &transform_hlds__rbmm__points_to_graph__NewContent0_12);
    }
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 642 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 7064 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 642 "rbmm.points_to_graph.m"
    {
#line 642 "rbmm.points_to_graph.m"
      mercury__set__union_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, transform_hlds__rbmm__points_to_graph__V_22_22, transform_hlds__rbmm__points_to_graph__V_23_23, &transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13);
    }
#line 644 "rbmm.points_to_graph.m"
    {
#line 644 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13, transform_hlds__rbmm__points_to_graph__NewContent0_12, &transform_hlds__rbmm__points_to_graph__NewContent1_14);
    }
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 649 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 649 "rbmm.points_to_graph.m"
    {
#line 649 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__IsAllocated_15 = mercury__bool__or_2_f_0(transform_hlds__rbmm__points_to_graph__V_24_24, transform_hlds__rbmm__points_to_graph__V_25_25);
    }
#line 651 "rbmm.points_to_graph.m"
    {
#line 651 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(transform_hlds__rbmm__points_to_graph__IsAllocated_15, transform_hlds__rbmm__points_to_graph__NewContent1_14, &transform_hlds__rbmm__points_to_graph__NewContent_16);
    }
#line 654 "rbmm.points_to_graph.m"
    {
#line 654 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NewContent_16)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_17);
    }
#line 656 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 656 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 656 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 656 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 656 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 656 "rbmm.points_to_graph.m"
    {
#line 656 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 656 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 656 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 656 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_17));
#line 656 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 656 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 656 "rbmm.points_to_graph.m"
    }
#line 659 "rbmm.points_to_graph.m"
    {
#line 659 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27);
    }
#line 662 "rbmm.points_to_graph.m"
    {
#line 662 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28);
    }
#line 665 "rbmm.points_to_graph.m"
    {
#line 665 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19);
#line 665 "rbmm.points_to_graph.m"
      return;
    }
#line 631 "rbmm.points_to_graph.m"
  }
#line 199 "rbmm.points_to_graph.m"
}

#line 193 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_map_outedges_2_f_0(
#line 193 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 193 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 193 "rbmm.points_to_graph.m"
{
#line 587 "rbmm.points_to_graph.m"
  {
#line 587 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 587 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
#line 587 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
#line 587 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
#line 587 "rbmm.points_to_graph.m"
  }
#line 193 "rbmm.points_to_graph.m"
}

#line 189 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_endnodes_2_f_0(
#line 189 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 189 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 189 "rbmm.points_to_graph.m"
{
#line 591 "rbmm.points_to_graph.m"
  {
#line 591 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 591 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EndNodeList_6;
#line 591 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
#line 591 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
#line 593 "rbmm.points_to_graph.m"
    {
#line 593 "rbmm.points_to_graph.m"
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EndNodeList_6);
    }
#line 591 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__EndNodeList_6;
#line 591 "rbmm.points_to_graph.m"
  }
#line 189 "rbmm.points_to_graph.m"
}

#line 185 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_list_outedges_2_f_0(
#line 185 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 185 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 185 "rbmm.points_to_graph.m"
{
#line 583 "rbmm.points_to_graph.m"
  {
#line 583 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 583 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_6;
#line 583 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
#line 583 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
#line 585 "rbmm.points_to_graph.m"
    {
#line 585 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EdgeList_6);
    }
#line 583 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__EdgeList_6;
#line 583 "rbmm.points_to_graph.m"
  }
#line 185 "rbmm.points_to_graph.m"
}

#line 181 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_is_allocated_node_2_p_0(
#line 181 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_3,
#line 181 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Region_4)
#line 181 "rbmm.points_to_graph.m"
{
#line 579 "rbmm.points_to_graph.m"
  {
#line 579 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 579 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAlloc_5;
#line 579 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
#line 579 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_23_23;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_13_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Region_4)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__IsAlloc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 4)));
#line 581 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__IsAlloc_5 == (MR_Integer) 1);
#line 579 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 579 "rbmm.points_to_graph.m"
  }
#line 181 "rbmm.points_to_graph.m"
}

#line 179 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_is_allocated_2_f_0(
#line 179 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 179 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 179 "rbmm.points_to_graph.m"
{
#line 575 "rbmm.points_to_graph.m"
  {
#line 575 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 575 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_6;
#line 575 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 575 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_21_21;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__IsAllocated_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 575 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__IsAllocated_6;
#line 575 "rbmm.points_to_graph.m"
  }
#line 179 "rbmm.points_to_graph.m"
}

#line 178 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_vars_2_f_0(
#line 178 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 178 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 178 "rbmm.points_to_graph.m"
{
#line 571 "rbmm.points_to_graph.m"
  {
#line 571 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 571 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_6;
#line 571 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 571 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 605 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_20_20;
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 605 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 605 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 605 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 605 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 605 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 605 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 571 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Vars_6;
#line 571 "rbmm.points_to_graph.m"
  }
#line 178 "rbmm.points_to_graph.m"
}

#line 177 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(
#line 177 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 177 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 177 "rbmm.points_to_graph.m"
{
#line 567 "rbmm.points_to_graph.m"
  {
#line 567 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 567 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeType_6;
#line 567 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 567 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 608 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_21_21;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 567 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeType_6;
#line 567 "rbmm.points_to_graph.m"
  }
#line 177 "rbmm.points_to_graph.m"
}

#line 176 "rbmm.points_to_graph.m"
MR_String MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(
#line 176 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 176 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 176 "rbmm.points_to_graph.m"
{
#line 563 "rbmm.points_to_graph.m"
  {
#line 563 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 563 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__RegionName_6;
#line 563 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 563 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__RegionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 563 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__RegionName_6;
#line 563 "rbmm.points_to_graph.m"
  }
#line 176 "rbmm.points_to_graph.m"
}

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 856 "rbmm.points_to_graph.m"
{
#line 856 "rbmm.points_to_graph.m"
  {
#line 856 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 856 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13));
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr);
#line 856 "rbmm.points_to_graph.m"
      return;
    }
#line 856 "rbmm.points_to_graph.m"
  }
#line 856 "rbmm.points_to_graph.m"
}

#line 856 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
#line 856 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 856 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 856 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 856 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 856 "rbmm.points_to_graph.m"
{
#line 856 "rbmm.points_to_graph.m"
  {
#line 856 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 856 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

#line 856 "rbmm.points_to_graph.m"
      {
#line 856 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__856__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 856 "rbmm.points_to_graph.m"
    }
#line 856 "rbmm.points_to_graph.m"
  }
#line 856 "rbmm.points_to_graph.m"
}

#line 173 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(
#line 173 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Start_5,
#line 173 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Label_6,
#line 173 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 173 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_8)
#line 173 "rbmm.points_to_graph.m"
{
#line 852 "rbmm.points_to_graph.m"
  {
#line 852 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 852 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9;
#line 852 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10;
#line 852 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 852 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9;
#line 858 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 856 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
#line 856 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2));
#line 856 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 856 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7));
#line 856 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9));
#line 856 "rbmm.points_to_graph.m"
    }
#line 856 "rbmm.points_to_graph.m"
    {
#line 856 "rbmm.points_to_graph.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__V_12_12, &transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10);
    }
#line 858 "rbmm.points_to_graph.m"
    {
#line 858 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__Label_6, transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10, transform_hlds__rbmm__points_to_graph__Graph_8, &transform_hlds__rbmm__points_to_graph__V_11_11);
    }
#line 852 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 852 "rbmm.points_to_graph.m"
  }
#line 173 "rbmm.points_to_graph.m"
}

#line 168 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_find_edge_from_node_with_same_content_4_p_0(
#line 168 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__N_5,
#line 168 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_6,
#line 168 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_7,
#line 168 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__M_8)
#line 168 "rbmm.points_to_graph.m"
{
#line 837 "rbmm.points_to_graph.m"
  {
#line 837 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 837 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_9;
#line 837 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13;
#line 837 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
#line 585 "rbmm.points_to_graph.m"
    {
#line 585 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13, &transform_hlds__rbmm__points_to_graph__EdgeList_9);
    }
#line 839 "rbmm.points_to_graph.m"
    {
#line 839 "rbmm.points_to_graph.m"
      return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeContent_6, transform_hlds__rbmm__points_to_graph__EdgeList_9, transform_hlds__rbmm__points_to_graph__G_7, transform_hlds__rbmm__points_to_graph__M_8);
    }
#line 837 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 837 "rbmm.points_to_graph.m"
  }
#line 168 "rbmm.points_to_graph.m"
}

#line 155 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(
#line 155 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
#line 155 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_8,
#line 155 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__ProcInfo_9,
#line 155 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__X_10,
#line 155 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_16,
#line 155 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_17)
#line 155 "rbmm.points_to_graph.m"
{
#line 937 "rbmm.points_to_graph.m"
  {
#line 937 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__N_X_12;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_13;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__VarTypes_14;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeX_15;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 937 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_28;

#line 535 "rbmm.points_to_graph.m"
    {
#line 535 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Vars_28 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__X_10)));
    }
#line 536 "rbmm.points_to_graph.m"
    {
#line 536 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__Vars_28, &transform_hlds__rbmm__points_to_graph__N_X_12);
    }
#line 939 "rbmm.points_to_graph.m"
    {
#line 939 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Node_Selector_13 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_X_12)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 941 "rbmm.points_to_graph.m"
    {
#line 941 "rbmm.points_to_graph.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_graph__ProcInfo_9, &transform_hlds__rbmm__points_to_graph__VarTypes_14);
    }
#line 942 "rbmm.points_to_graph.m"
    {
#line 942 "rbmm.points_to_graph.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_graph__VarTypes_14, transform_hlds__rbmm__points_to_graph__X_10, &transform_hlds__rbmm__points_to_graph__TypeX_15);
    }
#line 945 "rbmm.points_to_graph.m"
    {
#line 945 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selector_13));
#line 945 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "rbmm.points_to_graph.m"
    }
#line 945 "rbmm.points_to_graph.m"
    {
#line 945 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(transform_hlds__rbmm__points_to_graph__V_19_19, transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__HLDS_8, transform_hlds__rbmm__points_to_graph__TypeX_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_17);
#line 945 "rbmm.points_to_graph.m"
      return;
    }
#line 937 "rbmm.points_to_graph.m"
  }
#line 155 "rbmm.points_to_graph.m"
}

#line 149 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_equal_2_p_0(
#line 149 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph1_3,
#line 149 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph2_4)
#line 149 "rbmm.points_to_graph.m"
{
#line 866 "rbmm.points_to_graph.m"
  {
#line 866 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_12_37;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 0)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 1)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 2)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 3)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 4)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 0)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 1)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 2)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 3)));
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 4)));
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_23;
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_24;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_25;
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_28;
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_29;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_30;
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_33;
#line 866 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_34;
#line 866 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_35;

#line 869 "rbmm.points_to_graph.m"
    {
#line 869 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__NS1_5, transform_hlds__rbmm__points_to_graph__NS2_10);
    }
#line 866 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
      {
#line 870 "rbmm.points_to_graph.m"
        {
#line 870 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__AS1_6, transform_hlds__rbmm__points_to_graph__AS2_11);
        }
#line 866 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
          {
#line 7977 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 7979 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 886 "rbmm.points_to_graph.m"
            {
#line 886 "rbmm.points_to_graph.m"
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__C1_23);
            }
#line 887 "rbmm.points_to_graph.m"
            {
#line 887 "rbmm.points_to_graph.m"
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes2_12, &transform_hlds__rbmm__points_to_graph__C2_24);
            }
#line 888 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_23 == transform_hlds__rbmm__points_to_graph__C2_24);
#line 866 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
              {
#line 891 "rbmm.points_to_graph.m"
                {
#line 891 "rbmm.points_to_graph.m"
                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__Ks1_25);
                }
#line 892 "rbmm.points_to_graph.m"
                {
#line 892 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Ks1_25, transform_hlds__rbmm__points_to_graph__Nodes1_7, transform_hlds__rbmm__points_to_graph__Nodes2_12);
                }
#line 866 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
                  {
#line 8011 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 8013 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
#line 886 "rbmm.points_to_graph.m"
                    {
#line 886 "rbmm.points_to_graph.m"
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__C1_28);
                    }
#line 887 "rbmm.points_to_graph.m"
                    {
#line 887 "rbmm.points_to_graph.m"
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges2_13, &transform_hlds__rbmm__points_to_graph__C2_29);
                    }
#line 888 "rbmm.points_to_graph.m"
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_28 == transform_hlds__rbmm__points_to_graph__C2_29);
#line 866 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
                      {
#line 891 "rbmm.points_to_graph.m"
                        {
#line 891 "rbmm.points_to_graph.m"
                          mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__Ks1_30);
                        }
#line 892 "rbmm.points_to_graph.m"
                        {
#line 892 "rbmm.points_to_graph.m"
                          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Ks1_30, transform_hlds__rbmm__points_to_graph__Edges1_8, transform_hlds__rbmm__points_to_graph__Edges2_13);
                        }
#line 866 "rbmm.points_to_graph.m"
                        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
                          {
#line 8045 "transform_hlds.rbmm.points_to_graph.c"
                            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8047 "transform_hlds.rbmm.points_to_graph.c"
                            transform_hlds__rbmm__points_to_graph__TypeInfo_12_37 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 919 "rbmm.points_to_graph.m"
                            {
#line 919 "rbmm.points_to_graph.m"
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__C1_33);
                            }
#line 920 "rbmm.points_to_graph.m"
                            {
#line 920 "rbmm.points_to_graph.m"
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges2_14, &transform_hlds__rbmm__points_to_graph__C2_34);
                            }
#line 921 "rbmm.points_to_graph.m"
                            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_33 == transform_hlds__rbmm__points_to_graph__C2_34);
#line 866 "rbmm.points_to_graph.m"
                            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 866 "rbmm.points_to_graph.m"
                              {
#line 922 "rbmm.points_to_graph.m"
                                {
#line 922 "rbmm.points_to_graph.m"
                                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__Ks1_35);
                                }
#line 923 "rbmm.points_to_graph.m"
                                {
#line 923 "rbmm.points_to_graph.m"
                                  return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__Ks1_35, transform_hlds__rbmm__points_to_graph__OutEdges1_9, transform_hlds__rbmm__points_to_graph__OutEdges2_14);
                                }
#line 866 "rbmm.points_to_graph.m"
                              }
#line 866 "rbmm.points_to_graph.m"
                          }
#line 866 "rbmm.points_to_graph.m"
                      }
#line 866 "rbmm.points_to_graph.m"
                  }
#line 866 "rbmm.points_to_graph.m"
              }
#line 866 "rbmm.points_to_graph.m"
          }
#line 866 "rbmm.points_to_graph.m"
      }
#line 866 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 866 "rbmm.points_to_graph.m"
  }
#line 149 "rbmm.points_to_graph.m"
}

#line 144 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_node_3_p_0(
#line 144 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 144 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
#line 144 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_6)
#line 144 "rbmm.points_to_graph.m"
{
#line 538 "rbmm.points_to_graph.m"
  {
#line 538 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 538 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 540 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___NodeContent_8;
#line 540 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8;

#line 540 "rbmm.points_to_graph.m"
    {
#line 540 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__NodeMap_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
    }
#line 540 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 540 "rbmm.points_to_graph.m"
      {
#line 540 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph___NodeContent_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
#line 540 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 540 "rbmm.points_to_graph.m"
      }
#line 542 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 541 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__Node_5;
#line 542 "rbmm.points_to_graph.m"
    else
#line 544 "rbmm.points_to_graph.m"
      {
#line 544 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_9;
#line 544 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 547 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__MergedNode0_10;

#line 394 "rbmm.points_to_graph.m"
        {
#line 394 "rbmm.points_to_graph.m"
          mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_23_23, &transform_hlds__rbmm__points_to_graph__AllNodes_9);
        }
#line 545 "rbmm.points_to_graph.m"
        {
#line 545 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_9, transform_hlds__rbmm__points_to_graph__Node_5, &transform_hlds__rbmm__points_to_graph__MergedNode0_10);
        }
#line 547 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 546 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__MergedNode0_10;
#line 547 "rbmm.points_to_graph.m"
        else
#line 548 "rbmm.points_to_graph.m"
          {
#line 548 "rbmm.points_to_graph.m"
            {
#line 548 "rbmm.points_to_graph.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_node\'/3", (MR_String) "node not found");
#line 548 "rbmm.points_to_graph.m"
              return;
            }
#line 548 "rbmm.points_to_graph.m"
          }
#line 544 "rbmm.points_to_graph.m"
      }
#line 538 "rbmm.points_to_graph.m"
  }
#line 144 "rbmm.points_to_graph.m"
}

#line 139 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(
#line 139 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 139 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Var_5,
#line 139 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
#line 139 "rbmm.points_to_graph.m"
{
#line 534 "rbmm.points_to_graph.m"
  {
#line 534 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 534 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_7;

#line 535 "rbmm.points_to_graph.m"
    {
#line 535 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Vars_7 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_5)));
    }
#line 536 "rbmm.points_to_graph.m"
    {
#line 536 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__Node_6);
#line 536 "rbmm.points_to_graph.m"
      return;
    }
#line 534 "rbmm.points_to_graph.m"
  }
#line 139 "rbmm.points_to_graph.m"
}

#line 132 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(
#line 132 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 132 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_5,
#line 132 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
#line 132 "rbmm.points_to_graph.m"
{
#line 512 "rbmm.points_to_graph.m"
  {
#line 512 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 512 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_7;
#line 512 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 516 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

#line 394 "rbmm.points_to_graph.m"
    {
#line 394 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_14_14, &transform_hlds__rbmm__points_to_graph__Nodes_7);
    }
#line 514 "rbmm.points_to_graph.m"
    {
#line 514 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Nodes_7, transform_hlds__rbmm__points_to_graph__Vars_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
#line 516 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 515 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
#line 516 "rbmm.points_to_graph.m"
    else
#line 517 "rbmm.points_to_graph.m"
      {
#line 517 "rbmm.points_to_graph.m"
        {
#line 517 "rbmm.points_to_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_vars\'/3", (MR_String) "node not found");
#line 517 "rbmm.points_to_graph.m"
          return;
        }
#line 517 "rbmm.points_to_graph.m"
      }
#line 512 "rbmm.points_to_graph.m"
  }
#line 132 "rbmm.points_to_graph.m"
}

#line 125 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_by_region_name_3_p_0(
#line 125 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 125 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__RegionName_5,
#line 125 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_6)
#line 125 "rbmm.points_to_graph.m"
{
#line 489 "rbmm.points_to_graph.m"
  {
#line 489 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 489 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_7;
#line 489 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 496 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

#line 394 "rbmm.points_to_graph.m"
    {
#line 394 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_14_14, &transform_hlds__rbmm__points_to_graph__AllNodes_7);
    }
#line 492 "rbmm.points_to_graph.m"
    {
#line 492 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_7, transform_hlds__rbmm__points_to_graph__RegionName_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
#line 496 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 495 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
#line 496 "rbmm.points_to_graph.m"
    else
#line 497 "rbmm.points_to_graph.m"
      {
#line 497 "rbmm.points_to_graph.m"
        {
#line 497 "rbmm.points_to_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_region_name\'/3", (MR_String) "node not found");
#line 497 "rbmm.points_to_graph.m"
          return;
        }
#line 497 "rbmm.points_to_graph.m"
      }
#line 489 "rbmm.points_to_graph.m"
  }
#line 125 "rbmm.points_to_graph.m"
}

#line 118 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_reachable_and_having_type_4_p_0(
#line 118 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 118 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Start_6,
#line 118 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EType_7,
#line 118 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8)
#line 118 "rbmm.points_to_graph.m"
{
#line 445 "rbmm.points_to_graph.m"
  {
#line 445 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 445 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Type_9;
#line 445 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_18;
#line 445 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 608 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_32_32;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_22_22, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 0)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 1)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 2)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 3)));
#line 608 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 4)));
#line 447 "rbmm.points_to_graph.m"
    {
#line 447 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__Type_9, transform_hlds__rbmm__points_to_graph__EType_7);
    }
#line 449 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 448 "rbmm.points_to_graph.m"
      {
#line 448 "rbmm.points_to_graph.m"
        *transform_hlds__rbmm__points_to_graph__E_8 = transform_hlds__rbmm__points_to_graph__Start_6;
#line 448 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 448 "rbmm.points_to_graph.m"
      }
#line 449 "rbmm.points_to_graph.m"
    else
#line 450 "rbmm.points_to_graph.m"
      {
#line 450 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10;

#line 450 "rbmm.points_to_graph.m"
        {
#line 450 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6));
#line 450 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "rbmm.points_to_graph.m"
        }
#line 450 "rbmm.points_to_graph.m"
        {
#line 450 "rbmm.points_to_graph.m"
          return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(transform_hlds__rbmm__points_to_graph__Graph_5, transform_hlds__rbmm__points_to_graph__V_10_10, transform_hlds__rbmm__points_to_graph__V_10_10, transform_hlds__rbmm__points_to_graph__EType_7, transform_hlds__rbmm__points_to_graph__E_8);
        }
#line 450 "rbmm.points_to_graph.m"
      }
#line 445 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 445 "rbmm.points_to_graph.m"
  }
#line 118 "rbmm.points_to_graph.m"
}

#line 112 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_1(
#line 112 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_5,
#line 112 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_6,
#line 112 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_7,
#line 112 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_8,
#line 112 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 112 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 112 "rbmm.points_to_graph.m"
{
#line 423 "rbmm.points_to_graph.m"
  {
#line 423 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 424 "rbmm.points_to_graph.m"
    {
#line 424 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
#line 424 "rbmm.points_to_graph.m"
      return;
    }
#line 423 "rbmm.points_to_graph.m"
  }
#line 112 "rbmm.points_to_graph.m"
}

#line 111 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_4_p_0(
#line 111 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_5,
#line 111 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_6,
#line 111 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__E_7,
#line 111 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_8,
#line 111 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 111 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 111 "rbmm.points_to_graph.m"
{
#line 423 "rbmm.points_to_graph.m"
  {
#line 423 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 424 "rbmm.points_to_graph.m"
    {
#line 424 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
#line 424 "rbmm.points_to_graph.m"
      return;
    }
#line 423 "rbmm.points_to_graph.m"
  }
#line 111 "rbmm.points_to_graph.m"
}

#line 102 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_successors_2_f_0(
#line 102 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 102 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 102 "rbmm.points_to_graph.m"
{
#line 396 "rbmm.points_to_graph.m"
  {
#line 396 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 396 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Successors_6;
#line 396 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__SuccessorList_7;
#line 396 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12;
#line 396 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 589 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12;

#line 589 "rbmm.points_to_graph.m"
    {
#line 589 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
    }
#line 589 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
#line 593 "rbmm.points_to_graph.m"
    {
#line 593 "rbmm.points_to_graph.m"
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12, &transform_hlds__rbmm__points_to_graph__SuccessorList_7);
    }
#line 398 "rbmm.points_to_graph.m"
    {
#line 398 "rbmm.points_to_graph.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__SuccessorList_7, &transform_hlds__rbmm__points_to_graph__Successors_6);
    }
#line 396 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Successors_6;
#line 396 "rbmm.points_to_graph.m"
  }
#line 102 "rbmm.points_to_graph.m"
}

#line 93 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(
#line 93 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Start_7,
#line 93 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_8,
#line 93 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_9,
#line 93 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Edge_10,
#line 93 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21,
#line 93 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_22)
#line 93 "rbmm.points_to_graph.m"
{
#line 400 "rbmm.points_to_graph.m"
  {
#line 400 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_30_30;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__ES0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
#line 400 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__EdgeId_13;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__ES_14;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges0_15;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_16;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_17;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges0_18;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges_19;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 400 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25;
#line 331 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
#line 331 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
#line 331 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
#line 331 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
#line 337 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 337 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43;
#line 337 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 337 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 355 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;
#line 355 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 355 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 355 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_59_59;
#line 413 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_71_71;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_72_72;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_73_73;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_74_74;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_75_75;

#line 402 "rbmm.points_to_graph.m"
    {
#line 402 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__EdgeId_13, transform_hlds__rbmm__points_to_graph__ES0_12, &transform_hlds__rbmm__points_to_graph__ES_14);
    }
#line 337 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
#line 337 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
#line 337 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
#line 337 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Edges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
#line 337 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
#line 337 "rbmm.points_to_graph.m"
    {
#line 337 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 337 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_41_41));
#line 337 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__ES_14));
#line 337 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_43_43));
#line 337 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges0_15));
#line 337 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_45_45));
#line 337 "rbmm.points_to_graph.m"
    }
#line 405 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Edge_10 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeId_13;
#line 408 "rbmm.points_to_graph.m"
    {
#line 408 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 408 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7));
#line 408 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8));
#line 408 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeContent_9));
#line 408 "rbmm.points_to_graph.m"
    }
#line 8719 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 408 "rbmm.points_to_graph.m"
    {
#line 408 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_24_24)), transform_hlds__rbmm__points_to_graph__Edges0_15, &transform_hlds__rbmm__points_to_graph__Edges_16);
    }
#line 355 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 0)));
#line 355 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 1)));
#line 355 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 2)));
#line 355 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 3)));
#line 355 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdges0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 4)));
#line 355 "rbmm.points_to_graph.m"
    {
#line 355 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 355 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_56_56));
#line 355 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 355 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 355 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_16));
#line 355 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_17));
#line 355 "rbmm.points_to_graph.m"
    }
#line 8752 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 8754 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeInfo_30_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 413 "rbmm.points_to_graph.m"
    {
#line 413 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, transform_hlds__rbmm__points_to_graph__OutEdges0_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), &transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
    }
#line 413 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__StartOutEdges0_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
#line 414 "rbmm.points_to_graph.m"
    {
#line 414 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8)), transform_hlds__rbmm__points_to_graph__StartOutEdges0_18, &transform_hlds__rbmm__points_to_graph__StartOutEdges_19);
    }
#line 415 "rbmm.points_to_graph.m"
    {
#line 415 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartOutEdges_19)), transform_hlds__rbmm__points_to_graph__OutEdges0_17, &transform_hlds__rbmm__points_to_graph__OutEdges_20);
    }
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 0)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 1)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 2)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 3)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 4)));
#line 361 "rbmm.points_to_graph.m"
    {
#line 361 "rbmm.points_to_graph.m"
      MR_Word base;
#line 361 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 361 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_22 = base;
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_71_71));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_72_72));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_73_73));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_74_74));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_20));
#line 361 "rbmm.points_to_graph.m"
    }
#line 400 "rbmm.points_to_graph.m"
  }
#line 93 "rbmm.points_to_graph.m"
}

#line 82 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edge_contents_5_p_0(
#line 82 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 82 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
#line 82 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Start_8,
#line 82 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9,
#line 82 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Content_10)
#line 82 "rbmm.points_to_graph.m"
{
#line 418 "rbmm.points_to_graph.m"
  {
#line 418 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 418 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 3)));
#line 418 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_12;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 4)));
#line 420 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12;

#line 420 "rbmm.points_to_graph.m"
    {
#line 420 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
    }
#line 420 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeInfo_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
#line 421 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Start_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 0)));
#line 421 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__End_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 1)));
#line 421 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Content_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 2)));
#line 418 "rbmm.points_to_graph.m"
  }
#line 82 "rbmm.points_to_graph.m"
}

#line 75 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_add_node_4_p_0(
#line 75 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Content0_5,
#line 75 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 75 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17,
#line 75 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_18)
#line 75 "rbmm.points_to_graph.m"
{
#line 370 "rbmm.points_to_graph.m"
  {
#line 370 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
#line 370 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__NodeId_6;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS_9;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__MergedFrom_11;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Content_12;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap0_13;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_14;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_15;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_16;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20;
#line 370 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
#line 327 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 327 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43;
#line 327 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44;
#line 327 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 327 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_51_51;
#line 616 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_52_52;
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 616 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 381 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 381 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 381 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 381 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_61_61;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_62_62;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_64_64;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_63_63;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_76_76;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_77_77;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_78_78;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_79_79;
#line 361 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_80_80;

#line 372 "rbmm.points_to_graph.m"
    {
#line 372 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NodeId_6, transform_hlds__rbmm__points_to_graph__NS0_8, &transform_hlds__rbmm__points_to_graph__NS_9);
    }
#line 370 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__NodeId_6;
#line 327 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
#line 327 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
#line 327 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
#line 327 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
#line 327 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
#line 327 "rbmm.points_to_graph.m"
    {
#line 327 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 327 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_9));
#line 327 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_42_42));
#line 327 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_43_43));
#line 327 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_44_44));
#line 327 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_45_45));
#line 327 "rbmm.points_to_graph.m"
    }
#line 8991 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 377 "rbmm.points_to_graph.m"
    {
#line 377 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__MergedFrom_11 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)));
    }
#line 616 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 0)));
#line 616 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 1)));
#line 616 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 2)));
#line 616 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 3)));
#line 616 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 4)));
#line 616 "rbmm.points_to_graph.m"
    {
#line 616 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Content_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_51_51));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_52_52));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__MergedFrom_11));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 616 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 616 "rbmm.points_to_graph.m"
    }
#line 381 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
#line 381 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
#line 381 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
#line 381 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
#line 381 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
#line 382 "rbmm.points_to_graph.m"
    {
#line 382 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Content_12)), transform_hlds__rbmm__points_to_graph__NodeMap0_13, &transform_hlds__rbmm__points_to_graph__NodeMap_14);
    }
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
#line 350 "rbmm.points_to_graph.m"
    {
#line 350 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_61_61));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_62_62));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeMap_14));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_64_64));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_15));
#line 350 "rbmm.points_to_graph.m"
    }
#line 387 "rbmm.points_to_graph.m"
    {
#line 387 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_21_21 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27);
    }
#line 387 "rbmm.points_to_graph.m"
    {
#line 387 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_21_21)), transform_hlds__rbmm__points_to_graph__OutEdges0_15, &transform_hlds__rbmm__points_to_graph__OutEdges_16);
    }
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 0)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 1)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 2)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 3)));
#line 361 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 4)));
#line 361 "rbmm.points_to_graph.m"
    {
#line 361 "rbmm.points_to_graph.m"
      MR_Word base;
#line 361 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 361 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_18 = base;
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_76_76));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_77_77));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_78_78));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_79_79));
#line 361 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_16));
#line 361 "rbmm.points_to_graph.m"
    }
#line 370 "rbmm.points_to_graph.m"
  }
#line 75 "rbmm.points_to_graph.m"
}

#line 63 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_is_allocated_4_p_0(
#line 63 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
#line 63 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__IsAlloc_6,
#line 63 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10,
#line 63 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11)
#line 63 "rbmm.points_to_graph.m"
{
#line 600 "rbmm.points_to_graph.m"
  {
#line 600 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 600 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent0_8;
#line 600 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
#line 600 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 600 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_39;
#line 600 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_40;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8;
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 620 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_30_30;
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 620 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_46_46;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_47_47;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_48_48;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent0_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
#line 620 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 0)));
#line 620 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 1)));
#line 620 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 2)));
#line 620 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 3)));
#line 620 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 4)));
#line 620 "rbmm.points_to_graph.m"
    {
#line 620 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__NodeContent_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_29_29));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_30_30));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_31_31));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_32_32));
#line 620 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAlloc_6));
#line 620 "rbmm.points_to_graph.m"
    }
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Nodes0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 597 "rbmm.points_to_graph.m"
    {
#line 597 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_9)), transform_hlds__rbmm__points_to_graph__Nodes0_39, &transform_hlds__rbmm__points_to_graph__Nodes_40);
    }
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 350 "rbmm.points_to_graph.m"
    {
#line 350 "rbmm.points_to_graph.m"
      MR_Word base;
#line 350 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_40));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 350 "rbmm.points_to_graph.m"
    }
#line 600 "rbmm.points_to_graph.m"
  }
#line 63 "rbmm.points_to_graph.m"
}

#line 58 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_set_node_content_4_p_0(
#line 58 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5,
#line 58 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_6,
#line 58 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10,
#line 58 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11)
#line 58 "rbmm.points_to_graph.m"
{
#line 595 "rbmm.points_to_graph.m"
  {
#line 595 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 595 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 595 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_9;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 350 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;

#line 597 "rbmm.points_to_graph.m"
    {
#line 597 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_6)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_9);
    }
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 350 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 350 "rbmm.points_to_graph.m"
    {
#line 350 "rbmm.points_to_graph.m"
      MR_Word base;
#line 350 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_25_25));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_26_26));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_9));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_28_28));
#line 350 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_29_29));
#line 350 "rbmm.points_to_graph.m"
    }
#line 595 "rbmm.points_to_graph.m"
  }
#line 58 "rbmm.points_to_graph.m"
}

#line 54 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_node_content_2_f_0(
#line 54 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_4,
#line 54 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_5)
#line 54 "rbmm.points_to_graph.m"
{
#line 390 "rbmm.points_to_graph.m"
  {
#line 390 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 390 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_6;
#line 390 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 391 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6;

#line 391 "rbmm.points_to_graph.m"
    {
#line 391 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_7_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
    }
#line 391 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
#line 390 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeContent_6;
#line 390 "rbmm.points_to_graph.m"
  }
#line 54 "rbmm.points_to_graph.m"
}

#line 47 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0(void)
#line 47 "rbmm.points_to_graph.m"
{
#line 312 "rbmm.points_to_graph.m"
  {
#line 312 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Graph_2;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_3;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSupply_4;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_5;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_6;
#line 312 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7;

#line 313 "rbmm.points_to_graph.m"
    {
#line 313 "rbmm.points_to_graph.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__NodeSupply_3);
    }
#line 314 "rbmm.points_to_graph.m"
    {
#line 314 "rbmm.points_to_graph.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__EdgeSupply_4);
    }
#line 9415 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 315 "rbmm.points_to_graph.m"
    {
#line 315 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, &transform_hlds__rbmm__points_to_graph__Nodes_5);
    }
#line 316 "rbmm.points_to_graph.m"
    {
#line 316 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, &transform_hlds__rbmm__points_to_graph__Edges_6);
    }
#line 317 "rbmm.points_to_graph.m"
    {
#line 317 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], &transform_hlds__rbmm__points_to_graph__OutEdges_7);
    }
#line 318 "rbmm.points_to_graph.m"
    {
#line 318 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Graph_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 318 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeSupply_3));
#line 318 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeSupply_4));
#line 318 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_5));
#line 318 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_6));
#line 318 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_7));
#line 318 "rbmm.points_to_graph.m"
    }
#line 312 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Graph_2;
#line 312 "rbmm.points_to_graph.m"
  }
#line 47 "rbmm.points_to_graph.m"
}

#line 42 "rbmm.points_to_graph.m"
MR_Integer MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_next_node_id_1_f_0(
#line 42 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
#line 42 "rbmm.points_to_graph.m"
{
#line 343 "rbmm.points_to_graph.m"
  {
#line 343 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 343 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__NextNodeId_4;
#line 343 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 322 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
#line 345 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6;

#line 345 "rbmm.points_to_graph.m"
    {
#line 345 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NextNodeId_4, transform_hlds__rbmm__points_to_graph__NodeSupply_5, &transform_hlds__rbmm__points_to_graph__V_6_6);
    }
#line 343 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NextNodeId_4;
#line 343 "rbmm.points_to_graph.m"
  }
#line 42 "rbmm.points_to_graph.m"
}

#line 40 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_outedges_1_f_0(
#line 40 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
#line 40 "rbmm.points_to_graph.m"
{
#line 341 "rbmm.points_to_graph.m"
  {
#line 341 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));

#line 341 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 341 "rbmm.points_to_graph.m"
  }
#line 40 "rbmm.points_to_graph.m"
}

#line 39 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_edges_1_f_0(
#line 39 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
#line 39 "rbmm.points_to_graph.m"
{
#line 340 "rbmm.points_to_graph.m"
  {
#line 340 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

#line 340 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 340 "rbmm.points_to_graph.m"
  }
#line 39 "rbmm.points_to_graph.m"
}

#line 38 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_as_list_1_f_0(
#line 38 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_3)
#line 38 "rbmm.points_to_graph.m"
{
#line 393 "rbmm.points_to_graph.m"
  {
#line 393 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 393 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeList_4;
#line 393 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));

#line 394 "rbmm.points_to_graph.m"
    {
#line 394 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_5_5, &transform_hlds__rbmm__points_to_graph__NodeList_4);
    }
#line 393 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeList_4;
#line 393 "rbmm.points_to_graph.m"
  }
#line 38 "rbmm.points_to_graph.m"
}

#line 37 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_get_nodes_1_f_0(
#line 37 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_3)
#line 37 "rbmm.points_to_graph.m"
{
#line 339 "rbmm.points_to_graph.m"
  {
#line 339 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 339 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

#line 339 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 339 "rbmm.points_to_graph.m"
  }
#line 37 "rbmm.points_to_graph.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.points_to_graph. */
