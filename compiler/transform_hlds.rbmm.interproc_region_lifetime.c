/*
** Automatically generated from `rbmm.interproc_region_lifetime.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.rbmm.interproc_region_lifetime. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__interproc_region_lifetime__init
ENDINIT
*/

#include "transform_hlds.rbmm.interproc_region_lifetime.mih"


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
#include "check_hlds.type_util.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
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
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"



#line 407 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0_s {
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__HeadVar__3_14;
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont;
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont_env_ptr;
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 407 "rbmm.interproc_region_lifetime.m"
};

#line 396 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0_s {
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__HeadVar__3_14;
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont;
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont_env_ptr;
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 396 "rbmm.interproc_region_lifetime.m"
};

#line 368 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0_s {
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__HeadVar__3_14;
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont;
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont_env_ptr;
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 368 "rbmm.interproc_region_lifetime.m"
};

#line 358 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0_s {
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__HeadVar__3_14;
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont;
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont_env_ptr;
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 358 "rbmm.interproc_region_lifetime.m"
};

#line 407 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s {
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont;
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 407 "rbmm.interproc_region_lifetime.m"
};

#line 396 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s {
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont;
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 396 "rbmm.interproc_region_lifetime.m"
};

#line 368 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s {
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont;
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 368 "rbmm.interproc_region_lifetime.m"
};

#line 358 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s {
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont;
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 358 "rbmm.interproc_region_lifetime.m"
};


#line 263 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 266 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 269 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 272 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 275 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 278 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 281 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_PseudoTypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 284 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 287 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 290 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 293 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 296 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 299 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 302 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 305 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 308 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 311 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_TypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 314 "transform_hlds.rbmm.interproc_region_lifetime.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
#line 317 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 319 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2);

#line 322 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
#line 325 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 327 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 329 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 421 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);

#line 389 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 418 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 384 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 374 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);

#line 309 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 261 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11);

#line 240 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11);

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_1(
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0(
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_1(
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0(
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_1(
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0(
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_1(
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0(
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 132 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3);

#line 132 "rbmm.interproc_region_lifetime.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2);

#line 607 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 601 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_8,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14);

#line 597 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 589 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17);

#line 576 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_7,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_8,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12);

#line 572 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 564 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17);

#line 526 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Source_7,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11);

#line 513 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 490 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 467 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8);

#line 455 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_3,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8);

#line 437 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_8,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_12,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16);

#line 421 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime___Source_7,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 403 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 392 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);

#line 374 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_9,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 364 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 353 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);

#line 351 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 418 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 346 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 335 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12);

#line 219 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_16,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23);

#line 203 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 194 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_11,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20);

#line 175 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_16,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19);

#line 171 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2(
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 1058 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_1(
#line 1061 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 1063 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1065 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1067 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 1069 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 1071 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 1073 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 112 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15);

#line 94 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_11,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_12,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21);

#line 555 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 546 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 91 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 171 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 1166 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
#line 1169 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 1171 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1173 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1175 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 1177 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 1179 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 1181 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[3][8];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[5][9];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[2][10];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[1][6];




static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[3][8] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4])),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1479 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1487 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1495 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1504 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1513 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1522 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1531 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_PseudoTypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1545 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1554 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1563 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1571 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1579 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1588 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1597 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1606 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1614 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1623 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_TypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1637 "transform_hlds.rbmm.interproc_region_lifetime.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__interproc_region_lifetime__transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.interproc_region_lifetime",
  (MR_String) "rule_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1654 "transform_hlds.rbmm.interproc_region_lifetime.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
#line 1657 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1659 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2)
#line 1661 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 1663 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 1665 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 1668 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 1670 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2));
    }
#line 1673 "transform_hlds.rbmm.interproc_region_lifetime.c"
    return transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 1675 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 1677 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 1680 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
#line 1683 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1685 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1687 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 1689 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 1691 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 1693 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1;

#line 1696 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 1698 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(&transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3));
    }
#line 1701 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1));
#line 1703 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 1705 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 421 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14)
#line 421 "rbmm.interproc_region_lifetime.m"
{
#line 425 "rbmm.interproc_region_lifetime.m"
  {
#line 425 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 426 "rbmm.interproc_region_lifetime.m"
    {
#line 426 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__contains_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)));
    }
#line 425 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 428 "rbmm.interproc_region_lifetime.m"
      {
#line 428 "rbmm.interproc_region_lifetime.m"
        {
#line 428 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);
        }
#line 428 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11;
#line 428 "rbmm.interproc_region_lifetime.m"
      }
#line 425 "rbmm.interproc_region_lifetime.m"
    else
#line 430 "rbmm.interproc_region_lifetime.m"
      {
#line 430 "rbmm.interproc_region_lifetime.m"
        {
#line 430 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12);
        }
#line 430 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13;
#line 430 "rbmm.interproc_region_lifetime.m"
      }
#line 425 "rbmm.interproc_region_lifetime.m"
  }
#line 421 "rbmm.interproc_region_lifetime.m"
}

#line 389 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 389 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 389 "rbmm.interproc_region_lifetime.m"
{
#line 389 "rbmm.interproc_region_lifetime.m"
  {
#line 389 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 389 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11;

#line 389 "rbmm.interproc_region_lifetime.m"
    {
#line 389 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11);
    }
#line 389 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11));
#line 389 "rbmm.interproc_region_lifetime.m"
  }
#line 389 "rbmm.interproc_region_lifetime.m"
}

#line 418 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 418 "rbmm.interproc_region_lifetime.m"
{
#line 418 "rbmm.interproc_region_lifetime.m"
  {
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14;

#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14);
    }
#line 418 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12));
#line 418 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14));
#line 418 "rbmm.interproc_region_lifetime.m"
  }
#line 418 "rbmm.interproc_region_lifetime.m"
}

#line 384 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 384 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 384 "rbmm.interproc_region_lifetime.m"
{
#line 384 "rbmm.interproc_region_lifetime.m"
  {
#line 384 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 384 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11;

#line 384 "rbmm.interproc_region_lifetime.m"
    {
#line 384 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11);
    }
#line 384 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11));
#line 384 "rbmm.interproc_region_lifetime.m"
  }
#line 384 "rbmm.interproc_region_lifetime.m"
}

#line 374 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12)
#line 374 "rbmm.interproc_region_lifetime.m"
{
#line 378 "rbmm.interproc_region_lifetime.m"
  {
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Targets_15;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_16_16;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_17_17;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_31_31;
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 380 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13;
#line 384 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Processed_29;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15;
#line 389 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12;

#line 380 "rbmm.interproc_region_lifetime.m"
    {
#line 380 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13);
    }
#line 380 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13);
#line 384 "rbmm.interproc_region_lifetime.m"
    {
#line 384 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 384 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 384 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1));
#line 384 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 384 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11));
#line 384 "rbmm.interproc_region_lifetime.m"
    }
#line 1945 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 384 "rbmm.interproc_region_lifetime.m"
    {
#line 384 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__V_16_16, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14);
    }
#line 384 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14);
#line 1954 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_31_31 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39);
    }
#line 1966 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[8], transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_31_31)), &transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_32_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15);
    }
#line 418 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Processed_29 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29);
#line 418 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Targets_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15);
#line 389 "rbmm.interproc_region_lifetime.m"
    {
#line 389 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 389 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3));
#line 389 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11));
#line 389 "rbmm.interproc_region_lifetime.m"
    }
#line 389 "rbmm.interproc_region_lifetime.m"
    {
#line 389 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__V_17_17, transform_hlds__rbmm__interproc_region_lifetime__Targets_15, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12);
    }
#line 389 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12);
#line 378 "rbmm.interproc_region_lifetime.m"
  }
#line 374 "rbmm.interproc_region_lifetime.m"
}

