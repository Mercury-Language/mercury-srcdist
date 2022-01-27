/*
** Automatically generated from `rbmm.points_to_graph.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "counter.mih"
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
#include "solutions.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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



#line 819 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0_s {
#line 819 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__HeadVar__3_33;
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont;
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont_env_ptr;
#line 819 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__conv0_HeadVar__3_33;
#line 819 "rbmm.points_to_graph.m"
};

#line 857 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0_s {
#line 857 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__HeadVar__3_13;
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont;
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont_env_ptr;
#line 857 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__conv0_HeadVar__3_13;
#line 857 "rbmm.points_to_graph.m"
};

#line 819 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s {
#line 819 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1;
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont;
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr;
#line 819 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33;
#line 819 "rbmm.points_to_graph.m"
};

#line 430 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s {
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6;
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8;
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9;
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10;
#line 430 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont;
#line 430 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr;
#line 432 "rbmm.points_to_graph.m"
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded;
#line 432 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19;
#line 436 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13;
#line 436 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17;
#line 436 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13;
#line 436 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18;
#line 440 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18;
#line 440 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14;
#line 430 "rbmm.points_to_graph.m"
};

#line 429 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s {
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6;
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8;
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9;
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10;
#line 429 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont;
#line 429 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr;
#line 432 "rbmm.points_to_graph.m"
  MR_bool transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded;
#line 432 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19;
#line 436 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13;
#line 436 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17;
#line 436 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23;
#line 436 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13;
#line 436 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16;
#line 440 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18;
#line 440 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18;
#line 440 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14;
#line 429 "rbmm.points_to_graph.m"
};

#line 857 "rbmm.points_to_graph.m"
struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s {
#line 857 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1;
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont;
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr;
#line 857 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13;
#line 857 "rbmm.points_to_graph.m"
};


#line 291 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 294 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;

#line 297 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 300 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 303 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 306 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 309 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 312 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;

#line 315 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;

#line 318 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 321 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 324 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5];

#line 327 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5];

#line 330 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0;

#line 333 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1];

#line 336 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1];

#line 339 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1];

#line 342 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1];

#line 345 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1];

#line 348 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0;

#line 351 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1];

#line 354 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0;

#line 357 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3];

#line 360 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3];

#line 363 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0;

#line 366 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1];

#line 369 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1];

#line 372 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1];

#line 375 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1];

#line 378 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1];

#line 381 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0;

#line 384 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 387 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 390 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 393 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5];

#line 396 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5];

#line 399 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0;

#line 402 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1];

#line 405 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1];

#line 408 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1];

#line 411 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1];

#line 414 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
#line 417 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 419 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 422 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
#line 425 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 427 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 429 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 432 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
#line 435 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 437 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 440 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
#line 443 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 445 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 447 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 450 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
#line 453 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 455 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 458 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
#line 461 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 463 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 465 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 468 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
#line 471 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 473 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 476 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
#line 479 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 481 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 483 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 486 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
#line 489 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 491 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 494 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
#line 497 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 499 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 501 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 504 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
#line 507 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 509 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 512 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
#line 515 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 517 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 519 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 522 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
#line 525 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 527 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 530 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
#line 533 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 535 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 537 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 540 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
#line 543 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 545 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 548 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
#line 551 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 553 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 555 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 558 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
#line 561 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 563 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2);

#line 566 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
#line 569 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 571 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 573 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_1(
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0(
#line 819 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 819 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
#line 819 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_1(
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0(
#line 857 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 857 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
#line 857 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 989 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
#line 989 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22);

#line 979 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 979 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3);

#line 959 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
#line 959 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7);

#line 926 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

#line 899 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3);

#line 842 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
#line 842 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9);

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
#line 819 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 819 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 810 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
#line 810 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
#line 810 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6);

#line 765 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
#line 765 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
#line 765 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 765 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3);

#line 748 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 748 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

#line 734 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
#line 734 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14);

#line 732 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
#line 732 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4);

#line 711 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 711 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

#line 693 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 693 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4);

#line 672 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 672 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);

#line 553 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
#line 553 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9);

#line 521 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
#line 521 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

#line 501 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
#line 501 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 501 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
#line 501 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
#line 501 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8);

#line 479 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
#line 479 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9);

#line 457 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
#line 457 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11);

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 430 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 430 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 430 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 429 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 429 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 429 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 429 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr);

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg);

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
#line 857 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 857 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 857 "rbmm.points_to_graph.m"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1138 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1147 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0
  }
};

#line 1155 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1163 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1171 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1179 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1188 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__pair__ti_pair_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 1196 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0
  }
};

#line 1205 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0
  }
};

#line 1214 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1223 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1232 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rpt_graph_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

#line 1241 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rpt_graph_0_0[5] = {
  (MR_String) "rptg_node_supply",
  (MR_String) "rptg_edge_supply",
  (MR_String) "rptg_nodes",
  (MR_String) "rptg_edges",
  (MR_String) "rptg_outedges"
};

#line 1250 "transform_hlds.rbmm.points_to_graph.c"
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

#line 1265 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

#line 1270 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rpt_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rpt_graph_0_0
  }
};

#line 1279 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rpt_graph_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rpt_graph_0_0
};

#line 1284 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rpt_graph_0[1] = {
  (MR_Integer) 0
};

#line 1289 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1306 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_0[1] = {
  (MR_Integer) 0
};

#line 1311 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_0 = {
  (MR_String) "rptg_edge",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1318 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 1335 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_content_0[1] = {
  (MR_Integer) 0
};

#line 1340 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_edge_content_0 = {
  (MR_String) "rptg_edge_content",
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0,
  (MR_String) "rptg_ec_label"
};

#line 1347 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 1364 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_edge_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_content_0
};

#line 1371 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_edge_info_0_0[3] = {
  (MR_String) "rptg_edge_from_node",
  (MR_String) "rptg_edge_to_node",
  (MR_String) "rptg_edge_label"
};

#line 1378 "transform_hlds.rbmm.points_to_graph.c"
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

#line 1393 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

#line 1398 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_edge_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_edge_info_0_0
  }
};

#line 1407 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_edge_info_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_edge_info_0_0
};

#line 1412 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_edge_info_0[1] = {
  (MR_Integer) 0
};

#line 1417 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1434 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 1451 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_0[1] = {
  (MR_Integer) 0
};

#line 1456 "transform_hlds.rbmm.points_to_graph.c"
static const MR_NotagFunctorDesc transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__notag_functor_desc_rptg_node_0 = {
  (MR_String) "rptg_node",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1463 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 1480 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1488 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1496 "transform_hlds.rbmm.points_to_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1504 "transform_hlds.rbmm.points_to_graph.c"
static const MR_PseudoTypeInfo transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_types_rptg_node_content_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1513 "transform_hlds.rbmm.points_to_graph.c"
static const MR_ConstString transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__field_names_rptg_node_content_0_0[5] = {
  (MR_String) "rptg_nc_vars",
  (MR_String) "rptg_nc_reg_var_name",
  (MR_String) "rptg_nc_merged_from",
  (MR_String) "rptg_nc_node_type",
  (MR_String) "rptg_nc_is_allocated"
};

#line 1522 "transform_hlds.rbmm.points_to_graph.c"
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

#line 1537 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

#line 1542 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuPtagLayout transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_ptag_ordered_rptg_node_content_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_stag_ordered_rptg_node_content_0_0
  }
};

#line 1551 "transform_hlds.rbmm.points_to_graph.c"
static const MR_DuFunctorDescPtr transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_name_ordered_rptg_node_content_0[1] = {
  &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__du_functor_desc_rptg_node_content_0_0
};

#line 1556 "transform_hlds.rbmm.points_to_graph.c"
static const MR_Integer transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__functor_number_map_rptg_node_content_0[1] = {
  (MR_Integer) 0
};

#line 1561 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1578 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_nodes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 1595 "transform_hlds.rbmm.points_to_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_outedges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 1612 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0_10001(
#line 1615 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1617 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1619 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1621 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1623 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1626 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1628 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1631 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1633 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1635 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1638 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0_10001(
#line 1641 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1643 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1645 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1647 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1649 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1651 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1654 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1656 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1659 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1661 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1663 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1666 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0_10001(
#line 1669 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1671 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1673 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1675 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1677 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1680 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1682 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1685 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1687 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1689 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1692 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0_10001(
#line 1695 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1697 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1699 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1701 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1703 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1705 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1708 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1710 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1713 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1715 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1717 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1720 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0_10001(
#line 1723 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1725 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1727 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1729 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1731 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1734 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1736 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1739 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1741 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1743 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1746 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0_10001(
#line 1749 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1751 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1753 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1755 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1757 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1759 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1762 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1764 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1767 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1769 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1771 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1774 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0_10001(
#line 1777 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1779 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1781 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1783 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1785 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1788 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1790 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_info_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1793 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1795 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1797 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1800 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0_10001(
#line 1803 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1805 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1807 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1809 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1811 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1813 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1816 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1818 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edge_info_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1821 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1823 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1825 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1828 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0_10001(
#line 1831 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1833 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1835 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1837 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1839 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1842 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1844 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1847 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1849 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1851 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1854 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0_10001(
#line 1857 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1859 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1861 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1863 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1865 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1867 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1870 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1872 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_edges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1875 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1877 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1879 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1882 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0_10001(
#line 1885 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1887 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1889 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1891 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1893 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1896 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1898 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1901 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1903 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1905 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1908 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0_10001(
#line 1911 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1913 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1915 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1917 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1919 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1921 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1924 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1926 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1929 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1931 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1933 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1936 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0_10001(
#line 1939 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1941 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1943 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1945 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1947 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 1950 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1952 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_node_content_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 1955 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 1957 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1959 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1962 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0_10001(
#line 1965 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1967 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 1969 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 1971 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1973 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 1975 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 1978 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 1980 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_node_content_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 1983 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 1985 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 1987 "transform_hlds.rbmm.points_to_graph.c"
}

#line 1990 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0_10001(
#line 1993 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 1995 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 1997 "transform_hlds.rbmm.points_to_graph.c"
{
#line 1999 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2001 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 2004 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2006 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_nodes_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 2009 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 2011 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2013 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2016 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0_10001(
#line 2019 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2021 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 2023 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 2025 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2027 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2029 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 2032 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2034 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_nodes_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 2037 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 2039 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2041 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2044 "transform_hlds.rbmm.points_to_graph.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0_10001(
#line 2047 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2049 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2)
#line 2051 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2053 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2055 "transform_hlds.rbmm.points_to_graph.c"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 2058 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2060 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_outedges_0_0(((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2));
    }
#line 2063 "transform_hlds.rbmm.points_to_graph.c"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 2065 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2067 "transform_hlds.rbmm.points_to_graph.c"
}

#line 2070 "transform_hlds.rbmm.points_to_graph.c"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0_10001(
#line 2073 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 2075 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 2077 "transform_hlds.rbmm.points_to_graph.c"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 2079 "transform_hlds.rbmm.points_to_graph.c"
{
#line 2081 "transform_hlds.rbmm.points_to_graph.c"
  {
#line 2083 "transform_hlds.rbmm.points_to_graph.c"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1;

#line 2086 "transform_hlds.rbmm.points_to_graph.c"
    {
#line 2088 "transform_hlds.rbmm.points_to_graph.c"
      transform_hlds__rbmm__points_to_graph____Compare____rptg_outedges_0_0(&transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3));
    }
#line 2091 "transform_hlds.rbmm.points_to_graph.c"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_HeadVar__1_1));
#line 2093 "transform_hlds.rbmm.points_to_graph.c"
  }
#line 2095 "transform_hlds.rbmm.points_to_graph.c"
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
#line 625 "rbmm.points_to_graph.m"
  {
#line 625 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 625 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7 = (MR_Word) transform_hlds__rbmm__points_to_graph__Label_4;
#line 625 "rbmm.points_to_graph.m"
  }
#line 256 "rbmm.points_to_graph.m"
}

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_1(
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 819 "rbmm.points_to_graph.m"
{
#line 819 "rbmm.points_to_graph.m"
  {
#line 819 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 819 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__HeadVar__3_33) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__conv0_HeadVar__3_33);
#line 819 "rbmm.points_to_graph.m"
    {
#line 819 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont_env_ptr);
#line 819 "rbmm.points_to_graph.m"
      return;
    }
#line 819 "rbmm.points_to_graph.m"
  }
#line 819 "rbmm.points_to_graph.m"
}

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0(
#line 819 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 819 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19,
#line 819 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_33,
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 819 "rbmm.points_to_graph.m"
{
#line 819 "rbmm.points_to_graph.m"
  {
#line 819 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__HeadVar__3_33 = transform_hlds__rbmm__points_to_graph__HeadVar__3_33;
#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 819 "rbmm.points_to_graph.m"
    {
#line 819 "rbmm.points_to_graph.m"
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 819 "rbmm.points_to_graph.m"
      {
#line 819 "rbmm.points_to_graph.m"
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_env_0__conv0_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 819 "rbmm.points_to_graph.m"
    }
#line 819 "rbmm.points_to_graph.m"
  }
#line 819 "rbmm.points_to_graph.m"
}

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_1(
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 857 "rbmm.points_to_graph.m"
{
#line 857 "rbmm.points_to_graph.m"
  {
#line 857 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 857 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__HeadVar__3_13) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__conv0_HeadVar__3_13);
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont_env_ptr);
#line 857 "rbmm.points_to_graph.m"
      return;
    }
#line 857 "rbmm.points_to_graph.m"
  }
#line 857 "rbmm.points_to_graph.m"
}

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0(
#line 857 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_7,
#line 857 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9,
#line 857 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_13,
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 857 "rbmm.points_to_graph.m"
{
#line 857 "rbmm.points_to_graph.m"
  {
#line 857 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__HeadVar__3_13 = transform_hlds__rbmm__points_to_graph__HeadVar__3_13;
#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 857 "rbmm.points_to_graph.m"
      {
#line 857 "rbmm.points_to_graph.m"
        mercury__map__inverse_search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7)), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_env_0__conv0_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 857 "rbmm.points_to_graph.m"
    }
#line 857 "rbmm.points_to_graph.m"
  }
#line 857 "rbmm.points_to_graph.m"
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
#line 2405 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2439 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2459 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2479 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2499 "transform_hlds.rbmm.points_to_graph.c"
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

#line 2589 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 2591 "transform_hlds.rbmm.points_to_graph.c"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[4], ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_3_3)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_8_8)));
        }
#line 213 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
          {
#line 2598 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9) == 0);
#line 213 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
              {
#line 2604 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[5];
#line 2606 "transform_hlds.rbmm.points_to_graph.c"
                {
#line 2608 "transform_hlds.rbmm.points_to_graph.c"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_5_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10)));
                }
#line 213 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 213 "rbmm.points_to_graph.m"
                  {
#line 2615 "transform_hlds.rbmm.points_to_graph.c"
                    {
#line 2617 "transform_hlds.rbmm.points_to_graph.c"
                      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__V_6_6, transform_hlds__rbmm__points_to_graph__V_11_11);
                    }
#line 213 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2622 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2663 "transform_hlds.rbmm.points_to_graph.c"
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

#line 2721 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2818 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2848 "transform_hlds.rbmm.points_to_graph.c"
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
#line 2872 "transform_hlds.rbmm.points_to_graph.c"
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

#line 2962 "transform_hlds.rbmm.points_to_graph.c"
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

#line 2989 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_15_15 == transform_hlds__rbmm__points_to_graph__V_16_16);
#line 210 "rbmm.points_to_graph.m"
              }
#line 259 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 2995 "transform_hlds.rbmm.points_to_graph.c"
              {
#line 2997 "transform_hlds.rbmm.points_to_graph.c"
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
#line 3035 "transform_hlds.rbmm.points_to_graph.c"
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

#line 3093 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 3095 "transform_hlds.rbmm.points_to_graph.c"
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
#line 3131 "transform_hlds.rbmm.points_to_graph.c"
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

#line 3189 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_3_3 == transform_hlds__rbmm__points_to_graph__V_4_4);
#line 246 "rbmm.points_to_graph.m"
      }
#line 246 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 246 "rbmm.points_to_graph.m"
  }
#line 246 "rbmm.points_to_graph.m"
}

#line 300 "rbmm.points_to_graph.m"
void MR_CALL 
transform_hlds__rbmm__points_to_graph____Compare____rpt_graph_0_0(
#line 300 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 300 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 300 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 300 "rbmm.points_to_graph.m"
{
#line 300 "rbmm.points_to_graph.m"
  {
#line 300 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 300 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_18 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 300 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_19 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__3_3;

#line 300 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_18 == transform_hlds__rbmm__points_to_graph__CastY_19);
#line 300 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 3224 "transform_hlds.rbmm.points_to_graph.c"
      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "rbmm.points_to_graph.m"
    else
#line 300 "rbmm.points_to_graph.m"
      {
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 0)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 2)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 3)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__3_3, (MR_Integer) 4)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;

#line 300 "rbmm.points_to_graph.m"
        {
#line 300 "rbmm.points_to_graph.m"
          mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__V_14_14, transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9);
        }
#line 3258 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_14_14 == (MR_Integer) 0);
#line 300 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 300 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_14_14;
#line 300 "rbmm.points_to_graph.m"
        else
#line 300 "rbmm.points_to_graph.m"
          {
#line 300 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;

#line 300 "rbmm.points_to_graph.m"
            {
#line 300 "rbmm.points_to_graph.m"
              mercury__counter____Compare____counter_0_0(&transform_hlds__rbmm__points_to_graph__V_15_15, transform_hlds__rbmm__points_to_graph__V_5_5, transform_hlds__rbmm__points_to_graph__V_10_10);
            }
#line 3278 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_15_15 == (MR_Integer) 0);
#line 300 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 300 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_15_15;
#line 300 "rbmm.points_to_graph.m"
            else
#line 300 "rbmm.points_to_graph.m"
              {
#line 300 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;

#line 300 "rbmm.points_to_graph.m"
                {
#line 300 "rbmm.points_to_graph.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2], &transform_hlds__rbmm__points_to_graph__V_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_6_6)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11)));
                }
#line 3298 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_16_16 == (MR_Integer) 0);
#line 300 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 300 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
                  *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_16_16;
#line 300 "rbmm.points_to_graph.m"
                else
#line 300 "rbmm.points_to_graph.m"
                  {
#line 300 "rbmm.points_to_graph.m"
                    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17;

#line 300 "rbmm.points_to_graph.m"
                    {
#line 300 "rbmm.points_to_graph.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3], &transform_hlds__rbmm__points_to_graph__V_17_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_7_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12)));
                    }
#line 3318 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_17_17 == (MR_Integer) 0);
#line 300 "rbmm.points_to_graph.m"
                    transform_hlds__rbmm__points_to_graph__succeeded = !(transform_hlds__rbmm__points_to_graph__succeeded);
#line 300 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
                      *transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__V_17_17;
#line 300 "rbmm.points_to_graph.m"
                    else
#line 300 "rbmm.points_to_graph.m"
                      {
#line 300 "rbmm.points_to_graph.m"
                        {
#line 300 "rbmm.points_to_graph.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4], transform_hlds__rbmm__points_to_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_8_8)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13)));
#line 300 "rbmm.points_to_graph.m"
                          return;
                        }
#line 300 "rbmm.points_to_graph.m"
                      }
#line 300 "rbmm.points_to_graph.m"
                  }
#line 300 "rbmm.points_to_graph.m"
              }
#line 300 "rbmm.points_to_graph.m"
          }
#line 300 "rbmm.points_to_graph.m"
      }
#line 300 "rbmm.points_to_graph.m"
  }
#line 300 "rbmm.points_to_graph.m"
}

#line 300 "rbmm.points_to_graph.m"
MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph____Unify____rpt_graph_0_0(
#line 300 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 300 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2)
#line 300 "rbmm.points_to_graph.m"
{
#line 300 "rbmm.points_to_graph.m"
  {
#line 300 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 300 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastX_13 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__1_1;
#line 300 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__CastY_14 = (MR_Integer) transform_hlds__rbmm__points_to_graph__HeadVar__2_2;

#line 300 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__CastX_13 == transform_hlds__rbmm__points_to_graph__CastY_14);
#line 300 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 300 "rbmm.points_to_graph.m"
    else
#line 300 "rbmm.points_to_graph.m"
      {
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_18;
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_19_19;
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 2)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 3)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 4)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 300 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));

#line 3407 "transform_hlds.rbmm.points_to_graph.c"
        {
#line 3409 "transform_hlds.rbmm.points_to_graph.c"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__V_3_3, transform_hlds__rbmm__points_to_graph__V_8_8);
        }
#line 300 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
          {
#line 3416 "transform_hlds.rbmm.points_to_graph.c"
            {
#line 3418 "transform_hlds.rbmm.points_to_graph.c"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__V_4_4, transform_hlds__rbmm__points_to_graph__V_9_9);
            }
#line 300 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
              {
#line 3425 "transform_hlds.rbmm.points_to_graph.c"
                transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[2];
#line 3427 "transform_hlds.rbmm.points_to_graph.c"
                {
#line 3429 "transform_hlds.rbmm.points_to_graph.c"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_5_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10)));
                }
#line 300 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
                  {
#line 3436 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[3];
#line 3438 "transform_hlds.rbmm.points_to_graph.c"
                    {
#line 3440 "transform_hlds.rbmm.points_to_graph.c"
                      transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_18_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_6_6)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11)));
                    }
#line 300 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 300 "rbmm.points_to_graph.m"
                      {
#line 3447 "transform_hlds.rbmm.points_to_graph.c"
                        transform_hlds__rbmm__points_to_graph__TypeInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[4];
#line 3449 "transform_hlds.rbmm.points_to_graph.c"
                        {
#line 3451 "transform_hlds.rbmm.points_to_graph.c"
                          return transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_7_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12)));
                        }
#line 300 "rbmm.points_to_graph.m"
                      }
#line 300 "rbmm.points_to_graph.m"
                  }
#line 300 "rbmm.points_to_graph.m"
              }
#line 300 "rbmm.points_to_graph.m"
          }
#line 300 "rbmm.points_to_graph.m"
      }
#line 300 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 300 "rbmm.points_to_graph.m"
  }
#line 300 "rbmm.points_to_graph.m"
}

#line 989 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Selector0_9,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_10,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_11,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_12,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed_13,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__OutEdge_14,
#line 989 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21,
#line 989 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22)
#line 989 "rbmm.points_to_graph.m"
{
#line 994 "rbmm.points_to_graph.m"
  {
#line 994 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__End_17;
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_18;
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSelector_19;
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Selector_20;
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 3)));
#line 994 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_38;
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_12, (MR_Integer) 4)));
#line 421 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38;
#line 422 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___Start_16;

#line 421 "rbmm.points_to_graph.m"
    {
#line 421 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_37, ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdge_14)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
    }
#line 421 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeInfo_38 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_38);
#line 422 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph___Start_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 0)));
#line 422 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__End_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 1)));
#line 422 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeContent_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_38, (MR_Integer) 2)));
#line 623 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeSelector_19 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeContent_18;
#line 997 "rbmm.points_to_graph.m"
    {
#line 997 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Selector_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0, transform_hlds__rbmm__points_to_graph__Selector0_9, transform_hlds__rbmm__points_to_graph__EdgeSelector_19);
    }
#line 998 "rbmm.points_to_graph.m"
    {
#line 998 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__smm_common__check_type_of_node_3_p_0(transform_hlds__rbmm__points_to_graph__HLDS_10, transform_hlds__rbmm__points_to_graph__TypeX_11, transform_hlds__rbmm__points_to_graph__Selector_20);
    }
#line 1008 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 1003 "rbmm.points_to_graph.m"
      {
#line 1000 "rbmm.points_to_graph.m"
        {
#line 1000 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), transform_hlds__rbmm__points_to_graph__Processed_13);
        }
#line 1003 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 1003 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
#line 1003 "rbmm.points_to_graph.m"
        else
#line 1006 "rbmm.points_to_graph.m"
          {
#line 1006 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 1006 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;

#line 1006 "rbmm.points_to_graph.m"
            {
#line 1006 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_25_25 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_17)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_20)));
            }
#line 1006 "rbmm.points_to_graph.m"
            {
#line 1006 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_25_25));
#line 1006 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "rbmm.points_to_graph.m"
            }
#line 1006 "rbmm.points_to_graph.m"
            {
#line 1006 "rbmm.points_to_graph.m"
              *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[1], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21, transform_hlds__rbmm__points_to_graph__V_24_24);
            }
#line 1006 "rbmm.points_to_graph.m"
          }
#line 1003 "rbmm.points_to_graph.m"
      }
#line 1008 "rbmm.points_to_graph.m"
    else
#line 1008 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_22 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_List_0_21;
#line 994 "rbmm.points_to_graph.m"
  }
#line 989 "rbmm.points_to_graph.m"
}

#line 979 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1(
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 979 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 979 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_3)
#line 979 "rbmm.points_to_graph.m"
{
#line 979 "rbmm.points_to_graph.m"
  {
#line 979 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
#line 979 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22;

#line 979 "rbmm.points_to_graph.m"
    {
#line 979 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__update_remembered_list_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 7))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), &transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22);
    }
#line 979 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv1_STATE_VARIABLE_List_22));
#line 979 "rbmm.points_to_graph.m"
  }
#line 979 "rbmm.points_to_graph.m"
}

#line 959 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_2,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HLDS_3,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeX_4,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Processed0_5,
#line 959 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6,
#line 959 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7)
#line 959 "rbmm.points_to_graph.m"
{
#line 963 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 963 "rbmm.points_to_graph.m"
    {
#line 963 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 963 "rbmm.points_to_graph.m"
      {
#line 963 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 963 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_7 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6;
#line 963 "rbmm.points_to_graph.m"
        else
#line 965 "rbmm.points_to_graph.m"
          {
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 0)));
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Selector_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Node_Selector_15, (MR_Integer) 1)));
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Processed_24;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_25;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41;
#line 965 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_47;
#line 342 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_51_51;
#line 342 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_52_52;
#line 342 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 342 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 590 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41;
#line 978 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26;

#line 969 "rbmm.points_to_graph.m"
            {
#line 969 "rbmm.points_to_graph.m"
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29);
            }
#line 974 "rbmm.points_to_graph.m"
            {
#line 974 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__Processed_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22));
#line 974 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__Processed_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed0_5));
#line 974 "rbmm.points_to_graph.m"
            }
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 3)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdges_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, (MR_Integer) 4)));
#line 590 "rbmm.points_to_graph.m"
            {
#line 590 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_47, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_22)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
            }
#line 590 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_41);
#line 586 "rbmm.points_to_graph.m"
            {
#line 586 "rbmm.points_to_graph.m"
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_41, &transform_hlds__rbmm__points_to_graph__EdgeList_25);
            }
#line 979 "rbmm.points_to_graph.m"
            {
#line 979 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_5[0]));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0_1));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Selector_23));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__HLDS_3));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 5) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeX_4));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 6) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Graph_2));
#line 979 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_30_30, 7) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Processed_24));
#line 979 "rbmm.points_to_graph.m"
            }
#line 978 "rbmm.points_to_graph.m"
            {
#line 978 "rbmm.points_to_graph.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[3], transform_hlds__rbmm__points_to_graph__V_30_30, transform_hlds__rbmm__points_to_graph__EdgeList_25, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selectors0_16)), &transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
            }
#line 978 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_Selectors_26 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv2_Node_Selectors_26);
#line 982 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 982 "rbmm.points_to_graph.m"
            {
#line 982 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Node_Selectors_26;
#line 982 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__Processed0__tmp_copy_5 = transform_hlds__rbmm__points_to_graph__Processed_24;
#line 982 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_29_29;

#line 982 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0__tmp_copy_6;
#line 982 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__Processed0_5 = transform_hlds__rbmm__points_to_graph__Processed0__tmp_copy_5;
#line 982 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 982 "rbmm.points_to_graph.m"
            }
#line 982 "rbmm.points_to_graph.m"
            continue;
#line 965 "rbmm.points_to_graph.m"
          }
#line 963 "rbmm.points_to_graph.m"
      }
#line 963 "rbmm.points_to_graph.m"
      break;
#line 963 "rbmm.points_to_graph.m"
    }
#line 959 "rbmm.points_to_graph.m"
}

#line 926 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 926 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
#line 926 "rbmm.points_to_graph.m"
{
#line 929 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 929 "rbmm.points_to_graph.m"
    {
#line 929 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 929 "rbmm.points_to_graph.m"
      {
#line 929 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 929 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 929 "rbmm.points_to_graph.m"
        else
#line 930 "rbmm.points_to_graph.m"
          {
#line 930 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_16_16;
#line 930 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
#line 930 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V2_10;
#line 930 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V1_11;
#line 930 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__C1_19;
#line 930 "rbmm.points_to_graph.m"
            MR_Integer transform_hlds__rbmm__points_to_graph__C2_20;
#line 930 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks1_21;
#line 931 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_V2_10;
#line 934 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv1_V1_11;

#line 3861 "transform_hlds.rbmm.points_to_graph.c"
            {
#line 3863 "transform_hlds.rbmm.points_to_graph.c"
              transform_hlds__rbmm__points_to_graph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3865 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 3867 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13));
#line 3869 "transform_hlds.rbmm.points_to_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14));
#line 3871 "transform_hlds.rbmm.points_to_graph.c"
            }
#line 931 "rbmm.points_to_graph.m"
            {
#line 931 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv0_V2_10);
            }
#line 931 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 931 "rbmm.points_to_graph.m"
              {
#line 931 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__V2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_V2_10);
#line 931 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 931 "rbmm.points_to_graph.m"
              }
#line 930 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 930 "rbmm.points_to_graph.m"
              {
#line 934 "rbmm.points_to_graph.m"
                {
#line 934 "rbmm.points_to_graph.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_16_16, (MR_Word) transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__conv1_V1_11);
                }
#line 934 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__V1_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_V1_11);
#line 887 "rbmm.points_to_graph.m"
                {
#line 887 "rbmm.points_to_graph.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__C1_19);
                }
#line 888 "rbmm.points_to_graph.m"
                {
#line 888 "rbmm.points_to_graph.m"
                  mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V2_10, &transform_hlds__rbmm__points_to_graph__C2_20);
                }
#line 889 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_19 == transform_hlds__rbmm__points_to_graph__C2_20);
#line 930 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 930 "rbmm.points_to_graph.m"
                  {
#line 892 "rbmm.points_to_graph.m"
                    {
#line 892 "rbmm.points_to_graph.m"
                      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__V1_11, &transform_hlds__rbmm__points_to_graph__Ks1_21);
                    }
#line 893 "rbmm.points_to_graph.m"
                    {
#line 893 "rbmm.points_to_graph.m"
                      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K2_13, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V_14, transform_hlds__rbmm__points_to_graph__Ks1_21, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                    }
#line 930 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 936 "rbmm.points_to_graph.m"
                      {
#line 936 "rbmm.points_to_graph.m"
                        /* direct tailcall eliminated */
