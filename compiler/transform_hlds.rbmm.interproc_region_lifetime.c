/*
** Automatically generated from `rbmm.interproc_region_lifetime.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
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



#line 408 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0_s {
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__HeadVar__3_14;
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont;
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont_env_ptr;
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 408 "rbmm.interproc_region_lifetime.m"
};

#line 397 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0_s {
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__HeadVar__3_14;
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont;
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont_env_ptr;
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 397 "rbmm.interproc_region_lifetime.m"
};

#line 369 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0_s {
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__HeadVar__3_14;
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont;
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont_env_ptr;
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 369 "rbmm.interproc_region_lifetime.m"
};

#line 359 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0_s {
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__HeadVar__3_14;
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont;
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont_env_ptr;
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__conv0_HeadVar__3_14;
#line 359 "rbmm.interproc_region_lifetime.m"
};

#line 408 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s {
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont;
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 408 "rbmm.interproc_region_lifetime.m"
};

#line 397 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s {
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont;
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 397 "rbmm.interproc_region_lifetime.m"
};

#line 369 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s {
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1;
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont;
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr;
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 369 "rbmm.interproc_region_lifetime.m"
};

#line 359 "rbmm.interproc_region_lifetime.m"
struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s {
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1;
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont;
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr;
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14;
#line 359 "rbmm.interproc_region_lifetime.m"
};


#line 257 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 260 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 263 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 266 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 269 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 272 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 275 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_PseudoTypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vpti_pred_6__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 278 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

#line 281 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 284 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 287 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 290 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 293 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 296 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 299 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 302 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 305 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_VA_TypeInfo_Struct6 transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 308 "transform_hlds.rbmm.interproc_region_lifetime.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
#line 311 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 313 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2);

#line 316 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
#line 319 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 321 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 323 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 422 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);

#line 390 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 419 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 385 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 375 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);

#line 310 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 262 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11);

#line 241 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11);

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_1(
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0(
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_1(
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0(
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_1(
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0(
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_1(
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0(
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 133 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3);

#line 133 "rbmm.interproc_region_lifetime.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2);

#line 608 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 602 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_8,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14);

#line 598 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 590 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17);

#line 577 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_7,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_8,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12);

#line 573 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 565 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17);

#line 527 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Source_7,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11);

#line 514 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 491 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 468 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8);

#line 456 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_3,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8);

#line 438 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_8,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_12,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16);

#line 422 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime___Source_7,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 404 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 393 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);

#line 375 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_9,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 365 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg);

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr);

#line 354 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);

#line 352 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 419 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 347 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 336 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12);

#line 220 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_16,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23);

#line 204 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 195 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_11,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20);

#line 176 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_16,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19);

#line 172 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2(
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 1052 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_1(
#line 1055 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 1057 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1059 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1061 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 1063 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 1065 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 1067 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6);

#line 113 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15);

#line 95 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_11,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_12,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21);

#line 556 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 547 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 92 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4);

#line 172 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3);

#line 1160 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
#line 1163 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 1165 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1167 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1169 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 1171 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 1173 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 1175 "transform_hlds.rbmm.interproc_region_lifetime.c"
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



#line 1481 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1489 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1497 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1506 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1515 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1524 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
    (MR_TypeInfo) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1533 "transform_hlds.rbmm.interproc_region_lifetime.c"
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

#line 1547 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
  }
};

#line 1556 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1565 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1573 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1581 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1590 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1599 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1608 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__interproc_region_lifetime__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1616 "transform_hlds.rbmm.interproc_region_lifetime.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__interproc_region_lifetime__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  }
};

#line 1625 "transform_hlds.rbmm.interproc_region_lifetime.c"
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

#line 1639 "transform_hlds.rbmm.interproc_region_lifetime.c"
const MR_TypeCtorInfo_Struct transform_hlds__rbmm__interproc_region_lifetime__transform_hlds__rbmm__interproc_region_lifetime__type_ctor_info_rule_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.interproc_region_lifetime",
  (MR_String) "rule_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__interproc_region_lifetime____vti_pred_6hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1660 "transform_hlds.rbmm.interproc_region_lifetime.c"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0_10001(
#line 1663 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1665 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2)
#line 1667 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 1669 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 1671 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 1674 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 1676 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2));
    }
#line 1679 "transform_hlds.rbmm.interproc_region_lifetime.c"
    return transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 1681 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 1683 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 1686 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0_10001(
#line 1689 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 1691 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 1693 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 1695 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 1697 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 1699 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1;

#line 1702 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 1704 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(&transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3));
    }
#line 1707 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_HeadVar__1_1));
#line 1709 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 1711 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 422 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14)
#line 422 "rbmm.interproc_region_lifetime.m"
{
#line 430 "rbmm.interproc_region_lifetime.m"
  {
#line 430 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 427 "rbmm.interproc_region_lifetime.m"
    {
#line 427 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__contains_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)));
    }
#line 430 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 429 "rbmm.interproc_region_lifetime.m"
      {
#line 429 "rbmm.interproc_region_lifetime.m"
        {
#line 429 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);
        }
#line 429 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11;
#line 429 "rbmm.interproc_region_lifetime.m"
      }
#line 430 "rbmm.interproc_region_lifetime.m"
    else
#line 431 "rbmm.interproc_region_lifetime.m"
      {
#line 431 "rbmm.interproc_region_lifetime.m"
        {
#line 431 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Target_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12);
        }
#line 431 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13;
#line 431 "rbmm.interproc_region_lifetime.m"
      }
#line 430 "rbmm.interproc_region_lifetime.m"
  }
#line 422 "rbmm.interproc_region_lifetime.m"
}

#line 390 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3(
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 390 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 390 "rbmm.interproc_region_lifetime.m"
{
#line 390 "rbmm.interproc_region_lifetime.m"
  {
#line 390 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 390 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11;

#line 390 "rbmm.interproc_region_lifetime.m"
    {
#line 390 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11);
    }
#line 390 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_BornR_q_11));
#line 390 "rbmm.interproc_region_lifetime.m"
  }
#line 390 "rbmm.interproc_region_lifetime.m"
}

#line 419 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_2(
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 419 "rbmm.interproc_region_lifetime.m"
{
#line 419 "rbmm.interproc_region_lifetime.m"
  {
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14;

#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12));
#line 419 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14));
#line 419 "rbmm.interproc_region_lifetime.m"
  }
#line 419 "rbmm.interproc_region_lifetime.m"
}

#line 385 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1(
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 385 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 385 "rbmm.interproc_region_lifetime.m"
{
#line 385 "rbmm.interproc_region_lifetime.m"
  {
#line 385 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 385 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11;

#line 385 "rbmm.interproc_region_lifetime.m"
    {
#line 385 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11);
    }
#line 385 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornR_q_11));
#line 385 "rbmm.interproc_region_lifetime.m"
  }
#line 385 "rbmm.interproc_region_lifetime.m"
}

#line 375 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12)
#line 375 "rbmm.interproc_region_lifetime.m"
{
#line 379 "rbmm.interproc_region_lifetime.m"
  {
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Targets_15;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_16_16;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_17_17;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_31_31;
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 381 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13;
#line 385 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Processed_29;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15;
#line 390 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12;

#line 381 "rbmm.interproc_region_lifetime.m"
    {
#line 381 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13);
    }
#line 381 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q0_13);
#line 385 "rbmm.interproc_region_lifetime.m"
    {
#line 385 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 385 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_1));
#line 385 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 385 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11));
#line 385 "rbmm.interproc_region_lifetime.m"
    }
#line 1951 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 385 "rbmm.interproc_region_lifetime.m"
    {
#line 385 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__V_16_16, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__BornR_q0_13)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14);
    }
#line 385 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_q1_14);
#line 1960 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_31_31 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39);
    }
#line 420 "rbmm.interproc_region_lifetime.m"
    {
#line 420 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39);
    }
#line 1972 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_39, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_40, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[8], transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_31_31)), &transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_32_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Processed_29 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_29);
#line 419 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Targets_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_15);
#line 390 "rbmm.interproc_region_lifetime.m"
    {
#line 390 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 390 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0_3));
#line 390 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11));
#line 390 "rbmm.interproc_region_lifetime.m"
    }
#line 390 "rbmm.interproc_region_lifetime.m"
    {
#line 390 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_19_19, transform_hlds__rbmm__interproc_region_lifetime__V_17_17, transform_hlds__rbmm__interproc_region_lifetime__Targets_15, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__BornR_q1_14)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12);
    }
#line 390 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_BornR_q_12);
#line 379 "rbmm.interproc_region_lifetime.m"
  }
#line 375 "rbmm.interproc_region_lifetime.m"
}

#line 310 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1(
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 310 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 310 "rbmm.interproc_region_lifetime.m"
{
#line 310 "rbmm.interproc_region_lifetime.m"
  {
#line 310 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 310 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16;

#line 310 "rbmm.interproc_region_lifetime.m"
    {
#line 310 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16);
    }
#line 310 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_16));
#line 310 "rbmm.interproc_region_lifetime.m"
  }
#line 310 "rbmm.interproc_region_lifetime.m"
}

#line 262 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 262 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11)
#line 262 "rbmm.interproc_region_lifetime.m"
{
#line 268 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 268 "rbmm.interproc_region_lifetime.m"
    {
#line 268 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 268 "rbmm.interproc_region_lifetime.m"
      {
#line 268 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 268 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 268 "rbmm.interproc_region_lifetime.m"
        else
#line 272 "rbmm.interproc_region_lifetime.m"
          {
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24;
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Goal_25;
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 1)));
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Expr_35;
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60;
#line 273 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_36_36;
#line 315 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37;
#line 315 "rbmm.interproc_region_lifetime.m"
            MR_Integer transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38;
#line 277 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_39_39;
#line 277 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_40_40;
#line 277 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_41_41;
#line 277 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_42_42;

#line 270 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_54_54, (MR_Integer) 0)));
#line 270 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_54_54, (MR_Integer) 1)));
#line 273 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_25, (MR_Integer) 0)));
#line 273 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_25, (MR_Integer) 1)));
#line 277 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Expr_35)) == (MR_mktag((MR_Integer) 2)));
#line 277 "rbmm.interproc_region_lifetime.m"
            if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 277 "rbmm.interproc_region_lifetime.m"
              {
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 0)));
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 1)));
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 2)));
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 3)));
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 4)));
#line 277 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_35, (MR_Integer) 5)));
#line 279 "rbmm.interproc_region_lifetime.m"
                {
#line 279 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43;
#line 281 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_55_55;

#line 279 "rbmm.interproc_region_lifetime.m"
                  {
#line 279 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_37));
#line 279 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_38));
#line 279 "rbmm.interproc_region_lifetime.m"
                  }
#line 281 "rbmm.interproc_region_lifetime.m"
                  {
#line 281 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43));
#line 281 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "rbmm.interproc_region_lifetime.m"
                  }
#line 281 "rbmm.interproc_region_lifetime.m"
                  {
#line 281 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__V_55_55, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4);
                  }
#line 284 "rbmm.interproc_region_lifetime.m"
                  if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 284 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 284 "rbmm.interproc_region_lifetime.m"
                  else
#line 285 "rbmm.interproc_region_lifetime.m"
                    {
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, (MR_Integer) 1)));
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50;
#line 285 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, (MR_Integer) 0)));
#line 286 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46;
#line 288 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47;
#line 289 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48;
#line 292 "rbmm.interproc_region_lifetime.m"
                      void MR_CALL (* transform_hlds__rbmm__interproc_region_lifetime__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 292 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49;
#line 295 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50;

#line 286 "rbmm.interproc_region_lifetime.m"
                      {
#line 286 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4], transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_45, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46);
                      }
#line 286 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_AlphaAtProgPoint_46);
#line 2218 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 288 "rbmm.interproc_region_lifetime.m"
                      {
#line 288 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47);
                      }
#line 288 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_LRBefore_47);
#line 289 "rbmm.interproc_region_lifetime.m"
                      {
#line 289 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_62_62, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_24)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48);
                      }
#line 289 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_LRAfter_48);
#line 292 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "rbmm.interproc_region_lifetime.m"
                      {
#line 292 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__func_3(((MR_Box) transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBefore_47)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfter_48)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtProgPoint_46)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49);
                      }
#line 292 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet_49);
#line 2243 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 295 "rbmm.interproc_region_lifetime.m"
                      {
#line 295 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50);
                      }
#line 295 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_RegionSet0_50);
#line 297 "rbmm.interproc_region_lifetime.m"
                      {
#line 297 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__equal_2_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50);
                      }
#line 302 "rbmm.interproc_region_lifetime.m"
                      if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 302 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 302 "rbmm.interproc_region_lifetime.m"
                      else
#line 304 "rbmm.interproc_region_lifetime.m"
                        {
#line 304 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67;
#line 304 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51;
#line 304 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57;
#line 304 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_58_58;
#line 304 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_59_59;
#line 309 "rbmm.interproc_region_lifetime.m"
                          MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60;

#line 304 "rbmm.interproc_region_lifetime.m"
                          {
#line 304 "rbmm.interproc_region_lifetime.m"
                            mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57);
                          }
#line 2283 "transform_hlds.rbmm.interproc_region_lifetime.c"
                          transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 308 "rbmm.interproc_region_lifetime.m"
                          {
#line 308 "rbmm.interproc_region_lifetime.m"
                            mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_50, transform_hlds__rbmm__interproc_region_lifetime__RegionSet_49, &transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51);
                          }
#line 310 "rbmm.interproc_region_lifetime.m"
                          {
#line 310 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1]));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0_1));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_43));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4));
#line 310 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_58_58, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7));
#line 310 "rbmm.interproc_region_lifetime.m"
                          }
#line 312 "rbmm.interproc_region_lifetime.m"
                          {
#line 312 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_59_59 = mercury__set__to_sorted_list_1_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__ToBeRemoved_51);
                          }
#line 309 "rbmm.interproc_region_lifetime.m"
                          {
#line 309 "rbmm.interproc_region_lifetime.m"
                            mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_67_67, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_58_58, transform_hlds__rbmm__interproc_region_lifetime__V_59_59, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_57_57)), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60);
                          }
#line 309 "rbmm.interproc_region_lifetime.m"
                          transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_ProcRegionSetTable_60_60);
#line 304 "rbmm.interproc_region_lifetime.m"
                        }
#line 285 "rbmm.interproc_region_lifetime.m"
                    }
#line 279 "rbmm.interproc_region_lifetime.m"
                }
#line 277 "rbmm.interproc_region_lifetime.m"
              }
#line 277 "rbmm.interproc_region_lifetime.m"
            else
#line 315 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 319 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 319 "rbmm.interproc_region_lifetime.m"
            {
#line 319 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_26;
#line 319 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_60_60;

#line 319 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10;
#line 319 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2;
#line 319 "rbmm.interproc_region_lifetime.m"
            }
#line 319 "rbmm.interproc_region_lifetime.m"
            continue;
#line 272 "rbmm.interproc_region_lifetime.m"
          }
#line 268 "rbmm.interproc_region_lifetime.m"
      }
#line 268 "rbmm.interproc_region_lifetime.m"
      break;
#line 268 "rbmm.interproc_region_lifetime.m"
    }
#line 262 "rbmm.interproc_region_lifetime.m"
}

#line 241 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10,
#line 241 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11)
#line 241 "rbmm.interproc_region_lifetime.m"
{
#line 247 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 247 "rbmm.interproc_region_lifetime.m"
    {
#line 247 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 247 "rbmm.interproc_region_lifetime.m"
      {
#line 247 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 247 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10;
#line 247 "rbmm.interproc_region_lifetime.m"
        else
#line 251 "rbmm.interproc_region_lifetime.m"
          {
#line 251 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPath_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36;

#line 252 "rbmm.interproc_region_lifetime.m"
            {
#line 252 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_95_95_91_53_93_95_48_11_p_0(transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, transform_hlds__rbmm__interproc_region_lifetime__ExecPath_24, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_3, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_4, transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_6, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_7, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36);
            }
#line 255 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 255 "rbmm.interproc_region_lifetime.m"
            {
#line 255 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_25;
#line 255 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_36_36;

#line 255 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_10 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_10;
#line 255 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2__tmp_copy_2;
#line 255 "rbmm.interproc_region_lifetime.m"
            }
#line 255 "rbmm.interproc_region_lifetime.m"
            continue;
#line 251 "rbmm.interproc_region_lifetime.m"
          }
#line 247 "rbmm.interproc_region_lifetime.m"
      }
#line 247 "rbmm.interproc_region_lifetime.m"
      break;
#line 247 "rbmm.interproc_region_lifetime.m"
    }
#line 241 "rbmm.interproc_region_lifetime.m"
}

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_1(
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 408 "rbmm.interproc_region_lifetime.m"
{
#line 408 "rbmm.interproc_region_lifetime.m"
  {
#line 408 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 408 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont_env_ptr);
#line 408 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 408 "rbmm.interproc_region_lifetime.m"
  }
#line 408 "rbmm.interproc_region_lifetime.m"
}

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0(
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 408 "rbmm.interproc_region_lifetime.m"
{
#line 408 "rbmm.interproc_region_lifetime.m"
  {
#line 408 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 408 "rbmm.interproc_region_lifetime.m"
      {
#line 408 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 408 "rbmm.interproc_region_lifetime.m"
    }
#line 408 "rbmm.interproc_region_lifetime.m"
  }
#line 408 "rbmm.interproc_region_lifetime.m"
}

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_1(
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 397 "rbmm.interproc_region_lifetime.m"
{
#line 397 "rbmm.interproc_region_lifetime.m"
  {
#line 397 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 397 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont_env_ptr);
#line 397 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 397 "rbmm.interproc_region_lifetime.m"
  }
#line 397 "rbmm.interproc_region_lifetime.m"
}

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0(
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 397 "rbmm.interproc_region_lifetime.m"
{
#line 397 "rbmm.interproc_region_lifetime.m"
  {
#line 397 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 397 "rbmm.interproc_region_lifetime.m"
      {
#line 397 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 397 "rbmm.interproc_region_lifetime.m"
    }
#line 397 "rbmm.interproc_region_lifetime.m"
  }
#line 397 "rbmm.interproc_region_lifetime.m"
}

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_1(
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 369 "rbmm.interproc_region_lifetime.m"
{
#line 369 "rbmm.interproc_region_lifetime.m"
  {
#line 369 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 369 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont_env_ptr);
#line 369 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 369 "rbmm.interproc_region_lifetime.m"
  }
#line 369 "rbmm.interproc_region_lifetime.m"
}

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0(
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 369 "rbmm.interproc_region_lifetime.m"
{
#line 369 "rbmm.interproc_region_lifetime.m"
  {
#line 369 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 369 "rbmm.interproc_region_lifetime.m"
      {
#line 369 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 369 "rbmm.interproc_region_lifetime.m"
    }
#line 369 "rbmm.interproc_region_lifetime.m"
  }
#line 369 "rbmm.interproc_region_lifetime.m"
}

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_1(
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 359 "rbmm.interproc_region_lifetime.m"
{
#line 359 "rbmm.interproc_region_lifetime.m"
  {
#line 359 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 359 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__conv0_HeadVar__3_14);
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont_env_ptr);
#line 359 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 359 "rbmm.interproc_region_lifetime.m"
  }
#line 359 "rbmm.interproc_region_lifetime.m"
}

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0(
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 359 "rbmm.interproc_region_lifetime.m"
{
#line 359 "rbmm.interproc_region_lifetime.m"
  {
#line 359 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_14;
#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

#line 359 "rbmm.interproc_region_lifetime.m"
      {
#line 359 "rbmm.interproc_region_lifetime.m"
        mercury__map__inverse_search_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_15, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6)), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 359 "rbmm.interproc_region_lifetime.m"
    }
#line 359 "rbmm.interproc_region_lifetime.m"
  }
#line 359 "rbmm.interproc_region_lifetime.m"
}

#line 133 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Compare____rule_pred_0_0(
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3)
#line 133 "rbmm.interproc_region_lifetime.m"
{
#line 133 "rbmm.interproc_region_lifetime.m"
  {
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_4 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2;
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_5 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_3;

#line 133 "rbmm.interproc_region_lifetime.m"
    {
#line 133 "rbmm.interproc_region_lifetime.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[0], transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_5)));
#line 133 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 133 "rbmm.interproc_region_lifetime.m"
  }
#line 133 "rbmm.interproc_region_lifetime.m"
}

#line 133 "rbmm.interproc_region_lifetime.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime____Unify____rule_pred_0_0(
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 133 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2)
#line 133 "rbmm.interproc_region_lifetime.m"
{
#line 133 "rbmm.interproc_region_lifetime.m"
  {
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_3 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1;
#line 133 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_4 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__2_2;

#line 133 "rbmm.interproc_region_lifetime.m"
    {
#line 133 "rbmm.interproc_region_lifetime.m"
      return transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar1_3, (MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Cast_HeadVar2_4);
    }
#line 133 "rbmm.interproc_region_lifetime.m"
    return transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 133 "rbmm.interproc_region_lifetime.m"
  }
#line 133 "rbmm.interproc_region_lifetime.m"
}

#line 608 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1(
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 608 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 608 "rbmm.interproc_region_lifetime.m"
{
#line 608 "rbmm.interproc_region_lifetime.m"
  {
#line 608 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 608 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12;

#line 608 "rbmm.interproc_region_lifetime.m"
    {
#line 608 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12);
    }
#line 608 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSet_12));
#line 608 "rbmm.interproc_region_lifetime.m"
  }
#line 608 "rbmm.interproc_region_lifetime.m"
}

#line 602 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_8,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13,
#line 602 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14)
#line 602 "rbmm.interproc_region_lifetime.m"
{
#line 607 "rbmm.interproc_region_lifetime.m"
  {
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_15_15;
#line 607 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_16_16;
#line 608 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12;

#line 608 "rbmm.interproc_region_lifetime.m"
    {
#line 608 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 608 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[2]));
#line 608 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0_1));
#line 608 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 608 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 608 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_15_15, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_8));
#line 608 "rbmm.interproc_region_lifetime.m"
    }
#line 2874 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 609 "rbmm.interproc_region_lifetime.m"
    {
#line 609 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21);
    }
#line 2881 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 608 "rbmm.interproc_region_lifetime.m"
    {
#line 608 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22, transform_hlds__rbmm__interproc_region_lifetime__V_15_15, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_16_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12);
    }
#line 608 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_RegionSet_12);
#line 610 "rbmm.interproc_region_lifetime.m"
    {
#line 610 "rbmm.interproc_region_lifetime.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_22_22, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_12)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRProc_14);
#line 610 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 607 "rbmm.interproc_region_lifetime.m"
  }
#line 602 "rbmm.interproc_region_lifetime.m"
}

#line 598 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1(
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 598 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 598 "rbmm.interproc_region_lifetime.m"
{
#line 598 "rbmm.interproc_region_lifetime.m"
  {
#line 598 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 598 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14;

#line 598 "rbmm.interproc_region_lifetime.m"
    {
#line 598 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_at_pp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14);
    }
#line 598 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_LRProc_14));
#line 598 "rbmm.interproc_region_lifetime.m"
  }
#line 598 "rbmm.interproc_region_lifetime.m"
}

#line 590 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16,
#line 590 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17)
#line 590 "rbmm.interproc_region_lifetime.m"
{
#line 595 "rbmm.interproc_region_lifetime.m"
  {
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_13;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRProc_15;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 595 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_19_19;
#line 596 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12;
#line 597 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Alpha_14;
#line 598 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15;

#line 596 "rbmm.interproc_region_lifetime.m"
    {
#line 596 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
    }
#line 596 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
#line 597 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Graph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 0)));
#line 597 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Alpha_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 1)));
#line 598 "rbmm.interproc_region_lifetime.m"
    {
#line 598 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 598 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[4]));
#line 598 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0_1));
#line 598 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 598 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 598 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_13));
#line 598 "rbmm.interproc_region_lifetime.m"
    }
#line 3009 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 3011 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 599 "rbmm.interproc_region_lifetime.m"
    {
#line 599 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_19_19 = mercury__map__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28);
    }
#line 3018 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 598 "rbmm.interproc_region_lifetime.m"
    {
#line 598 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__LRProc0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_19_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15);
    }
#line 598 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__LRProc_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_LRProc_15);
#line 600 "rbmm.interproc_region_lifetime.m"
    {
#line 600 "rbmm.interproc_region_lifetime.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_29_29, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRProc_15)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_0_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRTable_17);
#line 600 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 595 "rbmm.interproc_region_lifetime.m"
  }
#line 590 "rbmm.interproc_region_lifetime.m"
}

#line 577 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_7,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_8,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11,
#line 577 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12)
#line 577 "rbmm.interproc_region_lifetime.m"
{
#line 580 "rbmm.interproc_region_lifetime.m"
  {
#line 580 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 580 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__NodeType_10;

#line 581 "rbmm.interproc_region_lifetime.m"
    {
#line 581 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__NodeType_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(transform_hlds__rbmm__interproc_region_lifetime__Graph_7, transform_hlds__rbmm__interproc_region_lifetime__Region_8);
    }
#line 582 "rbmm.interproc_region_lifetime.m"
    {
#line 582 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__NodeType_10, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_6);
    }
#line 584 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 584 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11;
#line 584 "rbmm.interproc_region_lifetime.m"
    else
#line 585 "rbmm.interproc_region_lifetime.m"
      {
#line 585 "rbmm.interproc_region_lifetime.m"
        {
#line 585 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_8)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSet_12);
#line 585 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 585 "rbmm.interproc_region_lifetime.m"
      }
#line 580 "rbmm.interproc_region_lifetime.m"
  }
#line 577 "rbmm.interproc_region_lifetime.m"
}

#line 573 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1(
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 573 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 573 "rbmm.interproc_region_lifetime.m"
{
#line 573 "rbmm.interproc_region_lifetime.m"
  {
#line 573 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 573 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12;

#line 573 "rbmm.interproc_region_lifetime.m"
    {
#line 573 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__retain_non_primitive_regions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12);
    }
#line 573 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_RegionSet_12));
#line 573 "rbmm.interproc_region_lifetime.m"
  }
#line 573 "rbmm.interproc_region_lifetime.m"
}

#line 565 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_9,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16,
#line 565 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17)
#line 565 "rbmm.interproc_region_lifetime.m"
{
#line 570 "rbmm.interproc_region_lifetime.m"
  {
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Graph_13;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 570 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_19_19;
#line 571 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12;
#line 572 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Alpha_14;
#line 573 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15;

#line 571 "rbmm.interproc_region_lifetime.m"
    {
#line 571 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
    }
#line 571 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_12);
#line 572 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Graph_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 0)));
#line 572 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Alpha_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_12, (MR_Integer) 1)));
#line 573 "rbmm.interproc_region_lifetime.m"
    {
#line 573 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 573 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[2]));
#line 573 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0_1));
#line 573 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 573 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_7));
#line 573 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Graph_13));
#line 573 "rbmm.interproc_region_lifetime.m"
    }
#line 3196 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 574 "rbmm.interproc_region_lifetime.m"
    {
#line 574 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_19_19 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26);
    }
#line 3203 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 573 "rbmm.interproc_region_lifetime.m"
    {
#line 573 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_26_26, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_19_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15);
    }
#line 573 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_RegionSet_15);
#line 575 "rbmm.interproc_region_lifetime.m"
    {
#line 575 "rbmm.interproc_region_lifetime.m"
      mercury__map__det_update_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_27_27, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_9)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet_15)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_0_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_RegionSetTable_17);
#line 575 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 570 "rbmm.interproc_region_lifetime.m"
  }
#line 565 "rbmm.interproc_region_lifetime.m"
}

#line 527 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Source_7,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10,
#line 527 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11)
#line 527 "rbmm.interproc_region_lifetime.m"
{
#line 535 "rbmm.interproc_region_lifetime.m"
  {
#line 535 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 532 "rbmm.interproc_region_lifetime.m"
    MR_Integer transform_hlds__rbmm__interproc_region_lifetime__V_15_15 = (MR_Integer) transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_6;
#line 532 "rbmm.interproc_region_lifetime.m"
    MR_Integer transform_hlds__rbmm__interproc_region_lifetime__V_16_16 = (MR_Integer) transform_hlds__rbmm__interproc_region_lifetime__Target_8;

#line 532 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__succeeded = (transform_hlds__rbmm__interproc_region_lifetime__V_15_15 == transform_hlds__rbmm__interproc_region_lifetime__V_16_16);
#line 535 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 534 "rbmm.interproc_region_lifetime.m"
      {
#line 534 "rbmm.interproc_region_lifetime.m"
        {
#line 534 "rbmm.interproc_region_lifetime.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Source_7)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11);
#line 534 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 534 "rbmm.interproc_region_lifetime.m"
      }
#line 535 "rbmm.interproc_region_lifetime.m"
    else
#line 535 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_11 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Rs_0_10;
#line 535 "rbmm.interproc_region_lifetime.m"
  }
#line 527 "rbmm.interproc_region_lifetime.m"
}

#line 514 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2(
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 514 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 514 "rbmm.interproc_region_lifetime.m"
{
#line 514 "rbmm.interproc_region_lifetime.m"
  {
#line 514 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 514 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16;

#line 514 "rbmm.interproc_region_lifetime.m"
    {
#line 514 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16);
    }
#line 514 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_ProcRegionSetTable_16));
#line 514 "rbmm.interproc_region_lifetime.m"
  }
#line 514 "rbmm.interproc_region_lifetime.m"
}

#line 491 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1(
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 491 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 491 "rbmm.interproc_region_lifetime.m"
{
#line 491 "rbmm.interproc_region_lifetime.m"
  {
#line 491 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 491 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11;

#line 491 "rbmm.interproc_region_lifetime.m"
    {
#line 491 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__find_alpha_source_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11);
    }
#line 491 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_Rs_11));
#line 491 "rbmm.interproc_region_lifetime.m"
  }
#line 491 "rbmm.interproc_region_lifetime.m"
}

#line 468 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 468 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8)
#line 468 "rbmm.interproc_region_lifetime.m"
{
#line 472 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 472 "rbmm.interproc_region_lifetime.m"
    {
#line 472 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 472 "rbmm.interproc_region_lifetime.m"
      {
#line 472 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 472 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 472 "rbmm.interproc_region_lifetime.m"
        else
#line 475 "rbmm.interproc_region_lifetime.m"
          {
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17;
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Goal_18;
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__Expr_26;
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 0)));
#line 475 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53;
#line 476 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime___Info_27;
#line 519 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28;
#line 519 "rbmm.interproc_region_lifetime.m"
            MR_Integer transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29;
#line 478 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_30_30;
#line 478 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_31_31;
#line 478 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 478 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_33_33;

#line 473 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_45_45, (MR_Integer) 0)));
#line 473 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_45_45, (MR_Integer) 1)));
#line 476 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__Expr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_18, (MR_Integer) 0)));
#line 476 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime___Info_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__Goal_18, (MR_Integer) 1)));
#line 478 "rbmm.interproc_region_lifetime.m"
            transform_hlds__rbmm__interproc_region_lifetime__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__Expr_26)) == (MR_mktag((MR_Integer) 2)));
#line 478 "rbmm.interproc_region_lifetime.m"
            if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 478 "rbmm.interproc_region_lifetime.m"
              {
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 0)));
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 1)));
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 2)));
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 3)));
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 4)));
#line 478 "rbmm.interproc_region_lifetime.m"
                transform_hlds__rbmm__interproc_region_lifetime__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__interproc_region_lifetime__Expr_26, (MR_Integer) 5)));
#line 480 "rbmm.interproc_region_lifetime.m"
                {
#line 480 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34;
#line 482 "rbmm.interproc_region_lifetime.m"
                  MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_46_46;

#line 480 "rbmm.interproc_region_lifetime.m"
                  {
#line 480 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePredId_28));
#line 480 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleeProcId_29));
#line 480 "rbmm.interproc_region_lifetime.m"
                  }
#line 482 "rbmm.interproc_region_lifetime.m"
                  {
#line 482 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_46_46, 0) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34));
#line 482 "rbmm.interproc_region_lifetime.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "rbmm.interproc_region_lifetime.m"
                  }
#line 482 "rbmm.interproc_region_lifetime.m"
                  {
#line 482 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__V_46_46, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5);
                  }
#line 485 "rbmm.interproc_region_lifetime.m"
                  if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 485 "rbmm.interproc_region_lifetime.m"
                    transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 485 "rbmm.interproc_region_lifetime.m"
                  else
#line 487 "rbmm.interproc_region_lifetime.m"
                    {
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rs_39;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_48_48;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_49_49;
#line 487 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35;
#line 488 "rbmm.interproc_region_lifetime.m"
                      MR_Word transform_hlds__rbmm__interproc_region_lifetime___Graph_p_36;
#line 489 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38;
#line 491 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39;
#line 496 "rbmm.interproc_region_lifetime.m"
                      MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40;

#line 487 "rbmm.interproc_region_lifetime.m"
                      {
#line 487 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_2)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35);
                      }
#line 487 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_p_35);
#line 488 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime___Graph_p_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35, (MR_Integer) 0)));
#line 488 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_p_35, (MR_Integer) 1)));
#line 489 "rbmm.interproc_region_lifetime.m"
                      {
#line 489 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[4], transform_hlds__rbmm__interproc_region_lifetime__AlphaMapping_37, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_17)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38);
                      }
#line 489 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_AlphaAtCallSite_38);
#line 491 "rbmm.interproc_region_lifetime.m"
                      {
#line 491 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_3[1]));
#line 491 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_1));
#line 491 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "rbmm.interproc_region_lifetime.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_48_48, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ToBeRemovedRegion_3));
#line 491 "rbmm.interproc_region_lifetime.m"
                      }
#line 3536 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 492 "rbmm.interproc_region_lifetime.m"
                      {
#line 492 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__V_49_49 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63);
                      }
#line 3543 "transform_hlds.rbmm.interproc_region_lifetime.c"
                      transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 491 "rbmm.interproc_region_lifetime.m"
                      {
#line 491 "rbmm.interproc_region_lifetime.m"
                        mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__V_48_48, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_38, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_49_49)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39);
                      }
#line 491 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__Rs_39 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_Rs_39);
#line 496 "rbmm.interproc_region_lifetime.m"
                      {
#line 496 "rbmm.interproc_region_lifetime.m"
                        mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40);
                      }
#line 496 "rbmm.interproc_region_lifetime.m"
                      transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_RegionSet0_40);
#line 498 "rbmm.interproc_region_lifetime.m"
                      {
#line 498 "rbmm.interproc_region_lifetime.m"
                        mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__Rs_39, &transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41);
                      }
#line 502 "rbmm.interproc_region_lifetime.m"
                      {
#line 502 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__succeeded = mercury__set__equal_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41);
                      }
#line 506 "rbmm.interproc_region_lifetime.m"
                      if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 506 "rbmm.interproc_region_lifetime.m"
                        transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 506 "rbmm.interproc_region_lifetime.m"
                      else
#line 509 "rbmm.interproc_region_lifetime.m"
                        {
#line 509 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42;
#line 509 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50;
#line 509 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_51_51;
#line 509 "rbmm.interproc_region_lifetime.m"
                          MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_52_52;
#line 513 "rbmm.interproc_region_lifetime.m"
                          MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53;

#line 509 "rbmm.interproc_region_lifetime.m"
                          {
#line 509 "rbmm.interproc_region_lifetime.m"
                            mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_55_55, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_64_64, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50);
                          }
#line 510 "rbmm.interproc_region_lifetime.m"
                          {
#line 510 "rbmm.interproc_region_lifetime.m"
                            mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RegionSet0_40, transform_hlds__rbmm__interproc_region_lifetime__RegionSet1_41, &transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42);
                          }
#line 514 "rbmm.interproc_region_lifetime.m"
                          {
#line 514 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[1]));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0_2));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__CalleePPId_34));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5));
#line 514 "rbmm.interproc_region_lifetime.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_51_51, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6));
#line 514 "rbmm.interproc_region_lifetime.m"
                          }
#line 516 "rbmm.interproc_region_lifetime.m"
                          {
#line 516 "rbmm.interproc_region_lifetime.m"
                            transform_hlds__rbmm__interproc_region_lifetime__V_52_52 = mercury__set__to_sorted_list_1_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, transform_hlds__rbmm__interproc_region_lifetime__RemovedFromQ_42);
                          }
#line 513 "rbmm.interproc_region_lifetime.m"
                          {
#line 513 "rbmm.interproc_region_lifetime.m"
                            mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_51_51, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_50_50)), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53);
                          }
#line 513 "rbmm.interproc_region_lifetime.m"
                          transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_ProcRegionSetTable_53_53);
#line 509 "rbmm.interproc_region_lifetime.m"
                        }
#line 487 "rbmm.interproc_region_lifetime.m"
                    }
#line 480 "rbmm.interproc_region_lifetime.m"
                }
#line 478 "rbmm.interproc_region_lifetime.m"
              }
#line 478 "rbmm.interproc_region_lifetime.m"
            else
#line 519 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 524 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 524 "rbmm.interproc_region_lifetime.m"
            {
#line 524 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__interproc_region_lifetime__ProgPoint_Goals_19;
#line 524 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_53_53;

#line 524 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7;
#line 524 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1;
#line 524 "rbmm.interproc_region_lifetime.m"
            }
#line 524 "rbmm.interproc_region_lifetime.m"
            continue;
#line 475 "rbmm.interproc_region_lifetime.m"
          }
#line 472 "rbmm.interproc_region_lifetime.m"
      }
#line 472 "rbmm.interproc_region_lifetime.m"
      break;
#line 472 "rbmm.interproc_region_lifetime.m"
    }
#line 468 "rbmm.interproc_region_lifetime.m"
}

#line 456 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_2,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_3,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7,
#line 456 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8)
#line 456 "rbmm.interproc_region_lifetime.m"
{
#line 460 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 460 "rbmm.interproc_region_lifetime.m"
    {
#line 460 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 460 "rbmm.interproc_region_lifetime.m"
      {
#line 460 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 460 "rbmm.interproc_region_lifetime.m"
        if ((transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_8 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7;
#line 460 "rbmm.interproc_region_lifetime.m"
        else
#line 462 "rbmm.interproc_region_lifetime.m"
          {
#line 462 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPath_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 0)));
#line 462 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1, (MR_Integer) 1)));
#line 462 "rbmm.interproc_region_lifetime.m"
            MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27;

#line 463 "rbmm.interproc_region_lifetime.m"
            {
#line 463 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_ep_8_p_0(transform_hlds__rbmm__interproc_region_lifetime__ExecPath_17, transform_hlds__rbmm__interproc_region_lifetime__PPId_2, transform_hlds__rbmm__interproc_region_lifetime__Region_3, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_4, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_5, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_6, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7, &transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27);
            }
#line 465 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 465 "rbmm.interproc_region_lifetime.m"
            {
#line 465 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_18;
#line 465 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_27_27;

#line 465 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_7 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_7;
#line 465 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1_1 = transform_hlds__rbmm__interproc_region_lifetime__HeadVar__1__tmp_copy_1;
#line 465 "rbmm.interproc_region_lifetime.m"
            }
#line 465 "rbmm.interproc_region_lifetime.m"
            continue;
#line 462 "rbmm.interproc_region_lifetime.m"
          }
#line 460 "rbmm.interproc_region_lifetime.m"
      }
#line 460 "rbmm.interproc_region_lifetime.m"
      break;
#line 460 "rbmm.interproc_region_lifetime.m"
    }
#line 456 "rbmm.interproc_region_lifetime.m"
}

#line 438 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__remove_this_region_from_callees_of_proc_7_p_0(
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_8,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_12,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15,
#line 438 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16)
#line 438 "rbmm.interproc_region_lifetime.m"
{
#line 444 "rbmm.interproc_region_lifetime.m"
  {
#line 444 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 444 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14;
#line 446 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14;

#line 446 "rbmm.interproc_region_lifetime.m"
    {
#line 446 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3], transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_8)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14);
    }
#line 446 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_ExecPaths_14);
#line 450 "rbmm.interproc_region_lifetime.m"
    {
#line 450 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__remove_this_from_eps_8_p_0(transform_hlds__rbmm__interproc_region_lifetime__ExecPaths_14, transform_hlds__rbmm__interproc_region_lifetime__PPId_8, transform_hlds__rbmm__interproc_region_lifetime__Region_12, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_9, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_10, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_15, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_16);
#line 450 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 444 "rbmm.interproc_region_lifetime.m"
  }
#line 438 "rbmm.interproc_region_lifetime.m"
}

#line 422 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime___Source_7,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Target_8,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13,
#line 422 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14)
#line 422 "rbmm.interproc_region_lifetime.m"
{
#line 430 "rbmm.interproc_region_lifetime.m"
  {
#line 430 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 430 "rbmm.interproc_region_lifetime.m"
    {
#line 430 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_110_101_95_109_97_112_112_105_110_103_95_95_91_49_93_95_48_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__Target_8, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_0_11, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Candidates_12, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_0_13, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_Targets_14);
#line 430 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 430 "rbmm.interproc_region_lifetime.m"
  }
#line 422 "rbmm.interproc_region_lifetime.m"
}

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1(
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 408 "rbmm.interproc_region_lifetime.m"
{
#line 408 "rbmm.interproc_region_lifetime.m"
  {
#line 408 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 408 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
#line 408 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 408 "rbmm.interproc_region_lifetime.m"
  }
#line 408 "rbmm.interproc_region_lifetime.m"
}

#line 408 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2(
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 408 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 408 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 408 "rbmm.interproc_region_lifetime.m"
{
#line 408 "rbmm.interproc_region_lifetime.m"
  {
#line 408 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 408 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 408 "rbmm.interproc_region_lifetime.m"
      {
#line 408 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_2__408__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 408 "rbmm.interproc_region_lifetime.m"
    }
#line 408 "rbmm.interproc_region_lifetime.m"
  }
#line 408 "rbmm.interproc_region_lifetime.m"
}

#line 404 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0(
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 404 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11)
#line 404 "rbmm.interproc_region_lifetime.m"
{
#line 407 "rbmm.interproc_region_lifetime.m"
  {
#line 407 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 407 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 407 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 407 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 407 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_2_4_p_0_2));
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 408 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 408 "rbmm.interproc_region_lifetime.m"
    }
#line 3940 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 408 "rbmm.interproc_region_lifetime.m"
    {
#line 408 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 409 "rbmm.interproc_region_lifetime.m"
    {
#line 409 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 410 "rbmm.interproc_region_lifetime.m"
    {
#line 410 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);
#line 410 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 407 "rbmm.interproc_region_lifetime.m"
  }
#line 404 "rbmm.interproc_region_lifetime.m"
}

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1(
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 397 "rbmm.interproc_region_lifetime.m"
{
#line 397 "rbmm.interproc_region_lifetime.m"
  {
#line 397 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 397 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
#line 397 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 397 "rbmm.interproc_region_lifetime.m"
  }
#line 397 "rbmm.interproc_region_lifetime.m"
}

#line 397 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2(
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 397 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 397 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 397 "rbmm.interproc_region_lifetime.m"
{
#line 397 "rbmm.interproc_region_lifetime.m"
  {
#line 397 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 397 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 397 "rbmm.interproc_region_lifetime.m"
      {
#line 397 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__born_removal_rule_1__397__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 397 "rbmm.interproc_region_lifetime.m"
    }
#line 397 "rbmm.interproc_region_lifetime.m"
  }
#line 397 "rbmm.interproc_region_lifetime.m"
}

#line 393 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0(
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10,
#line 393 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11)
#line 393 "rbmm.interproc_region_lifetime.m"
{
#line 396 "rbmm.interproc_region_lifetime.m"
  {
#line 396 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 396 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 396 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 396 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 396 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__born_removal_rule_1_4_p_0_2));
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 397 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 397 "rbmm.interproc_region_lifetime.m"
    }
#line 4073 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 397 "rbmm.interproc_region_lifetime.m"
    {
#line 397 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 398 "rbmm.interproc_region_lifetime.m"
    {
#line 398 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 399 "rbmm.interproc_region_lifetime.m"
    {
#line 399 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornR_q_11);
#line 399 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 396 "rbmm.interproc_region_lifetime.m"
  }
#line 393 "rbmm.interproc_region_lifetime.m"
}

#line 375 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__HeadVar__3_9,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11,
#line 375 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12)
#line 375 "rbmm.interproc_region_lifetime.m"
{
#line 379 "rbmm.interproc_region_lifetime.m"
  {
#line 379 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 379 "rbmm.interproc_region_lifetime.m"
    {
#line 379 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_114_110_95_114_101_109_111_118_97_108_95_114_117_108_101_115_95_95_91_51_93_95_48_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_11, transform_hlds__rbmm__interproc_region_lifetime__BornR_q_12);
#line 379 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 379 "rbmm.interproc_region_lifetime.m"
  }
#line 375 "rbmm.interproc_region_lifetime.m"
}

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1(
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 369 "rbmm.interproc_region_lifetime.m"
{
#line 369 "rbmm.interproc_region_lifetime.m"
  {
#line 369 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 369 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr);
#line 369 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 369 "rbmm.interproc_region_lifetime.m"
  }
#line 369 "rbmm.interproc_region_lifetime.m"
}

#line 369 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2(
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 369 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 369 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 369 "rbmm.interproc_region_lifetime.m"
{
#line 369 "rbmm.interproc_region_lifetime.m"
  {
#line 369 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 369 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 369 "rbmm.interproc_region_lifetime.m"
      {
#line 369 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_2__369__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 369 "rbmm.interproc_region_lifetime.m"
    }
#line 369 "rbmm.interproc_region_lifetime.m"
  }
#line 369 "rbmm.interproc_region_lifetime.m"
}

#line 365 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 365 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11)
#line 365 "rbmm.interproc_region_lifetime.m"
{
#line 368 "rbmm.interproc_region_lifetime.m"
  {
#line 368 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 368 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 368 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 368 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 368 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0_2));
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 369 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 369 "rbmm.interproc_region_lifetime.m"
    }
#line 4240 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 369 "rbmm.interproc_region_lifetime.m"
    {
#line 369 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 370 "rbmm.interproc_region_lifetime.m"
    {
#line 370 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 371 "rbmm.interproc_region_lifetime.m"
    {
#line 371 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);
#line 371 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 368 "rbmm.interproc_region_lifetime.m"
  }
#line 365 "rbmm.interproc_region_lifetime.m"
}

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1(
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg)
#line 359 "rbmm.interproc_region_lifetime.m"
{
#line 359 "rbmm.interproc_region_lifetime.m"
  {
#line 359 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s * transform_hlds__rbmm__interproc_region_lifetime__env_ptr = (struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s *) transform_hlds__rbmm__interproc_region_lifetime__env_ptr_arg;

#line 359 "rbmm.interproc_region_lifetime.m"
    *((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14));
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      ((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont)((transform_hlds__rbmm__interproc_region_lifetime__env_ptr)->transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr);
#line 359 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 359 "rbmm.interproc_region_lifetime.m"
  }
#line 359 "rbmm.interproc_region_lifetime.m"
}

#line 359 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2(
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 359 "rbmm.interproc_region_lifetime.m"
  MR_Cont transform_hlds__rbmm__interproc_region_lifetime__cont,
#line 359 "rbmm.interproc_region_lifetime.m"
  void * transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr)
#line 359 "rbmm.interproc_region_lifetime.m"
{
#line 359 "rbmm.interproc_region_lifetime.m"
  {
#line 359 "rbmm.interproc_region_lifetime.m"
    struct transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0_s transform_hlds__rbmm__interproc_region_lifetime__env;

#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1;
#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont = transform_hlds__rbmm__interproc_region_lifetime__cont;
#line 359 "rbmm.interproc_region_lifetime.m"
    (transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__cont_env_ptr = transform_hlds__rbmm__interproc_region_lifetime__cont_env_ptr;
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;

#line 359 "rbmm.interproc_region_lifetime.m"
      {
#line 359 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__IntroducedFrom__pred__dead_removal_rule_1__359__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), &(transform_hlds__rbmm__interproc_region_lifetime__env).transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_1, &transform_hlds__rbmm__interproc_region_lifetime__env);
      }
#line 359 "rbmm.interproc_region_lifetime.m"
    }
#line 359 "rbmm.interproc_region_lifetime.m"
  }
#line 359 "rbmm.interproc_region_lifetime.m"
}

#line 354 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Region_6,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10,
#line 354 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11)
#line 354 "rbmm.interproc_region_lifetime.m"
{
#line 357 "rbmm.interproc_region_lifetime.m"
  {
#line 357 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 357 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16;
#line 357 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__SourceList_8;
#line 357 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9;
#line 357 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_12_12;

#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_8[0]));
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0_2));
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtCallSite_5));
#line 359 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Region_6));
#line 359 "rbmm.interproc_region_lifetime.m"
    }
#line 4373 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 359 "rbmm.interproc_region_lifetime.m"
    {
#line 359 "rbmm.interproc_region_lifetime.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__V_12_12, &transform_hlds__rbmm__interproc_region_lifetime__SourceList_8);
    }
#line 360 "rbmm.interproc_region_lifetime.m"
    {
#line 360 "rbmm.interproc_region_lifetime.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__SourceList_8, &transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9);
    }
#line 363 "rbmm.interproc_region_lifetime.m"
    {
#line 363 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_16_16, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_0_10, transform_hlds__rbmm__interproc_region_lifetime__RPrimes_9, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadR_q_11);
#line 363 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 357 "rbmm.interproc_region_lifetime.m"
  }
#line 354 "rbmm.interproc_region_lifetime.m"
}

#line 352 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3(
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 352 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 352 "rbmm.interproc_region_lifetime.m"
{
#line 352 "rbmm.interproc_region_lifetime.m"
  {
#line 352 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 352 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11;

#line 352 "rbmm.interproc_region_lifetime.m"
    {
#line 352 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11);
    }
#line 352 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_DeadR_q_11));
#line 352 "rbmm.interproc_region_lifetime.m"
  }
#line 352 "rbmm.interproc_region_lifetime.m"
}

#line 419 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_2(
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 419 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 419 "rbmm.interproc_region_lifetime.m"
{
#line 419 "rbmm.interproc_region_lifetime.m"
  {
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14;

#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__process_one_mapping_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12, ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_Candidates_12));
#line 419 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_Targets_14));
#line 419 "rbmm.interproc_region_lifetime.m"
  }
#line 419 "rbmm.interproc_region_lifetime.m"
}

#line 347 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1(
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 347 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 347 "rbmm.interproc_region_lifetime.m"
{
#line 347 "rbmm.interproc_region_lifetime.m"
  {
#line 347 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 347 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11;

#line 347 "rbmm.interproc_region_lifetime.m"
    {
#line 347 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rule_1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11);
    }
#line 347 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_DeadR_q_11));
#line 347 "rbmm.interproc_region_lifetime.m"
  }
#line 347 "rbmm.interproc_region_lifetime.m"
}

#line 336 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11,
#line 336 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12)
#line 336 "rbmm.interproc_region_lifetime.m"
{
#line 340 "rbmm.interproc_region_lifetime.m"
  {
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__Targets_16;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_17_17;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_18_18;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_32_32;
#line 340 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_33_33;
#line 342 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13;
#line 347 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime___Processed_30;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30;
#line 419 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16;
#line 352 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12;

#line 342 "rbmm.interproc_region_lifetime.m"
    {
#line 342 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__DeadRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Q_Id_7)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13);
    }
#line 342 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q0_13);
#line 4568 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 346 "rbmm.interproc_region_lifetime.m"
    {
#line 346 "rbmm.interproc_region_lifetime.m"
      mercury__set__intersect_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__LRBefore_8, transform_hlds__rbmm__interproc_region_lifetime__LRAfter_9, &transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14);
    }
#line 347 "rbmm.interproc_region_lifetime.m"
    {
#line 347 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 347 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 347 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_1));
#line 347 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 347 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_17_17, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11));
#line 347 "rbmm.interproc_region_lifetime.m"
    }
#line 347 "rbmm.interproc_region_lifetime.m"
    {
#line 347 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__V_17_17, transform_hlds__rbmm__interproc_region_lifetime__Rule1_Candidate_14, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__DeadR_q0_13)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15);
    }
#line 347 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_DeadR_q1_15);
#line 4596 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_32_32 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40);
    }
#line 420 "rbmm.interproc_region_lifetime.m"
    {
#line 420 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_33_33 = mercury__set__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40);
    }
#line 4608 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 419 "rbmm.interproc_region_lifetime.m"
    {
#line 419 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl2_6_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40, transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_15_40, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_16_41, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[7], transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_32_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_33_33)), &transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16);
    }
#line 419 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime___Processed_30 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6__Processed_30);
#line 419 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__Targets_16 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv5_Targets_16);
#line 352 "rbmm.interproc_region_lifetime.m"
    {
#line 352 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_7[0]));
#line 352 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0_3));
#line 352 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_18_18, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__AlphaAtPP_11));
#line 352 "rbmm.interproc_region_lifetime.m"
    }
#line 352 "rbmm.interproc_region_lifetime.m"
    {
#line 352 "rbmm.interproc_region_lifetime.m"
      mercury__set__fold_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_21_21, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_20_20, transform_hlds__rbmm__interproc_region_lifetime__V_18_18, transform_hlds__rbmm__interproc_region_lifetime__Targets_16, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__DeadR_q1_15)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12);
    }
#line 352 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__DeadR_q_12 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_DeadR_q_12);
#line 340 "rbmm.interproc_region_lifetime.m"
  }
#line 336 "rbmm.interproc_region_lifetime.m"
}

#line 220 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_16,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22,
#line 220 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23)
#line 220 "rbmm.interproc_region_lifetime.m"
{
#line 227 "rbmm.interproc_region_lifetime.m"
  {
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__EPs_19;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20;
#line 227 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21;
#line 230 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18;
#line 231 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19;
#line 232 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20;
#line 233 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21;

#line 230 "rbmm.interproc_region_lifetime.m"
    {
#line 230 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, (MR_Word) &transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18);
    }
#line 230 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_RptaInfo_18);
#line 231 "rbmm.interproc_region_lifetime.m"
    {
#line 231 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[3], transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19);
    }
#line 231 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__EPs_19 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_EPs_19);
#line 4707 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 232 "rbmm.interproc_region_lifetime.m"
    {
#line 232 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20);
    }
#line 232 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_ProcLRBefore_20);
#line 233 "rbmm.interproc_region_lifetime.m"
    {
#line 233 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_28_28, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_16)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21);
    }
#line 233 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_ProcLRAfter_21);
#line 237 "rbmm.interproc_region_lifetime.m"
    {
#line 237 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_108_105_118_101_95_114_101_103_105_111_110_95_114_117_108_101_115_95_101_120_101_99_95_112_97_116_104_115_95_95_91_53_93_95_48_11_p_0(transform_hlds__rbmm__interproc_region_lifetime__Rule_10, transform_hlds__rbmm__interproc_region_lifetime__EPs_19, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11, transform_hlds__rbmm__interproc_region_lifetime__RptaInfo_18, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, transform_hlds__rbmm__interproc_region_lifetime__ProcLRBefore_20, transform_hlds__rbmm__interproc_region_lifetime__ProcLRAfter_21, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_22, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_23);
#line 237 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 227 "rbmm.interproc_region_lifetime.m"
  }
#line 220 "rbmm.interproc_region_lifetime.m"
}

#line 204 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1(
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 204 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 204 "rbmm.interproc_region_lifetime.m"
{
#line 204 "rbmm.interproc_region_lifetime.m"
  {
#line 204 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 204 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23;

#line 204 "rbmm.interproc_region_lifetime.m"
    {
#line 204 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__apply_rule_pred_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23);
    }
#line 204 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_ProcRegionSetTable_23));
#line 204 "rbmm.interproc_region_lifetime.m"
  }
#line 204 "rbmm.interproc_region_lifetime.m"
}

#line 195 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_11,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19,
#line 195 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20)
#line 195 "rbmm.interproc_region_lifetime.m"
{
#line 202 "rbmm.interproc_region_lifetime.m"
  while (MR_TRUE)
#line 202 "rbmm.interproc_region_lifetime.m"
    {
#line 202 "rbmm.interproc_region_lifetime.m"
      /* tailcall optimized into a loop */