#line 309 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 309 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 309 "rbmm.interproc_region_lifetime.m"
{
#line 309 "rbmm.interproc_region_lifetime.m"
  {
#line 309 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 309 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16;

#line 309 "rbmm.interproc_region_lifetime.m"
    {
#line 309 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16);
    }
#line 309 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16));
#line 309 "rbmm.interproc_region_lifetime.m"
  }
#line 309 "rbmm.interproc_region_lifetime.m"
}

#line 261 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 261 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11)
#line 261 "rbmm.interproc_region_lifetime.m"
{
#line 267 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 267 "rbmm.interproc_region_lifetime.m"
    {
#line 267 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 267 "rbmm.interproc_region_lifetime.m"
      {
#line 267 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 267 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 267 "rbmm.interproc_region_lifetime.m"
        else
#line 271 "rbmm.interproc_region_lifetime.m"
          {
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24;
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Goal_25;
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 1)));
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Expr_35;
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 0)));
#line 271 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60;
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_36_36;
#line 275 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37;
#line 275 "rbmm.interproc_region_lifetime.m"
            MR_Integer transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38;
#line 276 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_39_39;
#line 276 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_40_40;
#line 276 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_41_41;
#line 276 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_42_42;

#line 269 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_54_54, (MR_Integer) 0)));
#line 269 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_54_54, (MR_Integer) 1)));
#line 272 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_25, (MR_Integer) 0)));
#line 272 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_25, (MR_Integer) 1)));
#line 276 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Expr_35)) == (MR_mktag((MR_Integer) 2)));
#line 276 "rbmm.interproc_region_lifetime.m"
            if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 276 "rbmm.interproc_region_lifetime.m"
              {
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 0)));
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 1)));
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 2)));
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 3)));
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 4)));
#line 276 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 5)));
#line 278 "rbmm.interproc_region_lifetime.m"
                {
#line 278 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43;
#line 280 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_55_55;

#line 278 "rbmm.interproc_region_lifetime.m"
                  {
#line 278 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37));
#line 278 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38));
#line 278 "rbmm.interproc_region_lifetime.m"
                  }
#line 280 "rbmm.interproc_region_lifetime.m"
                  {
#line 280 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43));
#line 280 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "rbmm.interproc_region_lifetime.m"
                  }
#line 280 "rbmm.interproc_region_lifetime.m"
                  {
#line 280 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__V_55_55, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4);
                  }
#line 279 "rbmm.interproc_region_lifetime.m"
                  if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 279 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 279 "rbmm.interproc_region_lifetime.m"
                  else
#line 284 "rbmm.interproc_region_lifetime.m"
                    {
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, (MR_Integer) 1)));
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50;
#line 284 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, (MR_Integer) 0)));
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46;
#line 287 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47;
#line 288 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48;
#line 291 "rbmm.interproc_region_lifetime.m"
                      void MR_CALL (* transform_hlds__rbmm__interproc_region_lifetime__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 291 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49;
#line 294 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50;

#line 285 "rbmm.interproc_region_lifetime.m"
                      {
#line 285 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4], transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_45, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46);
                      }
#line 285 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46);
#line 2212 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 287 "rbmm.interproc_region_lifetime.m"
                      {
#line 287 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47);
                      }
#line 287 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47);
#line 288 "rbmm.interproc_region_lifetime.m"
                      {
#line 288 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48);
                      }
#line 288 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48);
#line 291 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "rbmm.interproc_region_lifetime.m"
                      {
#line 291 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__func_3(((MR_Box) transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49);
                      }
#line 291 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49);
#line 2237 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 294 "rbmm.interproc_region_lifetime.m"
                      {
#line 294 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50);
                      }
#line 294 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50);
#line 296 "rbmm.interproc_region_lifetime.m"
                      {
#line 296 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__equal_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50);
                      }
#line 295 "rbmm.interproc_region_lifetime.m"
                      if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 295 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 295 "rbmm.interproc_region_lifetime.m"
                      else
#line 303 "rbmm.interproc_region_lifetime.m"
                        {
#line 303 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67;
#line 303 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51;
#line 303 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57;
#line 303 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_58_58;
#line 303 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_59_59;
#line 308 "rbmm.interproc_region_lifetime.m"
                          MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60;

#line 303 "rbmm.interproc_region_lifetime.m"
                          {
#line 303 "rbmm.interproc_region_lifetime.m"
                            mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57);
                          }
#line 2277 "transform_hlds.rbmm.interproc_region_lifetime.c"
                          transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 307 "rbmm.interproc_region_lifetime.m"
                          {
#line 307 "rbmm.interproc_region_lifetime.m"
                            mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50, transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49, &transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51);
                          }
#line 309 "rbmm.interproc_region_lifetime.m"
                          {
#line 309 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1]));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4));
#line 309 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7));
#line 309 "rbmm.interproc_region_lifetime.m"
                          }
#line 311 "rbmm.interproc_region_lifetime.m"
                          {
#line 311 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_59_59 = mercury__set__to_sorted_list_1_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51);
                          }
#line 308 "rbmm.interproc_region_lifetime.m"
                          {
#line 308 "rbmm.interproc_region_lifetime.m"
                            mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_58_58, transform_hlds__rbmm__interproc_region_lifetime__V_59_59, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57)), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60);
                          }
#line 308 "rbmm.interproc_region_lifetime.m"
                          transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60);
#line 303 "rbmm.interproc_region_lifetime.m"
                        }
#line 284 "rbmm.interproc_region_lifetime.m"
                    }
#line 278 "rbmm.interproc_region_lifetime.m"
                }
#line 276 "rbmm.interproc_region_lifetime.m"
              }
#line 276 "rbmm.interproc_region_lifetime.m"
            else
#line 275 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 318 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 318 "rbmm.interproc_region_lifetime.m"
            {
#line 318 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_26;
#line 318 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60;

#line 318 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10;
#line 318 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2;
#line 318 "rbmm.interproc_region_lifetime.m"
            }
#line 318 "rbmm.interproc_region_lifetime.m"
            continue;
#line 271 "rbmm.interproc_region_lifetime.m"
          }
#line 267 "rbmm.interproc_region_lifetime.m"
      }
#line 267 "rbmm.interproc_region_lifetime.m"
      break;
#line 267 "rbmm.interproc_region_lifetime.m"
    }
#line 261 "rbmm.interproc_region_lifetime.m"
}

