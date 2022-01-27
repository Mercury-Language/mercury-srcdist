/*
** Automatically generated from `rbmm.execution_path.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module transform_hlds.rbmm.execution_path. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__execution_path__init
ENDINIT
*/

#include "transform_hlds.rbmm.execution_path.mih"


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
#include "hlds.goal_form.mih"
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
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
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




#line 151 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 154 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 157 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 160 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 163 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 216 "rbmm.execution_path.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
#line 216 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg);

#line 209 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Switch_2,
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__3_3,
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4,
#line 209 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__5_5);

#line 187 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
#line 187 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 187 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
#line 187 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__4_4);

#line 174 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
#line 174 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 174 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
#line 174 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4);

#line 127 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
#line 127 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__CompoundGoal_6,
#line 127 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52,
#line 127 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);

#line 95 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
#line 95 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Goal_6,
#line 95 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24,
#line 95 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);

#line 216 "rbmm.execution_path.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__216__1_2_p_0(
#line 216 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15,
#line 216 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_55);

#line 282 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
#line 282 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ExecPath_1,
#line 282 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 282 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3);

#line 266 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
#line 266 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__1_1,
#line 266 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Extensions_2,
#line 266 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3);

#line 68 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_6,
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__PredId_7,
#line 68 "rbmm.execution_path.m"
  MR_Integer transform_hlds__rbmm__execution_path__ProcId_8,
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13,
#line 68 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14);

#line 65 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
#line 65 "rbmm.execution_path.m"
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3);

#line 58 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_5,
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__PredId_6,
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10,
#line 58 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11);

#line 55 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
#line 55 "rbmm.execution_path.m"
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_1[2][3];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_2[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_3[1][7];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_5[1][5];




static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__execution_path_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
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



#line 409 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 418 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 426 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 434 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 443 "transform_hlds.rbmm.execution_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 216 "rbmm.execution_path.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
#line 216 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg)
#line 216 "rbmm.execution_path.m"
{
#line 216 "rbmm.execution_path.m"
  {
#line 216 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 216 "rbmm.execution_path.m"
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;

#line 216 "rbmm.execution_path.m"
    {
#line 216 "rbmm.execution_path.m"
      return transform_hlds__rbmm__execution_path__succeeded = transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__216__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 4))));
    }
#line 216 "rbmm.execution_path.m"
    return transform_hlds__rbmm__execution_path__succeeded;
#line 216 "rbmm.execution_path.m"
  }
#line 216 "rbmm.execution_path.m"
}

#line 209 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Switch_2,
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__3_3,
#line 209 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4,
#line 209 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__5_5)
#line 209 "rbmm.execution_path.m"
{
#line 213 "rbmm.execution_path.m"
  {
#line 213 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 213 "rbmm.execution_path.m"
    if ((transform_hlds__rbmm__execution_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "rbmm.execution_path.m"
      *transform_hlds__rbmm__execution_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 213 "rbmm.execution_path.m"
    else
#line 214 "rbmm.execution_path.m"
      {
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Case_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__3_3, (MR_Integer) 0)));
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__3_3, (MR_Integer) 1)));
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 0)));
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 1)));
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__CaseGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 2)));
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Info_18;
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ProgPoint_19;
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23;
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsCase_47;
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsCases_48;
#line 214 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__V_51_51;
#line 218 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path___SwitchExpr_17;

#line 216 "rbmm.execution_path.m"
        {
#line 216 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 216 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_5[0]));
#line 216 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1));
#line 216 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 216 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__OtherConsIds_15));
#line 216 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "rbmm.execution_path.m"
        }
#line 216 "rbmm.execution_path.m"
        {
#line 216 "rbmm.execution_path.m"
          mercury__require__expect_4_p_0(transform_hlds__rbmm__execution_path__V_51_51, (MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "NYI: multi-cons-id cases");
        }
#line 218 "rbmm.execution_path.m"
        transform_hlds__rbmm__execution_path___SwitchExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Switch_2, (MR_Integer) 0)));
#line 218 "rbmm.execution_path.m"
        transform_hlds__rbmm__execution_path__Info_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Switch_2, (MR_Integer) 1)));
#line 219 "rbmm.execution_path.m"
        {
#line 219 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__execution_path__Info_18);
        }