#line 202 "rbmm.interproc_region_lifetime.m"
      {
#line 202 "rbmm.interproc_region_lifetime.m"
        MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 202 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;
#line 202 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_21_21;
#line 204 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18;

#line 204 "rbmm.interproc_region_lifetime.m"
        {
#line 204 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[1]));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0_1));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__Rule_10));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_12));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_13));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_14));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_15));
#line 204 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_21_21, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_16));
#line 204 "rbmm.interproc_region_lifetime.m"
        }
#line 204 "rbmm.interproc_region_lifetime.m"
        {
#line 204 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_21_21, transform_hlds__rbmm__interproc_region_lifetime__SCC_11, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18);
        }
#line 204 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_ProcRegionSetTable1_18);
#line 208 "rbmm.interproc_region_lifetime.m"
        {
#line 208 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19);
        }
#line 213 "rbmm.interproc_region_lifetime.m"
        if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 212 "rbmm.interproc_region_lifetime.m"
          *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_20 = transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;
#line 213 "rbmm.interproc_region_lifetime.m"
        else
#line 215 "rbmm.interproc_region_lifetime.m"
          {
#line 215 "rbmm.interproc_region_lifetime.m"
            /* direct tailcall eliminated */
#line 215 "rbmm.interproc_region_lifetime.m"
            {
#line 215 "rbmm.interproc_region_lifetime.m"
              MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_19 = transform_hlds__rbmm__interproc_region_lifetime__ProcRegionSetTable1_18;

#line 215 "rbmm.interproc_region_lifetime.m"
              transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_19 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0__tmp_copy_19;
#line 215 "rbmm.interproc_region_lifetime.m"
            }
#line 215 "rbmm.interproc_region_lifetime.m"
            continue;
#line 215 "rbmm.interproc_region_lifetime.m"
          }
#line 202 "rbmm.interproc_region_lifetime.m"
      }