#line 240 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 240 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11)
#line 240 "rbmm.interproc_region_lifetime.m"
{
#line 246 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 246 "rbmm.interproc_region_lifetime.m"
    {
#line 246 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 246 "rbmm.interproc_region_lifetime.m"
      {
#line 246 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 246 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 246 "rbmm.interproc_region_lifetime.m"
        else
#line 250 "rbmm.interproc_region_lifetime.m"
          {
#line 250 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPath_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36;

#line 251 "rbmm.interproc_region_lifetime.m"
            {
#line 251 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, transform_hlds__rbmm__interproc_region_lifetime__ExecPath_24, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4, transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36);
            }
#line 254 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 254 "rbmm.interproc_region_lifetime.m"
            {
#line 254 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_25;
#line 254 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36;

#line 254 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10;
#line 254 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2;
#line 254 "rbmm.interproc_region_lifetime.m"
            }
#line 254 "rbmm.interproc_region_lifetime.m"
            continue;
#line 250 "rbmm.interproc_region_lifetime.m"
          }
#line 246 "rbmm.interproc_region_lifetime.m"
      }
#line 246 "rbmm.interproc_region_lifetime.m"
      break;
#line 246 "rbmm.interproc_region_lifetime.m"
    }
#line 240 "rbmm.interproc_region_lifetime.m"
}

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_1(
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 407 "rbmm.interproc_region_lifetime.m"
{
#line 407 "rbmm.interproc_region_lifetime.m"
  {
#line 407 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 407 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont_env_ptr);
    }
#line 407 "rbmm.interproc_region_lifetime.m"
  }
#line 407 "rbmm.interproc_region_lifetime.m"
}

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0(
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 407 "rbmm.interproc_region_lifetime.m"
{
#line 407 "rbmm.interproc_region_lifetime.m"
  {
#line 407 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 407 "rbmm.interproc_region_lifetime.m"
      {
#line 407 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 407 "rbmm.interproc_region_lifetime.m"
    }
#line 407 "rbmm.interproc_region_lifetime.m"
  }
#line 407 "rbmm.interproc_region_lifetime.m"
}

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_1(
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 396 "rbmm.interproc_region_lifetime.m"
{
#line 396 "rbmm.interproc_region_lifetime.m"
  {
#line 396 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 396 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont_env_ptr);
    }
#line 396 "rbmm.interproc_region_lifetime.m"
  }
#line 396 "rbmm.interproc_region_lifetime.m"
}

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0(
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 396 "rbmm.interproc_region_lifetime.m"
{
#line 396 "rbmm.interproc_region_lifetime.m"
  {
#line 396 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 396 "rbmm.interproc_region_lifetime.m"
      {
#line 396 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 396 "rbmm.interproc_region_lifetime.m"
    }
#line 396 "rbmm.interproc_region_lifetime.m"
  }
#line 396 "rbmm.interproc_region_lifetime.m"
}

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_1(
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 368 "rbmm.interproc_region_lifetime.m"
{
#line 368 "rbmm.interproc_region_lifetime.m"
  {
#line 368 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 368 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont_env_ptr);
    }
#line 368 "rbmm.interproc_region_lifetime.m"
  }
#line 368 "rbmm.interproc_region_lifetime.m"
}

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0(
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 368 "rbmm.interproc_region_lifetime.m"
{
#line 368 "rbmm.interproc_region_lifetime.m"
  {
#line 368 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 368 "rbmm.interproc_region_lifetime.m"
      {
#line 368 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 368 "rbmm.interproc_region_lifetime.m"
    }
#line 368 "rbmm.interproc_region_lifetime.m"
  }
#line 368 "rbmm.interproc_region_lifetime.m"
}

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_1(
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 358 "rbmm.interproc_region_lifetime.m"
{
#line 358 "rbmm.interproc_region_lifetime.m"
  {
#line 358 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 358 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont_env_ptr);
    }
#line 358 "rbmm.interproc_region_lifetime.m"
  }
#line 358 "rbmm.interproc_region_lifetime.m"
}

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0(
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 358 "rbmm.interproc_region_lifetime.m"
{
#line 358 "rbmm.interproc_region_lifetime.m"
  {
#line 358 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 358 "rbmm.interproc_region_lifetime.m"
      {
#line 358 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 358 "rbmm.interproc_region_lifetime.m"
    }
#line 358 "rbmm.interproc_region_lifetime.m"
  }
#line 358 "rbmm.interproc_region_lifetime.m"
}

#line 132 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3)
#line 132 "rbmm.interproc_region_lifetime.m"
{
#line 132 "rbmm.interproc_region_lifetime.m"
  {
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_4 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2;
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_5 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3;

#line 132 "rbmm.interproc_region_lifetime.m"
    {
#line 132 "rbmm.interproc_region_lifetime.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[0], transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_5)));
    }
#line 132 "rbmm.interproc_region_lifetime.m"
  }
#line 132 "rbmm.interproc_region_lifetime.m"
}

#line 132 "rbmm.interproc_region_lifetime.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 132 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2)
#line 132 "rbmm.interproc_region_lifetime.m"
{
#line 132 "rbmm.interproc_region_lifetime.m"
  {
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_3 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1;
#line 132 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_4 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2;

#line 132 "rbmm.interproc_region_lifetime.m"
    {
#line 132 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_3, (MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_4);
    }
#line 132 "rbmm.interproc_region_lifetime.m"
    return transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 132 "rbmm.interproc_region_lifetime.m"
  }
#line 132 "rbmm.interproc_region_lifetime.m"
}

#line 607 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 607 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 607 "rbmm.interproc_region_lifetime.m"
{
#line 607 "rbmm.interproc_region_lifetime.m"
  {
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12;

#line 607 "rbmm.interproc_region_lifetime.m"
    {
#line 607 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12);
    }
#line 607 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12));
#line 607 "rbmm.interproc_region_lifetime.m"
  }
#line 607 "rbmm.interproc_region_lifetime.m"
}

#line 601 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_8,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13,
#line 601 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14)
#line 601 "rbmm.interproc_region_lifetime.m"
{
#line 606 "rbmm.interproc_region_lifetime.m"
  {
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21;
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22;
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12;
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_15_15;
#line 606 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_16_16;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12;

#line 607 "rbmm.interproc_region_lifetime.m"
    {
#line 607 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 607 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[2]));
#line 607 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1));
#line 607 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 607 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_8));
#line 607 "rbmm.interproc_region_lifetime.m"
    }
#line 2858 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 608 "rbmm.interproc_region_lifetime.m"
    {
#line 608 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21);
    }
#line 2865 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 607 "rbmm.interproc_region_lifetime.m"
    {
#line 607 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22, transform_hlds__rbmm__interproc_region_lifetime__V_15_15, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_16_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12);
    }
#line 607 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12);
#line 609 "rbmm.interproc_region_lifetime.m"
    {
#line 609 "rbmm.interproc_region_lifetime.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14);
    }
#line 606 "rbmm.interproc_region_lifetime.m"
  }
#line 601 "rbmm.interproc_region_lifetime.m"
}

#line 597 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 597 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 597 "rbmm.interproc_region_lifetime.m"
{
#line 597 "rbmm.interproc_region_lifetime.m"
  {
#line 597 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 597 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14;

#line 597 "rbmm.interproc_region_lifetime.m"
    {
#line 597 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14);
    }
#line 597 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14));
#line 597 "rbmm.interproc_region_lifetime.m"
  }
#line 597 "rbmm.interproc_region_lifetime.m"
}

#line 589 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16,
#line 589 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17)
#line 589 "rbmm.interproc_region_lifetime.m"
{
#line 594 "rbmm.interproc_region_lifetime.m"
  {
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_13;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc_15;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 594 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_19_19;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12;
#line 596 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Alpha_14;
#line 597 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15;

#line 595 "rbmm.interproc_region_lifetime.m"
    {
#line 595 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
    }
#line 595 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
#line 596 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Graph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 0)));
#line 596 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Alpha_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 1)));
#line 597 "rbmm.interproc_region_lifetime.m"
    {
#line 597 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 597 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[4]));
#line 597 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1));
#line 597 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 597 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 597 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_13));
#line 597 "rbmm.interproc_region_lifetime.m"
    }
#line 2991 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 2993 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 598 "rbmm.interproc_region_lifetime.m"
    {
#line 598 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_19_19 = mercury__map__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28);
    }
#line 3000 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 597 "rbmm.interproc_region_lifetime.m"
    {
#line 597 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_19_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15);
    }
#line 597 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__LRProc_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15);
#line 599 "rbmm.interproc_region_lifetime.m"
    {
#line 599 "rbmm.interproc_region_lifetime.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRProc_15)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17);
    }
#line 594 "rbmm.interproc_region_lifetime.m"
  }
#line 589 "rbmm.interproc_region_lifetime.m"
}

#line 576 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_7,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_8,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11,
#line 576 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12)
#line 576 "rbmm.interproc_region_lifetime.m"
{
#line 579 "rbmm.interproc_region_lifetime.m"
  {
#line 579 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 579 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__NodeType_10;

#line 580 "rbmm.interproc_region_lifetime.m"
    {
#line 580 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__NodeType_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__interproc_region_lifetime__Graph_7, transform_hlds__rbmm__interproc_region_lifetime__Region_8);
    }
#line 581 "rbmm.interproc_region_lifetime.m"
    {
#line 581 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__NodeType_10, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6);
    }
#line 583 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 583 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11;
#line 583 "rbmm.interproc_region_lifetime.m"
    else
#line 584 "rbmm.interproc_region_lifetime.m"
      {
#line 584 "rbmm.interproc_region_lifetime.m"
        {
#line 584 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12);
        }
#line 584 "rbmm.interproc_region_lifetime.m"
      }
#line 579 "rbmm.interproc_region_lifetime.m"
  }
#line 576 "rbmm.interproc_region_lifetime.m"
}

#line 572 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 572 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 572 "rbmm.interproc_region_lifetime.m"
{
#line 572 "rbmm.interproc_region_lifetime.m"
  {
#line 572 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 572 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12;

#line 572 "rbmm.interproc_region_lifetime.m"
    {
#line 572 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12);
    }
#line 572 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12));
#line 572 "rbmm.interproc_region_lifetime.m"
  }
#line 572 "rbmm.interproc_region_lifetime.m"
}

#line 564 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16,
#line 564 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17)
#line 564 "rbmm.interproc_region_lifetime.m"
{
#line 569 "rbmm.interproc_region_lifetime.m"
  {
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_13;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 569 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_19_19;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12;
#line 571 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Alpha_14;
#line 572 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15;

#line 570 "rbmm.interproc_region_lifetime.m"
    {
#line 570 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
    }
#line 570 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
#line 571 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Graph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 0)));
#line 571 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Alpha_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 1)));
#line 572 "rbmm.interproc_region_lifetime.m"
    {
#line 572 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 572 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[2]));
#line 572 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1));
#line 572 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 572 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 572 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_13));
#line 572 "rbmm.interproc_region_lifetime.m"
    }
#line 3174 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 573 "rbmm.interproc_region_lifetime.m"
    {
#line 573 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_19_19 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26);
    }
#line 3181 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 572 "rbmm.interproc_region_lifetime.m"
    {
#line 572 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_19_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15);
    }
#line 572 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15);
#line 574 "rbmm.interproc_region_lifetime.m"
    {
#line 574 "rbmm.interproc_region_lifetime.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17);
    }
#line 569 "rbmm.interproc_region_lifetime.m"
  }
#line 564 "rbmm.interproc_region_lifetime.m"
}

#line 526 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Source_7,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10,
#line 526 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11)
#line 526 "rbmm.interproc_region_lifetime.m"
{
#line 530 "rbmm.interproc_region_lifetime.m"
  {
#line 530 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 531 "rbmm.interproc_region_lifetime.m"
    MR_Integer transform_hlds__rbmm__interproc_region_lifetime__V_15_15 = (MR_Integer) transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6;
#line 531 "rbmm.interproc_region_lifetime.m"
    MR_Integer transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = (MR_Integer) transform_hlds__rbmm__interproc_region_lifetime__Target_8;

#line 531 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__succeeded = (transform_hlds__rbmm__interproc_region_lifetime__V_15_15 == transform_hlds__rbmm__interproc_region_lifetime__V_16_16);
#line 530 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 533 "rbmm.interproc_region_lifetime.m"
      {
#line 533 "rbmm.interproc_region_lifetime.m"
        {
#line 533 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Source_7)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11);
        }
#line 533 "rbmm.interproc_region_lifetime.m"
      }
#line 530 "rbmm.interproc_region_lifetime.m"
    else
#line 530 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10;
#line 530 "rbmm.interproc_region_lifetime.m"
  }
#line 526 "rbmm.interproc_region_lifetime.m"
}

#line 513 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 513 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 513 "rbmm.interproc_region_lifetime.m"
{
#line 513 "rbmm.interproc_region_lifetime.m"
  {
#line 513 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 513 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16;

#line 513 "rbmm.interproc_region_lifetime.m"
    {
#line 513 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16);
    }
#line 513 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16));
#line 513 "rbmm.interproc_region_lifetime.m"
  }
#line 513 "rbmm.interproc_region_lifetime.m"
}

#line 490 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 490 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 490 "rbmm.interproc_region_lifetime.m"
{
#line 490 "rbmm.interproc_region_lifetime.m"
  {
#line 490 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 490 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11;

#line 490 "rbmm.interproc_region_lifetime.m"
    {
#line 490 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11);
    }
#line 490 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11));
#line 490 "rbmm.interproc_region_lifetime.m"
  }
#line 490 "rbmm.interproc_region_lifetime.m"
}

#line 467 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 467 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8)
#line 467 "rbmm.interproc_region_lifetime.m"
{
#line 471 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 471 "rbmm.interproc_region_lifetime.m"
    {
#line 471 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 471 "rbmm.interproc_region_lifetime.m"
      {
#line 471 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 471 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 471 "rbmm.interproc_region_lifetime.m"
        else
#line 474 "rbmm.interproc_region_lifetime.m"
          {
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17;
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Goal_18;
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Expr_26;
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53;
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime___Info_27;
#line 476 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28;
#line 476 "rbmm.interproc_region_lifetime.m"
            MR_Integer transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29;
#line 477 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_30_30;
#line 477 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_31_31;
#line 477 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 477 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_33_33;

#line 472 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_45_45, (MR_Integer) 0)));
#line 472 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_45_45, (MR_Integer) 1)));
#line 475 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Expr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_18, (MR_Integer) 0)));
#line 475 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime___Info_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_18, (MR_Integer) 1)));
#line 477 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Expr_26)) == (MR_mktag((MR_Integer) 2)));
#line 477 "rbmm.interproc_region_lifetime.m"
            if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 477 "rbmm.interproc_region_lifetime.m"
              {
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 0)));
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 1)));
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 2)));
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 3)));
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 4)));
#line 477 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 5)));
#line 479 "rbmm.interproc_region_lifetime.m"
                {
#line 479 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34;
#line 481 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_46_46;

#line 479 "rbmm.interproc_region_lifetime.m"
                  {
#line 479 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28));
#line 479 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29));
#line 479 "rbmm.interproc_region_lifetime.m"
                  }
#line 481 "rbmm.interproc_region_lifetime.m"
                  {
#line 481 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_46_46, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34));
#line 481 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "rbmm.interproc_region_lifetime.m"
                  }
#line 481 "rbmm.interproc_region_lifetime.m"
                  {
#line 481 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__V_46_46, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5);
                  }
#line 480 "rbmm.interproc_region_lifetime.m"
                  if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 480 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 480 "rbmm.interproc_region_lifetime.m"
                  else
#line 486 "rbmm.interproc_region_lifetime.m"
                    {
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rs_39;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_48_48;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_49_49;
#line 486 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime___Graph_p_36;
#line 488 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38;
#line 490 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39;
#line 495 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40;

#line 486 "rbmm.interproc_region_lifetime.m"
                      {
#line 486 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_2)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35);
                      }
#line 486 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35);
#line 487 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime___Graph_p_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35, (MR_Integer) 0)));
#line 487 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35, (MR_Integer) 1)));
#line 488 "rbmm.interproc_region_lifetime.m"
                      {
#line 488 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4], transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38);
                      }
#line 488 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38);
#line 490 "rbmm.interproc_region_lifetime.m"
                      {
#line 490 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 490 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[1]));
#line 490 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1));
#line 490 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 490 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3));
#line 490 "rbmm.interproc_region_lifetime.m"
                      }
#line 3510 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 491 "rbmm.interproc_region_lifetime.m"
                      {
#line 491 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__V_49_49 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63);
                      }
#line 3517 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 490 "rbmm.interproc_region_lifetime.m"
                      {
#line 490 "rbmm.interproc_region_lifetime.m"
                        mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__V_48_48, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_49_49)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39);
                      }