#line 231 "rbmm.execution_path.m"
#line 231 "rbmm.execution_path.m"
        switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__MainConsId_14)) {
#line 231 "rbmm.execution_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 231 "rbmm.execution_path.m"
          case (MR_Integer) 0:
#line 254 "rbmm.execution_path.m"
            {
#line 255 "rbmm.execution_path.m"
              {
#line 255 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
#line 255 "rbmm.execution_path.m"
                return;
              }
#line 254 "rbmm.execution_path.m"
            }
#line 231 "rbmm.execution_path.m"
            break;
#line 231 "rbmm.execution_path.m"
          case (MR_Integer) 1:
#line 254 "rbmm.execution_path.m"
            {
#line 255 "rbmm.execution_path.m"
              {
#line 255 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
#line 255 "rbmm.execution_path.m"
                return;
              }
#line 254 "rbmm.execution_path.m"
            }
#line 231 "rbmm.execution_path.m"
            break;
#line 231 "rbmm.execution_path.m"
          case (MR_Integer) 2:
#line 254 "rbmm.execution_path.m"
            {
#line 255 "rbmm.execution_path.m"
              {
#line 255 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
#line 255 "rbmm.execution_path.m"
                return;
              }
#line 254 "rbmm.execution_path.m"
            }
#line 231 "rbmm.execution_path.m"
            break;
#line 231 "rbmm.execution_path.m"
          case (MR_Integer) 3:
#line 231 "rbmm.execution_path.m"
#line 231 "rbmm.execution_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 0)))) {
#line 231 "rbmm.execution_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 0:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 1:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 3:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 4:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 9:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 10:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 11:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 12:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 13:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 14:
#line 254 "rbmm.execution_path.m"
                {
#line 255 "rbmm.execution_path.m"
                  {
#line 255 "rbmm.execution_path.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
#line 255 "rbmm.execution_path.m"
                    return;
                  }
#line 254 "rbmm.execution_path.m"
                }
#line 231 "rbmm.execution_path.m"
                break;
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 2:
#line 224 "rbmm.execution_path.m"
                {
#line 224 "rbmm.execution_path.m"
                  MR_Integer transform_hlds__rbmm__execution_path__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 2)));
#line 224 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path___SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 1)));
#line 224 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 3)));

#line 225 "rbmm.execution_path.m"
                  transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__Arity_21 == (MR_Integer) 0);
#line 228 "rbmm.execution_path.m"
                  if (transform_hlds__rbmm__execution_path__succeeded)
#line 226 "rbmm.execution_path.m"
                    {
#line 226 "rbmm.execution_path.m"
                      MR_Word transform_hlds__rbmm__execution_path__V_64_64;
#line 226 "rbmm.execution_path.m"
                      MR_Word transform_hlds__rbmm__execution_path__V_65_65;
#line 226 "rbmm.execution_path.m"
                      MR_Word transform_hlds__rbmm__execution_path__V_66_66;

#line 227 "rbmm.execution_path.m"
                      {
#line 227 "rbmm.execution_path.m"
                        transform_hlds__rbmm__execution_path__V_66_66 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_19)), ((MR_Box) (transform_hlds__rbmm__execution_path__Switch_2)));
                      }
#line 227 "rbmm.execution_path.m"
                      {
#line 227 "rbmm.execution_path.m"
                        transform_hlds__rbmm__execution_path__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rbmm.execution_path.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_65_65, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_66_66));
#line 227 "rbmm.execution_path.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "rbmm.execution_path.m"
                      }
#line 227 "rbmm.execution_path.m"
                      {
#line 227 "rbmm.execution_path.m"
                        transform_hlds__rbmm__execution_path__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rbmm.execution_path.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_65_65));
#line 227 "rbmm.execution_path.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "rbmm.execution_path.m"
                      }
#line 226 "rbmm.execution_path.m"
                      {
#line 226 "rbmm.execution_path.m"
                        transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, transform_hlds__rbmm__execution_path__V_64_64, &transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23);
                      }
#line 226 "rbmm.execution_path.m"
                    }
#line 228 "rbmm.execution_path.m"
                  else
#line 229 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4;
#line 224 "rbmm.execution_path.m"
                }
#line 231 "rbmm.execution_path.m"
                break;
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 5:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 6:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 7:
#line 231 "rbmm.execution_path.m"
              case (MR_Integer) 8:
#line 236 "rbmm.execution_path.m"
                {
#line 236 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__V_59_59;
#line 236 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__V_60_60;
#line 236 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__V_61_61;

#line 239 "rbmm.execution_path.m"
                  {
#line 239 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__V_61_61 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_19)), ((MR_Box) (transform_hlds__rbmm__execution_path__Switch_2)));
                  }
#line 239 "rbmm.execution_path.m"
                  {
#line 239 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "rbmm.execution_path.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_61_61));
#line 239 "rbmm.execution_path.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "rbmm.execution_path.m"
                  }
#line 239 "rbmm.execution_path.m"
                  {
#line 239 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "rbmm.execution_path.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_59_59, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_60_60));
#line 239 "rbmm.execution_path.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "rbmm.execution_path.m"
                  }
#line 238 "rbmm.execution_path.m"
                  {
#line 238 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, transform_hlds__rbmm__execution_path__V_59_59, &transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23);
                  }
#line 236 "rbmm.execution_path.m"
                }