#line 202 "rbmm.interproc_region_lifetime.m"
      break;
#line 202 "rbmm.interproc_region_lifetime.m"
    }
#line 195 "rbmm.interproc_region_lifetime.m"
}

#line 176 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__Rule_10,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__SCC_16,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18,
#line 176 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19)
#line 176 "rbmm.interproc_region_lifetime.m"
{
#line 187 "rbmm.interproc_region_lifetime.m"
  {
#line 187 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;

#line 185 "rbmm.interproc_region_lifetime.m"
    {
#line 185 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__SCC_16, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11);
    }
#line 187 "rbmm.interproc_region_lifetime.m"
    if (transform_hlds__rbmm__interproc_region_lifetime__succeeded)
#line 187 "rbmm.interproc_region_lifetime.m"
      *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19 = transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18;
#line 187 "rbmm.interproc_region_lifetime.m"
    else
#line 190 "rbmm.interproc_region_lifetime.m"
      {
#line 190 "rbmm.interproc_region_lifetime.m"
        transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_until_fixpoint_9_p_0(transform_hlds__rbmm__interproc_region_lifetime__Rule_10, transform_hlds__rbmm__interproc_region_lifetime__SCC_16, transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_11, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_12, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_13, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_14, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_15, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_0_18, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ProcRegionSetTable_19);
#line 190 "rbmm.interproc_region_lifetime.m"
        return;
      }
#line 187 "rbmm.interproc_region_lifetime.m"
  }
#line 176 "rbmm.interproc_region_lifetime.m"
}