#line 490 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__Rs_39 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39);
#line 495 "rbmm.interproc_region_lifetime.m"
                      {
#line 495 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40);
                      }
#line 495 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40);
#line 497 "rbmm.interproc_region_lifetime.m"
                      {
#line 497 "rbmm.interproc_region_lifetime.m"
                        mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__Rs_39, &transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41);
                      }
#line 501 "rbmm.interproc_region_lifetime.m"
                      {
#line 501 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__equal_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41);
                      }
#line 500 "rbmm.interproc_region_lifetime.m"
                      if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 500 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 500 "rbmm.interproc_region_lifetime.m"
                      else
#line 508 "rbmm.interproc_region_lifetime.m"
                        {
#line 508 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42;
#line 508 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50;
#line 508 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_51_51;
#line 508 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_52_52;
#line 512 "rbmm.interproc_region_lifetime.m"
                          MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53;

#line 508 "rbmm.interproc_region_lifetime.m"
                          {
#line 508 "rbmm.interproc_region_lifetime.m"
                            mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50);
                          }
#line 509 "rbmm.interproc_region_lifetime.m"
                          {
#line 509 "rbmm.interproc_region_lifetime.m"
                            mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41, &transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42);
                          }
#line 513 "rbmm.interproc_region_lifetime.m"
                          {
#line 513 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1]));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5));
#line 513 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6));
#line 513 "rbmm.interproc_region_lifetime.m"
                          }