#line 936 "rbmm.points_to_graph.m"
                        {
#line 936 "rbmm.points_to_graph.m"
                          MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

#line 936 "rbmm.points_to_graph.m"
                          transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 936 "rbmm.points_to_graph.m"
                        }
#line 936 "rbmm.points_to_graph.m"
                        continue;
#line 936 "rbmm.points_to_graph.m"
                      }
#line 930 "rbmm.points_to_graph.m"
                  }
#line 930 "rbmm.points_to_graph.m"
              }
#line 930 "rbmm.points_to_graph.m"
          }
#line 929 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 929 "rbmm.points_to_graph.m"
      }
#line 929 "rbmm.points_to_graph.m"
      break;
#line 929 "rbmm.points_to_graph.m"
    }
#line 926 "rbmm.points_to_graph.m"
}

#line 899 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map1_2,
#line 899 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Map2_3)
#line 899 "rbmm.points_to_graph.m"
{
#line 902 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 902 "rbmm.points_to_graph.m"
    {
#line 902 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 902 "rbmm.points_to_graph.m"
      {
#line 902 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 902 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 902 "rbmm.points_to_graph.m"
        else
#line 903 "rbmm.points_to_graph.m"
          {
#line 903 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__K_6 = (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0));
#line 903 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ks_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__V2_10;
#line 903 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__V1_11;

#line 905 "rbmm.points_to_graph.m"
            {
#line 905 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map2_3, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V2_10);
            }
#line 903 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 903 "rbmm.points_to_graph.m"
              {
#line 908 "rbmm.points_to_graph.m"
                {
#line 908 "rbmm.points_to_graph.m"
                  mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_K1_12, transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__Map1_2, transform_hlds__rbmm__points_to_graph__K_6, &transform_hlds__rbmm__points_to_graph__V1_11);
                }
#line 909 "rbmm.points_to_graph.m"
                {
#line 909 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_for_V1_13, transform_hlds__rbmm__points_to_graph__V1_11, transform_hlds__rbmm__points_to_graph__V2_10);
                }
#line 903 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 910 "rbmm.points_to_graph.m"
                  {
#line 910 "rbmm.points_to_graph.m"
                    /* direct tailcall eliminated */
#line 910 "rbmm.points_to_graph.m"
                    {
#line 910 "rbmm.points_to_graph.m"
                      MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ks_7;

#line 910 "rbmm.points_to_graph.m"
                      transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 910 "rbmm.points_to_graph.m"
                    }
#line 910 "rbmm.points_to_graph.m"
                    continue;
#line 910 "rbmm.points_to_graph.m"
                  }
#line 903 "rbmm.points_to_graph.m"
              }
#line 903 "rbmm.points_to_graph.m"
          }
#line 902 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 902 "rbmm.points_to_graph.m"
      }
#line 902 "rbmm.points_to_graph.m"
      break;
#line 902 "rbmm.points_to_graph.m"
    }