#line 172 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2(
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 172 "rbmm.interproc_region_lifetime.m"
{
#line 172 "rbmm.interproc_region_lifetime.m"
  {
#line 172 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 172 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19;

#line 172 "rbmm.interproc_region_lifetime.m"
    {
#line 172 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19);
    }
#line 172 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19));
#line 172 "rbmm.interproc_region_lifetime.m"
  }
#line 172 "rbmm.interproc_region_lifetime.m"
}

#line 4958 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_1(
#line 4961 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 4963 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 4965 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 4967 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 4969 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 4971 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 4973 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 4975 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 4977 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 4979 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 4981 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12;

#line 4984 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 4986 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__dead_removal_rules_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12);
    }
#line 4989 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_DeadR_q_12));
#line 4991 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 4993 "transform_hlds.rbmm.interproc_region_lifetime.c"
}

#line 113 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14,
#line 113 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15)
#line 113 "rbmm.interproc_region_lifetime.m"
{
#line 119 "rbmm.interproc_region_lifetime.m"
  {
#line 119 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 119 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34;
#line 119 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35;

#line 146 "rbmm.interproc_region_lifetime.m"
    {
#line 146 "rbmm.interproc_region_lifetime.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_8, &transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34);
    }
#line 147 "rbmm.interproc_region_lifetime.m"
    {
#line 147 "rbmm.interproc_region_lifetime.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34, &transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35);
    }
#line 155 "rbmm.interproc_region_lifetime.m"
    if ((transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "rbmm.interproc_region_lifetime.m"
      {
#line 157 "rbmm.interproc_region_lifetime.m"
        {
#line 157 "rbmm.interproc_region_lifetime.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.interproc_region_lifetime", (MR_String) "predicate \140transform_hlds.rbmm.interproc_region_lifetime.apply_live_region_rule\'/8", (MR_String) "no dependency info");
#line 157 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 156 "rbmm.interproc_region_lifetime.m"
      }
#line 155 "rbmm.interproc_region_lifetime.m"
    else
#line 149 "rbmm.interproc_region_lifetime.m"
      {
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_35, (MR_Integer) 0)));
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__Deps1_54;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_55_55;
#line 171 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15;

#line 150 "rbmm.interproc_region_lifetime.m"
        {
#line 150 "rbmm.interproc_region_lifetime.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__DepInfo_36, &transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37);
        }
#line 5069 "transform_hlds.rbmm.interproc_region_lifetime.c"
        transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1];
#line 170 "rbmm.interproc_region_lifetime.m"
        {
#line 170 "rbmm.interproc_region_lifetime.m"
          mercury__list__reverse_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57, transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_37, &transform_hlds__rbmm__interproc_region_lifetime__Deps1_54);
        }
#line 172 "rbmm.interproc_region_lifetime.m"
        {
#line 172 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[0]));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0_2));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[6]));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_34));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_9));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_10));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_11));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_55_55, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_12));
#line 172 "rbmm.interproc_region_lifetime.m"
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        {
#line 171 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_57, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_55_55, transform_hlds__rbmm__interproc_region_lifetime__Deps1_54, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_14)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15);
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_15);
#line 149 "rbmm.interproc_region_lifetime.m"
      }
#line 119 "rbmm.interproc_region_lifetime.m"
  }