#line 231 "rbmm.execution_path.m"
                break;
#line 231 "rbmm.execution_path.m"
            }
#line 231 "rbmm.execution_path.m"
            break;
#line 231 "rbmm.execution_path.m"
        }
#line 257 "rbmm.execution_path.m"
        {
#line 257 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__CaseGoal_16, transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23, &transform_hlds__rbmm__execution_path__ExecPathsCase_47);
        }
#line 259 "rbmm.execution_path.m"
        {
#line 259 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(transform_hlds__rbmm__execution_path__Switch_2, transform_hlds__rbmm__execution_path__Cases_12, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, &transform_hlds__rbmm__execution_path__ExecPathsCases_48);
        }
#line 261 "rbmm.execution_path.m"
        {
#line 261 "rbmm.execution_path.m"
          *transform_hlds__rbmm__execution_path__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsCase_47, transform_hlds__rbmm__execution_path__ExecPathsCases_48);
        }
#line 214 "rbmm.execution_path.m"
      }
#line 213 "rbmm.execution_path.m"
  }
#line 209 "rbmm.execution_path.m"
}

#line 187 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
#line 187 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 187 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
#line 187 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__4_4)
#line 187 "rbmm.execution_path.m"
{
#line 190 "rbmm.execution_path.m"
  {
#line 190 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 190 "rbmm.execution_path.m"
    if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "rbmm.execution_path.m"
      *transform_hlds__rbmm__execution_path__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "rbmm.execution_path.m"
    else
#line 191 "rbmm.execution_path.m"
      {
#line 191 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Disj_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
#line 191 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Disjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
#line 191 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisj_11;
#line 191 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisjs_12;

#line 192 "rbmm.execution_path.m"
        {
#line 192 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disj_8, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__ExecPathsDisj_11);
        }
#line 194 "rbmm.execution_path.m"
        {
#line 194 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disjs_9, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__ExecPathsDisjs_12);
        }
#line 196 "rbmm.execution_path.m"
        {
#line 196 "rbmm.execution_path.m"
          *transform_hlds__rbmm__execution_path__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsDisj_11, transform_hlds__rbmm__execution_path__ExecPathsDisjs_12);
        }
#line 191 "rbmm.execution_path.m"
      }
#line 190 "rbmm.execution_path.m"
  }
#line 187 "rbmm.execution_path.m"
}

#line 174 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
#line 174 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 174 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
#line 174 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4)
#line 174 "rbmm.execution_path.m"
{
#line 177 "rbmm.execution_path.m"
  while (MR_TRUE)
#line 177 "rbmm.execution_path.m"
    {
#line 177 "rbmm.execution_path.m"
      /* tailcall optimized into a loop */
#line 177 "rbmm.execution_path.m"
      {
#line 177 "rbmm.execution_path.m"
        MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 177 "rbmm.execution_path.m"
        if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "rbmm.execution_path.m"
          *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3;
#line 177 "rbmm.execution_path.m"
        else
#line 178 "rbmm.execution_path.m"
          {
#line 178 "rbmm.execution_path.m"
            MR_Word transform_hlds__rbmm__execution_path__Conj_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "rbmm.execution_path.m"
            MR_Word transform_hlds__rbmm__execution_path__Conjs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "rbmm.execution_path.m"
            MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15;

#line 179 "rbmm.execution_path.m"
            {
#line 179 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conj_10, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15);
            }
#line 180 "rbmm.execution_path.m"
            /* direct tailcall eliminated */
#line 180 "rbmm.execution_path.m"
            {
#line 180 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__execution_path__Conjs_11;
#line 180 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0__tmp_copy_3 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15;

#line 180 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0__tmp_copy_3;
#line 180 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__HeadVar__2_2 = transform_hlds__rbmm__execution_path__HeadVar__2__tmp_copy_2;
#line 180 "rbmm.execution_path.m"
            }
#line 180 "rbmm.execution_path.m"
            continue;
#line 178 "rbmm.execution_path.m"
          }
#line 177 "rbmm.execution_path.m"
      }
#line 177 "rbmm.execution_path.m"
      break;
#line 177 "rbmm.execution_path.m"
    }
#line 174 "rbmm.execution_path.m"
}

#line 127 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
#line 127 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__CompoundGoal_6,
#line 127 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52,
#line 127 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53)
#line 127 "rbmm.execution_path.m"
{
#line 130 "rbmm.execution_path.m"
  {
#line 130 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 130 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__CompoundGoal_6, (MR_Integer) 0)));
#line 131 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__CompoundGoal_6, (MR_Integer) 1)));

#line 135 "rbmm.execution_path.m"
#line 135 "rbmm.execution_path.m"
    switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__Expr_8)) {
#line 135 "rbmm.execution_path.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 135 "rbmm.execution_path.m"
      case (MR_Integer) 0:
#line 144 "rbmm.execution_path.m"
        {
#line 144 "rbmm.execution_path.m"
          MR_Word transform_hlds__rbmm__execution_path__Goal_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__execution_path__Expr_8), (MR_Integer) 0);

