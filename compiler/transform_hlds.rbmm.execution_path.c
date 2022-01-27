/*
** Automatically generated from `rbmm.execution_path.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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




static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word transform_hlds__rbmm__execution_path__Switch_2,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__5_5);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__4_4);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__CompoundGoal_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__Goal_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(
  MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_55);

static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ExecPath_1,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__execution_path__Extensions_2,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__execution_path__PredId_7,
  MR_Integer transform_hlds__rbmm__execution_path__ProcId_8,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__execution_path__PredId_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11);

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__execution_path__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__execution_path__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__execution_path__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__execution_path__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__execution_path__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;

    {
      transform_hlds__rbmm__execution_path__succeeded = transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 4))));
    }
    return transform_hlds__rbmm__execution_path__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word transform_hlds__rbmm__execution_path__Switch_2,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__3_3,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

    if ((transform_hlds__rbmm__execution_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__rbmm__execution_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__rbmm__execution_path__Case_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__execution_path__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__execution_path__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__execution_path__CaseGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Case_11, (MR_Integer) 2)));
        MR_Word transform_hlds__rbmm__execution_path__Info_18;
        MR_Word transform_hlds__rbmm__execution_path__ProgPoint_19;
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23;
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsCase_47;
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsCases_48;
        MR_Word transform_hlds__rbmm__execution_path__V_51_51;
        MR_Word transform_hlds__rbmm__execution_path___SwitchExpr_17;

        {
          transform_hlds__rbmm__execution_path__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__OtherConsIds_15));
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_51_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(transform_hlds__rbmm__execution_path__V_51_51, (MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "NYI: multi-cons-id cases");
        }
        transform_hlds__rbmm__execution_path___SwitchExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Switch_2, (MR_Integer) 0)));
        transform_hlds__rbmm__execution_path__Info_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Switch_2, (MR_Integer) 1)));
        {
          transform_hlds__rbmm__execution_path__ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__execution_path__Info_18);
        }
        switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__MainConsId_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
              case (MR_Integer) 14:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_cases\'/5", (MR_String) "unexpected cons_id");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer transform_hlds__rbmm__execution_path__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 2)));
                  MR_Word transform_hlds__rbmm__execution_path___SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__execution_path__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__MainConsId_14, (MR_Integer) 3)));

                  transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__Arity_21 == (MR_Integer) 0);
                  if (transform_hlds__rbmm__execution_path__succeeded)
                    {
                      MR_Word transform_hlds__rbmm__execution_path__V_64_64;
                      MR_Word transform_hlds__rbmm__execution_path__V_65_65;
                      MR_Word transform_hlds__rbmm__execution_path__V_66_66;

                      {
                        transform_hlds__rbmm__execution_path__V_66_66 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_19)), ((MR_Box) (transform_hlds__rbmm__execution_path__Switch_2)));
                      }
                      {
                        transform_hlds__rbmm__execution_path__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_65_65, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_66_66));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        transform_hlds__rbmm__execution_path__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_64_64, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_65_65));
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, transform_hlds__rbmm__execution_path__V_64_64, &transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23);
                      }
                    }
                  else
                    transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4;
                }
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  MR_Word transform_hlds__rbmm__execution_path__V_59_59;
                  MR_Word transform_hlds__rbmm__execution_path__V_60_60;
                  MR_Word transform_hlds__rbmm__execution_path__V_61_61;

                  {
                    transform_hlds__rbmm__execution_path__V_61_61 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_19)), ((MR_Box) (transform_hlds__rbmm__execution_path__Switch_2)));
                  }
                  {
                    transform_hlds__rbmm__execution_path__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_60_60, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_61_61));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__rbmm__execution_path__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_59_59, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_60_60));
                    MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, transform_hlds__rbmm__execution_path__V_59_59, &transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23);
                  }
                }
                break;
            }
            break;
        }
        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__CaseGoal_16, transform_hlds__rbmm__execution_path__ExecPathsBeforeCase_23, &transform_hlds__rbmm__execution_path__ExecPathsCase_47);
        }
        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(transform_hlds__rbmm__execution_path__Switch_2, transform_hlds__rbmm__execution_path__Cases_12, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_4, &transform_hlds__rbmm__execution_path__ExecPathsCases_48);
        }
        {
          *transform_hlds__rbmm__execution_path__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsCase_47, transform_hlds__rbmm__execution_path__ExecPathsCases_48);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

    if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__rbmm__execution_path__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__rbmm__execution_path__Disj_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__execution_path__Disjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisj_11;
        MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisjs_12;

        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disj_8, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__ExecPathsDisj_11);
        }
        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disjs_9, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__ExecPathsDisjs_12);
        }
        {
          *transform_hlds__rbmm__execution_path__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsDisj_11, transform_hlds__rbmm__execution_path__ExecPathsDisjs_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__rbmm__execution_path__succeeded;

        if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_4 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3;
        else
          {
            MR_Word transform_hlds__rbmm__execution_path__Conj_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__rbmm__execution_path__Conjs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15;

            {
              transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conj_10, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3, &transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__rbmm__execution_path__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__execution_path__Conjs_11;
              MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0__tmp_copy_3 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_15;

              transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_3 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0__tmp_copy_3;
              transform_hlds__rbmm__execution_path__HeadVar__2_2 = transform_hlds__rbmm__execution_path__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__CompoundGoal_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Word transform_hlds__rbmm__execution_path__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__CompoundGoal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__execution_path__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__CompoundGoal_6, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__Expr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__rbmm__execution_path__Goal_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__rbmm__execution_path__Expr_8), (MR_Integer) 0);

          {
            transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_18, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__rbmm__execution_path__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__execution_path__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

              if ((transform_hlds__rbmm__execution_path__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__rbmm__execution_path__Conj_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_95_95, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__execution_path__Conjs_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_95_95, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108;

                  {
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conj_103, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108);
                  }
                  {
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_110_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Conjs_104, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_15_108, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__rbmm__execution_path__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

              if ((transform_hlds__rbmm__execution_path__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__rbmm__execution_path__Disj_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_97_97, (MR_Integer) 0)));
                  MR_Word transform_hlds__rbmm__execution_path__Disjs_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_97_97, (MR_Integer) 1)));
                  MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisj_116;
                  MR_Word transform_hlds__rbmm__execution_path__ExecPathsDisjs_117;

                  {
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disj_113, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsDisj_116);
                  }
                  {
                    transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_100_105_115_106_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Disjs_114, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsDisjs_117);
                  }
                  {
                    *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsDisj_116, transform_hlds__rbmm__execution_path__ExecPathsDisjs_117);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__rbmm__execution_path__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__execution_path__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__rbmm__execution_path__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));

              {
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(transform_hlds__rbmm__execution_path__CompoundGoal_6, transform_hlds__rbmm__execution_path__Cases_15, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__rbmm__execution_path__Goal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__execution_path__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_69, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__rbmm__execution_path__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__rbmm__execution_path__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__rbmm__execution_path__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 4)));
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsCond_24;
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsCondThen_25;
              MR_Word transform_hlds__rbmm__execution_path__ExecPathsElse_26;
              MR_Word transform_hlds__rbmm__execution_path___V_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__Expr_8, (MR_Integer) 1)));

              {
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Cond_21, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsCond_24);
              }
              {
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Then_22, transform_hlds__rbmm__execution_path__ExecPathsCond_24, &transform_hlds__rbmm__execution_path__ExecPathsCondThen_25);
              }
              {
                transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Else_23, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_52, &transform_hlds__rbmm__execution_path__ExecPathsElse_26);
              }
              {
                *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_53 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExecPathsCondThen_25, transform_hlds__rbmm__execution_path__ExecPathsElse_26);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.execution_path", (MR_String) "predicate \140transform_hlds.rbmm.execution_path.execution_paths_covered_compound_goal\'/4", (MR_String) "encountered atomic or unsupported goal");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__Goal_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Word transform_hlds__rbmm__execution_path__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Goal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__rbmm__execution_path__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__Goal_6, (MR_Integer) 1)));
    MR_Word transform_hlds__rbmm__execution_path__HasSubGoals_10;

    {
      transform_hlds__rbmm__execution_path__HasSubGoals_10 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__rbmm__execution_path__GoalExpr_8);
    }
    switch (transform_hlds__rbmm__execution_path__HasSubGoals_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          switch (MR_tag((MR_Word) transform_hlds__rbmm__execution_path__GoalExpr_8)) {
            default:
              transform_hlds__rbmm__execution_path__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              transform_hlds__rbmm__execution_path__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              transform_hlds__rbmm__execution_path__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 0)))) {
                default:
                  transform_hlds__rbmm__execution_path__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__rbmm__execution_path__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 2)));
                    MR_Word transform_hlds__rbmm__execution_path___ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 1)));

                    transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word transform_hlds__rbmm__execution_path__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__execution_path__GoalExpr_8, (MR_Integer) 1)));

                    transform_hlds__rbmm__execution_path__succeeded = (transform_hlds__rbmm__execution_path__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  break;
              }
              break;
          }
          if (transform_hlds__rbmm__execution_path__succeeded)
            {
              MR_Word transform_hlds__rbmm__execution_path__ProgPoint_23;
              MR_Word transform_hlds__rbmm__execution_path__V_29_29;
              MR_Word transform_hlds__rbmm__execution_path__V_31_31;
              MR_Word transform_hlds__rbmm__execution_path__V_32_32;

              {
                transform_hlds__rbmm__execution_path__ProgPoint_23 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__rbmm__execution_path__GoalInfo_9);
              }
              {
                transform_hlds__rbmm__execution_path__V_32_32 = mercury__pair__pair_2_f_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__rbmm__execution_path__ProgPoint_23)), ((MR_Box) (transform_hlds__rbmm__execution_path__Goal_6)));
              }
              {
                transform_hlds__rbmm__execution_path__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_31_31, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_32_32));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__rbmm__execution_path__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_29_29, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__V_31_31));
                MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, transform_hlds__rbmm__execution_path__V_29_29, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
              }
            }
          else
            {
              {
                transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__rbmm__execution_path_scalar_common_2[3]), transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_99_111_109_112_111_117_110_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_6, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_0_24, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPaths_25);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__execution_path__IntroducedFrom__pred__execution_paths_covered_cases__215__1_2_p_0(
  MR_Word transform_hlds__rbmm__execution_path__OtherConsIds_15,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_55)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

    {
      transform_hlds__rbmm__execution_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[2], ((MR_Box) (transform_hlds__rbmm__execution_path__OtherConsIds_15)), ((MR_Box) (transform_hlds__rbmm__execution_path__HeadVar__2_55)));
    }
    return transform_hlds__rbmm__execution_path__succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ExecPath_1,
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__2_2,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

    if ((transform_hlds__rbmm__execution_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__rbmm__execution_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__rbmm__execution_path__Extension_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__execution_path__Extensions_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPath_9;
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10;

        {
          transform_hlds__rbmm__execution_path__ExtendedExecPath_9 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[0], transform_hlds__rbmm__execution_path__ExecPath_1, transform_hlds__rbmm__execution_path__Extension_6);
        }
        {
          transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPath_1, transform_hlds__rbmm__execution_path__Extensions_7, &transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__rbmm__execution_path__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__ExtendedExecPath_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__ExtendedExecPaths0_10));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(
  MR_Word transform_hlds__rbmm__execution_path__HeadVar__1_1,
  MR_Word transform_hlds__rbmm__execution_path__Extensions_2,
  MR_Word * transform_hlds__rbmm__execution_path__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;

    if ((transform_hlds__rbmm__execution_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__rbmm__execution_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__rbmm__execution_path__ExecPath_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__rbmm__execution_path__ExecPaths_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9;
        MR_Word transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10;

        {
          transform_hlds__rbmm__execution_path__extend_exectution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPath_5, transform_hlds__rbmm__execution_path__Extensions_2, &transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9);
        }
        {
          transform_hlds__rbmm__execution_path__append_to_each_execution_path_3_p_0(transform_hlds__rbmm__execution_path__ExecPaths_6, transform_hlds__rbmm__execution_path__Extensions_2, &transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10);
        }
        {
          *transform_hlds__rbmm__execution_path__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[0], transform_hlds__rbmm__execution_path__ExtendedExecPaths0_9, transform_hlds__rbmm__execution_path__ExtendedExecPaths1_10);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_6,
  MR_Word transform_hlds__rbmm__execution_path__PredId_7,
  MR_Integer transform_hlds__rbmm__execution_path__ProcId_8,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Word transform_hlds__rbmm__execution_path__PPId_10;
    MR_Word transform_hlds__rbmm__execution_path__V_15_15;

    {
      transform_hlds__rbmm__execution_path__PPId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__PPId_10, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__PredId_7));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__PPId_10, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__ProcId_8));
    }
    {
      transform_hlds__rbmm__execution_path__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_15_15, 0) = ((MR_Box) (transform_hlds__rbmm__execution_path__PPId_10));
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__execution_path__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__rbmm__execution_path__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__execution_path__V_15_15, transform_hlds__rbmm__execution_path__ModuleInfo_6);
    }
    if (transform_hlds__rbmm__execution_path__succeeded)
      *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14 = transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13;
    else
      {
        MR_Word transform_hlds__rbmm__execution_path__ProcInfo_11;
        MR_Word transform_hlds__rbmm__execution_path__ExecPaths_12;
        MR_Word transform_hlds__rbmm__execution_path__ProcInfo_23;
        MR_Word transform_hlds__rbmm__execution_path__Goal_24;

        {
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_6, transform_hlds__rbmm__execution_path__PPId_10, &transform_hlds__rbmm__execution_path__ProcInfo_11);
        }
        {
          hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_6, transform_hlds__rbmm__execution_path__ProcInfo_11, &transform_hlds__rbmm__execution_path__ProcInfo_23);
        }
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__rbmm__execution_path__ProcInfo_23, &transform_hlds__rbmm__execution_path__Goal_24);
        }
        {
          transform_hlds__rbmm__execution_path__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_101_99_117_116_105_111_110_95_112_97_116_104_115_95_99_111_118_101_114_101_100_95_103_111_97_108_95_95_91_49_93_95_48_4_p_0(transform_hlds__rbmm__execution_path__Goal_24, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__rbmm__execution_path_scalar_common_2[3]), &transform_hlds__rbmm__execution_path__ExecPaths_12);
        }
        {
          mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[1], ((MR_Box) (transform_hlds__rbmm__execution_path__PPId_10)), ((MR_Box) (transform_hlds__rbmm__execution_path__ExecPaths_12)), transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_13, transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_14);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;
    MR_Word transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14;

    {
      transform_hlds__rbmm__execution_path__execution_path_analysis_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__rbmm__execution_path__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_2), &transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14);
    }
    *transform_hlds__rbmm__execution_path__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_5,
  MR_Word transform_hlds__rbmm__execution_path__PredId_6,
  MR_Word transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10,
  MR_Word * transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Word transform_hlds__rbmm__execution_path__PredInfo_8;
    MR_Word transform_hlds__rbmm__execution_path__ProcIds_9;
    MR_Word transform_hlds__rbmm__execution_path__V_12_12;
    MR_Box transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_5, transform_hlds__rbmm__execution_path__PredId_6, &transform_hlds__rbmm__execution_path__PredInfo_8);
    }
    {
      transform_hlds__rbmm__execution_path__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__execution_path__PredInfo_8);
    }
    {
      transform_hlds__rbmm__execution_path__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_12_12, 4) = ((MR_Box) (transform_hlds__rbmm__execution_path__PredId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[1], transform_hlds__rbmm__execution_path__V_12_12, transform_hlds__rbmm__execution_path__ProcIds_9, ((MR_Box) (transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_0_10)), &transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11);
    }
    *transform_hlds__rbmm__execution_path__STATE_VARIABLE_ExecPathTable_11 = ((MR_Word) transform_hlds__rbmm__execution_path__conv1_STATE_VARIABLE_ExecPathTable_11);
  }
}

static void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1(
  MR_Box transform_hlds__rbmm__execution_path__closure_arg,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_1,
  MR_Box transform_hlds__rbmm__execution_path__wrapper_arg_2,
  MR_Box * transform_hlds__rbmm__execution_path__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__rbmm__execution_path__closure = transform_hlds__rbmm__execution_path__closure_arg;
    MR_Word transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11;

    {
      transform_hlds__rbmm__execution_path__execution_path_analysis_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__execution_path__wrapper_arg_2), &transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11);
    }
    *transform_hlds__rbmm__execution_path__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__execution_path__conv0_STATE_VARIABLE_ExecPathTable_11));
  }
}

void MR_CALL 
transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(
  MR_Word transform_hlds__rbmm__execution_path__ModuleInfo_3,
  MR_Word * transform_hlds__rbmm__execution_path__ExecPathTable_4)
{
  {
    MR_bool transform_hlds__rbmm__execution_path__succeeded;
    MR_Word transform_hlds__rbmm__execution_path__PredIds_5;
    MR_Word transform_hlds__rbmm__execution_path__ExecPathTable0_6;
    MR_Word transform_hlds__rbmm__execution_path__V_7_7;
    MR_Box transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__rbmm__execution_path__ModuleInfo_3, &transform_hlds__rbmm__execution_path__PredIds_5);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_2[1], &transform_hlds__rbmm__execution_path__ExecPathTable0_6);
    }
    {
      transform_hlds__rbmm__execution_path__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 0) = ((MR_Box) (&transform_hlds__rbmm__execution_path_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 1) = ((MR_Box) (transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__execution_path__V_7_7, 3) = ((MR_Box) (transform_hlds__rbmm__execution_path__ModuleInfo_3));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__rbmm__execution_path_scalar_common_1[1], transform_hlds__rbmm__execution_path__V_7_7, transform_hlds__rbmm__execution_path__PredIds_5, ((MR_Box) (transform_hlds__rbmm__execution_path__ExecPathTable0_6)), &transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4);
    }
    *transform_hlds__rbmm__execution_path__ExecPathTable_4 = ((MR_Word) transform_hlds__rbmm__execution_path__conv1_ExecPathTable_4);
  }
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