#line 113 "rbmm.interproc_region_lifetime.m"
}

#line 95 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__PPId_11,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__DeadR_12,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20,
#line 95 "rbmm.interproc_region_lifetime.m"
  MR_Word * transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21)
#line 95 "rbmm.interproc_region_lifetime.m"
{
#line 101 "rbmm.interproc_region_lifetime.m"
  {
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputR_14;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__OutputR_15;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__BornR_16;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18;
#line 101 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19;
#line 102 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14;
#line 103 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15;
#line 104 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16;

#line 102 "rbmm.interproc_region_lifetime.m"
    {
#line 102 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__InputRTable_8, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14);
    }
#line 102 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__InputR_14 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv0_InputR_14);
#line 103 "rbmm.interproc_region_lifetime.m"
    {
#line 103 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_9, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15);
    }
#line 103 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__OutputR_15 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_OutputR_15);
#line 104 "rbmm.interproc_region_lifetime.m"
    {
#line 104 "rbmm.interproc_region_lifetime.m"
      mercury__map__lookup_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, transform_hlds__rbmm__interproc_region_lifetime__BornRTable_10, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16);
    }
#line 104 "rbmm.interproc_region_lifetime.m"
    transform_hlds__rbmm__interproc_region_lifetime__BornR_16 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_BornR_16);