#line 899 "rbmm.points_to_graph.m"
}

#line 842 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_5,
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 842 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_8,
#line 842 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__M_9)
#line 842 "rbmm.points_to_graph.m"
{
#line 845 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 845 "rbmm.points_to_graph.m"
    {
#line 845 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 845 "rbmm.points_to_graph.m"
      {
#line 845 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edge_6;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_7;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__M0_11;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent0_12;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Edges_18;
#line 845 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_19;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 341 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 421 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19;
#line 422 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph___N_10;

#line 845 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 845 "rbmm.points_to_graph.m"
          {
#line 845 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edge_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 845 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edges_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 3)));
#line 341 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_8, (MR_Integer) 4)));
#line 4127 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 4129 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
#line 421 "rbmm.points_to_graph.m"
            {
#line 421 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_13_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_14_21, transform_hlds__rbmm__points_to_graph__Edges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_6)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
            }
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_19);
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 0)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__M0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 1)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_19, (MR_Integer) 2)));
#line 847 "rbmm.points_to_graph.m"
            {
#line 847 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph____Unify____rptg_edge_content_0_0(transform_hlds__rbmm__points_to_graph__EdgeContent0_12, transform_hlds__rbmm__points_to_graph__EdgeContent_5);
            }
#line 849 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 848 "rbmm.points_to_graph.m"
              {
#line 848 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__M_9 = transform_hlds__rbmm__points_to_graph__M0_11;
#line 848 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 848 "rbmm.points_to_graph.m"
              }
#line 849 "rbmm.points_to_graph.m"
            else
#line 850 "rbmm.points_to_graph.m"
              {
#line 850 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 850 "rbmm.points_to_graph.m"
                {
#line 850 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__Edges_7;

#line 850 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 850 "rbmm.points_to_graph.m"
                }
#line 850 "rbmm.points_to_graph.m"
                continue;
#line 850 "rbmm.points_to_graph.m"
              }
#line 845 "rbmm.points_to_graph.m"
          }
#line 845 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 845 "rbmm.points_to_graph.m"
      }
#line 845 "rbmm.points_to_graph.m"
      break;
#line 845 "rbmm.points_to_graph.m"
    }
#line 842 "rbmm.points_to_graph.m"
}

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1(
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 819 "rbmm.points_to_graph.m"
{
#line 819 "rbmm.points_to_graph.m"
  {
#line 819 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 819 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33));
#line 819 "rbmm.points_to_graph.m"
    {
#line 819 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr);
#line 819 "rbmm.points_to_graph.m"
      return;
    }
#line 819 "rbmm.points_to_graph.m"
  }
#line 819 "rbmm.points_to_graph.m"
}

#line 819 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2(
#line 819 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 819 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 819 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 819 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 819 "rbmm.points_to_graph.m"
{
#line 819 "rbmm.points_to_graph.m"
  {
#line 819 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 819 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 819 "rbmm.points_to_graph.m"
    {
#line 819 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

#line 819 "rbmm.points_to_graph.m"
      {
#line 819 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__delete_all_inedges_and_edges_2__819__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2_env_0__conv1_HeadVar__3_33, transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 819 "rbmm.points_to_graph.m"
    }
#line 819 "rbmm.points_to_graph.m"
  }
#line 819 "rbmm.points_to_graph.m"
}

#line 810 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_2,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3,
#line 810 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4,
#line 810 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5,
#line 810 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6)
#line 810 "rbmm.points_to_graph.m"
{
#line 814 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 814 "rbmm.points_to_graph.m"
    {
#line 814 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 814 "rbmm.points_to_graph.m"
      {
#line 814 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 814 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "rbmm.points_to_graph.m"
          {
#line 814 "rbmm.points_to_graph.m"
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_6 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5;
#line 814 "rbmm.points_to_graph.m"
            *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3;
#line 814 "rbmm.points_to_graph.m"
          }
#line 814 "rbmm.points_to_graph.m"
        else
#line 815 "rbmm.points_to_graph.m"
          {
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_32_32 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Ns_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
#line 815 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;
#line 816 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19;

#line 816 "rbmm.points_to_graph.m"
            {
#line 816 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
            }
#line 816 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfN0_19);
#line 819 "rbmm.points_to_graph.m"
            {
#line 819 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 819 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
#line 819 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0_2));
#line 819 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 819 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_2));
#line 819 "rbmm.points_to_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19));
#line 819 "rbmm.points_to_graph.m"
            }
#line 4348 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 819 "rbmm.points_to_graph.m"
            {
#line 819 "rbmm.points_to_graph.m"
              mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__V_26_26, &transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20);
            }
#line 822 "rbmm.points_to_graph.m"
            {
#line 822 "rbmm.points_to_graph.m"
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27);
            }
#line 825 "rbmm.points_to_graph.m"
            {
#line 825 "rbmm.points_to_graph.m"
              mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_36_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__EdgesFromNPointToNode_20, transform_hlds__rbmm__points_to_graph__OutEdgesOfN0_19, &transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21);
            }
#line 826 "rbmm.points_to_graph.m"
            {
#line 826 "rbmm.points_to_graph.m"
              mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_31_31, transform_hlds__rbmm__points_to_graph__TypeInfo_32_32, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_14)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfN_21)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28);
            }
#line 827 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 827 "rbmm.points_to_graph.m"
            {
#line 827 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ns_15;
#line 827 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_27_27;
#line 827 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0__tmp_copy_5 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_28_28;

#line 827 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_5 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0__tmp_copy_5;
#line 827 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0__tmp_copy_3;
#line 827 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 827 "rbmm.points_to_graph.m"
            }
#line 827 "rbmm.points_to_graph.m"
            continue;
#line 815 "rbmm.points_to_graph.m"
          }
#line 814 "rbmm.points_to_graph.m"
      }
#line 814 "rbmm.points_to_graph.m"
      break;
#line 814 "rbmm.points_to_graph.m"
    }
#line 810 "rbmm.points_to_graph.m"
}

#line 765 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(
#line 765 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_4,
#line 765 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 765 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__HeadVar__3_3)
#line 765 "rbmm.points_to_graph.m"
{
#line 769 "rbmm.points_to_graph.m"
  {
#line 769 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_18_35;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 2)));
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 3)));
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 4)));
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TheEdges_31;
#line 769 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_45;
#line 784 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30;

#line 770 "rbmm.points_to_graph.m"
    {
#line 770 "rbmm.points_to_graph.m"
      mercury__map__delete_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_0_10, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13);
    }
#line 4457 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 4459 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeInfo_18_35 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 784 "rbmm.points_to_graph.m"
    {
#line 784 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
    }
#line 784 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_30);
#line 4468 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 785 "rbmm.points_to_graph.m"
    {
#line 785 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_30, &transform_hlds__rbmm__points_to_graph__TheEdges_31);
    }
#line 786 "rbmm.points_to_graph.m"
    {
#line 786 "rbmm.points_to_graph.m"
      mercury__map__delete_list_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_19_36, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__TheEdges_31, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_0_11, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17);
    }
#line 789 "rbmm.points_to_graph.m"
    {
#line 789 "rbmm.points_to_graph.m"
      mercury__map__delete_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_34, transform_hlds__rbmm__points_to_graph__TypeInfo_18_35, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_4)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_0_12, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18);
    }
#line 800 "rbmm.points_to_graph.m"
    {
#line 800 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__StartNodes_45);
    }
#line 804 "rbmm.points_to_graph.m"
    {
#line 804 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__delete_all_inedges_and_edges_2_6_p_0(transform_hlds__rbmm__points_to_graph__StartNodes_45, transform_hlds__rbmm__points_to_graph__Node_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_17_17, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_18_18, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15);
    }
#line 769 "rbmm.points_to_graph.m"
    {
#line 769 "rbmm.points_to_graph.m"
      MR_Word base;
#line 769 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 769 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__HeadVar__3_3 = base;
#line 769 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_5));
#line 769 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__AS_6));
#line 769 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Nodes_13));
#line 769 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Edges_14));
#line 769 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_OutEdges_15));
#line 769 "rbmm.points_to_graph.m"
    }
#line 769 "rbmm.points_to_graph.m"
  }
#line 765 "rbmm.points_to_graph.m"
}

#line 748 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 748 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 748 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
#line 748 "rbmm.points_to_graph.m"
{
#line 751 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 751 "rbmm.points_to_graph.m"
    {
#line 751 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 751 "rbmm.points_to_graph.m"
      {
#line 751 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 751 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 751 "rbmm.points_to_graph.m"
        else
#line 752 "rbmm.points_to_graph.m"
          {
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_13;
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
#line 752 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
#line 421 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
#line 422 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_14;

#line 421 "rbmm.points_to_graph.m"
            {
#line 421 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___Node2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
#line 754 "rbmm.points_to_graph.m"
            {
#line 754 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
#line 756 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 756 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 756 "rbmm.points_to_graph.m"
            else
#line 758 "rbmm.points_to_graph.m"
              {
#line 758 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

#line 758 "rbmm.points_to_graph.m"
                {
#line 758 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node_13, transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
#line 758 "rbmm.points_to_graph.m"
              }
#line 760 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 760 "rbmm.points_to_graph.m"
            {
#line 760 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
#line 760 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

#line 760 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3;
#line 760 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 760 "rbmm.points_to_graph.m"
            }
#line 760 "rbmm.points_to_graph.m"
            continue;
#line 752 "rbmm.points_to_graph.m"
          }
#line 751 "rbmm.points_to_graph.m"
      }
#line 751 "rbmm.points_to_graph.m"
      break;
#line 751 "rbmm.points_to_graph.m"
    }
#line 748 "rbmm.points_to_graph.m"
}

#line 734 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__End_6,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Edge_7,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_8,
#line 734 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13,
#line 734 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14)
#line 734 "rbmm.points_to_graph.m"
{
#line 737 "rbmm.points_to_graph.m"
  {
#line 737 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 737 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 1)));
#line 738 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___S_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_8, (MR_Integer) 0)));
#line 738 "rbmm.points_to_graph.m"
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

#line 4688 "transform_hlds.rbmm.points_to_graph.c"
        transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__V_16_16 == transform_hlds__rbmm__points_to_graph__V_17_17);
#line 210 "rbmm.points_to_graph.m"
      }
#line 741 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 740 "rbmm.points_to_graph.m"
      {
#line 740 "rbmm.points_to_graph.m"
        MR_Word base;
#line 740 "rbmm.points_to_graph.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "rbmm.points_to_graph.m"
        *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = base;
#line 740 "rbmm.points_to_graph.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7));
#line 740 "rbmm.points_to_graph.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13));
#line 740 "rbmm.points_to_graph.m"
      }
#line 741 "rbmm.points_to_graph.m"
    else
#line 741 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_14 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_L_0_13;
#line 737 "rbmm.points_to_graph.m"
  }
#line 734 "rbmm.points_to_graph.m"
}

#line 732 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1(
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_2,
#line 732 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__wrapper_arg_3,
#line 732 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_4)
#line 732 "rbmm.points_to_graph.m"
{
#line 732 "rbmm.points_to_graph.m"
  {
#line 732 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;
#line 732 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14;

#line 732 "rbmm.points_to_graph.m"
    {
#line 732 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__edge_points_to_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__points_to_graph__wrapper_arg_3), &transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14);
    }
#line 732 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__points_to_graph__conv0_STATE_VARIABLE_L_14));
#line 732 "rbmm.points_to_graph.m"
  }
#line 732 "rbmm.points_to_graph.m"
}

#line 711 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 711 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 711 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
#line 711 "rbmm.points_to_graph.m"
{
#line 714 "rbmm.points_to_graph.m"
  {
#line 714 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 714 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__InEdges_8;
#line 714 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
#line 714 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
#line 732 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_InEdges_8;

#line 732 "rbmm.points_to_graph.m"
    {
#line 732 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 732 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_4[0]));
#line 732 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0_1));
#line 732 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6));
#line 732 "rbmm.points_to_graph.m"
    }
#line 732 "rbmm.points_to_graph.m"
    {
#line 732 "rbmm.points_to_graph.m"
      mercury__map__foldl_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[2], transform_hlds__rbmm__points_to_graph__V_16_16, transform_hlds__rbmm__points_to_graph__Edges_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
    }
#line 732 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__InEdges_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_InEdges_8);
#line 719 "rbmm.points_to_graph.m"
    {
#line 719 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__InEdges_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
#line 719 "rbmm.points_to_graph.m"
      return;
    }
#line 714 "rbmm.points_to_graph.m"
  }
#line 711 "rbmm.points_to_graph.m"
}

#line 693 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_2,
#line 693 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3,
#line 693 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4)
#line 693 "rbmm.points_to_graph.m"
{
#line 696 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 696 "rbmm.points_to_graph.m"
    {
#line 696 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 696 "rbmm.points_to_graph.m"
      {
#line 696 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 696 "rbmm.points_to_graph.m"
        if ((transform_hlds__rbmm__points_to_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_4 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 696 "rbmm.points_to_graph.m"
        else
#line 697 "rbmm.points_to_graph.m"
          {
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edge_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Node_14;
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeContent_15;
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__Edges_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 3)));
#line 697 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_27;
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, (MR_Integer) 4)));
#line 421 "rbmm.points_to_graph.m"
            MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27;
#line 422 "rbmm.points_to_graph.m"
            MR_Word transform_hlds__rbmm__points_to_graph___Node2_13;

#line 421 "rbmm.points_to_graph.m"
            {
#line 421 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_26, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_9)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
            }
#line 421 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeInfo_27 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_27);
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph___Node2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 0)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Node_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 1)));
#line 422 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__EdgeContent_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_27, (MR_Integer) 2)));
#line 699 "rbmm.points_to_graph.m"
            {
#line 699 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__EdgeContent_15, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3);
            }