#line 515 "rbmm.interproc_region_lifetime.m"
                          {
#line 515 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_52_52 = mercury__set__to_sorted_list_1_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42);
                          }
#line 512 "rbmm.interproc_region_lifetime.m"
                          {
#line 512 "rbmm.interproc_region_lifetime.m"
                            mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_51_51, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50)), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53);
                          }
#line 512 "rbmm.interproc_region_lifetime.m"
                          transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53);
#line 508 "rbmm.interproc_region_lifetime.m"
                        }
#line 486 "rbmm.interproc_region_lifetime.m"
                    }
#line 479 "rbmm.interproc_region_lifetime.m"
                }
#line 477 "rbmm.interproc_region_lifetime.m"
              }
#line 477 "rbmm.interproc_region_lifetime.m"
            else
#line 476 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 523 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 523 "rbmm.interproc_region_lifetime.m"
            {
#line 523 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_19;
#line 523 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53;

#line 523 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7;
#line 523 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1;
#line 523 "rbmm.interproc_region_lifetime.m"
            }
#line 523 "rbmm.interproc_region_lifetime.m"
            continue;
#line 474 "rbmm.interproc_region_lifetime.m"
          }
#line 471 "rbmm.interproc_region_lifetime.m"
      }
#line 471 "rbmm.interproc_region_lifetime.m"
      break;
#line 471 "rbmm.interproc_region_lifetime.m"
    }
#line 467 "rbmm.interproc_region_lifetime.m"
}

#line 455 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_3,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 455 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8)
#line 455 "rbmm.interproc_region_lifetime.m"
{
#line 459 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 459 "rbmm.interproc_region_lifetime.m"
    {
#line 459 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 459 "rbmm.interproc_region_lifetime.m"
      {
#line 459 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 459 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 459 "rbmm.interproc_region_lifetime.m"
        else
#line 461 "rbmm.interproc_region_lifetime.m"
          {
#line 461 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPath_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 0)));
#line 461 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 461 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27;

#line 462 "rbmm.interproc_region_lifetime.m"
            {
#line 462 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(transform_hlds__rbmm__interproc_region_lifetime__ExecPath_17, transform_hlds__rbmm__interproc_region_lifetime__PPId_2, transform_hlds__rbmm__interproc_region_lifetime__Region_3, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27);
            }
#line 464 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 464 "rbmm.interproc_region_lifetime.m"
            {
#line 464 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_18;
#line 464 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27;

#line 464 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7;
#line 464 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1;
#line 464 "rbmm.interproc_region_lifetime.m"
            }
#line 464 "rbmm.interproc_region_lifetime.m"
            continue;
#line 461 "rbmm.interproc_region_lifetime.m"
          }
#line 459 "rbmm.interproc_region_lifetime.m"
      }
#line 459 "rbmm.interproc_region_lifetime.m"
      break;
#line 459 "rbmm.interproc_region_lifetime.m"
    }
#line 455 "rbmm.interproc_region_lifetime.m"
}

#line 437 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_8,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_12,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15,
#line 437 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16)
#line 437 "rbmm.interproc_region_lifetime.m"
{
#line 443 "rbmm.interproc_region_lifetime.m"
  {
#line 443 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 443 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14;
#line 445 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14;

#line 445 "rbmm.interproc_region_lifetime.m"
    {
#line 445 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3], transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_8)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14);
    }
#line 445 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14);
#line 449 "rbmm.interproc_region_lifetime.m"
    {
#line 449 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14, transform_hlds__rbmm__interproc_region_lifetime__PPId_8, transform_hlds__rbmm__interproc_region_lifetime__Region_12, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16);
    }
#line 443 "rbmm.interproc_region_lifetime.m"
  }
#line 437 "rbmm.interproc_region_lifetime.m"
}

#line 421 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime___Source_7,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 421 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14)
#line 421 "rbmm.interproc_region_lifetime.m"
{
#line 425 "rbmm.interproc_region_lifetime.m"
  {
#line 425 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 425 "rbmm.interproc_region_lifetime.m"
    {
#line 425 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__Target_8, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);
    }
#line 425 "rbmm.interproc_region_lifetime.m"
  }
#line 421 "rbmm.interproc_region_lifetime.m"
}

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 407 "rbmm.interproc_region_lifetime.m"
{
#line 407 "rbmm.interproc_region_lifetime.m"
  {
#line 407 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 407 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
    }
#line 407 "rbmm.interproc_region_lifetime.m"
  }
#line 407 "rbmm.interproc_region_lifetime.m"
}

#line 407 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 407 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 407 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 407 "rbmm.interproc_region_lifetime.m"
{
#line 407 "rbmm.interproc_region_lifetime.m"
  {
#line 407 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 407 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 407 "rbmm.interproc_region_lifetime.m"
      {
#line 407 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__407__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 407 "rbmm.interproc_region_lifetime.m"
    }
#line 407 "rbmm.interproc_region_lifetime.m"
  }
#line 407 "rbmm.interproc_region_lifetime.m"
}

#line 403 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 403 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11)
#line 403 "rbmm.interproc_region_lifetime.m"
{
#line 406 "rbmm.interproc_region_lifetime.m"
  {
#line 406 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 406 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 406 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 406 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 406 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2));
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 407 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 407 "rbmm.interproc_region_lifetime.m"
    }
#line 3908 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 407 "rbmm.interproc_region_lifetime.m"
    {
#line 407 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 409 "rbmm.interproc_region_lifetime.m"
    {
#line 409 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);
    }
#line 406 "rbmm.interproc_region_lifetime.m"
  }
#line 403 "rbmm.interproc_region_lifetime.m"
}

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 396 "rbmm.interproc_region_lifetime.m"
{
#line 396 "rbmm.interproc_region_lifetime.m"
  {
#line 396 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 396 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
    }
#line 396 "rbmm.interproc_region_lifetime.m"
  }
#line 396 "rbmm.interproc_region_lifetime.m"
}

#line 396 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 396 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 396 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 396 "rbmm.interproc_region_lifetime.m"
{
#line 396 "rbmm.interproc_region_lifetime.m"
  {
#line 396 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 396 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 396 "rbmm.interproc_region_lifetime.m"
      {
#line 396 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__396__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 396 "rbmm.interproc_region_lifetime.m"
    }
#line 396 "rbmm.interproc_region_lifetime.m"
  }
#line 396 "rbmm.interproc_region_lifetime.m"
}

#line 392 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 392 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11)
#line 392 "rbmm.interproc_region_lifetime.m"
{
#line 395 "rbmm.interproc_region_lifetime.m"
  {
#line 395 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 395 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 395 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 395 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 395 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2));
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 396 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 396 "rbmm.interproc_region_lifetime.m"
    }
#line 4037 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 396 "rbmm.interproc_region_lifetime.m"
    {
#line 396 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 398 "rbmm.interproc_region_lifetime.m"
    {
#line 398 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);
    }
#line 395 "rbmm.interproc_region_lifetime.m"
  }
#line 392 "rbmm.interproc_region_lifetime.m"
}