#line 5183 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25 = (MR_Word) &transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
#line 105 "rbmm.interproc_region_lifetime.m"
    {
#line 105 "rbmm.interproc_region_lifetime.m"
      mercury__set__union_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputR_14, transform_hlds__rbmm__interproc_region_lifetime__OutputR_15, &transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17);
    }
#line 106 "rbmm.interproc_region_lifetime.m"
    {
#line 106 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputOutputR0_17, transform_hlds__rbmm__interproc_region_lifetime__BornR_16, &transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18);
    }
#line 107 "rbmm.interproc_region_lifetime.m"
    {
#line 107 "rbmm.interproc_region_lifetime.m"
      mercury__set__difference_3_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_25_25, transform_hlds__rbmm__interproc_region_lifetime__InputOutputR_18, transform_hlds__rbmm__interproc_region_lifetime__DeadR_12, &transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19);
    }
#line 108 "rbmm.interproc_region_lifetime.m"
    {
#line 108 "rbmm.interproc_region_lifetime.m"
      mercury__map__set_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_23_23, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_24_24, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__PPId_11)), ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ConstantR_19)), transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_20, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_21);
#line 108 "rbmm.interproc_region_lifetime.m"
      return;
    }
#line 101 "rbmm.interproc_region_lifetime.m"
  }