#line 701 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 701 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3;
#line 701 "rbmm.points_to_graph.m"
            else
#line 703 "rbmm.points_to_graph.m"
              {
#line 703 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph___Edge_16;

#line 703 "rbmm.points_to_graph.m"
                {
#line 703 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Node1_2, transform_hlds__rbmm__points_to_graph__Node_14, transform_hlds__rbmm__points_to_graph__EdgeContent_15, &transform_hlds__rbmm__points_to_graph___Edge_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19);
                }
#line 703 "rbmm.points_to_graph.m"
              }
#line 705 "rbmm.points_to_graph.m"
            /* direct tailcall eliminated */
#line 705 "rbmm.points_to_graph.m"
            {
#line 705 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Edges_10;
#line 705 "rbmm.points_to_graph.m"
              MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19_19;

#line 705 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_3 = transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0__tmp_copy_3;
#line 705 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 705 "rbmm.points_to_graph.m"
            }
#line 705 "rbmm.points_to_graph.m"
            continue;
#line 697 "rbmm.points_to_graph.m"
          }
#line 696 "rbmm.points_to_graph.m"
      }
#line 696 "rbmm.points_to_graph.m"
      break;
#line 696 "rbmm.points_to_graph.m"
    }
#line 693 "rbmm.points_to_graph.m"
}

#line 672 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node1_5,
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node2_6,
#line 672 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9,
#line 672 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10)
#line 672 "rbmm.points_to_graph.m"
{
#line 675 "rbmm.points_to_graph.m"
  {
#line 675 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 675 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_8;
#line 675 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15;
#line 675 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_15);
#line 586 "rbmm.points_to_graph.m"
    {
#line 586 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_15, &transform_hlds__rbmm__points_to_graph__EdgeList_8);
    }
#line 680 "rbmm.points_to_graph.m"
    {
#line 680 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_2_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeList_8, transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_9, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_10);
#line 680 "rbmm.points_to_graph.m"
      return;
    }
#line 675 "rbmm.points_to_graph.m"
  }
#line 672 "rbmm.points_to_graph.m"
}

#line 553 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 553 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Node_8,
#line 553 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__MergedNode_9)
#line 553 "rbmm.points_to_graph.m"
{
#line 556 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 556 "rbmm.points_to_graph.m"
    {
#line 556 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 556 "rbmm.points_to_graph.m"
      {
#line 556 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21;
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22;
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__N_6;
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_7;
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_10;
#line 556 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;
#line 392 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10;
#line 558 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
#line 558 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_11_11;
#line 558 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 558 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_13_13;
#line 558 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;
#line 558 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;

#line 556 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 556 "rbmm.points_to_graph.m"
          {
#line 556 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 556 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Ns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5075 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5077 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 392 "rbmm.points_to_graph.m"
            {
#line 392 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_21, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_22, transform_hlds__rbmm__points_to_graph__V_20_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
            }
#line 392 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_10);
#line 558 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 0)));
#line 558 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 1)));
#line 558 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 2)));
#line 558 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 3)));
#line 558 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_10, (MR_Integer) 4)));
#line 5096 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 558 "rbmm.points_to_graph.m"
            {
#line 558 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__member_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_8)), transform_hlds__rbmm__points_to_graph__V_11_11);
            }
#line 560 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 559 "rbmm.points_to_graph.m"
              {
#line 559 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__MergedNode_9 = transform_hlds__rbmm__points_to_graph__N_6;
#line 559 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 559 "rbmm.points_to_graph.m"
              }
#line 560 "rbmm.points_to_graph.m"
            else
#line 561 "rbmm.points_to_graph.m"
              {
#line 561 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 561 "rbmm.points_to_graph.m"
                {
#line 561 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__Ns_7;

#line 561 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 561 "rbmm.points_to_graph.m"
                }
#line 561 "rbmm.points_to_graph.m"
                continue;
#line 561 "rbmm.points_to_graph.m"
              }
#line 556 "rbmm.points_to_graph.m"
          }
#line 556 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 556 "rbmm.points_to_graph.m"
      }
#line 556 "rbmm.points_to_graph.m"
      break;
#line 556 "rbmm.points_to_graph.m"
    }
#line 553 "rbmm.points_to_graph.m"
}

#line 521 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__List_6,
#line 521 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Vars_7,
#line 521 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
#line 521 "rbmm.points_to_graph.m"
{
#line 524 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 524 "rbmm.points_to_graph.m"
    {
#line 524 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 524 "rbmm.points_to_graph.m"
      {
#line 524 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__List_6)) == (MR_mktag((MR_Integer) 1)));
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22;
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23;
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_11;
#line 524 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 392 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11;
#line 527 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_17_17;
#line 527 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 527 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_13_13;
#line 527 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_14_14;
#line 527 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_15_15;
#line 527 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_16_16;

#line 525 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 525 "rbmm.points_to_graph.m"
          {
#line 525 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 0)));
#line 525 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__List_6, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5221 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5223 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 392 "rbmm.points_to_graph.m"
            {
#line 392 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_22, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_23, transform_hlds__rbmm__points_to_graph__V_21_21, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
            }
#line 392 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_11 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_11);
#line 527 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 0)));
#line 527 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 1)));
#line 527 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 2)));
#line 527 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 3)));
#line 527 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_11, (MR_Integer) 4)));
#line 5242 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0];
#line 527 "rbmm.points_to_graph.m"
            {
#line 527 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = mercury__set__subset_2_p_0(transform_hlds__rbmm__points_to_graph__TypeInfo_17_17, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__V_12_12);
            }
#line 529 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 528 "rbmm.points_to_graph.m"
              {
#line 528 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
#line 528 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 528 "rbmm.points_to_graph.m"
              }
#line 529 "rbmm.points_to_graph.m"
            else
#line 530 "rbmm.points_to_graph.m"
              {
#line 530 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 530 "rbmm.points_to_graph.m"
                {
#line 530 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__List__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

#line 530 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__List_6 = transform_hlds__rbmm__points_to_graph__List__tmp_copy_6;
#line 530 "rbmm.points_to_graph.m"
                }
#line 530 "rbmm.points_to_graph.m"
                continue;
#line 530 "rbmm.points_to_graph.m"
              }
#line 525 "rbmm.points_to_graph.m"
          }
#line 524 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 524 "rbmm.points_to_graph.m"
      }
#line 524 "rbmm.points_to_graph.m"
      break;
#line 524 "rbmm.points_to_graph.m"
    }
#line 521 "rbmm.points_to_graph.m"
}

#line 501 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(
#line 501 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_5,
#line 501 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__NodeList_6,
#line 501 "rbmm.points_to_graph.m"
  MR_String transform_hlds__rbmm__points_to_graph__RegName_7,
#line 501 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Node_8)
#line 501 "rbmm.points_to_graph.m"
{
#line 504 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 504 "rbmm.points_to_graph.m"
    {
#line 504 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 504 "rbmm.points_to_graph.m"
      {
#line 504 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__NodeList_6)) == (MR_mktag((MR_Integer) 1)));
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__ANode_9;
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Rest_10;
#line 504 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__RegionANode_11;
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
#line 504 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 392 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
#line 607 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 607 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 607 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 607 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;

#line 505 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 505 "rbmm.points_to_graph.m"
          {
#line 505 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__ANode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 0)));
#line 505 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__NodeList_6, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 5365 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5367 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 392 "rbmm.points_to_graph.m"
            {
#line 392 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__V_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__ANode_9)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
#line 392 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
#line 607 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
#line 607 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__RegionANode_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
#line 607 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
#line 607 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
#line 607 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
#line 507 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = (strcmp(transform_hlds__rbmm__points_to_graph__RegionANode_11, transform_hlds__rbmm__points_to_graph__RegName_7) == 0);
#line 509 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 508 "rbmm.points_to_graph.m"
              {
#line 508 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__Node_8 = transform_hlds__rbmm__points_to_graph__ANode_9;
#line 508 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 508 "rbmm.points_to_graph.m"
              }
#line 509 "rbmm.points_to_graph.m"
            else
#line 510 "rbmm.points_to_graph.m"
              {
#line 510 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 510 "rbmm.points_to_graph.m"
                {
#line 510 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__NodeList__tmp_copy_6 = transform_hlds__rbmm__points_to_graph__Rest_10;

#line 510 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__NodeList_6 = transform_hlds__rbmm__points_to_graph__NodeList__tmp_copy_6;
#line 510 "rbmm.points_to_graph.m"
                }
#line 510 "rbmm.points_to_graph.m"
                continue;
#line 510 "rbmm.points_to_graph.m"
              }
#line 505 "rbmm.points_to_graph.m"
          }
#line 504 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 504 "rbmm.points_to_graph.m"
      }
#line 504 "rbmm.points_to_graph.m"
      break;
#line 504 "rbmm.points_to_graph.m"
    }
#line 501 "rbmm.points_to_graph.m"
}

#line 479 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1_1,
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_7,
#line 479 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Type_8,
#line 479 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__End_9)
#line 479 "rbmm.points_to_graph.m"
{
#line 482 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 482 "rbmm.points_to_graph.m"
    {
#line 482 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 482 "rbmm.points_to_graph.m"
      {
#line 482 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__N_5;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ns_6;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NType_10;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_15;
#line 482 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 392 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15;
#line 609 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 609 "rbmm.points_to_graph.m"
        MR_String transform_hlds__rbmm__points_to_graph__V_29_29;
#line 609 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30;
#line 609 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;

#line 482 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 482 "rbmm.points_to_graph.m"
          {
#line 482 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 482 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_7, (MR_Integer) 4)));
#line 5504 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5506 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 392 "rbmm.points_to_graph.m"
            {
#line 392 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_20, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_21, transform_hlds__rbmm__points_to_graph__V_19_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
            }
#line 392 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NodeContent_15 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_15);
#line 609 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__NType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_15, (MR_Integer) 4)));
#line 484 "rbmm.points_to_graph.m"
            {
#line 484 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__NType_10, transform_hlds__rbmm__points_to_graph__Type_8);
            }
#line 486 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 485 "rbmm.points_to_graph.m"
              {
#line 485 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__End_9 = transform_hlds__rbmm__points_to_graph__N_5;
#line 485 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 485 "rbmm.points_to_graph.m"
              }
#line 486 "rbmm.points_to_graph.m"
            else
#line 487 "rbmm.points_to_graph.m"
              {
#line 487 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 487 "rbmm.points_to_graph.m"
                {
#line 487 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__points_to_graph__Ns_6;

#line 487 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__1_1 = transform_hlds__rbmm__points_to_graph__HeadVar__1__tmp_copy_1;
#line 487 "rbmm.points_to_graph.m"
                }
#line 487 "rbmm.points_to_graph.m"
                continue;
#line 487 "rbmm.points_to_graph.m"
              }
#line 482 "rbmm.points_to_graph.m"
          }
#line 482 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 482 "rbmm.points_to_graph.m"
      }
#line 482 "rbmm.points_to_graph.m"
      break;
#line 482 "rbmm.points_to_graph.m"
    }
#line 479 "rbmm.points_to_graph.m"
}

#line 457 "rbmm.points_to_graph.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Graph_6,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0_9,
#line 457 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__EType_10,
#line 457 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_11)
#line 457 "rbmm.points_to_graph.m"
{
#line 461 "rbmm.points_to_graph.m"
  while (MR_TRUE)
#line 461 "rbmm.points_to_graph.m"
    {
#line 461 "rbmm.points_to_graph.m"
      /* tailcall optimized into a loop */
#line 461 "rbmm.points_to_graph.m"
      {
#line 461 "rbmm.points_to_graph.m"
        MR_bool transform_hlds__rbmm__points_to_graph__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__points_to_graph__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_9_30;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__StartNode_7;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__StartNodes0_8;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__Ends_12;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22;
#line 461 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_28;
#line 342 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 342 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 342 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_34_34;
#line 342 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_35_35;
#line 590 "rbmm.points_to_graph.m"
        MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22;
#line 466 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__E1_13;

#line 460 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 460 "rbmm.points_to_graph.m"
          {
#line 460 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__StartNode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 460 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__StartNodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 3)));
#line 342 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdges_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_6, (MR_Integer) 4)));
#line 5646 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 5648 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeInfo_9_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 590 "rbmm.points_to_graph.m"
            {
#line 590 "rbmm.points_to_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_29, transform_hlds__rbmm__points_to_graph__TypeInfo_9_30, transform_hlds__rbmm__points_to_graph__OutEdges_28, ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
            }
#line 590 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_22);
#line 5657 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 5659 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 594 "rbmm.points_to_graph.m"
            {
#line 594 "rbmm.points_to_graph.m"
              mercury__map__values_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_8_23, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_9_24, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_22, &transform_hlds__rbmm__points_to_graph__Ends_12);
            }
#line 463 "rbmm.points_to_graph.m"
            {
#line 463 "rbmm.points_to_graph.m"
              transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_node_with_same_type_4_p_0(transform_hlds__rbmm__points_to_graph__Ends_12, transform_hlds__rbmm__points_to_graph__Graph_6, transform_hlds__rbmm__points_to_graph__EType_10, &transform_hlds__rbmm__points_to_graph__E1_13);
            }
#line 466 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 465 "rbmm.points_to_graph.m"
              {
#line 465 "rbmm.points_to_graph.m"
                *transform_hlds__rbmm__points_to_graph__E_11 = transform_hlds__rbmm__points_to_graph__E1_13;
#line 465 "rbmm.points_to_graph.m"
                transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 465 "rbmm.points_to_graph.m"
              }
#line 466 "rbmm.points_to_graph.m"
            else
#line 469 "rbmm.points_to_graph.m"
              {
#line 469 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 469 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes1_14;
#line 469 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes_15;
#line 469 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__StartNodes_16;
#line 469 "rbmm.points_to_graph.m"
                MR_Word transform_hlds__rbmm__points_to_graph__V_17_17;

#line 469 "rbmm.points_to_graph.m"
                {
#line 469 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__StartNodes1_14 = mercury__list__f_43_43_2_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes0_8, transform_hlds__rbmm__points_to_graph__Ends_12);
                }
#line 470 "rbmm.points_to_graph.m"
                {
#line 470 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "rbmm.points_to_graph.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_17_17, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartNode_7));
#line 470 "rbmm.points_to_graph.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__VisitedNodes0_9));
#line 470 "rbmm.points_to_graph.m"
                }
#line 470 "rbmm.points_to_graph.m"
                {
#line 470 "rbmm.points_to_graph.m"
                  mercury__list__remove_dups_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__V_17_17, &transform_hlds__rbmm__points_to_graph__VisitedNodes_15);
                }
#line 471 "rbmm.points_to_graph.m"
                {
#line 471 "rbmm.points_to_graph.m"
                  mercury__list__delete_elems_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__StartNodes1_14, transform_hlds__rbmm__points_to_graph__VisitedNodes_15, &transform_hlds__rbmm__points_to_graph__StartNodes_16);
                }
#line 473 "rbmm.points_to_graph.m"
                /* direct tailcall eliminated */
#line 473 "rbmm.points_to_graph.m"
                {
#line 473 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__points_to_graph__StartNodes_16;
#line 473 "rbmm.points_to_graph.m"
                  MR_Word transform_hlds__rbmm__points_to_graph__VisitedNodes0__tmp_copy_9 = transform_hlds__rbmm__points_to_graph__VisitedNodes_15;

#line 473 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__VisitedNodes0_9 = transform_hlds__rbmm__points_to_graph__VisitedNodes0__tmp_copy_9;
#line 473 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = transform_hlds__rbmm__points_to_graph__HeadVar__2__tmp_copy_2;
#line 473 "rbmm.points_to_graph.m"
                }
#line 473 "rbmm.points_to_graph.m"
                continue;
#line 469 "rbmm.points_to_graph.m"
              }
#line 460 "rbmm.points_to_graph.m"
          }
#line 461 "rbmm.points_to_graph.m"
        return transform_hlds__rbmm__points_to_graph__succeeded;
#line 461 "rbmm.points_to_graph.m"
      }