#line 145 "rbmm.execution_path.m"
          {
#line 145 "rbmm.execution_path.m"
            transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_18, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
#line 145 "rbmm.execution_path.m"
            return;
          }
#line 144 "rbmm.execution_path.m"
        }
#line 135 "rbmm.execution_path.m"
        break;
#line 135 "rbmm.execution_path.m"
      case (MR_Integer) 1:
#line 168 "rbmm.execution_path.m"
        {
#line 169 "rbmm.execution_path.m"
          {
#line 169 "rbmm.execution_path.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
            return;
          }
#line 168 "rbmm.execution_path.m"
        }
#line 135 "rbmm.execution_path.m"
        break;
#line 135 "rbmm.execution_path.m"
      case (MR_Integer) 2:
#line 168 "rbmm.execution_path.m"
        {
#line 169 "rbmm.execution_path.m"
          {
#line 169 "rbmm.execution_path.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
            return;
          }
#line 168 "rbmm.execution_path.m"
        }
#line 135 "rbmm.execution_path.m"
        break;
#line 135 "rbmm.execution_path.m"
      case (MR_Integer) 3:
#line 135 "rbmm.execution_path.m"
#line 135 "rbmm.execution_path.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 0)))) {
#line 135 "rbmm.execution_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 0:
#line 168 "rbmm.execution_path.m"
            {
#line 169 "rbmm.execution_path.m"
              {
#line 169 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
                return;
              }
#line 168 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 1:
#line 168 "rbmm.execution_path.m"
            {
#line 169 "rbmm.execution_path.m"
              {
#line 169 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
                return;
              }
#line 168 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 2:
#line 135 "rbmm.execution_path.m"
            {
#line 135 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
#line 133 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

#line 135 "rbmm.execution_path.m"
              if ((transform_hlds__rbmm__execution_path__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "rbmm.execution_path.m"
                {
#line 169 "rbmm.execution_path.m"
                  {
#line 169 "rbmm.execution_path.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
                    return;
                  }
#line 168 "rbmm.execution_path.m"
                }
#line 135 "rbmm.execution_path.m"
              else
#line 178 "rbmm.execution_path.m"
                {
#line 178 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__Conj_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_95_95, (MR_Integer) 0)));
#line 178 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__Conjs_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_95_95, (MR_Integer) 1)));
#line 178 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108;

#line 179 "rbmm.execution_path.m"
                  {
#line 179 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conj_103, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108);
                  }
#line 180 "rbmm.execution_path.m"
                  {
#line 180 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conjs_104, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
#line 180 "rbmm.execution_path.m"
                    return;
                  }
#line 178 "rbmm.execution_path.m"
                }
#line 135 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 3:
#line 135 "rbmm.execution_path.m"
            {
#line 135 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

#line 135 "rbmm.execution_path.m"
              if ((transform_hlds__rbmm__execution_path__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "rbmm.execution_path.m"
                {
#line 169 "rbmm.execution_path.m"
                  {
#line 169 "rbmm.execution_path.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
                    return;
                  }
#line 168 "rbmm.execution_path.m"
                }
#line 135 "rbmm.execution_path.m"
              else
#line 191 "rbmm.execution_path.m"
                {
#line 191 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__Disj_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_97_97, (MR_Integer) 0)));
#line 191 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__Disjs_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_97_97, (MR_Integer) 1)));
#line 191 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisj_116;
#line 191 "rbmm.execution_path.m"
                  MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisjs_117;

#line 192 "rbmm.execution_path.m"
                  {
#line 192 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disj_113, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsDisj_116);
                  }
#line 194 "rbmm.execution_path.m"
                  {
#line 194 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disjs_114, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsDisjs_117);
                  }
#line 196 "rbmm.execution_path.m"
                  {
#line 196 "rbmm.execution_path.m"
                    *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsDisj_116, transform_hlds__rbmm__execution_path__ExecPathsDisjs_117);
                  }
#line 191 "rbmm.execution_path.m"
                }
#line 135 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 4:
#line 136 "rbmm.execution_path.m"
            {
#line 136 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 3)));
#line 136 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));
#line 136 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));

#line 137 "rbmm.execution_path.m"
              {
#line 137 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(transform_hlds__rbmm__execution_path__CompoundGoal_6, transform_hlds__rbmm__execution_path__Cases_15, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
#line 137 "rbmm.execution_path.m"
                return;
              }
#line 136 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 5:
#line 147 "rbmm.execution_path.m"
            {
#line 147 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__Goal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
#line 147 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

#line 150 "rbmm.execution_path.m"
              {
#line 150 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_69, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
#line 150 "rbmm.execution_path.m"
                return;
              }
#line 147 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 6:
#line 152 "rbmm.execution_path.m"
            {
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 3)));
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 4)));
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsCond_24;
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsCondThen_25;
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsElse_26;
#line 152 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path___V_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

#line 153 "rbmm.execution_path.m"
              {
#line 153 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Cond_21, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsCond_24);
              }
#line 155 "rbmm.execution_path.m"
              {
#line 155 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Then_22, transform_hlds__rbmm__execution_path__ExecPathsCond_24, &transform_hlds__rbmm__execution_path__ExecPathsCondThen_25);
              }
#line 157 "rbmm.execution_path.m"
              {
#line 157 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Else_23, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsElse_26);
              }
#line 159 "rbmm.execution_path.m"
              {
#line 159 "rbmm.execution_path.m"
                *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsCondThen_25, transform_hlds__rbmm__execution_path__ExecPathsElse_26);
              }
#line 152 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
          case (MR_Integer) 7:
#line 168 "rbmm.execution_path.m"
            {
#line 169 "rbmm.execution_path.m"
              {
#line 169 "rbmm.execution_path.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
#line 169 "rbmm.execution_path.m"
                return;
              }
#line 168 "rbmm.execution_path.m"
            }
#line 135 "rbmm.execution_path.m"
            break;
#line 135 "rbmm.execution_path.m"
        }
#line 135 "rbmm.execution_path.m"
        break;
#line 135 "rbmm.execution_path.m"
    }
#line 130 "rbmm.execution_path.m"
  }