#line 374 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_9,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 374 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12)
#line 374 "rbmm.interproc_region_lifetime.m"
{
#line 378 "rbmm.interproc_region_lifetime.m"
  {
#line 378 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 378 "rbmm.interproc_region_lifetime.m"
    {
#line 378 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11, transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);
    }
#line 378 "rbmm.interproc_region_lifetime.m"
  }
#line 374 "rbmm.interproc_region_lifetime.m"
}

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 368 "rbmm.interproc_region_lifetime.m"
{
#line 368 "rbmm.interproc_region_lifetime.m"
  {
#line 368 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 368 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
    }
#line 368 "rbmm.interproc_region_lifetime.m"
  }
#line 368 "rbmm.interproc_region_lifetime.m"
}

#line 368 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 368 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 368 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 368 "rbmm.interproc_region_lifetime.m"
{
#line 368 "rbmm.interproc_region_lifetime.m"
  {
#line 368 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 368 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 368 "rbmm.interproc_region_lifetime.m"
      {
#line 368 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__368__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 368 "rbmm.interproc_region_lifetime.m"
    }
#line 368 "rbmm.interproc_region_lifetime.m"
  }
#line 368 "rbmm.interproc_region_lifetime.m"
}

#line 364 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 364 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11)
#line 364 "rbmm.interproc_region_lifetime.m"
{
#line 367 "rbmm.interproc_region_lifetime.m"
  {
#line 367 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 367 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 367 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 367 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 367 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2));
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 368 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 368 "rbmm.interproc_region_lifetime.m"
    }
#line 4198 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 368 "rbmm.interproc_region_lifetime.m"
    {
#line 368 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 370 "rbmm.interproc_region_lifetime.m"
    {
#line 370 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);
    }
#line 367 "rbmm.interproc_region_lifetime.m"
  }
#line 364 "rbmm.interproc_region_lifetime.m"
}

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 358 "rbmm.interproc_region_lifetime.m"
{
#line 358 "rbmm.interproc_region_lifetime.m"
  {
#line 358 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 358 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
    }
#line 358 "rbmm.interproc_region_lifetime.m"
  }
#line 358 "rbmm.interproc_region_lifetime.m"
}

#line 358 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 358 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 358 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 358 "rbmm.interproc_region_lifetime.m"
{
#line 358 "rbmm.interproc_region_lifetime.m"
  {
#line 358 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 358 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 358 "rbmm.interproc_region_lifetime.m"
      {
#line 358 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__358__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 358 "rbmm.interproc_region_lifetime.m"
    }
#line 358 "rbmm.interproc_region_lifetime.m"
  }
#line 358 "rbmm.interproc_region_lifetime.m"
}

#line 353 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 353 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11)
#line 353 "rbmm.interproc_region_lifetime.m"
{
#line 356 "rbmm.interproc_region_lifetime.m"
  {
#line 356 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 356 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 356 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 356 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 356 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2));
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 358 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 358 "rbmm.interproc_region_lifetime.m"
    }
#line 4327 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 358 "rbmm.interproc_region_lifetime.m"
    {
#line 358 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 362 "rbmm.interproc_region_lifetime.m"
    {
#line 362 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);
    }
#line 356 "rbmm.interproc_region_lifetime.m"
  }
#line 353 "rbmm.interproc_region_lifetime.m"
}

#line 351 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 351 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 351 "rbmm.interproc_region_lifetime.m"
{
#line 351 "rbmm.interproc_region_lifetime.m"
  {
#line 351 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 351 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11;

#line 351 "rbmm.interproc_region_lifetime.m"
    {
#line 351 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11);
    }
#line 351 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11));
#line 351 "rbmm.interproc_region_lifetime.m"
  }
#line 351 "rbmm.interproc_region_lifetime.m"
}

#line 418 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 418 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 418 "rbmm.interproc_region_lifetime.m"
{
#line 418 "rbmm.interproc_region_lifetime.m"
  {
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14;

#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14);
    }
#line 418 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12));
#line 418 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14));
#line 418 "rbmm.interproc_region_lifetime.m"
  }
#line 418 "rbmm.interproc_region_lifetime.m"
}

#line 346 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 346 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 346 "rbmm.interproc_region_lifetime.m"
{
#line 346 "rbmm.interproc_region_lifetime.m"
  {
#line 346 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 346 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11;

#line 346 "rbmm.interproc_region_lifetime.m"
    {
#line 346 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11);
    }
#line 346 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11));
#line 346 "rbmm.interproc_region_lifetime.m"
  }
#line 346 "rbmm.interproc_region_lifetime.m"
}

#line 335 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11,
#line 335 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12)
#line 335 "rbmm.interproc_region_lifetime.m"
{
#line 339 "rbmm.interproc_region_lifetime.m"
  {
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Targets_16;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_17_17;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 339 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_33_33;
#line 341 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13;
#line 346 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Processed_30;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30;
#line 418 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16;
#line 351 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12;

#line 341 "rbmm.interproc_region_lifetime.m"
    {
#line 341 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13);
    }
#line 341 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13);
#line 4520 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 345 "rbmm.interproc_region_lifetime.m"
    {
#line 345 "rbmm.interproc_region_lifetime.m"
      mercury__set__intersect_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9, &transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14);
    }
#line 346 "rbmm.interproc_region_lifetime.m"
    {
#line 346 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 346 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 346 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1));
#line 346 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 346 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11));
#line 346 "rbmm.interproc_region_lifetime.m"
    }
#line 346 "rbmm.interproc_region_lifetime.m"
    {
#line 346 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__V_17_17, transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15);
    }
#line 346 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15);
#line 4548 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_33_33 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40);
    }
#line 4560 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 418 "rbmm.interproc_region_lifetime.m"
    {
#line 418 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[7], transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_32_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_33_33)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16);
    }
#line 418 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Processed_30 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30);
#line 418 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Targets_16 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16);
#line 351 "rbmm.interproc_region_lifetime.m"
    {
#line 351 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 351 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3));
#line 351 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 351 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11));
#line 351 "rbmm.interproc_region_lifetime.m"
    }
#line 351 "rbmm.interproc_region_lifetime.m"
    {
#line 351 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__Targets_16, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12);
    }
#line 351 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12);
#line 339 "rbmm.interproc_region_lifetime.m"
  }
#line 335 "rbmm.interproc_region_lifetime.m"
}

#line 219 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_16,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22,
#line 219 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23)
#line 219 "rbmm.interproc_region_lifetime.m"
{
#line 226 "rbmm.interproc_region_lifetime.m"
  {
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__EPs_19;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20;
#line 226 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21;
#line 229 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18;
#line 230 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19;
#line 231 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20;
#line 232 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21;

#line 229 "rbmm.interproc_region_lifetime.m"
    {
#line 229 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18);
    }
#line 229 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18);
#line 230 "rbmm.interproc_region_lifetime.m"
    {
#line 230 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3], transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19);
    }
#line 230 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__EPs_19 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19);
#line 4659 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 231 "rbmm.interproc_region_lifetime.m"
    {
#line 231 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20);
    }
#line 231 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20);
#line 232 "rbmm.interproc_region_lifetime.m"
    {
#line 232 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21);
    }
#line 232 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21);
#line 236 "rbmm.interproc_region_lifetime.m"
    {
#line 236 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(transform_hlds__rbmm__interproc_region_lifetime__Rule_10, transform_hlds__rbmm__interproc_region_lifetime__EPs_19, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11, transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23);
    }
#line 226 "rbmm.interproc_region_lifetime.m"
  }
#line 219 "rbmm.interproc_region_lifetime.m"
}