#line 461 "rbmm.points_to_graph.m"
      break;
#line 461 "rbmm.points_to_graph.m"
    }
#line 457 "rbmm.points_to_graph.m"
}

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 436 "rbmm.points_to_graph.m"
{
#line 436 "rbmm.points_to_graph.m"
  {
#line 436 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 436 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13);
#line 436 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8) = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8);
#line 436 "rbmm.points_to_graph.m"
    {
#line 436 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 436 "rbmm.points_to_graph.m"
      return;
    }
#line 436 "rbmm.points_to_graph.m"
  }
#line 436 "rbmm.points_to_graph.m"
}

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_1(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 436 "rbmm.points_to_graph.m"
{
#line 436 "rbmm.points_to_graph.m"
  {
#line 436 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 437 "rbmm.points_to_graph.m"
    {
#line 437 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) (*((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8))), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
#line 437 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
#line 436 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
#line 436 "rbmm.points_to_graph.m"
      {
#line 438 "rbmm.points_to_graph.m"
        (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "rbmm.points_to_graph.m"
        {
#line 438 "rbmm.points_to_graph.m"
          MR_Word base;
#line 438 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "rbmm.points_to_graph.m"
          *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
#line 438 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_13));
#line 438 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_17_17));
#line 438 "rbmm.points_to_graph.m"
        }
#line 438 "rbmm.points_to_graph.m"
        {
#line 438 "rbmm.points_to_graph.m"
          ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
#line 438 "rbmm.points_to_graph.m"
          return;
        }
#line 436 "rbmm.points_to_graph.m"
      }
#line 436 "rbmm.points_to_graph.m"
  }
#line 436 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18);
#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14);
#line 440 "rbmm.points_to_graph.m"
    {
#line 440 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 440 "rbmm.points_to_graph.m"
      return;
    }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 443 "rbmm.points_to_graph.m"
    {
#line 443 "rbmm.points_to_graph.m"
      MR_Word base;
#line 443 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "rbmm.points_to_graph.m"
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10) = base;
#line 443 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Edge_18));
#line 443 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15));
#line 443 "rbmm.points_to_graph.m"
    }
#line 443 "rbmm.points_to_graph.m"
    {
#line 443 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr);
#line 443 "rbmm.points_to_graph.m"
      return;
    }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_3(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 441 "rbmm.points_to_graph.m"
    {
#line 441 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9);
    }
#line 441 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded);
#line 440 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__succeeded)
#line 440 "rbmm.points_to_graph.m"
      {
#line 442 "rbmm.points_to_graph.m"
        {
#line 442 "rbmm.points_to_graph.m"
          MR_Word base;
#line 442 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16 = base;
#line 442 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14));
#line 442 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9));
#line 442 "rbmm.points_to_graph.m"
        }
#line 442 "rbmm.points_to_graph.m"
        {
#line 442 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__V_16_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
#line 440 "rbmm.points_to_graph.m"
      }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 430 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__E_8,
#line 430 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_9,
#line 430 "rbmm.points_to_graph.m"
  MR_Word * transform_hlds__rbmm__points_to_graph__Path_10,
#line 430 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 430 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 430 "rbmm.points_to_graph.m"
{
#line 430 "rbmm.points_to_graph.m"
  {
#line 430 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 430 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 432 "rbmm.points_to_graph.m"
    {
#line 432 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 4)));
#line 432 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__G_6, (MR_Integer) 3)));
#line 434 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

#line 6002 "transform_hlds.rbmm.points_to_graph.c"
      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 434 "rbmm.points_to_graph.m"
      {
#line 434 "rbmm.points_to_graph.m"
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
#line 434 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
#line 436 "rbmm.points_to_graph.m"
      {
#line 436 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv1_E_8, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_2, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 440 "rbmm.points_to_graph.m"
      {
#line 440 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1_4, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 432 "rbmm.points_to_graph.m"
    }
#line 430 "rbmm.points_to_graph.m"
  }
#line 430 "rbmm.points_to_graph.m"
}

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 436 "rbmm.points_to_graph.m"
{
#line 436 "rbmm.points_to_graph.m"
  {
#line 436 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 436 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13);
#line 436 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23);
#line 436 "rbmm.points_to_graph.m"
    {
#line 436 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 436 "rbmm.points_to_graph.m"
      return;
    }
#line 436 "rbmm.points_to_graph.m"
  }
#line 436 "rbmm.points_to_graph.m"
}

#line 436 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_1(
#line 436 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 436 "rbmm.points_to_graph.m"
{
#line 436 "rbmm.points_to_graph.m"
  {
#line 436 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 436 "rbmm.points_to_graph.m"
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

#line 6090 "transform_hlds.rbmm.points_to_graph.c"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = (transform_hlds__rbmm__points_to_graph__V_29_29 == transform_hlds__rbmm__points_to_graph__V_30_30);
#line 210 "rbmm.points_to_graph.m"
        }
#line 436 "rbmm.points_to_graph.m"
      if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 436 "rbmm.points_to_graph.m"
        {
#line 437 "rbmm.points_to_graph.m"
          {
#line 437 "rbmm.points_to_graph.m"
            (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
          }
#line 437 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
#line 436 "rbmm.points_to_graph.m"
          if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 436 "rbmm.points_to_graph.m"
            {
#line 438 "rbmm.points_to_graph.m"
              (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "rbmm.points_to_graph.m"
              {
#line 438 "rbmm.points_to_graph.m"
                MR_Word base;
#line 438 "rbmm.points_to_graph.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "rbmm.points_to_graph.m"
                *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
#line 438 "rbmm.points_to_graph.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_13));
#line 438 "rbmm.points_to_graph.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_17_17));
#line 438 "rbmm.points_to_graph.m"
              }
#line 438 "rbmm.points_to_graph.m"
              {
#line 438 "rbmm.points_to_graph.m"
                ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
#line 438 "rbmm.points_to_graph.m"
                return;
              }
#line 436 "rbmm.points_to_graph.m"
            }
#line 436 "rbmm.points_to_graph.m"
        }
#line 436 "rbmm.points_to_graph.m"
    }
#line 436 "rbmm.points_to_graph.m"
  }
#line 436 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18);
#line 440 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14 = ((MR_Word) (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14);
#line 440 "rbmm.points_to_graph.m"
    {
#line 440 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(transform_hlds__rbmm__points_to_graph__env_ptr);
#line 440 "rbmm.points_to_graph.m"
      return;
    }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 443 "rbmm.points_to_graph.m"
    {
#line 443 "rbmm.points_to_graph.m"
      MR_Word base;
#line 443 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "rbmm.points_to_graph.m"
      *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10) = base;
#line 443 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Edge_18));
#line 443 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15));
#line 443 "rbmm.points_to_graph.m"
    }
#line 443 "rbmm.points_to_graph.m"
    {
#line 443 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr);
#line 443 "rbmm.points_to_graph.m"
      return;
    }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 440 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_3(
#line 440 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 440 "rbmm.points_to_graph.m"
{
#line 440 "rbmm.points_to_graph.m"
  {
#line 440 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 441 "rbmm.points_to_graph.m"
    {
#line 441 "rbmm.points_to_graph.m"
      (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14)), (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9);
    }
#line 441 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded = !((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded);
#line 440 "rbmm.points_to_graph.m"
    if ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__succeeded)
#line 440 "rbmm.points_to_graph.m"
      {
#line 442 "rbmm.points_to_graph.m"
        {
#line 442 "rbmm.points_to_graph.m"
          MR_Word base;
#line 442 "rbmm.points_to_graph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "rbmm.points_to_graph.m"
          (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16 = base;
#line 442 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14));
#line 442 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9));
#line 442 "rbmm.points_to_graph.m"
        }
#line 442 "rbmm.points_to_graph.m"
        {
#line 442 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__N_14, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8, (transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__V_16_16, &(transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path0_15, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_5, transform_hlds__rbmm__points_to_graph__env_ptr);
        }
#line 440 "rbmm.points_to_graph.m"
      }
#line 440 "rbmm.points_to_graph.m"
  }
#line 440 "rbmm.points_to_graph.m"
}

#line 429 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__G_6,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__S_7,
#line 429 "rbmm.points_to_graph.m"
  MR_Word transform_hlds__rbmm__points_to_graph__E_8,
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
    struct transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6 = transform_hlds__rbmm__points_to_graph__G_6;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__E_8 = transform_hlds__rbmm__points_to_graph__E_8;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Nodes0_9 = transform_hlds__rbmm__points_to_graph__Nodes0_9;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__Path_10 = transform_hlds__rbmm__points_to_graph__Path_10;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 429 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 432 "rbmm.points_to_graph.m"
    {
#line 432 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 4)));
#line 432 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12;
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
      MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__G_6, (MR_Integer) 3)));
#line 434 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12;

#line 6311 "transform_hlds.rbmm.points_to_graph.c"
      (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 434 "rbmm.points_to_graph.m"
      {
#line 434 "rbmm.points_to_graph.m"
        mercury__map__lookup_3_p_0((transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__S_7)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
      }
#line 434 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfS_12);
#line 436 "rbmm.points_to_graph.m"
      {
#line 436 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv2_Edge_13, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv1_V_23_23, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_2, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 440 "rbmm.points_to_graph.m"
      {
#line 440 "rbmm.points_to_graph.m"
        mercury__map__member_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__TypeCtorInfo_19_19, transform_hlds__rbmm__points_to_graph__OutEdgesOfS_12, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv4_Edge_18, &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_env_0__conv3_N_14, transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0_4, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 432 "rbmm.points_to_graph.m"
    }
#line 429 "rbmm.points_to_graph.m"
  }
#line 429 "rbmm.points_to_graph.m"
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
#line 625 "rbmm.points_to_graph.m"
  {
#line 625 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 625 "rbmm.points_to_graph.m"
    {
#line 625 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_112_116_103_95_101_100_103_101_95_99_111_110_116_101_110_116_95_115_101_116_95_108_97_98_101_108_95_95_91_50_93_95_48_3_p_0(transform_hlds__rbmm__points_to_graph__Label_4, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_AC_7);
#line 625 "rbmm.points_to_graph.m"
      return;
    }
#line 625 "rbmm.points_to_graph.m"
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
#line 623 "rbmm.points_to_graph.m"
  {
#line 623 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 623 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__AC_3;

#line 623 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 623 "rbmm.points_to_graph.m"
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
#line 621 "rbmm.points_to_graph.m"
  {
#line 621 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 621 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));

#line 621 "rbmm.points_to_graph.m"
    {
#line 621 "rbmm.points_to_graph.m"
      MR_Word base;
#line 621 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 621 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAllocated_4));
#line 621 "rbmm.points_to_graph.m"
    }
#line 621 "rbmm.points_to_graph.m"
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
#line 619 "rbmm.points_to_graph.m"
  {
#line 619 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 619 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 619 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 619 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 619 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 619 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));

#line 619 "rbmm.points_to_graph.m"
    {
#line 619 "rbmm.points_to_graph.m"
      MR_Word base;
#line 619 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 619 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 619 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 619 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 619 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 619 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeType_4));
#line 619 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 619 "rbmm.points_to_graph.m"
    }
#line 619 "rbmm.points_to_graph.m"
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
#line 617 "rbmm.points_to_graph.m"
  {
#line 617 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 617 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));

#line 617 "rbmm.points_to_graph.m"
    {
#line 617 "rbmm.points_to_graph.m"
      MR_Word base;
#line 617 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 617 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_4));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 617 "rbmm.points_to_graph.m"
    }
#line 617 "rbmm.points_to_graph.m"
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
#line 615 "rbmm.points_to_graph.m"
  {
#line 615 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 615 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));
#line 615 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 615 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 615 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 615 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));

#line 615 "rbmm.points_to_graph.m"
    {
#line 615 "rbmm.points_to_graph.m"
      MR_Word base;
#line 615 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 615 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 615 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_9_9));
#line 615 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Name_4));
#line 615 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 615 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 615 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 615 "rbmm.points_to_graph.m"
    }
#line 615 "rbmm.points_to_graph.m"
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
#line 613 "rbmm.points_to_graph.m"
  {
#line 613 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 613 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 1)));
#line 613 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 2)));
#line 613 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 3)));
#line 613 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 4)));
#line 613 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_0_6, (MR_Integer) 0)));

#line 613 "rbmm.points_to_graph.m"
    {
#line 613 "rbmm.points_to_graph.m"
      MR_Word base;
#line 613 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_NC_7 = base;
#line 613 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Vars_4));
#line 613 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_10_10));
#line 613 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_11_11));
#line 613 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_12_12));
#line 613 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_13_13));
#line 613 "rbmm.points_to_graph.m"
    }
#line 613 "rbmm.points_to_graph.m"
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
#line 610 "rbmm.points_to_graph.m"
  {
#line 610 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 610 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));

#line 610 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 610 "rbmm.points_to_graph.m"
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
#line 609 "rbmm.points_to_graph.m"
  {
#line 609 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 609 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 609 "rbmm.points_to_graph.m"
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
#line 608 "rbmm.points_to_graph.m"
  {
#line 608 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 608 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 608 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 608 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 608 "rbmm.points_to_graph.m"
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
#line 607 "rbmm.points_to_graph.m"
  {
#line 607 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 607 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 2)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 3)));
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 4)));

#line 607 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 607 "rbmm.points_to_graph.m"
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
#line 606 "rbmm.points_to_graph.m"
  {
#line 606 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 0)));
#line 606 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NC_3, (MR_Integer) 1)));
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
#line 830 "rbmm.points_to_graph.m"
  {
#line 830 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 830 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___Edge_10;

#line 830 "rbmm.points_to_graph.m"
    {
#line 830 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_set_edge_6_p_0(transform_hlds__rbmm__points_to_graph__Start_6, transform_hlds__rbmm__points_to_graph__End_7, transform_hlds__rbmm__points_to_graph__Info_8, &transform_hlds__rbmm__points_to_graph___Edge_10, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_11, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_12);
    }
#line 830 "rbmm.points_to_graph.m"
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
#line 632 "rbmm.points_to_graph.m"
  {
#line 632 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent1_9;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent2_10;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__UnionVars_11;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent0_12;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent1_14;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_15;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NewContent_16;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_17;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28;
#line 632 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_81_81;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_85_85;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_86_86;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_87_87;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_88_88;
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10;
#line 638 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_30_30;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 638 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_34_34;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_36_36;
#line 638 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_37_37;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_38_38;
#line 643 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_39_39;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_40_40;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 643 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_43_43;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44;
#line 643 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_46_46;
#line 650 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_47_47;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_48_48;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_49_49;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_50_50;
#line 650 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_51_51;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_52_52;
#line 650 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 657 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 657 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 657 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 657 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 657 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__Nodes0_8, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent1_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent1_9);
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_81_81, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node2_6)), &transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent2_10 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv1_NodeContent2_10);
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 638 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 638 "rbmm.points_to_graph.m"
    {
#line 638 "rbmm.points_to_graph.m"
      mercury__set__union_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], transform_hlds__rbmm__points_to_graph__V_20_20, transform_hlds__rbmm__points_to_graph__V_21_21, &transform_hlds__rbmm__points_to_graph__UnionVars_11);
    }
#line 640 "rbmm.points_to_graph.m"
    {
#line 640 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_vars_3_p_0(transform_hlds__rbmm__points_to_graph__UnionVars_11, transform_hlds__rbmm__points_to_graph__NodeContent1_9, &transform_hlds__rbmm__points_to_graph__NewContent0_12);
    }
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 643 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 7030 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 643 "rbmm.points_to_graph.m"
    {
#line 643 "rbmm.points_to_graph.m"
      mercury__set__union_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, transform_hlds__rbmm__points_to_graph__V_22_22, transform_hlds__rbmm__points_to_graph__V_23_23, &transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13);
    }
#line 645 "rbmm.points_to_graph.m"
    {
#line 645 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_merged_from_3_p_0(transform_hlds__rbmm__points_to_graph__UnionMergedFrom_13, transform_hlds__rbmm__points_to_graph__NewContent0_12, &transform_hlds__rbmm__points_to_graph__NewContent1_14);
    }
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 0)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 1)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 2)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 3)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent1_9, (MR_Integer) 4)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 0)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 1)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 2)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 3)));
#line 650 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent2_10, (MR_Integer) 4)));
#line 650 "rbmm.points_to_graph.m"
    {
#line 650 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__IsAllocated_15 = mercury__bool__or_2_f_0(transform_hlds__rbmm__points_to_graph__V_24_24, transform_hlds__rbmm__points_to_graph__V_25_25);
    }
#line 652 "rbmm.points_to_graph.m"
    {
#line 652 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_node_content_set_is_allocated_3_p_0(transform_hlds__rbmm__points_to_graph__IsAllocated_15, transform_hlds__rbmm__points_to_graph__NewContent1_14, &transform_hlds__rbmm__points_to_graph__NewContent_16);
    }
#line 655 "rbmm.points_to_graph.m"
    {
#line 655 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node1_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NewContent_16)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_17);
    }
#line 657 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 0)));
#line 657 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 1)));
#line 657 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 2)));
#line 657 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 3)));
#line 657 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_18, (MR_Integer) 4)));
#line 657 "rbmm.points_to_graph.m"
    {
#line 657 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 657 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 657 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 657 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_17));
#line 657 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 657 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 657 "rbmm.points_to_graph.m"
    }
#line 660 "rbmm.points_to_graph.m"
    {
#line 660 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_out_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_26_26, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27);
    }
#line 663 "rbmm.points_to_graph.m"
    {
#line 663 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__transfer_in_edges_4_p_0(transform_hlds__rbmm__points_to_graph__Node1_5, transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_27_27, &transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28);
    }
#line 666 "rbmm.points_to_graph.m"
    {
#line 666 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__delete_node_3_p_0(transform_hlds__rbmm__points_to_graph__Node2_6, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_28_28, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_19);
#line 666 "rbmm.points_to_graph.m"
      return;
    }
#line 632 "rbmm.points_to_graph.m"
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
#line 588 "rbmm.points_to_graph.m"
  {
#line 588 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 588 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
#line 588 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_6);
#line 588 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_6;
#line 588 "rbmm.points_to_graph.m"
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
#line 592 "rbmm.points_to_graph.m"
  {
#line 592 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 592 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EndNodeList_6;
#line 592 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
#line 592 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
#line 594 "rbmm.points_to_graph.m"
    {
#line 594 "rbmm.points_to_graph.m"
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EndNodeList_6);
    }
#line 592 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__EndNodeList_6;
#line 592 "rbmm.points_to_graph.m"
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
#line 584 "rbmm.points_to_graph.m"
  {
#line 584 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 584 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_6;
#line 584 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7;
#line 584 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_7);
#line 586 "rbmm.points_to_graph.m"
    {
#line 586 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_7, &transform_hlds__rbmm__points_to_graph__EdgeList_6);
    }
#line 584 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__EdgeList_6;
#line 584 "rbmm.points_to_graph.m"
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
#line 580 "rbmm.points_to_graph.m"
  {
#line 580 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 580 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAlloc_5;
#line 580 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
#line 580 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 610 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_23_23;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_13_13, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Region_4)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_9);
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 0)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 1)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 2)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 3)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__IsAlloc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, (MR_Integer) 4)));
#line 582 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__IsAlloc_5 == (MR_Integer) 1);
#line 580 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 580 "rbmm.points_to_graph.m"
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
#line 576 "rbmm.points_to_graph.m"
  {
#line 576 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 576 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__IsAllocated_6;
#line 576 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 576 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 610 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_21_21;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 610 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 610 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__IsAllocated_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 576 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__IsAllocated_6;
#line 576 "rbmm.points_to_graph.m"
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
#line 572 "rbmm.points_to_graph.m"
  {
#line 572 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 572 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_6;
#line 572 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 572 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 606 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_20_20;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 606 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 606 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 572 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Vars_6;
#line 572 "rbmm.points_to_graph.m"
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
#line 568 "rbmm.points_to_graph.m"
  {
#line 568 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 568 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeType_6;
#line 568 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 568 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_21_21;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 568 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeType_6;
#line 568 "rbmm.points_to_graph.m"
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
#line 564 "rbmm.points_to_graph.m"
  {
#line 564 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 564 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__RegionName_6;
#line 564 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_7;
#line 564 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7;
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20;
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22;
#line 607 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_11_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_7 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_7);
#line 607 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 0)));
#line 607 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__RegionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 1)));
#line 607 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 2)));
#line 607 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 3)));
#line 607 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_7, (MR_Integer) 4)));
#line 564 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__RegionName_6;
#line 564 "rbmm.points_to_graph.m"
  }
#line 176 "rbmm.points_to_graph.m"
}

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1(
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__env_ptr_arg)
#line 857 "rbmm.points_to_graph.m"
{
#line 857 "rbmm.points_to_graph.m"
  {
#line 857 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s * transform_hlds__rbmm__points_to_graph__env_ptr = (struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s *) transform_hlds__rbmm__points_to_graph__env_ptr_arg;

#line 857 "rbmm.points_to_graph.m"
    *((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13));
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      ((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont)((transform_hlds__rbmm__points_to_graph__env_ptr)->transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr);
#line 857 "rbmm.points_to_graph.m"
      return;
    }
#line 857 "rbmm.points_to_graph.m"
  }
#line 857 "rbmm.points_to_graph.m"
}

#line 857 "rbmm.points_to_graph.m"
static void MR_CALL 
transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2(
#line 857 "rbmm.points_to_graph.m"
  MR_Box transform_hlds__rbmm__points_to_graph__closure_arg,
#line 857 "rbmm.points_to_graph.m"
  MR_Box * transform_hlds__rbmm__points_to_graph__wrapper_arg_1,
#line 857 "rbmm.points_to_graph.m"
  MR_Cont transform_hlds__rbmm__points_to_graph__cont,
#line 857 "rbmm.points_to_graph.m"
  void * transform_hlds__rbmm__points_to_graph__cont_env_ptr)
#line 857 "rbmm.points_to_graph.m"
{
#line 857 "rbmm.points_to_graph.m"
  {
#line 857 "rbmm.points_to_graph.m"
    struct transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0_s transform_hlds__rbmm__points_to_graph__env;

#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__points_to_graph__wrapper_arg_1;
#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont = transform_hlds__rbmm__points_to_graph__cont;
#line 857 "rbmm.points_to_graph.m"
    (transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__points_to_graph__cont_env_ptr;
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      MR_Box transform_hlds__rbmm__points_to_graph__closure = transform_hlds__rbmm__points_to_graph__closure_arg;

#line 857 "rbmm.points_to_graph.m"
      {
#line 857 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__IntroducedFrom__pred__rptg_edge_in_graph__857__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__points_to_graph__env).transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2_env_0__conv1_HeadVar__3_13, transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_1, &transform_hlds__rbmm__points_to_graph__env);
      }
#line 857 "rbmm.points_to_graph.m"
    }
#line 857 "rbmm.points_to_graph.m"
  }
#line 857 "rbmm.points_to_graph.m"
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
#line 853 "rbmm.points_to_graph.m"
  {
#line 853 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 853 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9;
#line 853 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10;
#line 853 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12;
#line 853 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_8, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9;
#line 859 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_20, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfStart_9);
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__points_to_graph_scalar_common_3[0]));
#line 857 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__rptg_edge_in_graph_4_p_0_2));
#line 857 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_7));
#line 857 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdgesOfStart_9));
#line 857 "rbmm.points_to_graph.m"
    }
#line 857 "rbmm.points_to_graph.m"
    {
#line 857 "rbmm.points_to_graph.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__V_12_12, &transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10);
    }
#line 859 "rbmm.points_to_graph.m"
    {
#line 859 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__Label_6, transform_hlds__rbmm__points_to_graph__EdgePointToEndList_10, transform_hlds__rbmm__points_to_graph__Graph_8, &transform_hlds__rbmm__points_to_graph__V_11_11);
    }
#line 853 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 853 "rbmm.points_to_graph.m"
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
#line 838 "rbmm.points_to_graph.m"
  {
#line 838 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 838 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeList_9;
#line 838 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13;
#line 838 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_7, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_19, ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_13);
#line 586 "rbmm.points_to_graph.m"
    {
#line 586 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_13, &transform_hlds__rbmm__points_to_graph__EdgeList_9);
    }
#line 840 "rbmm.points_to_graph.m"
    {
#line 840 "rbmm.points_to_graph.m"
      return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__find_edge_with_same_content_4_p_0(transform_hlds__rbmm__points_to_graph__EdgeContent_6, transform_hlds__rbmm__points_to_graph__EdgeList_9, transform_hlds__rbmm__points_to_graph__G_7, transform_hlds__rbmm__points_to_graph__M_8);
    }
#line 838 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 838 "rbmm.points_to_graph.m"
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
#line 938 "rbmm.points_to_graph.m"
  {
#line 938 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__N_X_12;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Node_Selector_13;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__VarTypes_14;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeX_15;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19;
#line 938 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_28;

#line 536 "rbmm.points_to_graph.m"
    {
#line 536 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Vars_28 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__X_10)));
    }
#line 537 "rbmm.points_to_graph.m"
    {
#line 537 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__Vars_28, &transform_hlds__rbmm__points_to_graph__N_X_12);
    }
#line 940 "rbmm.points_to_graph.m"
    {
#line 940 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Node_Selector_13 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__points_to_graph__N_X_12)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 942 "rbmm.points_to_graph.m"
    {
#line 942 "rbmm.points_to_graph.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__rbmm__points_to_graph__ProcInfo_9, &transform_hlds__rbmm__points_to_graph__VarTypes_14);
    }
#line 943 "rbmm.points_to_graph.m"
    {
#line 943 "rbmm.points_to_graph.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__rbmm__points_to_graph__VarTypes_14, transform_hlds__rbmm__points_to_graph__X_10, &transform_hlds__rbmm__points_to_graph__TypeX_15);
    }
#line 946 "rbmm.points_to_graph.m"
    {
#line 946 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_Selector_13));
#line 946 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "rbmm.points_to_graph.m"
    }
#line 946 "rbmm.points_to_graph.m"
    {
#line 946 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__reach_from_a_variable_2_7_p_0(transform_hlds__rbmm__points_to_graph__V_19_19, transform_hlds__rbmm__points_to_graph__Graph_7, transform_hlds__rbmm__points_to_graph__HLDS_8, transform_hlds__rbmm__points_to_graph__TypeX_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_0_16, transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Reach_X_17);
#line 946 "rbmm.points_to_graph.m"
      return;
    }
#line 938 "rbmm.points_to_graph.m"
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
#line 867 "rbmm.points_to_graph.m"
  {
#line 867 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_12_37;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 0)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 1)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 2)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 3)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph1_3, (MR_Integer) 4)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 0)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AS2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 1)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 2)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 3)));
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph2_4, (MR_Integer) 4)));
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_23;
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_24;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_25;
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_28;
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_29;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_30;
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C1_33;
#line 867 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__C2_34;
#line 867 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Ks1_35;

#line 870 "rbmm.points_to_graph.m"
    {
#line 870 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__NS1_5, transform_hlds__rbmm__points_to_graph__NS2_10);
    }
#line 867 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
      {
#line 871 "rbmm.points_to_graph.m"
        {
#line 871 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__rbmm__points_to_graph__AS1_6, transform_hlds__rbmm__points_to_graph__AS2_11);
        }
#line 867 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
          {
#line 7943 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 7945 "transform_hlds.rbmm.points_to_graph.c"
            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0;
#line 887 "rbmm.points_to_graph.m"
            {
#line 887 "rbmm.points_to_graph.m"
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__C1_23);
            }
#line 888 "rbmm.points_to_graph.m"
            {
#line 888 "rbmm.points_to_graph.m"
              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes2_12, &transform_hlds__rbmm__points_to_graph__C2_24);
            }
#line 889 "rbmm.points_to_graph.m"
            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_23 == transform_hlds__rbmm__points_to_graph__C2_24);
#line 867 "rbmm.points_to_graph.m"
            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
              {
#line 892 "rbmm.points_to_graph.m"
                {
#line 892 "rbmm.points_to_graph.m"
                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Nodes1_7, &transform_hlds__rbmm__points_to_graph__Ks1_25);
                }
#line 893 "rbmm.points_to_graph.m"
                {
#line 893 "rbmm.points_to_graph.m"
                  transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_16_16, transform_hlds__rbmm__points_to_graph__Ks1_25, transform_hlds__rbmm__points_to_graph__Nodes1_7, transform_hlds__rbmm__points_to_graph__Nodes2_12);
                }