#line 127 "rbmm.execution_path.m"
}

#line 95 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
#line 95 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Goal_6,
#line 95 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24,
#line 95 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25)
#line 95 "rbmm.execution_path.m"
{
#line 98 "rbmm.execution_path.m"
  {
#line 98 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 98 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Goal_6, (MR_Integer) 0)));
#line 98 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Goal_6, (MR_Integer) 1)));
#line 98 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__HasSubGoals_10;

#line 100 "rbmm.execution_path.m"
    {
#line 100 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__HasSubGoals_10 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__execution_path__GoalExpr_8);
    }
#line 120 "rbmm.execution_path.m"
#line 120 "rbmm.execution_path.m"
    switch (transform_hlds__rbmm__execution_path__HasSubGoals_10) {
#line 120 "rbmm.execution_path.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 120 "rbmm.execution_path.m"
      case (MR_Integer) 1:
#line 114 "rbmm.execution_path.m"
        {
#line 105 "rbmm.execution_path.m"
#line 105 "rbmm.execution_path.m"
          switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__GoalExpr_8)) {
#line 105 "rbmm.execution_path.m"
            default:
#line 105 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__succeeded = MR_FALSE;
#line 105 "rbmm.execution_path.m"
              break;
#line 105 "rbmm.execution_path.m"
            case (MR_Integer) 1:
#line 104 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__succeeded = MR_TRUE;
#line 105 "rbmm.execution_path.m"
              break;
#line 105 "rbmm.execution_path.m"
            case (MR_Integer) 2:
#line 105 "rbmm.execution_path.m"
              transform_hlds__rbmm__execution_path__succeeded = MR_TRUE;
#line 105 "rbmm.execution_path.m"
              break;
#line 105 "rbmm.execution_path.m"
            case (MR_Integer) 3:
#line 105 "rbmm.execution_path.m"
#line 105 "rbmm.execution_path.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 0)))) {
#line 105 "rbmm.execution_path.m"
                default:
#line 105 "rbmm.execution_path.m"
                  transform_hlds__rbmm__execution_path__succeeded = MR_FALSE;
#line 105 "rbmm.execution_path.m"
                  break;
#line 105 "rbmm.execution_path.m"
                case (MR_Integer) 2:
#line 106 "rbmm.execution_path.m"
                  {
#line 106 "rbmm.execution_path.m"
                    MR_Word transform_hlds__rbmm__execution_path__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 2)));
#line 106 "rbmm.execution_path.m"
                    MR_Word transform_hlds__rbmm__execution_path___ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 1)));

#line 106 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "rbmm.execution_path.m"
                  }
#line 105 "rbmm.execution_path.m"
                  break;
#line 105 "rbmm.execution_path.m"
                case (MR_Integer) 3:
#line 107 "rbmm.execution_path.m"
                  {
#line 107 "rbmm.execution_path.m"
                    MR_Word transform_hlds__rbmm__execution_path__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 1)));