#line 203 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 203 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 203 "rbmm.interproc_region_lifetime.m"
{
#line 203 "rbmm.interproc_region_lifetime.m"
  {
#line 203 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 203 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23;

#line 203 "rbmm.interproc_region_lifetime.m"
    {
#line 203 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23);
    }
#line 203 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23));
#line 203 "rbmm.interproc_region_lifetime.m"
  }
#line 203 "rbmm.interproc_region_lifetime.m"
}

#line 194 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_11,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19,
#line 194 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20)
#line 194 "rbmm.interproc_region_lifetime.m"
{
#line 201 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 201 "rbmm.interproc_region_lifetime.m"
    {
#line 201 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 201 "rbmm.interproc_region_lifetime.m"
      {
#line 201 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 201 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;
#line 201 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_21_21;
#line 203 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18;

#line 203 "rbmm.interproc_region_lifetime.m"
        {
#line 203 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[1]));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Rule_10));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15));
#line 203 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16));
#line 203 "rbmm.interproc_region_lifetime.m"
        }
#line 203 "rbmm.interproc_region_lifetime.m"
        {
#line 203 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_21_21, transform_hlds__rbmm__interproc_region_lifetime__SCC_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18);
        }
#line 203 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18);
#line 207 "rbmm.interproc_region_lifetime.m"
        {
#line 207 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19);
        }
#line 212 "rbmm.interproc_region_lifetime.m"
        if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 211 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20 = transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;
#line 212 "rbmm.interproc_region_lifetime.m"
        else
#line 214 "rbmm.interproc_region_lifetime.m"
          {
#line 214 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 214 "rbmm.interproc_region_lifetime.m"
            {
#line 214 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_19 = transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;

#line 214 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_19;
#line 214 "rbmm.interproc_region_lifetime.m"
            }
#line 214 "rbmm.interproc_region_lifetime.m"
            continue;
#line 214 "rbmm.interproc_region_lifetime.m"
          }
#line 201 "rbmm.interproc_region_lifetime.m"
      }
#line 201 "rbmm.interproc_region_lifetime.m"
      break;
#line 201 "rbmm.interproc_region_lifetime.m"
    }
#line 194 "rbmm.interproc_region_lifetime.m"
}

#line 175 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_16,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18,
#line 175 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19)
#line 175 "rbmm.interproc_region_lifetime.m"
{
#line 186 "rbmm.interproc_region_lifetime.m"
  {
#line 186 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 184 "rbmm.interproc_region_lifetime.m"
    {
#line 184 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__SCC_16, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11);
    }
#line 186 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 186 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18;
#line 186 "rbmm.interproc_region_lifetime.m"
    else
#line 189 "rbmm.interproc_region_lifetime.m"
      {
#line 189 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(transform_hlds__rbmm__interproc_region_lifetime__Rule_10, transform_hlds__rbmm__interproc_region_lifetime__SCC_16, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19);
      }
#line 186 "rbmm.interproc_region_lifetime.m"
  }
#line 175 "rbmm.interproc_region_lifetime.m"
}

#line 171 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2(
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 171 "rbmm.interproc_region_lifetime.m"
{
#line 171 "rbmm.interproc_region_lifetime.m"
  {
#line 171 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 171 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19;

#line 171 "rbmm.interproc_region_lifetime.m"
    {
#line 171 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19);
    }
#line 171 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19));
#line 171 "rbmm.interproc_region_lifetime.m"
  }
#line 171 "rbmm.interproc_region_lifetime.m"
}

#line 4906 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_1(
#line 4909 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 4911 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 4913 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 4915 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 4917 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 4919 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 4921 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 4923 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 4925 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 4927 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 4929 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12;

#line 4932 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 4934 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12);
    }
#line 4937 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12));
#line 4939 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 4941 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 112 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14,
#line 112 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15)
#line 112 "rbmm.interproc_region_lifetime.m"
{
#line 118 "rbmm.interproc_region_lifetime.m"
  {
#line 118 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 118 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34;
#line 118 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35;

#line 145 "rbmm.interproc_region_lifetime.m"
    {
#line 145 "rbmm.interproc_region_lifetime.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8, &transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34);
    }
#line 146 "rbmm.interproc_region_lifetime.m"
    {
#line 146 "rbmm.interproc_region_lifetime.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34, &transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35);
    }
#line 154 "rbmm.interproc_region_lifetime.m"
    if ((transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "rbmm.interproc_region_lifetime.m"
      {
#line 156 "rbmm.interproc_region_lifetime.m"
        {
#line 156 "rbmm.interproc_region_lifetime.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.interproc_region_lifetime", (MR_String) "predicate \140transform_hlds.rbmm.interproc_region_lifetime.apply_live_region_rule\'/8", (MR_String) "no dependency info");
#line 156 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 155 "rbmm.interproc_region_lifetime.m"
      }
#line 154 "rbmm.interproc_region_lifetime.m"
    else
#line 148 "rbmm.interproc_region_lifetime.m"
      {
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35, (MR_Integer) 0)));
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__Deps1_54;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_55_55;
#line 170 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15;

#line 149 "rbmm.interproc_region_lifetime.m"
        {
#line 149 "rbmm.interproc_region_lifetime.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__DepInfo_36, &transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37);
        }
#line 5017 "transform_hlds.rbmm.interproc_region_lifetime.c"
        transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1];
#line 169 "rbmm.interproc_region_lifetime.m"
        {
#line 169 "rbmm.interproc_region_lifetime.m"
          mercury__list__reverse_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57, transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37, &transform_hlds__rbmm__interproc_region_lifetime__Deps1_54);
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        {
#line 171 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[0]));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[6]));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12));
#line 171 "rbmm.interproc_region_lifetime.m"
        }
#line 170 "rbmm.interproc_region_lifetime.m"
        {
#line 170 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_55_55, transform_hlds__rbmm__interproc_region_lifetime__Deps1_54, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15);
        }
#line 170 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15);
#line 148 "rbmm.interproc_region_lifetime.m"
      }
#line 118 "rbmm.interproc_region_lifetime.m"
  }
#line 112 "rbmm.interproc_region_lifetime.m"
}

#line 94 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_11,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_12,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20,
#line 94 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21)
#line 94 "rbmm.interproc_region_lifetime.m"
{
#line 100 "rbmm.interproc_region_lifetime.m"
  {
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputR_14;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputR_15;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_16;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18;
#line 100 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14;
#line 102 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15;
#line 103 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16;

#line 101 "rbmm.interproc_region_lifetime.m"
    {
#line 101 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14);
    }
#line 101 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__InputR_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14);
#line 102 "rbmm.interproc_region_lifetime.m"
    {
#line 102 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15);
    }
#line 102 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__OutputR_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15);
#line 103 "rbmm.interproc_region_lifetime.m"
    {
#line 103 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16);
    }
#line 103 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_16 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16);
#line 5131 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 104 "rbmm.interproc_region_lifetime.m"
    {
#line 104 "rbmm.interproc_region_lifetime.m"
      mercury__set__union_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputR_14, transform_hlds__rbmm__interproc_region_lifetime__OutputR_15, &transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17);
    }
#line 105 "rbmm.interproc_region_lifetime.m"
    {
#line 105 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17, transform_hlds__rbmm__interproc_region_lifetime__BornR_16, &transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18);
    }
#line 106 "rbmm.interproc_region_lifetime.m"
    {
#line 106 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18, transform_hlds__rbmm__interproc_region_lifetime__DeadR_12, &transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19);
    }
#line 107 "rbmm.interproc_region_lifetime.m"
    {
#line 107 "rbmm.interproc_region_lifetime.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21);
    }
#line 100 "rbmm.interproc_region_lifetime.m"
  }
#line 94 "rbmm.interproc_region_lifetime.m"
}