#line 867 "rbmm.points_to_graph.m"
                if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
                  {
#line 7977 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 7979 "transform_hlds.rbmm.points_to_graph.c"
                    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0;
#line 887 "rbmm.points_to_graph.m"
                    {
#line 887 "rbmm.points_to_graph.m"
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__C1_28);
                    }
#line 888 "rbmm.points_to_graph.m"
                    {
#line 888 "rbmm.points_to_graph.m"
                      mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges2_13, &transform_hlds__rbmm__points_to_graph__C2_29);
                    }
#line 889 "rbmm.points_to_graph.m"
                    transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_28 == transform_hlds__rbmm__points_to_graph__C2_29);
#line 867 "rbmm.points_to_graph.m"
                    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
                      {
#line 892 "rbmm.points_to_graph.m"
                        {
#line 892 "rbmm.points_to_graph.m"
                          mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Edges1_8, &transform_hlds__rbmm__points_to_graph__Ks1_30);
                        }
#line 893 "rbmm.points_to_graph.m"
                        {
#line 893 "rbmm.points_to_graph.m"
                          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__simple_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_18_18, transform_hlds__rbmm__points_to_graph__Ks1_30, transform_hlds__rbmm__points_to_graph__Edges1_8, transform_hlds__rbmm__points_to_graph__Edges2_13);
                        }