#line 107 "rbmm.execution_path.m"
                    transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "rbmm.execution_path.m"
                  }
#line 105 "rbmm.execution_path.m"
                  break;
#line 105 "rbmm.execution_path.m"
              }
#line 105 "rbmm.execution_path.m"
              break;
#line 105 "rbmm.execution_path.m"
          }
#line 114 "rbmm.execution_path.m"
          if (transform_hlds__rbmm__execution_path__succeeded)
#line 111 "rbmm.execution_path.m"
            {
#line 111 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__ProgPoint_23;
#line 111 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_29_29;
#line 111 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_31_31;
#line 111 "rbmm.execution_path.m"
              MR_Word transform_hlds__rbmm__execution_path__V_32_32;

#line 111 "rbmm.execution_path.m"
              {
#line 111 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__ProgPoint_23 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__execution_path__GoalInfo_9);
              }
#line 113 "rbmm.execution_path.m"
              {
#line 113 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__V_32_32 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_23)), ((MR_Box) (transform_hlds__rbmm__execution_path__Goal_6)));
              }
#line 113 "rbmm.execution_path.m"
              {
#line 113 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "rbmm.execution_path.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_31_31, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_32_32));
#line 113 "rbmm.execution_path.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "rbmm.execution_path.m"
              }
#line 113 "rbmm.execution_path.m"
              {
#line 113 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "rbmm.execution_path.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_29_29, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_31_31));
#line 113 "rbmm.execution_path.m"
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "rbmm.execution_path.m"
              }
#line 112 "rbmm.execution_path.m"
              {
#line 112 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, transform_hlds__rbmm__execution_path__V_29_29, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
#line 112 "rbmm.execution_path.m"
                return;
              }
#line 111 "rbmm.execution_path.m"
            }
#line 114 "rbmm.execution_path.m"
          else
#line 118 "rbmm.execution_path.m"
            {
#line 118 "rbmm.execution_path.m"
              {
#line 118 "rbmm.execution_path.m"
                transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__rbmm__execution_path_scalar_common_2[3]), transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
#line 118 "rbmm.execution_path.m"
                return;
              }
#line 118 "rbmm.execution_path.m"
            }
#line 114 "rbmm.execution_path.m"
        }
#line 120 "rbmm.execution_path.m"
        break;
#line 120 "rbmm.execution_path.m"
      case (MR_Integer) 0:
#line 122 "rbmm.execution_path.m"
        {
#line 122 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_6, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
#line 122 "rbmm.execution_path.m"
          return;
        }
#line 120 "rbmm.execution_path.m"
        break;
#line 120 "rbmm.execution_path.m"
    }
#line 98 "rbmm.execution_path.m"
  }
#line 95 "rbmm.execution_path.m"
}

#line 216 "rbmm.execution_path.m"
static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__216__1_2_p_0(
#line 216 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15,
#line 216 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_55)
#line 216 "rbmm.execution_path.m"
{
#line 216 "rbmm.execution_path.m"
  {
#line 216 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 216 "rbmm.execution_path.m"
    {
#line 216 "rbmm.execution_path.m"
      return transform_hlds__rbmm__execution_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__execution_path__OtherConsIds_15)), ((MR_Box) (transform_hlds__rbmm__execution_path__HeadVar__2_55)));
    }
#line 216 "rbmm.execution_path.m"
    return transform_hlds__rbmm__execution_path__succeeded;
#line 216 "rbmm.execution_path.m"
  }
#line 216 "rbmm.execution_path.m"
}

#line 282 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
#line 282 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ExecPath_1,
#line 282 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
#line 282 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3)
#line 282 "rbmm.execution_path.m"
{
#line 285 "rbmm.execution_path.m"
  {
#line 285 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 285 "rbmm.execution_path.m"
    if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "rbmm.execution_path.m"
      *transform_hlds__rbmm__execution_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "rbmm.execution_path.m"
    else
#line 287 "rbmm.execution_path.m"
      {
#line 287 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Extension_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Extensions_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPath_9;
#line 287 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10;

#line 288 "rbmm.execution_path.m"
        {
#line 288 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__ExtendedExecPath_9 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[0], transform_hlds__rbmm__execution_path__ExecPath_1, transform_hlds__rbmm__execution_path__Extension_6);
        }
#line 289 "rbmm.execution_path.m"
        {
#line 289 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPath_1, transform_hlds__rbmm__execution_path__Extensions_7, &transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10);
        }
#line 290 "rbmm.execution_path.m"
        {
#line 290 "rbmm.execution_path.m"
          MR_Word base;
#line 290 "rbmm.execution_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rbmm.execution_path.m"
          *transform_hlds__rbmm__execution_path__HeadVar__3_3 = base;
#line 290 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__ExtendedExecPath_9));
#line 290 "rbmm.execution_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10));
#line 290 "rbmm.execution_path.m"
        }
#line 287 "rbmm.execution_path.m"
      }
#line 285 "rbmm.execution_path.m"
  }
#line 282 "rbmm.execution_path.m"
}