#line 555 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 555 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 555 "rbmm.interproc_region_lifetime.m"
{
#line 555 "rbmm.interproc_region_lifetime.m"
  {
#line 555 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 555 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17;

#line 555 "rbmm.interproc_region_lifetime.m"
    {
#line 555 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17);
    }
#line 555 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17));
#line 555 "rbmm.interproc_region_lifetime.m"
  }
#line 555 "rbmm.interproc_region_lifetime.m"
}

#line 546 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 546 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 546 "rbmm.interproc_region_lifetime.m"
{
#line 546 "rbmm.interproc_region_lifetime.m"
  {
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17;

#line 546 "rbmm.interproc_region_lifetime.m"
    {
#line 546 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17);
    }
#line 546 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17));
#line 546 "rbmm.interproc_region_lifetime.m"
  }
#line 546 "rbmm.interproc_region_lifetime.m"
}

#line 47 "rbmm.interproc_region_lifetime.m"
void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0(
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_17,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_18,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_26,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_27,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_28,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_29,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_30,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_31,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_0_32,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_33,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_0_34,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_35,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_0_36,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_37,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_0_38,
#line 47 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_39)
#line 47 "rbmm.interproc_region_lifetime.m"
{
#line 545 "rbmm.interproc_region_lifetime.m"
  {
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_40_40;
#line 545 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_52_52;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27;
#line 548 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29;
#line 550 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31;
#line 552 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33;
#line 555 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35;
#line 557 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37;
#line 559 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39;

#line 546 "rbmm.interproc_region_lifetime.m"
    {
#line 546 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[1]));
#line 546 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1));
#line 546 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 546 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_17));
#line 546 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_18));
#line 546 "rbmm.interproc_region_lifetime.m"
    }
#line 5312 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 5314 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 5316 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0];
#line 546 "rbmm.interproc_region_lifetime.m"
    {
#line 546 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_26, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_26)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27);
    }
#line 546 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_27 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27);
#line 548 "rbmm.interproc_region_lifetime.m"
    {
#line 548 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_28, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_28)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29);
    }
#line 548 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_29 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29);
#line 550 "rbmm.interproc_region_lifetime.m"
    {
#line 550 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_30, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_30)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31);
    }
#line 550 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_31 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31);
#line 552 "rbmm.interproc_region_lifetime.m"
    {
#line 552 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_0_32, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_0_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33);
    }
#line 552 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_33 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33);
#line 555 "rbmm.interproc_region_lifetime.m"
    {
#line 555 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 555 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[2]));
#line 555 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2));
#line 555 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 555 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_17));
#line 555 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_18));
#line 555 "rbmm.interproc_region_lifetime.m"
    }
#line 5362 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 5364 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[2];
#line 555 "rbmm.interproc_region_lifetime.m"
    {
#line 555 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_0_34, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_0_34)), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35);
    }
#line 555 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_35 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35);
#line 557 "rbmm.interproc_region_lifetime.m"
    {
#line 557 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_0_36, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_0_36)), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37);
    }
#line 557 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_37 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37);
#line 559 "rbmm.interproc_region_lifetime.m"
    {
#line 559 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_0_38, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_0_38)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39);
    }
#line 559 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_39 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39);
#line 545 "rbmm.interproc_region_lifetime.m"
  }
#line 47 "rbmm.interproc_region_lifetime.m"
}

#line 91 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 91 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 91 "rbmm.interproc_region_lifetime.m"
{
#line 91 "rbmm.interproc_region_lifetime.m"
  {
#line 91 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 91 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21;

#line 91 "rbmm.interproc_region_lifetime.m"
    {
#line 91 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21);
    }
#line 91 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21));
#line 91 "rbmm.interproc_region_lifetime.m"
  }
#line 91 "rbmm.interproc_region_lifetime.m"
}

#line 171 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 171 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 171 "rbmm.interproc_region_lifetime.m"
{
#line 171 "rbmm.interproc_region_lifetime.m"
  {
#line 171 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 171 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19;

#line 171 "rbmm.interproc_region_lifetime.m"
    {
#line 171 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19);
    }
#line 171 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19));
#line 171 "rbmm.interproc_region_lifetime.m"
  }
#line 171 "rbmm.interproc_region_lifetime.m"
}

#line 5458 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
#line 5461 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 5463 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 5465 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 5467 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 5469 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 5471 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 5473 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 5475 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 5477 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 5479 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 5481 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12;

#line 5484 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 5486 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12);
    }
#line 5489 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12));
#line 5491 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 5493 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 34 "rbmm.interproc_region_lifetime.m"
void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0(
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_13,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_14,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_15,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_16,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_17,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputRTable_18,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_19,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__ConstantRTable_20,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_23,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_24,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_25,
#line 34 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_26)
#line 34 "rbmm.interproc_region_lifetime.m"
{
#line 85 "rbmm.interproc_region_lifetime.m"
  {
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_29_29;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_30_30;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64;
#line 85 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65;
#line 91 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20;

#line 145 "rbmm.interproc_region_lifetime.m"
    {
#line 145 "rbmm.interproc_region_lifetime.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_13, &transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64);
    }
#line 146 "rbmm.interproc_region_lifetime.m"
    {
#line 146 "rbmm.interproc_region_lifetime.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64, &transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65);
    }
#line 154 "rbmm.interproc_region_lifetime.m"
    if ((transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "rbmm.interproc_region_lifetime.m"
      {
#line 156 "rbmm.interproc_region_lifetime.m"
        {
#line 156 "rbmm.interproc_region_lifetime.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.interproc_region_lifetime", (MR_String) "predicate \140transform_hlds.rbmm.interproc_region_lifetime.apply_live_region_rule\'/8", (MR_String) "no dependency info");
#line 156 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 155 "rbmm.interproc_region_lifetime.m"
      }
#line 154 "rbmm.interproc_region_lifetime.m"
    else
#line 148 "rbmm.interproc_region_lifetime.m"
      {
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65, (MR_Integer) 0)));
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__Deps1_84;
#line 148 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_85_85;
#line 170 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24;

#line 149 "rbmm.interproc_region_lifetime.m"
        {
#line 149 "rbmm.interproc_region_lifetime.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__DepInfo_66, &transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67);
        }
#line 5589 "transform_hlds.rbmm.interproc_region_lifetime.c"
        transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1];
#line 169 "rbmm.interproc_region_lifetime.m"
        {
#line 169 "rbmm.interproc_region_lifetime.m"
          mercury__list__reverse_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87, transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67, &transform_hlds__rbmm__interproc_region_lifetime__Deps1_84);
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        {
#line 171 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[0]));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[5]));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_14));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_15));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_16));
#line 171 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_17));
#line 171 "rbmm.interproc_region_lifetime.m"
        }
#line 170 "rbmm.interproc_region_lifetime.m"
        {
#line 170 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_85_85, transform_hlds__rbmm__interproc_region_lifetime__Deps1_84, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_23)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24);
        }
#line 170 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_24 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24);
#line 148 "rbmm.interproc_region_lifetime.m"
      }
#line 89 "rbmm.interproc_region_lifetime.m"
    {
#line 89 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_13, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_14, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_15, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_16, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_17, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_25, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_26);
    }
#line 91 "rbmm.interproc_region_lifetime.m"
    {
#line 91 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3));
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__InputRTable_18));
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_19));
#line 91 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 5) = ((MR_Box) (*transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_24));
#line 91 "rbmm.interproc_region_lifetime.m"
    }
#line 5652 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 5654 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 92 "rbmm.interproc_region_lifetime.m"
    {
#line 92 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_30_30 = mercury__map__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36);
    }
#line 91 "rbmm.interproc_region_lifetime.m"
    {
#line 91 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_29_29, *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_26, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_30_30)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20);
    }
#line 91 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__ConstantRTable_20 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20);
#line 85 "rbmm.interproc_region_lifetime.m"
  }
#line 34 "rbmm.interproc_region_lifetime.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.interproc_region_lifetime. */