#line 867 "rbmm.points_to_graph.m"
                        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
                          {
#line 8011 "transform_hlds.rbmm.points_to_graph.c"
                            transform_hlds__rbmm__points_to_graph__TypeCtorInfo_11_36 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8013 "transform_hlds.rbmm.points_to_graph.c"
                            transform_hlds__rbmm__points_to_graph__TypeInfo_12_37 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 920 "rbmm.points_to_graph.m"
                            {
#line 920 "rbmm.points_to_graph.m"
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__C1_33);
                            }
#line 921 "rbmm.points_to_graph.m"
                            {
#line 921 "rbmm.points_to_graph.m"
                              mercury__map__count_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges2_14, &transform_hlds__rbmm__points_to_graph__C2_34);
                            }
#line 922 "rbmm.points_to_graph.m"
                            transform_hlds__rbmm__points_to_graph__succeeded = (transform_hlds__rbmm__points_to_graph__C1_33 == transform_hlds__rbmm__points_to_graph__C2_34);
#line 867 "rbmm.points_to_graph.m"
                            if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 867 "rbmm.points_to_graph.m"
                              {
#line 923 "rbmm.points_to_graph.m"
                                {
#line 923 "rbmm.points_to_graph.m"
                                  mercury__map__keys_2_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeInfo_12_37, transform_hlds__rbmm__points_to_graph__OutEdges1_9, &transform_hlds__rbmm__points_to_graph__Ks1_35);
                                }
#line 924 "rbmm.points_to_graph.m"
                                {
#line 924 "rbmm.points_to_graph.m"
                                  return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__complex_map_equal_2_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_17_17, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_15_15, transform_hlds__rbmm__points_to_graph__Ks1_35, transform_hlds__rbmm__points_to_graph__OutEdges1_9, transform_hlds__rbmm__points_to_graph__OutEdges2_14);
                                }
#line 867 "rbmm.points_to_graph.m"
                              }
#line 867 "rbmm.points_to_graph.m"
                          }
#line 867 "rbmm.points_to_graph.m"
                      }
#line 867 "rbmm.points_to_graph.m"
                  }
#line 867 "rbmm.points_to_graph.m"
              }
#line 867 "rbmm.points_to_graph.m"
          }
#line 867 "rbmm.points_to_graph.m"
      }
#line 867 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 867 "rbmm.points_to_graph.m"
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
#line 539 "rbmm.points_to_graph.m"
  {
#line 539 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 539 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 541 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph___NodeContent_8;
#line 541 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8;

#line 541 "rbmm.points_to_graph.m"
    {
#line 541 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__NodeMap_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
    }
#line 541 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 541 "rbmm.points_to_graph.m"
      {
#line 541 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph___NodeContent_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0__NodeContent_8);
#line 541 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 541 "rbmm.points_to_graph.m"
      }
#line 543 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 542 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__Node_5;
#line 543 "rbmm.points_to_graph.m"
    else
#line 545 "rbmm.points_to_graph.m"
      {
#line 545 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_9;
#line 545 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 548 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__MergedNode0_10;

#line 395 "rbmm.points_to_graph.m"
        {
#line 395 "rbmm.points_to_graph.m"
          mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_23_23, &transform_hlds__rbmm__points_to_graph__AllNodes_9);
        }
#line 546 "rbmm.points_to_graph.m"
        {
#line 546 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_node_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_9, transform_hlds__rbmm__points_to_graph__Node_5, &transform_hlds__rbmm__points_to_graph__MergedNode0_10);
        }
#line 548 "rbmm.points_to_graph.m"
        if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 547 "rbmm.points_to_graph.m"
          *transform_hlds__rbmm__points_to_graph__MergedNode_6 = transform_hlds__rbmm__points_to_graph__MergedNode0_10;
#line 548 "rbmm.points_to_graph.m"
        else
#line 549 "rbmm.points_to_graph.m"
          {
#line 549 "rbmm.points_to_graph.m"
            {
#line 549 "rbmm.points_to_graph.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_node\'/3", (MR_String) "node not found");
#line 549 "rbmm.points_to_graph.m"
              return;
            }
#line 549 "rbmm.points_to_graph.m"
          }
#line 545 "rbmm.points_to_graph.m"
      }
#line 539 "rbmm.points_to_graph.m"
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
#line 535 "rbmm.points_to_graph.m"
  {
#line 535 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 535 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Vars_7;

#line 536 "rbmm.points_to_graph.m"
    {
#line 536 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Vars_7 = mercury__set__make_singleton_set_1_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_2[0], ((MR_Box) (transform_hlds__rbmm__points_to_graph__Var_5)));
    }
#line 537 "rbmm.points_to_graph.m"
    {
#line 537 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_get_node_by_vars_3_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Vars_7, transform_hlds__rbmm__points_to_graph__Node_6);
#line 537 "rbmm.points_to_graph.m"
      return;
    }
#line 535 "rbmm.points_to_graph.m"
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
#line 513 "rbmm.points_to_graph.m"
  {
#line 513 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 513 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_7;
#line 513 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 517 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

#line 395 "rbmm.points_to_graph.m"
    {
#line 395 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_14_14, &transform_hlds__rbmm__points_to_graph__Nodes_7);
    }
#line 515 "rbmm.points_to_graph.m"
    {
#line 515 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_vars_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__Nodes_7, transform_hlds__rbmm__points_to_graph__Vars_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
#line 517 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 516 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
#line 517 "rbmm.points_to_graph.m"
    else
#line 518 "rbmm.points_to_graph.m"
      {
#line 518 "rbmm.points_to_graph.m"
        {
#line 518 "rbmm.points_to_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_vars\'/3", (MR_String) "node not found");
#line 518 "rbmm.points_to_graph.m"
          return;
        }
#line 518 "rbmm.points_to_graph.m"
      }
#line 513 "rbmm.points_to_graph.m"
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
#line 490 "rbmm.points_to_graph.m"
  {
#line 490 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 490 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__AllNodes_7;
#line 490 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 497 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodePrime_8;

#line 395 "rbmm.points_to_graph.m"
    {
#line 395 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_14_14, &transform_hlds__rbmm__points_to_graph__AllNodes_7);
    }
#line 493 "rbmm.points_to_graph.m"
    {
#line 493 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__get_node_by_region_name_from_list_4_p_0(transform_hlds__rbmm__points_to_graph__Graph_4, transform_hlds__rbmm__points_to_graph__AllNodes_7, transform_hlds__rbmm__points_to_graph__RegionName_5, &transform_hlds__rbmm__points_to_graph__NodePrime_8);
    }
#line 497 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 496 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__Node_6 = transform_hlds__rbmm__points_to_graph__NodePrime_8;
#line 497 "rbmm.points_to_graph.m"
    else
#line 498 "rbmm.points_to_graph.m"
      {
#line 498 "rbmm.points_to_graph.m"
        {
#line 498 "rbmm.points_to_graph.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.points_to_graph", (MR_String) "predicate \140transform_hlds.rbmm.points_to_graph.rptg_get_node_by_region_name\'/3", (MR_String) "node not found");
#line 498 "rbmm.points_to_graph.m"
          return;
        }
#line 498 "rbmm.points_to_graph.m"
      }
#line 490 "rbmm.points_to_graph.m"
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
#line 446 "rbmm.points_to_graph.m"
  {
#line 446 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 446 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Type_9;
#line 446 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_18;
#line 446 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_5, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 609 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_32_32;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 609 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_22_22, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_18);
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 0)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 1)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 2)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 3)));
#line 609 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_18, (MR_Integer) 4)));
#line 448 "rbmm.points_to_graph.m"
    {
#line 448 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__rbmm__points_to_graph__Type_9, transform_hlds__rbmm__points_to_graph__EType_7);
    }
#line 450 "rbmm.points_to_graph.m"
    if (transform_hlds__rbmm__points_to_graph__succeeded)
#line 449 "rbmm.points_to_graph.m"
      {
#line 449 "rbmm.points_to_graph.m"
        *transform_hlds__rbmm__points_to_graph__E_8 = transform_hlds__rbmm__points_to_graph__Start_6;
#line 449 "rbmm.points_to_graph.m"
        transform_hlds__rbmm__points_to_graph__succeeded = MR_TRUE;
#line 449 "rbmm.points_to_graph.m"
      }
#line 450 "rbmm.points_to_graph.m"
    else
#line 451 "rbmm.points_to_graph.m"
      {
#line 451 "rbmm.points_to_graph.m"
        MR_Word transform_hlds__rbmm__points_to_graph__V_10_10;

#line 451 "rbmm.points_to_graph.m"
        {
#line 451 "rbmm.points_to_graph.m"
          transform_hlds__rbmm__points_to_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_6));
#line 451 "rbmm.points_to_graph.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__points_to_graph__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "rbmm.points_to_graph.m"
        }
#line 451 "rbmm.points_to_graph.m"
        {
#line 451 "rbmm.points_to_graph.m"
          return transform_hlds__rbmm__points_to_graph__succeeded = transform_hlds__rbmm__points_to_graph__reachable_and_having_type_2_5_p_0(transform_hlds__rbmm__points_to_graph__Graph_5, transform_hlds__rbmm__points_to_graph__V_10_10, transform_hlds__rbmm__points_to_graph__V_10_10, transform_hlds__rbmm__points_to_graph__EType_7, transform_hlds__rbmm__points_to_graph__E_8);
        }
#line 451 "rbmm.points_to_graph.m"
      }