#line 95 "rbmm.interproc_region_lifetime.m"
}

#line 556 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2(
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 556 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 556 "rbmm.interproc_region_lifetime.m"
{
#line 556 "rbmm.interproc_region_lifetime.m"
  {
#line 556 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 556 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17;

#line 556 "rbmm.interproc_region_lifetime.m"
    {
#line 556 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17);
    }
#line 556 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv5_STATE_VARIABLE_LRTable_17));
#line 556 "rbmm.interproc_region_lifetime.m"
  }
#line 556 "rbmm.interproc_region_lifetime.m"
}

#line 547 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1(
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 547 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 547 "rbmm.interproc_region_lifetime.m"
{
#line 547 "rbmm.interproc_region_lifetime.m"
  {
#line 547 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 547 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17;

#line 547 "rbmm.interproc_region_lifetime.m"
    {
#line 547 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__eliminate_primitive_regions_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17);
    }
#line 547 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_STATE_VARIABLE_RegionSetTable_17));
#line 547 "rbmm.interproc_region_lifetime.m"
  }
#line 547 "rbmm.interproc_region_lifetime.m"
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
#line 546 "rbmm.interproc_region_lifetime.m"
  {
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_40_40;
#line 546 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_52_52;
#line 547 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27;
#line 549 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29;
#line 551 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31;
#line 553 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33;
#line 556 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35;
#line 558 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37;
#line 560 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39;

#line 547 "rbmm.interproc_region_lifetime.m"
    {
#line 547 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 547 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[1]));
#line 547 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_1));
#line 547 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 547 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_17));
#line 547 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_40_40, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_18));
#line 547 "rbmm.interproc_region_lifetime.m"
    }
#line 5366 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 5368 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 5370 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0];
#line 547 "rbmm.interproc_region_lifetime.m"
    {
#line 547 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_26, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_26)), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27);
    }
#line 547 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_27 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_BornRTable_27);
#line 549 "rbmm.interproc_region_lifetime.m"
    {
#line 549 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_28, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_28)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29);
    }
#line 549 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_29 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_DeadRTable_29);
#line 551 "rbmm.interproc_region_lifetime.m"
    {
#line 551 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_30, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_0_30)), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31);
    }
#line 551 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_ConstantRTable_31 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_31);
#line 553 "rbmm.interproc_region_lifetime.m"
    {
#line 553 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_66_66, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_67_67, transform_hlds__rbmm__interproc_region_lifetime__V_40_40, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_0_32, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_0_32)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33);
    }
#line 553 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LocalRTable_33 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_STATE_VARIABLE_LocalRTable_33);
#line 556 "rbmm.interproc_region_lifetime.m"
    {
#line 556 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_4[2]));
#line 556 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0_2));
#line 556 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_17));
#line 556 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_52_52, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_18));
#line 556 "rbmm.interproc_region_lifetime.m"
    }
#line 5416 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[1];
#line 5418 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[2];
#line 556 "rbmm.interproc_region_lifetime.m"
    {
#line 556 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_0_34, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_0_34)), &transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35);
    }
#line 556 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRBeforeTable_35 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv6_STATE_VARIABLE_LRBeforeTable_35);
#line 558 "rbmm.interproc_region_lifetime.m"
    {
#line 558 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_0_36, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_0_36)), &transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37);
    }
#line 558 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_LRAfterTable_37 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv7_STATE_VARIABLE_LRAfterTable_37);
#line 560 "rbmm.interproc_region_lifetime.m"
    {
#line 560 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_65_65, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_84_84, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_85_85, transform_hlds__rbmm__interproc_region_lifetime__V_52_52, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_0_38, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_0_38)), &transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39);
    }
#line 560 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_VoidVarRegionTable_39 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv8_STATE_VARIABLE_VoidVarRegionTable_39);
#line 546 "rbmm.interproc_region_lifetime.m"
  }
#line 47 "rbmm.interproc_region_lifetime.m"
}