#line 266 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
#line 266 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__1_1,
#line 266 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__Extensions_2,
#line 266 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3)
#line 266 "rbmm.execution_path.m"
{
#line 269 "rbmm.execution_path.m"
  {
#line 269 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

#line 269 "rbmm.execution_path.m"
    if ((transform_hlds__rbmm__execution_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "rbmm.execution_path.m"
      *transform_hlds__rbmm__execution_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "rbmm.execution_path.m"
    else
#line 271 "rbmm.execution_path.m"
      {
#line 271 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPath_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPaths_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9;
#line 271 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10;

#line 272 "rbmm.execution_path.m"
        {
#line 272 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPath_5, transform_hlds__rbmm__execution_path__Extensions_2, &transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9);
        }
#line 273 "rbmm.execution_path.m"
        {
#line 273 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPaths_6, transform_hlds__rbmm__execution_path__Extensions_2, &transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10);
        }
#line 275 "rbmm.execution_path.m"
        {
#line 275 "rbmm.execution_path.m"
          *transform_hlds__rbmm__execution_path__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9, transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10);
        }
#line 271 "rbmm.execution_path.m"
      }
#line 269 "rbmm.execution_path.m"
  }
#line 266 "rbmm.execution_path.m"
}

#line 68 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_6,
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__PredId_7,
#line 68 "rbmm.execution_path.m"
  MR_Integer transform_hlds__rbmm__execution_path__ProcId_8,
#line 68 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13,
#line 68 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14)
#line 68 "rbmm.execution_path.m"
{
#line 71 "rbmm.execution_path.m"
  {
#line 71 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 71 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__PPId_10;
#line 73 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__V_15_15;

#line 72 "rbmm.execution_path.m"
    {
#line 72 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__PPId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 72 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__PPId_10, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__PredId_7));
#line 72 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__PPId_10, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__ProcId_8));
#line 72 "rbmm.execution_path.m"
    }
#line 73 "rbmm.execution_path.m"
    {
#line 73 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_15_15, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__PPId_10));
#line 73 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 73 "rbmm.execution_path.m"
    }
#line 73 "rbmm.execution_path.m"
    {
#line 73 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__execution_path__V_15_15, transform_hlds__rbmm__execution_path__ModuleInfo_6);
    }
#line 75 "rbmm.execution_path.m"
    if (transform_hlds__rbmm__execution_path__succeeded)
#line 75 "rbmm.execution_path.m"
      *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13;
#line 75 "rbmm.execution_path.m"
    else
#line 76 "rbmm.execution_path.m"
      {
#line 76 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ProcInfo_11;
#line 76 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ExecPaths_12;
#line 76 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__ProcInfo_23;
#line 76 "rbmm.execution_path.m"
        MR_Word transform_hlds__rbmm__execution_path__Goal_24;

#line 76 "rbmm.execution_path.m"
        {
#line 76 "rbmm.execution_path.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_6, transform_hlds__rbmm__execution_path__PPId_10, &transform_hlds__rbmm__execution_path__ProcInfo_11);
        }
#line 88 "rbmm.execution_path.m"
        {
#line 88 "rbmm.execution_path.m"
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_6, transform_hlds__rbmm__execution_path__ProcInfo_11, &transform_hlds__rbmm__execution_path__ProcInfo_23);
        }
#line 89 "rbmm.execution_path.m"
        {
#line 89 "rbmm.execution_path.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__execution_path__ProcInfo_23, &transform_hlds__rbmm__execution_path__Goal_24);
        }
#line 91 "rbmm.execution_path.m"
        {
#line 91 "rbmm.execution_path.m"
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_24, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__rbmm__execution_path_scalar_common_2[3]), &transform_hlds__rbmm__execution_path__ExecPaths_12);
        }
#line 78 "rbmm.execution_path.m"
        {
#line 78 "rbmm.execution_path.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__execution_path__PPId_10)), ((MR_Box) (transform_hlds__rbmm__execution_path__ExecPaths_12)), transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14);
#line 78 "rbmm.execution_path.m"
          return;
        }
#line 76 "rbmm.execution_path.m"
      }
#line 71 "rbmm.execution_path.m"
  }
#line 68 "rbmm.execution_path.m"
}

#line 65 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
#line 65 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
#line 65 "rbmm.execution_path.m"
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3)
#line 65 "rbmm.execution_path.m"
{
#line 65 "rbmm.execution_path.m"
  {
#line 65 "rbmm.execution_path.m"
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;
#line 65 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14;

#line 65 "rbmm.execution_path.m"
    {
#line 65 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__rbmm__execution_path__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_2), &transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14);
    }
#line 65 "rbmm.execution_path.m"
    *transform_hlds__rbmm__execution_path__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14));