#line 446 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__succeeded;
#line 446 "rbmm.points_to_graph.m"
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
#line 424 "rbmm.points_to_graph.m"
  {
#line 424 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 425 "rbmm.points_to_graph.m"
    {
#line 425 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_1(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
#line 425 "rbmm.points_to_graph.m"
      return;
    }
#line 424 "rbmm.points_to_graph.m"
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
#line 424 "rbmm.points_to_graph.m"
  {
#line 424 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;

#line 425 "rbmm.points_to_graph.m"
    {
#line 425 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__rptg_path_2_5_p_0(transform_hlds__rbmm__points_to_graph__G_5, transform_hlds__rbmm__points_to_graph__S_6, transform_hlds__rbmm__points_to_graph__E_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__rbmm__points_to_graph__Path_8, transform_hlds__rbmm__points_to_graph__cont, transform_hlds__rbmm__points_to_graph__cont_env_ptr);
#line 425 "rbmm.points_to_graph.m"
      return;
    }
#line 424 "rbmm.points_to_graph.m"
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
#line 397 "rbmm.points_to_graph.m"
  {
#line 397 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 397 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Successors_6;
#line 397 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__SuccessorList_7;
#line 397 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12;
#line 397 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 590 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12;

#line 590 "rbmm.points_to_graph.m"
    {
#line 590 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], transform_hlds__rbmm__points_to_graph__OutEdges_18, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
    }
#line 590 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_OutEdgesOfNode_12);
#line 594 "rbmm.points_to_graph.m"
    {
#line 594 "rbmm.points_to_graph.m"
      mercury__map__values_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__OutEdgesOfNode_12, &transform_hlds__rbmm__points_to_graph__SuccessorList_7);
    }
#line 399 "rbmm.points_to_graph.m"
    {
#line 399 "rbmm.points_to_graph.m"
      mercury__set__list_to_set_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__points_to_graph__SuccessorList_7, &transform_hlds__rbmm__points_to_graph__Successors_6);
    }
#line 397 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Successors_6;
#line 397 "rbmm.points_to_graph.m"
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
#line 401 "rbmm.points_to_graph.m"
  {
#line 401 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeInfo_30_30;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__ES0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
#line 401 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__EdgeId_13;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__ES_14;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges0_15;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_16;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_17;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges0_18;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__StartOutEdges_19;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_20;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 401 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25;
#line 332 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
#line 332 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
#line 332 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
#line 332 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
#line 338 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 338 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43;
#line 338 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 338 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 356 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;
#line 356 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 356 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 356 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_59_59;
#line 414 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_71_71;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_72_72;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_73_73;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_74_74;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_75_75;

#line 403 "rbmm.points_to_graph.m"
    {
#line 403 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__EdgeId_13, transform_hlds__rbmm__points_to_graph__ES0_12, &transform_hlds__rbmm__points_to_graph__ES_14);
    }
#line 338 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 0)));
#line 338 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 1)));
#line 338 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 2)));
#line 338 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Edges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 3)));
#line 338 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_21, (MR_Integer) 4)));
#line 338 "rbmm.points_to_graph.m"
    {
#line 338 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 338 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_41_41));
#line 338 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__ES_14));
#line 338 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_43_43));
#line 338 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges0_15));
#line 338 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_45_45));
#line 338 "rbmm.points_to_graph.m"
    }
#line 406 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Edge_10 = (MR_Word) transform_hlds__rbmm__points_to_graph__EdgeId_13;
#line 409 "rbmm.points_to_graph.m"
    {
#line 409 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 409 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7));
#line 409 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8));
#line 409 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__V_24_24, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeContent_9));
#line 409 "rbmm.points_to_graph.m"
    }
#line 8685 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0;
#line 409 "rbmm.points_to_graph.m"
    {
#line 409 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_24_24)), transform_hlds__rbmm__points_to_graph__Edges0_15, &transform_hlds__rbmm__points_to_graph__Edges_16);
    }
#line 356 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 0)));
#line 356 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 1)));
#line 356 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 2)));
#line 356 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 3)));
#line 356 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdges0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_23_23, (MR_Integer) 4)));
#line 356 "rbmm.points_to_graph.m"
    {
#line 356 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 356 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_56_56));
#line 356 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 356 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 356 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_16));
#line 356 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_17));
#line 356 "rbmm.points_to_graph.m"
    }
#line 8718 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 8720 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeInfo_30_30 = (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0];
#line 414 "rbmm.points_to_graph.m"
    {
#line 414 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, transform_hlds__rbmm__points_to_graph__OutEdges0_17, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), &transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
    }
#line 414 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__StartOutEdges0_18 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_StartOutEdges0_18);
#line 415 "rbmm.points_to_graph.m"
    {
#line 415 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__Edge_10)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__End_8)), transform_hlds__rbmm__points_to_graph__StartOutEdges0_18, &transform_hlds__rbmm__points_to_graph__StartOutEdges_19);
    }
#line 416 "rbmm.points_to_graph.m"
    {
#line 416 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_29_29, transform_hlds__rbmm__points_to_graph__TypeInfo_30_30, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Start_7)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__StartOutEdges_19)), transform_hlds__rbmm__points_to_graph__OutEdges0_17, &transform_hlds__rbmm__points_to_graph__OutEdges_20);
    }
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 0)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 1)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 2)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 3)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_25_25, (MR_Integer) 4)));
#line 362 "rbmm.points_to_graph.m"
    {
#line 362 "rbmm.points_to_graph.m"
      MR_Word base;
#line 362 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 362 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_22 = base;
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_71_71));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_72_72));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_73_73));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_74_74));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_20));
#line 362 "rbmm.points_to_graph.m"
    }
#line 401 "rbmm.points_to_graph.m"
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
#line 419 "rbmm.points_to_graph.m"
  {
#line 419 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 419 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 3)));
#line 419 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeInfo_12;
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_6, (MR_Integer) 4)));
#line 421 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12;

#line 421 "rbmm.points_to_graph.m"
    {
#line 421 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, transform_hlds__rbmm__points_to_graph__Edges_11, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edge_7)), &transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
    }
#line 421 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__EdgeInfo_12 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_EdgeInfo_12);
#line 422 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Start_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 0)));
#line 422 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__End_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 1)));
#line 422 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__Content_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__EdgeInfo_12, (MR_Integer) 2)));
#line 419 "rbmm.points_to_graph.m"
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
#line 371 "rbmm.points_to_graph.m"
  {
#line 371 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27;
#line 371 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__NodeId_6;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NS_9;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__MergedFrom_11;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Content_12;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap0_13;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeMap_14;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges0_15;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_16;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20;
#line 371 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21;
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
#line 328 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_42_42;
#line 328 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_43_43;
#line 328 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_44_44;
#line 328 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 328 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_41_41;
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_51_51;
#line 617 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_52_52;
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 617 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_53_53;
#line 382 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23;
#line 382 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_24_24;
#line 382 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 382 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_61_61;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_62_62;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_64_64;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_63_63;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_76_76;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_77_77;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_78_78;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_79_79;
#line 362 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_80_80;

#line 373 "rbmm.points_to_graph.m"
    {
#line 373 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NodeId_6, transform_hlds__rbmm__points_to_graph__NS0_8, &transform_hlds__rbmm__points_to_graph__NS_9);
    }
#line 371 "rbmm.points_to_graph.m"
    *transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = (MR_Word) transform_hlds__rbmm__points_to_graph__NodeId_6;
#line 328 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 0)));
#line 328 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 1)));
#line 328 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 2)));
#line 328 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 3)));
#line 328 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_0_17, (MR_Integer) 4)));
#line 328 "rbmm.points_to_graph.m"
    {
#line 328 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 328 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NS_9));
#line 328 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_42_42));
#line 328 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_43_43));
#line 328 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_44_44));
#line 328 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_45_45));
#line 328 "rbmm.points_to_graph.m"
    }
#line 8957 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 378 "rbmm.points_to_graph.m"
    {
#line 378 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__MergedFrom_11 = mercury__set__make_singleton_set_1_f_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)));
    }
#line 617 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 0)));
#line 617 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 1)));
#line 617 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 2)));
#line 617 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 3)));
#line 617 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content0_5, (MR_Integer) 4)));
#line 617 "rbmm.points_to_graph.m"
    {
#line 617 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Content_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_51_51));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_52_52));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__MergedFrom_11));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 617 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Content_12, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 617 "rbmm.points_to_graph.m"
    }
#line 382 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
#line 382 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
#line 382 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
#line 382 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
#line 382 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
#line 383 "rbmm.points_to_graph.m"
    {
#line 383 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__Content_12)), transform_hlds__rbmm__points_to_graph__NodeMap0_13, &transform_hlds__rbmm__points_to_graph__NodeMap_14);
    }
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 0)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 1)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 2)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 3)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__OutEdges0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_19_19, (MR_Integer) 4)));
#line 351 "rbmm.points_to_graph.m"
    {
#line 351 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_61_61));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_62_62));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeMap_14));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_64_64));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges0_15));
#line 351 "rbmm.points_to_graph.m"
    }
#line 388 "rbmm.points_to_graph.m"
    {
#line 388 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__V_21_21 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27);
    }
#line 388 "rbmm.points_to_graph.m"
    {
#line 388 "rbmm.points_to_graph.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], ((MR_Box) (*transform_hlds__rbmm__points_to_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_21_21)), transform_hlds__rbmm__points_to_graph__OutEdges0_15, &transform_hlds__rbmm__points_to_graph__OutEdges_16);
    }
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 0)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 1)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 2)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 3)));
#line 362 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_20_20, (MR_Integer) 4)));
#line 362 "rbmm.points_to_graph.m"
    {
#line 362 "rbmm.points_to_graph.m"
      MR_Word base;
#line 362 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 362 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_G_18 = base;
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_76_76));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_77_77));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_78_78));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_79_79));
#line 362 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_16));
#line 362 "rbmm.points_to_graph.m"
    }
#line 371 "rbmm.points_to_graph.m"
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
#line 601 "rbmm.points_to_graph.m"
  {
#line 601 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 601 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent0_8;
#line 601 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_9;
#line 601 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 601 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_39;
#line 601 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_40;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8;
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 621 "rbmm.points_to_graph.m"
    MR_String transform_hlds__rbmm__points_to_graph__V_30_30;
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_31_31;
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_32_32;
#line 621 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_33_33;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_45_45;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_46_46;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_47_47;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_48_48;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_54_54;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_55_55;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_57_57;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_58_58;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_56_56;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_16_16, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent0_8 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent0_8);
#line 621 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 0)));
#line 621 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 1)));
#line 621 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 2)));
#line 621 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 3)));
#line 621 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent0_8, (MR_Integer) 4)));
#line 621 "rbmm.points_to_graph.m"
    {
#line 621 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__NodeContent_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_29_29));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_30_30));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_31_31));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_32_32));
#line 621 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__NodeContent_9, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__IsAlloc_6));
#line 621 "rbmm.points_to_graph.m"
    }
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__Nodes0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 598 "rbmm.points_to_graph.m"
    {
#line 598 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_9)), transform_hlds__rbmm__points_to_graph__Nodes0_39, &transform_hlds__rbmm__points_to_graph__Nodes_40);
    }
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 351 "rbmm.points_to_graph.m"
    {
#line 351 "rbmm.points_to_graph.m"
      MR_Word base;
#line 351 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 351 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_54_54));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_55_55));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_40));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_57_57));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_58_58));
#line 351 "rbmm.points_to_graph.m"
    }
#line 601 "rbmm.points_to_graph.m"
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
#line 596 "rbmm.points_to_graph.m"
  {
#line 596 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 596 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 596 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_9;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_25_25;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_26_26;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_28_28;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_29_29;
#line 351 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_27_27;

#line 598 "rbmm.points_to_graph.m"
    {
#line 598 "rbmm.points_to_graph.m"
      mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeContent_6)), transform_hlds__rbmm__points_to_graph__Nodes0_8, &transform_hlds__rbmm__points_to_graph__Nodes_9);
    }
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 0)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 1)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 2)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 3)));
#line 351 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_0_10, (MR_Integer) 4)));
#line 351 "rbmm.points_to_graph.m"
    {
#line 351 "rbmm.points_to_graph.m"
      MR_Word base;
#line 351 "rbmm.points_to_graph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 351 "rbmm.points_to_graph.m"
      *transform_hlds__rbmm__points_to_graph__STATE_VARIABLE_Graph_11 = base;
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_25_25));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_26_26));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_9));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_28_28));
#line 351 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__V_29_29));
#line 351 "rbmm.points_to_graph.m"
    }
#line 596 "rbmm.points_to_graph.m"
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
#line 391 "rbmm.points_to_graph.m"
  {
#line 391 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 391 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeContent_6;
#line 391 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_4, (MR_Integer) 4)));
#line 392 "rbmm.points_to_graph.m"
    MR_Box transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6;

#line 392 "rbmm.points_to_graph.m"
    {
#line 392 "rbmm.points_to_graph.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_7_7, ((MR_Box) (transform_hlds__rbmm__points_to_graph__Node_5)), &transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
    }
#line 392 "rbmm.points_to_graph.m"
    transform_hlds__rbmm__points_to_graph__NodeContent_6 = ((MR_Word) transform_hlds__rbmm__points_to_graph__conv0_NodeContent_6);
#line 391 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeContent_6;
#line 391 "rbmm.points_to_graph.m"
  }
#line 54 "rbmm.points_to_graph.m"
}

#line 47 "rbmm.points_to_graph.m"
MR_Word MR_CALL 
transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_f_0(void)
#line 47 "rbmm.points_to_graph.m"
{
#line 313 "rbmm.points_to_graph.m"
  {
#line 313 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Graph_2;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_3;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__EdgeSupply_4;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Nodes_5;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__Edges_6;
#line 313 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__OutEdges_7;

#line 314 "rbmm.points_to_graph.m"
    {
#line 314 "rbmm.points_to_graph.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__NodeSupply_3);
    }
#line 315 "rbmm.points_to_graph.m"
    {
#line 315 "rbmm.points_to_graph.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &transform_hlds__rbmm__points_to_graph__EdgeSupply_4);
    }
#line 9381 "transform_hlds.rbmm.points_to_graph.c"
    transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 316 "rbmm.points_to_graph.m"
    {
#line 316 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, &transform_hlds__rbmm__points_to_graph__Nodes_5);
    }
#line 317 "rbmm.points_to_graph.m"
    {
#line 317 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_edge_info_0, &transform_hlds__rbmm__points_to_graph__Edges_6);
    }
#line 318 "rbmm.points_to_graph.m"
    {
#line 318 "rbmm.points_to_graph.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__points_to_graph__TypeCtorInfo_10_10, (MR_Word) &transform_hlds__rbmm__points_to_graph_scalar_common_1[0], &transform_hlds__rbmm__points_to_graph__OutEdges_7);
    }
#line 319 "rbmm.points_to_graph.m"
    {
#line 319 "rbmm.points_to_graph.m"
      transform_hlds__rbmm__points_to_graph__Graph_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 319 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 0) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__NodeSupply_3));
#line 319 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 1) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__EdgeSupply_4));
#line 319 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 2) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Nodes_5));
#line 319 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 3) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__Edges_6));
#line 319 "rbmm.points_to_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_2, 4) = ((MR_Box) (transform_hlds__rbmm__points_to_graph__OutEdges_7));
#line 319 "rbmm.points_to_graph.m"
    }
#line 313 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__Graph_2;
#line 313 "rbmm.points_to_graph.m"
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
#line 344 "rbmm.points_to_graph.m"
  {
#line 344 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 344 "rbmm.points_to_graph.m"
    MR_Integer transform_hlds__rbmm__points_to_graph__NextNodeId_4;
#line 344 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeSupply_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 323 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
#line 346 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6;

#line 346 "rbmm.points_to_graph.m"
    {
#line 346 "rbmm.points_to_graph.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__rbmm__points_to_graph__NextNodeId_4, transform_hlds__rbmm__points_to_graph__NodeSupply_5, &transform_hlds__rbmm__points_to_graph__V_6_6);
    }
#line 344 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NextNodeId_4;
#line 344 "rbmm.points_to_graph.m"
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
#line 342 "rbmm.points_to_graph.m"
  {
#line 342 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 342 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));

#line 342 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 342 "rbmm.points_to_graph.m"
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
#line 341 "rbmm.points_to_graph.m"
  {
#line 341 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 341 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

#line 341 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 341 "rbmm.points_to_graph.m"
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
#line 394 "rbmm.points_to_graph.m"
  {
#line 394 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 394 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__NodeList_4;
#line 394 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__Graph_3, (MR_Integer) 4)));

#line 395 "rbmm.points_to_graph.m"
    {
#line 395 "rbmm.points_to_graph.m"
      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_content_0, transform_hlds__rbmm__points_to_graph__V_5_5, &transform_hlds__rbmm__points_to_graph__NodeList_4);
    }
#line 394 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__NodeList_4;
#line 394 "rbmm.points_to_graph.m"
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
#line 340 "rbmm.points_to_graph.m"
  {
#line 340 "rbmm.points_to_graph.m"
    MR_bool transform_hlds__rbmm__points_to_graph__succeeded;
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 2)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 0)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 1)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 3)));
#line 340 "rbmm.points_to_graph.m"
    MR_Word transform_hlds__rbmm__points_to_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__points_to_graph__G_3, (MR_Integer) 4)));

#line 340 "rbmm.points_to_graph.m"
    return transform_hlds__rbmm__points_to_graph__HeadVar__2_2;
#line 340 "rbmm.points_to_graph.m"
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