#line 92 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3(
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 92 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4)
#line 92 "rbmm.interproc_region_lifetime.m"
{
#line 92 "rbmm.interproc_region_lifetime.m"
  {
#line 92 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 92 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21;

#line 92 "rbmm.interproc_region_lifetime.m"
    {
#line 92 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__compute_constantR_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), &transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21);
    }
#line 92 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv3_STATE_VARIABLE_ConstantRTable_21));
#line 92 "rbmm.interproc_region_lifetime.m"
  }
#line 92 "rbmm.interproc_region_lifetime.m"
}

#line 172 "rbmm.interproc_region_lifetime.m"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2(
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 172 "rbmm.interproc_region_lifetime.m"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3)
#line 172 "rbmm.interproc_region_lifetime.m"
{
#line 172 "rbmm.interproc_region_lifetime.m"
  {
#line 172 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 172 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19;

#line 172 "rbmm.interproc_region_lifetime.m"
    {
#line 172 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__run_with_dependency_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__closure, (MR_Integer) 8))), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), &transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19);
    }
#line 172 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv1_STATE_VARIABLE_ProcRegionSetTable_19));
#line 172 "rbmm.interproc_region_lifetime.m"
  }
#line 172 "rbmm.interproc_region_lifetime.m"
}

#line 5512 "transform_hlds.rbmm.interproc_region_lifetime.c"
static void MR_CALL 
transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_1(
#line 5515 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure_arg,
#line 5517 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1,
#line 5519 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2,
#line 5521 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3,
#line 5523 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4,
#line 5525 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5,
#line 5527 "transform_hlds.rbmm.interproc_region_lifetime.c"
  MR_Box * transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6)
#line 5529 "transform_hlds.rbmm.interproc_region_lifetime.c"
{
#line 5531 "transform_hlds.rbmm.interproc_region_lifetime.c"
  {
#line 5533 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__closure = transform_hlds__rbmm__interproc_region_lifetime__closure_arg;
#line 5535 "transform_hlds.rbmm.interproc_region_lifetime.c"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12;

#line 5538 "transform_hlds.rbmm.interproc_region_lifetime.c"
    {
#line 5540 "transform_hlds.rbmm.interproc_region_lifetime.c"
      transform_hlds__rbmm__interproc_region_lifetime__born_removal_rules_6_p_0(((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_2), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_3), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_4), ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_5), &transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12);
    }
#line 5543 "transform_hlds.rbmm.interproc_region_lifetime.c"
    *transform_hlds__rbmm__interproc_region_lifetime__wrapper_arg_6 = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__conv0_BornR_q_12));
#line 5545 "transform_hlds.rbmm.interproc_region_lifetime.c"
  }
#line 5547 "transform_hlds.rbmm.interproc_region_lifetime.c"
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
#line 86 "rbmm.interproc_region_lifetime.m"
  {
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_bool transform_hlds__rbmm__interproc_region_lifetime__succeeded;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_29_29;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_30_30;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64;
#line 86 "rbmm.interproc_region_lifetime.m"
    MR_Word transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65;
#line 92 "rbmm.interproc_region_lifetime.m"
    MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20;

#line 146 "rbmm.interproc_region_lifetime.m"
    {
#line 146 "rbmm.interproc_region_lifetime.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_13, &transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64);
    }
#line 147 "rbmm.interproc_region_lifetime.m"
    {
#line 147 "rbmm.interproc_region_lifetime.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64, &transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65);
    }
#line 155 "rbmm.interproc_region_lifetime.m"
    if ((transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "rbmm.interproc_region_lifetime.m"
      {
#line 157 "rbmm.interproc_region_lifetime.m"
        {
#line 157 "rbmm.interproc_region_lifetime.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.interproc_region_lifetime", (MR_String) "predicate \140transform_hlds.rbmm.interproc_region_lifetime.apply_live_region_rule\'/8", (MR_String) "no dependency info");
#line 157 "rbmm.interproc_region_lifetime.m"
          return;
        }
#line 156 "rbmm.interproc_region_lifetime.m"
      }
#line 155 "rbmm.interproc_region_lifetime.m"
    else
#line 149 "rbmm.interproc_region_lifetime.m"
      {
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__interproc_region_lifetime__MaybeDepInfo_65, (MR_Integer) 0)));
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__Deps1_84;
#line 149 "rbmm.interproc_region_lifetime.m"
        MR_Word transform_hlds__rbmm__interproc_region_lifetime__V_85_85;
#line 171 "rbmm.interproc_region_lifetime.m"
        MR_Box transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24;

#line 150 "rbmm.interproc_region_lifetime.m"
        {
#line 150 "rbmm.interproc_region_lifetime.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__rbmm__interproc_region_lifetime__DepInfo_66, &transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67);
        }
#line 5643 "transform_hlds.rbmm.interproc_region_lifetime.c"
        transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[1];
#line 170 "rbmm.interproc_region_lifetime.m"
        {
#line 170 "rbmm.interproc_region_lifetime.m"
          mercury__list__reverse_2_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87, transform_hlds__rbmm__interproc_region_lifetime__DepOrdering_67, &transform_hlds__rbmm__interproc_region_lifetime__Deps1_84);
        }
#line 172 "rbmm.interproc_region_lifetime.m"
        {
#line 172 "rbmm.interproc_region_lifetime.m"
          transform_hlds__rbmm__interproc_region_lifetime__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_5[0]));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_2));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 3) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[5]));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo1_64));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 5) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_14));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 6) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_15));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 7) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_16));
#line 172 "rbmm.interproc_region_lifetime.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_85_85, 8) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_17));
#line 172 "rbmm.interproc_region_lifetime.m"
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        {
#line 171 "rbmm.interproc_region_lifetime.m"
          mercury__list__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_23_87, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_85_85, transform_hlds__rbmm__interproc_region_lifetime__Deps1_84, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_0_23)), &transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24);
        }
#line 171 "rbmm.interproc_region_lifetime.m"
        *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_24 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv2_STATE_VARIABLE_BornRTable_24);
#line 149 "rbmm.interproc_region_lifetime.m"
      }
#line 90 "rbmm.interproc_region_lifetime.m"
    {
#line 90 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__apply_live_region_dead_removal_rules_7_p_0(transform_hlds__rbmm__interproc_region_lifetime__ModuleInfo_13, transform_hlds__rbmm__interproc_region_lifetime__RptaInfoTable_14, transform_hlds__rbmm__interproc_region_lifetime__ExecPathTable_15, transform_hlds__rbmm__interproc_region_lifetime__LRBeforeTable_16, transform_hlds__rbmm__interproc_region_lifetime__LRAfterTable_17, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_0_25, transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_26);
    }
#line 92 "rbmm.interproc_region_lifetime.m"
    {
#line 92 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 0) = ((MR_Box) (&transform_hlds__rbmm__interproc_region_lifetime_scalar_common_6[0]));
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 1) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0_3));
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 3) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__InputRTable_18));
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 4) = ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__OutputRTable_19));
#line 92 "rbmm.interproc_region_lifetime.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__interproc_region_lifetime__V_29_29, 5) = ((MR_Box) (*transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_BornRTable_24));
#line 92 "rbmm.interproc_region_lifetime.m"
    }
#line 5706 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 5708 "transform_hlds.rbmm.interproc_region_lifetime.c"
    transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_1[0];
#line 93 "rbmm.interproc_region_lifetime.m"
    {
#line 93 "rbmm.interproc_region_lifetime.m"
      transform_hlds__rbmm__interproc_region_lifetime__V_30_30 = mercury__map__init_0_f_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36);
    }
#line 92 "rbmm.interproc_region_lifetime.m"
    {
#line 92 "rbmm.interproc_region_lifetime.m"
      mercury__map__foldl_4_p_0(transform_hlds__rbmm__interproc_region_lifetime__TypeCtorInfo_35_35, transform_hlds__rbmm__interproc_region_lifetime__TypeInfo_36_36, (MR_Word) &transform_hlds__rbmm__interproc_region_lifetime_scalar_common_2[0], transform_hlds__rbmm__interproc_region_lifetime__V_29_29, *transform_hlds__rbmm__interproc_region_lifetime__STATE_VARIABLE_DeadRTable_26, ((MR_Box) (transform_hlds__rbmm__interproc_region_lifetime__V_30_30)), &transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20);
    }
#line 92 "rbmm.interproc_region_lifetime.m"
    *transform_hlds__rbmm__interproc_region_lifetime__ConstantRTable_20 = ((MR_Word) transform_hlds__rbmm__interproc_region_lifetime__conv4_ConstantRTable_20);
#line 86 "rbmm.interproc_region_lifetime.m"
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