#line 65 "rbmm.execution_path.m"
  }
#line 65 "rbmm.execution_path.m"
}

#line 58 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_5,
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__PredId_6,
#line 58 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10,
#line 58 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11)
#line 58 "rbmm.execution_path.m"
{
#line 62 "rbmm.execution_path.m"
  {
#line 62 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 62 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__PredInfo_8;
#line 62 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__ProcIds_9;
#line 62 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__V_12_12;
#line 65 "rbmm.execution_path.m"
    MR_Box transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11;

#line 63 "rbmm.execution_path.m"
    {
#line 63 "rbmm.execution_path.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_5, transform_hlds__rbmm__execution_path__PredId_6, &transform_hlds__rbmm__execution_path__PredInfo_8);
    }
#line 64 "rbmm.execution_path.m"
    {
#line 64 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__execution_path__PredInfo_8);
    }
#line 65 "rbmm.execution_path.m"
    {
#line 65 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 65 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_4[0]));
#line 65 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1));
#line 65 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 65 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__ModuleInfo_5));
#line 65 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__execution_path__PredId_6));
#line 65 "rbmm.execution_path.m"
    }
#line 65 "rbmm.execution_path.m"
    {
#line 65 "rbmm.execution_path.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[1], transform_hlds__rbmm__execution_path__V_12_12, transform_hlds__rbmm__execution_path__ProcIds_9, ((MR_Box) (transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10)), &transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11);
    }
#line 65 "rbmm.execution_path.m"
    *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11 = ((MR_Word) transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11);
#line 62 "rbmm.execution_path.m"
  }
#line 58 "rbmm.execution_path.m"
}

#line 55 "rbmm.execution_path.m"
static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
#line 55 "rbmm.execution_path.m"
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
#line 55 "rbmm.execution_path.m"
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3)
#line 55 "rbmm.execution_path.m"
{
#line 55 "rbmm.execution_path.m"
  {
#line 55 "rbmm.execution_path.m"
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;
#line 55 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11;

#line 55 "rbmm.execution_path.m"
    {
#line 55 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_2), &transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11);
    }
#line 55 "rbmm.execution_path.m"
    *transform_hlds__rbmm__execution_path__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11));
#line 55 "rbmm.execution_path.m"
  }
#line 55 "rbmm.execution_path.m"
}

#line 25 "rbmm.execution_path.m"
void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(
#line 25 "rbmm.execution_path.m"
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_3,
#line 25 "rbmm.execution_path.m"
  MR_Word * transform_hlds__rbmm__execution_path__ExecPathTable_4)
#line 25 "rbmm.execution_path.m"
{
#line 52 "rbmm.execution_path.m"
  {
#line 52 "rbmm.execution_path.m"
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
#line 52 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__PredIds_5;
#line 52 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__ExecPathTable0_6;
#line 52 "rbmm.execution_path.m"
    MR_Word transform_hlds__rbmm__execution_path__V_7_7;
#line 55 "rbmm.execution_path.m"
    MR_Box transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4;

#line 53 "rbmm.execution_path.m"
    {
#line 53 "rbmm.execution_path.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_3, &transform_hlds__rbmm__execution_path__PredIds_5);
    }
#line 54 "rbmm.execution_path.m"
    {
#line 54 "rbmm.execution_path.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[1], &transform_hlds__rbmm__execution_path__ExecPathTable0_6);
    }
#line 55 "rbmm.execution_path.m"
    {
#line 55 "rbmm.execution_path.m"
      transform_hlds__rbmm__execution_path__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 55 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_3[0]));
#line 55 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1));
#line 55 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 55 "rbmm.execution_path.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__ModuleInfo_3));
#line 55 "rbmm.execution_path.m"
    }
#line 55 "rbmm.execution_path.m"
    {
#line 55 "rbmm.execution_path.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[1], transform_hlds__rbmm__execution_path__V_7_7, transform_hlds__rbmm__execution_path__PredIds_5, ((MR_Box) (transform_hlds__rbmm__execution_path__ExecPathTable0_6)), &transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4);
    }
#line 55 "rbmm.execution_path.m"
    *transform_hlds__rbmm__execution_path__ExecPathTable_4 = ((MR_Word) transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4);
#line 52 "rbmm.execution_path.m"
  }
#line 25 "rbmm.execution_path.m"
}

void mercury__transform_hlds__rbmm__execution_path__init(void)
{
}

void mercury__transform_hlds__rbmm__execution_path__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__execution_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.execution_path. */
