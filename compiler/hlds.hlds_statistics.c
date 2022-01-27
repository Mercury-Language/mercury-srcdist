/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.hlds_statistics. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_statistics__init
ENDINIT
*/

#include "hlds.hlds_statistics.mih"


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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[25];

static const MR_ConstString hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0[25];

static const MR_DuFunctorDesc hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1];

static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0[1];

static const MR_Integer hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0[1];

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box hlds__hlds_statistics__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word hlds__hlds_statistics__OutStream_10,
  MR_String hlds__hlds_statistics__ComponentName_15,
  MR_Integer hlds__hlds_statistics__ComponentCount_16);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word hlds__hlds_statistics__OutStream_11,
  MR_String hlds__hlds_statistics__Name_13,
  MR_Word hlds__hlds_statistics__PredId_14,
  MR_Integer hlds__hlds_statistics__ProcId_15,
  MR_Word hlds__hlds_statistics__Stats_16,
  MR_Word hlds__hlds_statistics__UsedVars_17,
  MR_Word hlds__hlds_statistics__VarSet_18);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word hlds__hlds_statistics__OutStream_9,
  MR_Word hlds__hlds_statistics__Stats_14);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
  MR_Word * hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__HeadVar__2_2,
  MR_Word hlds__hlds_statistics__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3,
  MR_Box hlds__hlds_statistics__wrapper_arg_4,
  MR_Box * hlds__hlds_statistics__wrapper_arg_5);

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
  MR_Word hlds__hlds_statistics__Goal_6,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_101);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_String hlds__hlds_statistics__Msg_9,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
  MR_Word hlds__hlds_statistics__OutStream_7,
  MR_String hlds__hlds_statistics__Msg_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_9,
  MR_Word hlds__hlds_statistics__HeadVar__4_4);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_1[5][3];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_2[2][2];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][25];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][9];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][8];




static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][25] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0)),
    ((MR_Box) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[25] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0[25] = {
  (MR_String) "ps_unify_constructs",
  (MR_String) "ps_unify_deconstructs",
  (MR_String) "ps_unify_assigns",
  (MR_String) "ps_unify_tests",
  (MR_String) "ps_unify_complicateds",
  (MR_String) "ps_plain_calls",
  (MR_String) "ps_foreign_calls",
  (MR_String) "ps_ho_calls",
  (MR_String) "ps_method_calls",
  (MR_String) "ps_event_calls",
  (MR_String) "ps_casts",
  (MR_String) "ps_plain_conjs",
  (MR_String) "ps_plain_conjuncts",
  (MR_String) "ps_parallel_conjs",
  (MR_String) "ps_parallel_conjuncts",
  (MR_String) "ps_disjs",
  (MR_String) "ps_disjuncts",
  (MR_String) "ps_switches",
  (MR_String) "ps_switch_arms",
  (MR_String) "ps_ites",
  (MR_String) "ps_negations",
  (MR_String) "ps_scopes",
  (MR_String) "ps_bi_implications",
  (MR_String) "ps_atomic_goals",
  (MR_String) "ps_try_goals"
};

static const MR_DuFunctorDesc hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0 = {
  (MR_String) "proc_stats",
  (MR_Integer) 25,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0,
  hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

static const MR_Integer hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_statistics____Unify____proc_stats_0_0_10001)),
  ((MR_Box) (hlds__hlds_statistics____Compare____proc_stats_0_0_10001)),
  (MR_String) "hlds.hlds_statistics",
  (MR_String) "proc_stats",
  {     hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0 },
  {     hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0
};

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;

    {
      hlds__hlds_statistics__succeeded = hlds__hlds_statistics____Unify____proc_stats_0_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2));
    }
    return hlds__hlds_statistics__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box hlds__hlds_statistics__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_statistics__conv0_HeadVar__1_1;

    {
      hlds__hlds_statistics____Compare____proc_stats_0_0(&hlds__hlds_statistics__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), ((MR_Word) hlds__hlds_statistics__wrapper_arg_3));
    }
    *hlds__hlds_statistics__wrapper_arg_1 = ((MR_Box) (hlds__hlds_statistics__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word hlds__hlds_statistics__OutStream_10,
  MR_String hlds__hlds_statistics__ComponentName_15,
  MR_Integer hlds__hlds_statistics__ComponentCount_16)
{
  {
    MR_bool hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ComponentCount_16 > (MR_Integer) 0);

    if (hlds__hlds_statistics__succeeded)
      {
        MR_String hlds__hlds_statistics__V_31_31;
        MR_Word hlds__hlds_statistics__V_37_37;
        MR_String hlds__hlds_statistics__V_41_41;

        {
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "GOAL ");
        }
        hlds__hlds_statistics__V_37_37 = (MR_Word) &hlds__hlds_statistics_scalar_common_4[0];
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_37_37, hlds__hlds_statistics__ComponentName_15, &hlds__hlds_statistics__V_31_31);
        }
        {
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__V_31_31);
        }
        {
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) ": ");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_37_37, hlds__hlds_statistics__ComponentCount_16, &hlds__hlds_statistics__V_41_41);
        }
        {
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__V_41_41);
        }
        {
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "\n");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word hlds__hlds_statistics__OutStream_11,
  MR_String hlds__hlds_statistics__Name_13,
  MR_Word hlds__hlds_statistics__PredId_14,
  MR_Integer hlds__hlds_statistics__ProcId_15,
  MR_Word hlds__hlds_statistics__Stats_16,
  MR_Word hlds__hlds_statistics__UsedVars_17,
  MR_Word hlds__hlds_statistics__VarSet_18)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Word hlds__hlds_statistics__TypeCtorInfo_45_45;
    MR_Integer hlds__hlds_statistics__PredIdInt_20;
    MR_Integer hlds__hlds_statistics__ProcIdInt_21;
    MR_Word hlds__hlds_statistics__Var_22;
    MR_Integer hlds__hlds_statistics__VarInt_24;
    MR_Integer hlds__hlds_statistics__NumUsedVars_25;
    MR_String hlds__hlds_statistics__V_50_50;
    MR_Word hlds__hlds_statistics__V_56_56;
    MR_String hlds__hlds_statistics__V_60_60;
    MR_String hlds__hlds_statistics__V_70_70;
    MR_String hlds__hlds_statistics__V_81_81;
    MR_String hlds__hlds_statistics__V_91_91;
    MR_Word hlds__hlds_statistics___UpdatedVarSet_23;

    {
      hlds__hlds_statistics__PredIdInt_20 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_statistics__PredId_14);
    }
    {
      hlds__hlds_statistics__ProcIdInt_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__hlds_statistics__ProcId_15);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "PROC ");
    }
    hlds__hlds_statistics__V_56_56 = (MR_Word) &hlds__hlds_statistics_scalar_common_4[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__PredIdInt_20, &hlds__hlds_statistics__V_50_50);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_50_50);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__ProcIdInt_21, &hlds__hlds_statistics__V_60_60);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_60_60);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__Name_13, &hlds__hlds_statistics__V_70_70);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_70_70);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Stats_16);
    }
    hlds__hlds_statistics__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, &hlds__hlds_statistics__Var_22, hlds__hlds_statistics__VarSet_18, &hlds__hlds_statistics___UpdatedVarSet_23);
    }
    {
      mercury__term__var_to_int_2_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, hlds__hlds_statistics__Var_22, &hlds__hlds_statistics__VarInt_24);
    }
    {
      hlds__hlds_statistics__NumUsedVars_25 = mercury__set_tree234__count_1_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__UsedVars_17);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "VARS ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__VarInt_24, &hlds__hlds_statistics__V_81_81);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_81_81);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__NumUsedVars_25, &hlds__hlds_statistics__V_91_91);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_91_91);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word hlds__hlds_statistics__OutStream_9,
  MR_Word hlds__hlds_statistics__Stats_14)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Integer hlds__hlds_statistics__UnifyConstructs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 0)));
    MR_Integer hlds__hlds_statistics__UnifyDeconstructs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 1)));
    MR_Integer hlds__hlds_statistics__UnifyAssigns_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 2)));
    MR_Integer hlds__hlds_statistics__UnifyTests_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 3)));
    MR_Integer hlds__hlds_statistics__UnifyComplicateds_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 4)));
    MR_Integer hlds__hlds_statistics__PlainCalls_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 5)));
    MR_Integer hlds__hlds_statistics__ForeignCalls_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 6)));
    MR_Integer hlds__hlds_statistics__HOCalls_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 7)));
    MR_Integer hlds__hlds_statistics__MethodCalls_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 8)));
    MR_Integer hlds__hlds_statistics__EventCalls_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 9)));
    MR_Integer hlds__hlds_statistics__Casts_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 10)));
    MR_Integer hlds__hlds_statistics__PlainConjs_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 11)));
    MR_Integer hlds__hlds_statistics__PlainConjuncts_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 12)));
    MR_Integer hlds__hlds_statistics__ParallelConjs_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 13)));
    MR_Integer hlds__hlds_statistics__ParallelConjuncts_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 14)));
    MR_Integer hlds__hlds_statistics__Disjs_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 15)));
    MR_Integer hlds__hlds_statistics__Disjuncts_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 16)));
    MR_Integer hlds__hlds_statistics__Switches_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 17)));
    MR_Integer hlds__hlds_statistics__SwitchArms_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 18)));
    MR_Integer hlds__hlds_statistics__IfThenElses_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 19)));
    MR_Integer hlds__hlds_statistics__Negations_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 20)));
    MR_Integer hlds__hlds_statistics__Scopes_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 21)));
    MR_Integer hlds__hlds_statistics__BiImplications_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 22)));
    MR_Integer hlds__hlds_statistics__AtomicGoals_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 23)));
    MR_Integer hlds__hlds_statistics__TryGoals_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 24)));
    MR_Integer hlds__hlds_statistics__Total_41;
    MR_Integer hlds__hlds_statistics__V_44_44;
    MR_Integer hlds__hlds_statistics__V_45_45;
    MR_Integer hlds__hlds_statistics__V_46_46;
    MR_Integer hlds__hlds_statistics__V_47_47;
    MR_Integer hlds__hlds_statistics__V_48_48;
    MR_Integer hlds__hlds_statistics__V_49_49;
    MR_Integer hlds__hlds_statistics__V_50_50;
    MR_Integer hlds__hlds_statistics__V_51_51;
    MR_Integer hlds__hlds_statistics__V_52_52;
    MR_Integer hlds__hlds_statistics__V_53_53;
    MR_Integer hlds__hlds_statistics__V_54_54;
    MR_Integer hlds__hlds_statistics__V_55_55;
    MR_Integer hlds__hlds_statistics__V_56_56;
    MR_Integer hlds__hlds_statistics__V_57_57;
    MR_Integer hlds__hlds_statistics__V_58_58;
    MR_Integer hlds__hlds_statistics__V_59_59;
    MR_Integer hlds__hlds_statistics__V_60_60;
    MR_Integer hlds__hlds_statistics__V_61_61;
    MR_Integer hlds__hlds_statistics__V_62_62 = (hlds__hlds_statistics__UnifyConstructs_16 + hlds__hlds_statistics__UnifyDeconstructs_17);

    hlds__hlds_statistics__V_61_61 = (hlds__hlds_statistics__V_62_62 + hlds__hlds_statistics__UnifyAssigns_18);
    hlds__hlds_statistics__V_60_60 = (hlds__hlds_statistics__V_61_61 + hlds__hlds_statistics__UnifyTests_19);
    hlds__hlds_statistics__V_59_59 = (hlds__hlds_statistics__V_60_60 + hlds__hlds_statistics__UnifyComplicateds_20);
    hlds__hlds_statistics__V_58_58 = (hlds__hlds_statistics__V_59_59 + hlds__hlds_statistics__PlainCalls_21);
    hlds__hlds_statistics__V_57_57 = (hlds__hlds_statistics__V_58_58 + hlds__hlds_statistics__ForeignCalls_22);
    hlds__hlds_statistics__V_56_56 = (hlds__hlds_statistics__V_57_57 + hlds__hlds_statistics__HOCalls_23);
    hlds__hlds_statistics__V_55_55 = (hlds__hlds_statistics__V_56_56 + hlds__hlds_statistics__MethodCalls_24);
    hlds__hlds_statistics__V_54_54 = (hlds__hlds_statistics__V_55_55 + hlds__hlds_statistics__EventCalls_25);
    hlds__hlds_statistics__V_53_53 = (hlds__hlds_statistics__V_54_54 + hlds__hlds_statistics__Casts_26);
    hlds__hlds_statistics__V_52_52 = (hlds__hlds_statistics__V_53_53 + hlds__hlds_statistics__PlainConjs_27);
    hlds__hlds_statistics__V_51_51 = (hlds__hlds_statistics__V_52_52 + hlds__hlds_statistics__ParallelConjs_29);
    hlds__hlds_statistics__V_50_50 = (hlds__hlds_statistics__V_51_51 + hlds__hlds_statistics__Disjs_31);
    hlds__hlds_statistics__V_49_49 = (hlds__hlds_statistics__V_50_50 + hlds__hlds_statistics__Switches_33);
    hlds__hlds_statistics__V_48_48 = (hlds__hlds_statistics__V_49_49 + hlds__hlds_statistics__IfThenElses_35);
    hlds__hlds_statistics__V_47_47 = (hlds__hlds_statistics__V_48_48 + hlds__hlds_statistics__Negations_36);
    hlds__hlds_statistics__V_46_46 = (hlds__hlds_statistics__V_47_47 + hlds__hlds_statistics__Scopes_37);
    hlds__hlds_statistics__V_45_45 = (hlds__hlds_statistics__V_46_46 + hlds__hlds_statistics__BiImplications_38);
    hlds__hlds_statistics__V_44_44 = (hlds__hlds_statistics__V_45_45 + hlds__hlds_statistics__AtomicGoals_39);
    hlds__hlds_statistics__Total_41 = (hlds__hlds_statistics__V_44_44 + hlds__hlds_statistics__TryGoals_40);
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_contructs", hlds__hlds_statistics__UnifyConstructs_16);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_decontructs", hlds__hlds_statistics__UnifyDeconstructs_17);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_assigns", hlds__hlds_statistics__UnifyAssigns_18);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_tests", hlds__hlds_statistics__UnifyTests_19);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_complicateds", hlds__hlds_statistics__UnifyComplicateds_20);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_calls", hlds__hlds_statistics__PlainCalls_21);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "foreign_calls", hlds__hlds_statistics__ForeignCalls_22);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "ho_calls", hlds__hlds_statistics__HOCalls_23);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "method_calls", hlds__hlds_statistics__MethodCalls_24);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "event_calls", hlds__hlds_statistics__EventCalls_25);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "casts", hlds__hlds_statistics__Casts_26);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjs", hlds__hlds_statistics__PlainConjs_27);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjuncts", hlds__hlds_statistics__PlainConjuncts_28);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjs", hlds__hlds_statistics__ParallelConjs_29);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjuncts", hlds__hlds_statistics__ParallelConjuncts_30);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjs", hlds__hlds_statistics__Disjs_31);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjunctions", hlds__hlds_statistics__Disjuncts_32);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switches", hlds__hlds_statistics__Switches_33);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switch_arms", hlds__hlds_statistics__SwitchArms_34);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "if_then_elses", hlds__hlds_statistics__IfThenElses_35);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "negations", hlds__hlds_statistics__Negations_36);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "scopes", hlds__hlds_statistics__Scopes_37);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "bi_implications", hlds__hlds_statistics__BiImplications_38);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "atomic_goals", hlds__hlds_statistics__AtomicGoals_39);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "try_goals", hlds__hlds_statistics__TryGoals_40);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "total_size", hlds__hlds_statistics__Total_41);
    }
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Integer hlds__hlds_statistics__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_statistics__ProcInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_statistics__NamePieces_15;
    MR_String hlds__hlds_statistics__Name_16;
    MR_Word hlds__hlds_statistics__Goal_17;
    MR_Word hlds__hlds_statistics__UsedVars0_18;
    MR_Word hlds__hlds_statistics__UsedVars_20;
    MR_Word hlds__hlds_statistics__Stats_21;
    MR_Word hlds__hlds_statistics__VarSet_22;
    MR_Word hlds__hlds_statistics__V_26_26;

    {
      hlds__hlds_statistics__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_26_26, 0) = ((MR_Box) (hlds__hlds_statistics__PredId_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_26_26, 1) = ((MR_Box) (hlds__hlds_statistics__ProcId_12));
    }
    {
      hlds__hlds_statistics__NamePieces_15 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(hlds__hlds_statistics__ModuleInfo_10, (MR_Integer) 1, hlds__hlds_statistics__V_26_26);
    }
    {
      hlds__hlds_statistics__Name_16 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__hlds_statistics__NamePieces_15);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__Goal_17);
    }
    {
      hlds__hlds_statistics__UsedVars0_18 = mercury__set_tree234__init_0_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0]);
    }
    {
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_17, hlds__hlds_statistics__UsedVars0_18, &hlds__hlds_statistics__UsedVars_20, (MR_Word) &hlds__hlds_statistics_scalar_common_3[0], &hlds__hlds_statistics__Stats_21);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__VarSet_22);
    }
    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__Name_16, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__ProcId_12, hlds__hlds_statistics__Stats_21, hlds__hlds_statistics__UsedVars_20, hlds__hlds_statistics__VarSet_22);
    }
  }
}

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
  MR_Word * hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__HeadVar__2_2,
  MR_Word hlds__hlds_statistics__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Integer hlds__hlds_statistics__CastX_78 = (MR_Integer) hlds__hlds_statistics__HeadVar__2_2;
    MR_Integer hlds__hlds_statistics__CastY_79 = (MR_Integer) hlds__hlds_statistics__HeadVar__3_3;

    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__CastX_78 == hlds__hlds_statistics__CastY_79);
    if (hlds__hlds_statistics__succeeded)
      *hlds__hlds_statistics__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer hlds__hlds_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer hlds__hlds_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer hlds__hlds_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__hlds_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer hlds__hlds_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer hlds__hlds_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer hlds__hlds_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer hlds__hlds_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer hlds__hlds_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer hlds__hlds_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer hlds__hlds_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer hlds__hlds_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer hlds__hlds_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer hlds__hlds_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer hlds__hlds_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer hlds__hlds_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer hlds__hlds_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer hlds__hlds_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer hlds__hlds_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer hlds__hlds_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer hlds__hlds_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 20)));
        MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 21)));
        MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 22)));
        MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 23)));
        MR_Integer hlds__hlds_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 24)));
        MR_Word hlds__hlds_statistics__V_54_54;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_54_54, hlds__hlds_statistics__V_4_4, hlds__hlds_statistics__V_29_29);
        }
        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_54_54 == (MR_Integer) 0);
        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
        if (hlds__hlds_statistics__succeeded)
          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_54_54;
        else
          {
            MR_Word hlds__hlds_statistics__V_55_55;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_55_55, hlds__hlds_statistics__V_5_5, hlds__hlds_statistics__V_30_30);
            }
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_55_55 == (MR_Integer) 0);
            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
            if (hlds__hlds_statistics__succeeded)
              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_55_55;
            else
              {
                MR_Word hlds__hlds_statistics__V_56_56;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__V_6_6, hlds__hlds_statistics__V_31_31);
                }
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_56_56 == (MR_Integer) 0);
                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                if (hlds__hlds_statistics__succeeded)
                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_56_56;
                else
                  {
                    MR_Word hlds__hlds_statistics__V_57_57;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_57_57, hlds__hlds_statistics__V_7_7, hlds__hlds_statistics__V_32_32);
                    }
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_57_57 == (MR_Integer) 0);
                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                    if (hlds__hlds_statistics__succeeded)
                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_57_57;
                    else
                      {
                        MR_Word hlds__hlds_statistics__V_58_58;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_58_58, hlds__hlds_statistics__V_8_8, hlds__hlds_statistics__V_33_33);
                        }
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_58_58 == (MR_Integer) 0);
                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                        if (hlds__hlds_statistics__succeeded)
                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_58_58;
                        else
                          {
                            MR_Word hlds__hlds_statistics__V_59_59;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_59_59, hlds__hlds_statistics__V_9_9, hlds__hlds_statistics__V_34_34);
                            }
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_59_59 == (MR_Integer) 0);
                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                            if (hlds__hlds_statistics__succeeded)
                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_59_59;
                            else
                              {
                                MR_Word hlds__hlds_statistics__V_60_60;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_60_60, hlds__hlds_statistics__V_10_10, hlds__hlds_statistics__V_35_35);
                                }
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_60_60 == (MR_Integer) 0);
                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                if (hlds__hlds_statistics__succeeded)
                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_60_60;
                                else
                                  {
                                    MR_Word hlds__hlds_statistics__V_61_61;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_61_61, hlds__hlds_statistics__V_11_11, hlds__hlds_statistics__V_36_36);
                                    }
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_61_61 == (MR_Integer) 0);
                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                    if (hlds__hlds_statistics__succeeded)
                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_61_61;
                                    else
                                      {
                                        MR_Word hlds__hlds_statistics__V_62_62;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_62_62, hlds__hlds_statistics__V_12_12, hlds__hlds_statistics__V_37_37);
                                        }
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_62_62 == (MR_Integer) 0);
                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                        if (hlds__hlds_statistics__succeeded)
                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_62_62;
                                        else
                                          {
                                            MR_Word hlds__hlds_statistics__V_63_63;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_63_63, hlds__hlds_statistics__V_13_13, hlds__hlds_statistics__V_38_38);
                                            }
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_63_63 == (MR_Integer) 0);
                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                            if (hlds__hlds_statistics__succeeded)
                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_63_63;
                                            else
                                              {
                                                MR_Word hlds__hlds_statistics__V_64_64;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_64_64, hlds__hlds_statistics__V_14_14, hlds__hlds_statistics__V_39_39);
                                                }
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_64_64 == (MR_Integer) 0);
                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                if (hlds__hlds_statistics__succeeded)
                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_64_64;
                                                else
                                                  {
                                                    MR_Word hlds__hlds_statistics__V_65_65;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_65_65, hlds__hlds_statistics__V_15_15, hlds__hlds_statistics__V_40_40);
                                                    }
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_65_65 == (MR_Integer) 0);
                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                    if (hlds__hlds_statistics__succeeded)
                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_65_65;
                                                    else
                                                      {
                                                        MR_Word hlds__hlds_statistics__V_66_66;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_66_66, hlds__hlds_statistics__V_16_16, hlds__hlds_statistics__V_41_41);
                                                        }
                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_66_66 == (MR_Integer) 0);
                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                        if (hlds__hlds_statistics__succeeded)
                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_66_66;
                                                        else
                                                          {
                                                            MR_Word hlds__hlds_statistics__V_67_67;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_67_67, hlds__hlds_statistics__V_17_17, hlds__hlds_statistics__V_42_42);
                                                            }
                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_67_67 == (MR_Integer) 0);
                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                            if (hlds__hlds_statistics__succeeded)
                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_67_67;
                                                            else
                                                              {
                                                                MR_Word hlds__hlds_statistics__V_68_68;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_68_68, hlds__hlds_statistics__V_18_18, hlds__hlds_statistics__V_43_43);
                                                                }
                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_68_68 == (MR_Integer) 0);
                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                if (hlds__hlds_statistics__succeeded)
                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_68_68;
                                                                else
                                                                  {
                                                                    MR_Word hlds__hlds_statistics__V_69_69;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_69_69, hlds__hlds_statistics__V_19_19, hlds__hlds_statistics__V_44_44);
                                                                    }
                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_69_69 == (MR_Integer) 0);
                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                    if (hlds__hlds_statistics__succeeded)
                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_69_69;
                                                                    else
                                                                      {
                                                                        MR_Word hlds__hlds_statistics__V_70_70;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_70_70, hlds__hlds_statistics__V_20_20, hlds__hlds_statistics__V_45_45);
                                                                        }
                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_70_70 == (MR_Integer) 0);
                                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                        if (hlds__hlds_statistics__succeeded)
                                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_70_70;
                                                                        else
                                                                          {
                                                                            MR_Word hlds__hlds_statistics__V_71_71;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_71_71, hlds__hlds_statistics__V_21_21, hlds__hlds_statistics__V_46_46);
                                                                            }
                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_71_71 == (MR_Integer) 0);
                                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                            if (hlds__hlds_statistics__succeeded)
                                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_71_71;
                                                                            else
                                                                              {
                                                                                MR_Word hlds__hlds_statistics__V_72_72;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_72_72, hlds__hlds_statistics__V_22_22, hlds__hlds_statistics__V_47_47);
                                                                                }
                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_72_72 == (MR_Integer) 0);
                                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                if (hlds__hlds_statistics__succeeded)
                                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_72_72;
                                                                                else
                                                                                  {
                                                                                    MR_Word hlds__hlds_statistics__V_73_73;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_73_73, hlds__hlds_statistics__V_23_23, hlds__hlds_statistics__V_48_48);
                                                                                    }
                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_73_73 == (MR_Integer) 0);
                                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                    if (hlds__hlds_statistics__succeeded)
                                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_73_73;
                                                                                    else
                                                                                      {
                                                                                        MR_Word hlds__hlds_statistics__V_74_74;

                                                                                        {
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_74_74, hlds__hlds_statistics__V_24_24, hlds__hlds_statistics__V_49_49);
                                                                                        }
                                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_74_74 == (MR_Integer) 0);
                                                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                        if (hlds__hlds_statistics__succeeded)
                                                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_74_74;
                                                                                        else
                                                                                          {
                                                                                            MR_Word hlds__hlds_statistics__V_75_75;

                                                                                            {
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_75_75, hlds__hlds_statistics__V_25_25, hlds__hlds_statistics__V_50_50);
                                                                                            }
                                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_75_75 == (MR_Integer) 0);
                                                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                            if (hlds__hlds_statistics__succeeded)
                                                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_75_75;
                                                                                            else
                                                                                              {
                                                                                                MR_Word hlds__hlds_statistics__V_76_76;

                                                                                                {
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_76_76, hlds__hlds_statistics__V_26_26, hlds__hlds_statistics__V_51_51);
                                                                                                }
                                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_76_76 == (MR_Integer) 0);
                                                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                                if (hlds__hlds_statistics__succeeded)
                                                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_76_76;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word hlds__hlds_statistics__V_77_77;

                                                                                                    {
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_77_77, hlds__hlds_statistics__V_27_27, hlds__hlds_statistics__V_52_52);
                                                                                                    }
                                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_77_77 == (MR_Integer) 0);
                                                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                                                                    if (hlds__hlds_statistics__succeeded)
                                                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_77_77;
                                                                                                    else
                                                                                                      {
                                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_statistics__HeadVar__1_1, hlds__hlds_statistics__V_28_28, hlds__hlds_statistics__V_53_53);
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Integer hlds__hlds_statistics__CastX_53 = (MR_Integer) hlds__hlds_statistics__HeadVar__1_1;
    MR_Integer hlds__hlds_statistics__CastY_54 = (MR_Integer) hlds__hlds_statistics__HeadVar__2_2;

    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__CastX_53 == hlds__hlds_statistics__CastY_54);
    if (hlds__hlds_statistics__succeeded)
      hlds__hlds_statistics__succeeded = MR_TRUE;
    else
      {
        MR_Integer hlds__hlds_statistics__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__hlds_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer hlds__hlds_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer hlds__hlds_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer hlds__hlds_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer hlds__hlds_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer hlds__hlds_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer hlds__hlds_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer hlds__hlds_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer hlds__hlds_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer hlds__hlds_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer hlds__hlds_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 11)));
        MR_Integer hlds__hlds_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 12)));
        MR_Integer hlds__hlds_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 13)));
        MR_Integer hlds__hlds_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer hlds__hlds_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 15)));
        MR_Integer hlds__hlds_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 16)));
        MR_Integer hlds__hlds_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer hlds__hlds_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 18)));
        MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 19)));
        MR_Integer hlds__hlds_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 20)));
        MR_Integer hlds__hlds_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 21)));
        MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 22)));
        MR_Integer hlds__hlds_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 23)));
        MR_Integer hlds__hlds_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 24)));
        MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));

        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_3_3 == hlds__hlds_statistics__V_28_28);
        if (hlds__hlds_statistics__succeeded)
          {
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_4_4 == hlds__hlds_statistics__V_29_29);
            if (hlds__hlds_statistics__succeeded)
              {
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_5_5 == hlds__hlds_statistics__V_30_30);
                if (hlds__hlds_statistics__succeeded)
                  {
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_6_6 == hlds__hlds_statistics__V_31_31);
                    if (hlds__hlds_statistics__succeeded)
                      {
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_7_7 == hlds__hlds_statistics__V_32_32);
                        if (hlds__hlds_statistics__succeeded)
                          {
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_8_8 == hlds__hlds_statistics__V_33_33);
                            if (hlds__hlds_statistics__succeeded)
                              {
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_9_9 == hlds__hlds_statistics__V_34_34);
                                if (hlds__hlds_statistics__succeeded)
                                  {
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_10_10 == hlds__hlds_statistics__V_35_35);
                                    if (hlds__hlds_statistics__succeeded)
                                      {
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_11_11 == hlds__hlds_statistics__V_36_36);
                                        if (hlds__hlds_statistics__succeeded)
                                          {
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_12_12 == hlds__hlds_statistics__V_37_37);
                                            if (hlds__hlds_statistics__succeeded)
                                              {
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_13_13 == hlds__hlds_statistics__V_38_38);
                                                if (hlds__hlds_statistics__succeeded)
                                                  {
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_14_14 == hlds__hlds_statistics__V_39_39);
                                                    if (hlds__hlds_statistics__succeeded)
                                                      {
                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_15_15 == hlds__hlds_statistics__V_40_40);
                                                        if (hlds__hlds_statistics__succeeded)
                                                          {
                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_16_16 == hlds__hlds_statistics__V_41_41);
                                                            if (hlds__hlds_statistics__succeeded)
                                                              {
                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_17_17 == hlds__hlds_statistics__V_42_42);
                                                                if (hlds__hlds_statistics__succeeded)
                                                                  {
                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_18_18 == hlds__hlds_statistics__V_43_43);
                                                                    if (hlds__hlds_statistics__succeeded)
                                                                      {
                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_19_19 == hlds__hlds_statistics__V_44_44);
                                                                        if (hlds__hlds_statistics__succeeded)
                                                                          {
                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_20_20 == hlds__hlds_statistics__V_45_45);
                                                                            if (hlds__hlds_statistics__succeeded)
                                                                              {
                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_21_21 == hlds__hlds_statistics__V_46_46);
                                                                                if (hlds__hlds_statistics__succeeded)
                                                                                  {
                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_22_22 == hlds__hlds_statistics__V_47_47);
                                                                                    if (hlds__hlds_statistics__succeeded)
                                                                                      {
                                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_23_23 == hlds__hlds_statistics__V_48_48);
                                                                                        if (hlds__hlds_statistics__succeeded)
                                                                                          {
                                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_24_24 == hlds__hlds_statistics__V_49_49);
                                                                                            if (hlds__hlds_statistics__succeeded)
                                                                                              {
                                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_25_25 == hlds__hlds_statistics__V_50_50);
                                                                                                if (hlds__hlds_statistics__succeeded)
                                                                                                  {
                                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_26_26 == hlds__hlds_statistics__V_51_51);
                                                                                                    if (hlds__hlds_statistics__succeeded)
                                                                                                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_27_27 == hlds__hlds_statistics__V_52_52);
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_statistics__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_statistics__succeeded;

        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
          }
        else
          {
            MR_Word hlds__hlds_statistics__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_statistics__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__Goal_18;
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23;
            MR_Integer hlds__hlds_statistics__V_24_24;
            MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
            MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
            MR_Integer hlds__hlds_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
            MR_Integer hlds__hlds_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));
            MR_Word hlds__hlds_statistics__V_16_16;
            MR_Word hlds__hlds_statistics__V_17_17;

            hlds__hlds_statistics__V_24_24 = (hlds__hlds_statistics__V_25_25 + (MR_Integer) 1);
            {
              hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 0) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 1) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 2) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 3) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 4) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 5) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 6) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 7) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 8) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 9) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 10) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 11) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 12) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 13) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 14) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 15) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 16) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 17) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 18) = ((MR_Box) (hlds__hlds_statistics__V_24_24));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 19) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 20) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 21) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 22) = ((MR_Box) (hlds__hlds_statistics__V_52_52));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 23) = ((MR_Box) (hlds__hlds_statistics__V_53_53));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 24) = ((MR_Box) (hlds__hlds_statistics__V_54_54));
            }
            hlds__hlds_statistics__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 0)));
            hlds__hlds_statistics__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 1)));
            hlds__hlds_statistics__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 2)));
            {
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27, hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, &hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Cases_13;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;

              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_statistics__succeeded;

        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
          }
        else
          {
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
            MR_Integer hlds__hlds_statistics__V_21_21;
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
            {
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
            }
            {
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_statistics__succeeded;

        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
          }
        else
          {
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
            MR_Integer hlds__hlds_statistics__V_21_21;
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
            {
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
            }
            {
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_statistics__succeeded;

        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
          }
        else
          {
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
            MR_Integer hlds__hlds_statistics__V_21_21;
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
            {
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
            }
            {
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3,
  MR_Box hlds__hlds_statistics__wrapper_arg_4,
  MR_Box * hlds__hlds_statistics__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
    MR_Word hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99;
    MR_Word hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101;

    {
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), &hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99, ((MR_Word) hlds__hlds_statistics__wrapper_arg_4), &hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101);
    }
    *hlds__hlds_statistics__wrapper_arg_3 = ((MR_Box) (hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99));
    *hlds__hlds_statistics__wrapper_arg_5 = ((MR_Box) (hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101));
  }
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_statistics__wrapper_arg_2;
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
    MR_Word hlds__hlds_statistics__conv1_HeadVar__2_2;

    {
      hlds__hlds_statistics__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
    hlds__hlds_statistics__wrapper_arg_2 = ((MR_Box) (hlds__hlds_statistics__conv1_HeadVar__2_2));
    return hlds__hlds_statistics__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_statistics__wrapper_arg_2;
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
    MR_Word hlds__hlds_statistics__conv0_HeadVar__2_2;

    {
      hlds__hlds_statistics__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
    hlds__hlds_statistics__wrapper_arg_2 = ((MR_Box) (hlds__hlds_statistics__conv0_HeadVar__2_2));
    return hlds__hlds_statistics__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
  MR_Word hlds__hlds_statistics__Goal_6,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99,
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100,
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_101)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_statistics__succeeded;
        MR_Word hlds__hlds_statistics__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 0)));
        MR_Word hlds__hlds_statistics___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_statistics__SubGoal_84 = (MR_Word) MR_body(((MR_Word) hlds__hlds_statistics__GoalExpr_9), (MR_Integer) 0);
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;
              MR_Integer hlds__hlds_statistics__V_132_132;
              MR_Integer hlds__hlds_statistics__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
              MR_Integer hlds__hlds_statistics__V_1138_1138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
              MR_Integer hlds__hlds_statistics__V_1139_1139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
              MR_Integer hlds__hlds_statistics__V_1140_1140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
              MR_Integer hlds__hlds_statistics__V_1141_1141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
              MR_Integer hlds__hlds_statistics__V_1142_1142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
              MR_Integer hlds__hlds_statistics__V_1143_1143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
              MR_Integer hlds__hlds_statistics__V_1144_1144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
              MR_Integer hlds__hlds_statistics__V_1145_1145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
              MR_Integer hlds__hlds_statistics__V_1146_1146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
              MR_Integer hlds__hlds_statistics__V_1147_1147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
              MR_Integer hlds__hlds_statistics__V_1148_1148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
              MR_Integer hlds__hlds_statistics__V_1149_1149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
              MR_Integer hlds__hlds_statistics__V_1150_1150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
              MR_Integer hlds__hlds_statistics__V_1151_1151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
              MR_Integer hlds__hlds_statistics__V_1152_1152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
              MR_Integer hlds__hlds_statistics__V_1153_1153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
              MR_Integer hlds__hlds_statistics__V_1154_1154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
              MR_Integer hlds__hlds_statistics__V_1155_1155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
              MR_Integer hlds__hlds_statistics__V_1156_1156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
              MR_Integer hlds__hlds_statistics__V_1157_1157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
              MR_Integer hlds__hlds_statistics__V_1158_1158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
              MR_Integer hlds__hlds_statistics__V_1159_1159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
              MR_Integer hlds__hlds_statistics__V_1160_1160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
              MR_Integer hlds__hlds_statistics__V_1161_1161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

              hlds__hlds_statistics__V_132_132 = (hlds__hlds_statistics__V_133_133 + (MR_Integer) 1);
              {
                hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 0) = ((MR_Box) (hlds__hlds_statistics__V_1138_1138));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 1) = ((MR_Box) (hlds__hlds_statistics__V_1139_1139));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 2) = ((MR_Box) (hlds__hlds_statistics__V_1140_1140));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 3) = ((MR_Box) (hlds__hlds_statistics__V_1141_1141));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 4) = ((MR_Box) (hlds__hlds_statistics__V_1142_1142));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 5) = ((MR_Box) (hlds__hlds_statistics__V_1143_1143));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 6) = ((MR_Box) (hlds__hlds_statistics__V_1144_1144));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 7) = ((MR_Box) (hlds__hlds_statistics__V_1145_1145));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 8) = ((MR_Box) (hlds__hlds_statistics__V_1146_1146));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 9) = ((MR_Box) (hlds__hlds_statistics__V_1147_1147));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 10) = ((MR_Box) (hlds__hlds_statistics__V_1148_1148));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 11) = ((MR_Box) (hlds__hlds_statistics__V_1149_1149));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 12) = ((MR_Box) (hlds__hlds_statistics__V_1150_1150));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 13) = ((MR_Box) (hlds__hlds_statistics__V_1151_1151));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 14) = ((MR_Box) (hlds__hlds_statistics__V_1152_1152));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 15) = ((MR_Box) (hlds__hlds_statistics__V_1153_1153));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 16) = ((MR_Box) (hlds__hlds_statistics__V_1154_1154));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 17) = ((MR_Box) (hlds__hlds_statistics__V_1155_1155));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 18) = ((MR_Box) (hlds__hlds_statistics__V_1156_1156));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 19) = ((MR_Box) (hlds__hlds_statistics__V_1157_1157));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 20) = ((MR_Box) (hlds__hlds_statistics__V_132_132));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 21) = ((MR_Box) (hlds__hlds_statistics__V_1158_1158));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 22) = ((MR_Box) (hlds__hlds_statistics__V_1159_1159));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 23) = ((MR_Box) (hlds__hlds_statistics__V_1160_1160));
                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 24) = ((MR_Box) (hlds__hlds_statistics__V_1161_1161));
              }
              /* direct tailcall eliminated */
              {
                MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_84;
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;

                hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_statistics__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
              MR_Word hlds__hlds_statistics__RHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_statistics__Uni_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
              MR_Word hlds__hlds_statistics__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
              MR_Word hlds__hlds_statistics__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__hlds_statistics__TypeInfo_1383_1383 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                    MR_Word hlds__hlds_statistics__CellVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                    MR_Word hlds__hlds_statistics__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241;
                    MR_Integer hlds__hlds_statistics__V_244_244;
                    MR_Integer hlds__hlds_statistics__V_245_245;
                    MR_Integer hlds__hlds_statistics__V_256_256;
                    MR_Integer hlds__hlds_statistics__V_257_257;
                    MR_Integer hlds__hlds_statistics__V_258_258;
                    MR_Integer hlds__hlds_statistics__V_259_259;
                    MR_Integer hlds__hlds_statistics__V_260_260;
                    MR_Integer hlds__hlds_statistics__V_261_261;
                    MR_Integer hlds__hlds_statistics__V_262_262;
                    MR_Integer hlds__hlds_statistics__V_263_263;
                    MR_Integer hlds__hlds_statistics__V_264_264;
                    MR_Integer hlds__hlds_statistics__V_265_265;
                    MR_Integer hlds__hlds_statistics__V_266_266;
                    MR_Integer hlds__hlds_statistics__V_267_267;
                    MR_Integer hlds__hlds_statistics__V_268_268;
                    MR_Integer hlds__hlds_statistics__V_269_269;
                    MR_Integer hlds__hlds_statistics__V_270_270;
                    MR_Integer hlds__hlds_statistics__V_271_271;
                    MR_Integer hlds__hlds_statistics__V_272_272;
                    MR_Integer hlds__hlds_statistics__V_273_273;
                    MR_Integer hlds__hlds_statistics__V_274_274;
                    MR_Integer hlds__hlds_statistics__V_275_275;
                    MR_Integer hlds__hlds_statistics__V_276_276;
                    MR_Integer hlds__hlds_statistics__V_277_277;
                    MR_Integer hlds__hlds_statistics__V_278_278;
                    MR_Integer hlds__hlds_statistics__V_279_279;
                    MR_Word hlds__hlds_statistics__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                    MR_Word hlds__hlds_statistics__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
                    MR_Word hlds__hlds_statistics__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
                    MR_Word hlds__hlds_statistics__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));
                    MR_Word hlds__hlds_statistics__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 6)));

                    {
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, ((MR_Box) (hlds__hlds_statistics__CellVar_16)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241);
                    }
                    {
                      mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, hlds__hlds_statistics__ArgVars_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                    }
                    hlds__hlds_statistics__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                    hlds__hlds_statistics__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                    hlds__hlds_statistics__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                    hlds__hlds_statistics__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                    hlds__hlds_statistics__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                    hlds__hlds_statistics__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                    hlds__hlds_statistics__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                    hlds__hlds_statistics__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                    hlds__hlds_statistics__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                    hlds__hlds_statistics__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                    hlds__hlds_statistics__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                    hlds__hlds_statistics__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                    hlds__hlds_statistics__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                    hlds__hlds_statistics__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                    hlds__hlds_statistics__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                    hlds__hlds_statistics__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                    hlds__hlds_statistics__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                    hlds__hlds_statistics__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                    hlds__hlds_statistics__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                    hlds__hlds_statistics__V_274_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                    hlds__hlds_statistics__V_275_275 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                    hlds__hlds_statistics__V_276_276 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                    hlds__hlds_statistics__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                    hlds__hlds_statistics__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                    hlds__hlds_statistics__V_279_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                    hlds__hlds_statistics__V_244_244 = (hlds__hlds_statistics__V_245_245 + (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_244_244));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_256_256));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_257_257));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_258_258));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_259_259));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_260_260));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_261_261));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_262_262));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_263_263));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_264_264));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_265_265));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_266_266));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_267_267));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_268_268));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_269_269));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_270_270));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_271_271));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_272_272));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_273_273));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_274_274));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_275_275));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_276_276));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_277_277));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_278_278));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_279_279));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_statistics__TypeInfo_1384_1384 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235;
                    MR_Integer hlds__hlds_statistics__V_238_238;
                    MR_Integer hlds__hlds_statistics__V_239_239;
                    MR_Word hlds__hlds_statistics__CellVar_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                    MR_Word hlds__hlds_statistics__ArgVars_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
                    MR_Integer hlds__hlds_statistics__V_305_305;
                    MR_Integer hlds__hlds_statistics__V_306_306;
                    MR_Integer hlds__hlds_statistics__V_307_307;
                    MR_Integer hlds__hlds_statistics__V_308_308;
                    MR_Integer hlds__hlds_statistics__V_309_309;
                    MR_Integer hlds__hlds_statistics__V_310_310;
                    MR_Integer hlds__hlds_statistics__V_311_311;
                    MR_Integer hlds__hlds_statistics__V_312_312;
                    MR_Integer hlds__hlds_statistics__V_313_313;
                    MR_Integer hlds__hlds_statistics__V_314_314;
                    MR_Integer hlds__hlds_statistics__V_315_315;
                    MR_Integer hlds__hlds_statistics__V_316_316;
                    MR_Integer hlds__hlds_statistics__V_317_317;
                    MR_Integer hlds__hlds_statistics__V_318_318;
                    MR_Integer hlds__hlds_statistics__V_319_319;
                    MR_Integer hlds__hlds_statistics__V_320_320;
                    MR_Integer hlds__hlds_statistics__V_321_321;
                    MR_Integer hlds__hlds_statistics__V_322_322;
                    MR_Integer hlds__hlds_statistics__V_323_323;
                    MR_Integer hlds__hlds_statistics__V_324_324;
                    MR_Integer hlds__hlds_statistics__V_325_325;
                    MR_Integer hlds__hlds_statistics__V_326_326;
                    MR_Integer hlds__hlds_statistics__V_327_327;
                    MR_Integer hlds__hlds_statistics__V_328_328;
                    MR_Word hlds__hlds_statistics__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                    MR_Word hlds__hlds_statistics__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
                    MR_Word hlds__hlds_statistics__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
                    MR_Word hlds__hlds_statistics__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));

                    {
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, ((MR_Box) (hlds__hlds_statistics__CellVar_247)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235);
                    }
                    {
                      mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, hlds__hlds_statistics__ArgVars_248, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                    }
                    hlds__hlds_statistics__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                    hlds__hlds_statistics__V_239_239 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                    hlds__hlds_statistics__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                    hlds__hlds_statistics__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                    hlds__hlds_statistics__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                    hlds__hlds_statistics__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                    hlds__hlds_statistics__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                    hlds__hlds_statistics__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                    hlds__hlds_statistics__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                    hlds__hlds_statistics__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                    hlds__hlds_statistics__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                    hlds__hlds_statistics__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                    hlds__hlds_statistics__V_316_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                    hlds__hlds_statistics__V_317_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                    hlds__hlds_statistics__V_318_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                    hlds__hlds_statistics__V_319_319 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                    hlds__hlds_statistics__V_320_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                    hlds__hlds_statistics__V_321_321 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                    hlds__hlds_statistics__V_322_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                    hlds__hlds_statistics__V_323_323 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                    hlds__hlds_statistics__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                    hlds__hlds_statistics__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                    hlds__hlds_statistics__V_326_326 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                    hlds__hlds_statistics__V_327_327 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                    hlds__hlds_statistics__V_328_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                    hlds__hlds_statistics__V_238_238 = (hlds__hlds_statistics__V_239_239 + (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_305_305));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_238_238));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_306_306));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_307_307));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_308_308));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_309_309));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_310_310));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_311_311));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_312_312));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_313_313));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_314_314));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_315_315));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_316_316));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_317_317));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_318_318));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_319_319));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_320_320));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_321_321));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_322_322));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_323_323));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_324_324));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_325_325));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_326_326));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_327_327));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_328_328));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__hlds_statistics__TypeInfo_1385_1385 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                    MR_Word hlds__hlds_statistics__ToVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                    MR_Word hlds__hlds_statistics__FromVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229;
                    MR_Integer hlds__hlds_statistics__V_232_232;
                    MR_Integer hlds__hlds_statistics__V_233_233;
                    MR_Integer hlds__hlds_statistics__V_354_354;
                    MR_Integer hlds__hlds_statistics__V_355_355;
                    MR_Integer hlds__hlds_statistics__V_356_356;
                    MR_Integer hlds__hlds_statistics__V_357_357;
                    MR_Integer hlds__hlds_statistics__V_358_358;
                    MR_Integer hlds__hlds_statistics__V_359_359;
                    MR_Integer hlds__hlds_statistics__V_360_360;
                    MR_Integer hlds__hlds_statistics__V_361_361;
                    MR_Integer hlds__hlds_statistics__V_362_362;
                    MR_Integer hlds__hlds_statistics__V_363_363;
                    MR_Integer hlds__hlds_statistics__V_364_364;
                    MR_Integer hlds__hlds_statistics__V_365_365;
                    MR_Integer hlds__hlds_statistics__V_366_366;
                    MR_Integer hlds__hlds_statistics__V_367_367;
                    MR_Integer hlds__hlds_statistics__V_368_368;
                    MR_Integer hlds__hlds_statistics__V_369_369;
                    MR_Integer hlds__hlds_statistics__V_370_370;
                    MR_Integer hlds__hlds_statistics__V_371_371;
                    MR_Integer hlds__hlds_statistics__V_372_372;
                    MR_Integer hlds__hlds_statistics__V_373_373;
                    MR_Integer hlds__hlds_statistics__V_374_374;
                    MR_Integer hlds__hlds_statistics__V_375_375;
                    MR_Integer hlds__hlds_statistics__V_376_376;
                    MR_Integer hlds__hlds_statistics__V_377_377;

                    {
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__ToVar_27)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229);
                    }
                    {
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__FromVar_28)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                    }
                    hlds__hlds_statistics__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                    hlds__hlds_statistics__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                    hlds__hlds_statistics__V_233_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                    hlds__hlds_statistics__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                    hlds__hlds_statistics__V_357_357 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                    hlds__hlds_statistics__V_358_358 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                    hlds__hlds_statistics__V_359_359 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                    hlds__hlds_statistics__V_360_360 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                    hlds__hlds_statistics__V_361_361 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                    hlds__hlds_statistics__V_362_362 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                    hlds__hlds_statistics__V_363_363 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                    hlds__hlds_statistics__V_364_364 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                    hlds__hlds_statistics__V_365_365 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                    hlds__hlds_statistics__V_366_366 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                    hlds__hlds_statistics__V_367_367 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                    hlds__hlds_statistics__V_368_368 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                    hlds__hlds_statistics__V_369_369 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                    hlds__hlds_statistics__V_370_370 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                    hlds__hlds_statistics__V_371_371 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                    hlds__hlds_statistics__V_372_372 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                    hlds__hlds_statistics__V_373_373 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                    hlds__hlds_statistics__V_374_374 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                    hlds__hlds_statistics__V_375_375 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                    hlds__hlds_statistics__V_376_376 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                    hlds__hlds_statistics__V_377_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                    hlds__hlds_statistics__V_232_232 = (hlds__hlds_statistics__V_233_233 + (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_354_354));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_355_355));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_232_232));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_356_356));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_357_357));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_358_358));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_359_359));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_360_360));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_361_361));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_362_362));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_363_363));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_364_364));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_365_365));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_366_366));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_367_367));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_368_368));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_369_369));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_370_370));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_371_371));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_372_372));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_373_373));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_374_374));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_375_375));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_376_376));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_377_377));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__hlds_statistics__TypeInfo_1386_1386 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                        MR_Word hlds__hlds_statistics__VarA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                        MR_Word hlds__hlds_statistics__VarB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223;
                        MR_Integer hlds__hlds_statistics__V_226_226;
                        MR_Integer hlds__hlds_statistics__V_227_227;
                        MR_Integer hlds__hlds_statistics__V_403_403;
                        MR_Integer hlds__hlds_statistics__V_404_404;
                        MR_Integer hlds__hlds_statistics__V_405_405;
                        MR_Integer hlds__hlds_statistics__V_406_406;
                        MR_Integer hlds__hlds_statistics__V_407_407;
                        MR_Integer hlds__hlds_statistics__V_408_408;
                        MR_Integer hlds__hlds_statistics__V_409_409;
                        MR_Integer hlds__hlds_statistics__V_410_410;
                        MR_Integer hlds__hlds_statistics__V_411_411;
                        MR_Integer hlds__hlds_statistics__V_412_412;
                        MR_Integer hlds__hlds_statistics__V_413_413;
                        MR_Integer hlds__hlds_statistics__V_414_414;
                        MR_Integer hlds__hlds_statistics__V_415_415;
                        MR_Integer hlds__hlds_statistics__V_416_416;
                        MR_Integer hlds__hlds_statistics__V_417_417;
                        MR_Integer hlds__hlds_statistics__V_418_418;
                        MR_Integer hlds__hlds_statistics__V_419_419;
                        MR_Integer hlds__hlds_statistics__V_420_420;
                        MR_Integer hlds__hlds_statistics__V_421_421;
                        MR_Integer hlds__hlds_statistics__V_422_422;
                        MR_Integer hlds__hlds_statistics__V_423_423;
                        MR_Integer hlds__hlds_statistics__V_424_424;
                        MR_Integer hlds__hlds_statistics__V_425_425;
                        MR_Integer hlds__hlds_statistics__V_426_426;

                        {
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarA_29)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223);
                        }
                        {
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarB_30)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                        }
                        hlds__hlds_statistics__V_403_403 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                        hlds__hlds_statistics__V_404_404 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                        hlds__hlds_statistics__V_405_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                        hlds__hlds_statistics__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                        hlds__hlds_statistics__V_406_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                        hlds__hlds_statistics__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                        hlds__hlds_statistics__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                        hlds__hlds_statistics__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                        hlds__hlds_statistics__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                        hlds__hlds_statistics__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                        hlds__hlds_statistics__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                        hlds__hlds_statistics__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                        hlds__hlds_statistics__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                        hlds__hlds_statistics__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                        hlds__hlds_statistics__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                        hlds__hlds_statistics__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                        hlds__hlds_statistics__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                        hlds__hlds_statistics__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                        hlds__hlds_statistics__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                        hlds__hlds_statistics__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                        hlds__hlds_statistics__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                        hlds__hlds_statistics__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                        hlds__hlds_statistics__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                        hlds__hlds_statistics__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                        hlds__hlds_statistics__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                        hlds__hlds_statistics__V_226_226 = (hlds__hlds_statistics__V_227_227 + (MR_Integer) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_403_403));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_404_404));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_405_405));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_226_226));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_406_406));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_407_407));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_408_408));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_409_409));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_410_410));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_411_411));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_412_412));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_413_413));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_414_414));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_415_415));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_416_416));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_417_417));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_418_418));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_419_419));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_420_420));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_421_421));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_422_422));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_423_423));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_424_424));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_425_425));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_426_426));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_statistics__TypeInfo_1387_1387 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204;

                        {
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__LHS_11)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204);
                        }
                        switch (MR_tag((MR_Word) hlds__hlds_statistics__RHS_12)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word hlds__hlds_statistics__RHSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
                              MR_Integer hlds__hlds_statistics__V_220_220;
                              MR_Integer hlds__hlds_statistics__V_221_221;
                              MR_Integer hlds__hlds_statistics__V_452_452;
                              MR_Integer hlds__hlds_statistics__V_453_453;
                              MR_Integer hlds__hlds_statistics__V_454_454;
                              MR_Integer hlds__hlds_statistics__V_455_455;
                              MR_Integer hlds__hlds_statistics__V_456_456;
                              MR_Integer hlds__hlds_statistics__V_457_457;
                              MR_Integer hlds__hlds_statistics__V_458_458;
                              MR_Integer hlds__hlds_statistics__V_459_459;
                              MR_Integer hlds__hlds_statistics__V_460_460;
                              MR_Integer hlds__hlds_statistics__V_461_461;
                              MR_Integer hlds__hlds_statistics__V_462_462;
                              MR_Integer hlds__hlds_statistics__V_463_463;
                              MR_Integer hlds__hlds_statistics__V_464_464;
                              MR_Integer hlds__hlds_statistics__V_465_465;
                              MR_Integer hlds__hlds_statistics__V_466_466;
                              MR_Integer hlds__hlds_statistics__V_467_467;
                              MR_Integer hlds__hlds_statistics__V_468_468;
                              MR_Integer hlds__hlds_statistics__V_469_469;
                              MR_Integer hlds__hlds_statistics__V_470_470;
                              MR_Integer hlds__hlds_statistics__V_471_471;
                              MR_Integer hlds__hlds_statistics__V_472_472;
                              MR_Integer hlds__hlds_statistics__V_473_473;
                              MR_Integer hlds__hlds_statistics__V_474_474;
                              MR_Integer hlds__hlds_statistics__V_475_475;

                              {
                                mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__RHSVar_34)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                              }
                              hlds__hlds_statistics__V_452_452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                              hlds__hlds_statistics__V_453_453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                              hlds__hlds_statistics__V_454_454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                              hlds__hlds_statistics__V_455_455 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                              hlds__hlds_statistics__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                              hlds__hlds_statistics__V_456_456 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                              hlds__hlds_statistics__V_457_457 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                              hlds__hlds_statistics__V_458_458 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                              hlds__hlds_statistics__V_459_459 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                              hlds__hlds_statistics__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                              hlds__hlds_statistics__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                              hlds__hlds_statistics__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                              hlds__hlds_statistics__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                              hlds__hlds_statistics__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                              hlds__hlds_statistics__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                              hlds__hlds_statistics__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                              hlds__hlds_statistics__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                              hlds__hlds_statistics__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                              hlds__hlds_statistics__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                              hlds__hlds_statistics__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                              hlds__hlds_statistics__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                              hlds__hlds_statistics__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                              hlds__hlds_statistics__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                              hlds__hlds_statistics__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                              hlds__hlds_statistics__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                              hlds__hlds_statistics__V_220_220 = (hlds__hlds_statistics__V_221_221 + (MR_Integer) 1);
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_452_452));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_453_453));
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_454_454));
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_455_455));
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_220_220));
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_456_456));
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_457_457));
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_458_458));
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_459_459));
                                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_460_460));
                                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_461_461));
                                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_462_462));
                                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_463_463));
                                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_464_464));
                                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_465_465));
                                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_466_466));
                                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_467_467));
                                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_468_468));
                                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_469_469));
                                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_470_470));
                                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_471_471));
                                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_472_472));
                                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_473_473));
                                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_474_474));
                                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_475_475));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word hlds__hlds_statistics__RHSVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 2)));
                              MR_Integer hlds__hlds_statistics__V_215_215;
                              MR_Integer hlds__hlds_statistics__V_216_216;
                              MR_Integer hlds__hlds_statistics__V_501_501;
                              MR_Integer hlds__hlds_statistics__V_502_502;
                              MR_Integer hlds__hlds_statistics__V_503_503;
                              MR_Integer hlds__hlds_statistics__V_504_504;
                              MR_Integer hlds__hlds_statistics__V_505_505;
                              MR_Integer hlds__hlds_statistics__V_506_506;
                              MR_Integer hlds__hlds_statistics__V_507_507;
                              MR_Integer hlds__hlds_statistics__V_508_508;
                              MR_Integer hlds__hlds_statistics__V_509_509;
                              MR_Integer hlds__hlds_statistics__V_510_510;
                              MR_Integer hlds__hlds_statistics__V_511_511;
                              MR_Integer hlds__hlds_statistics__V_512_512;
                              MR_Integer hlds__hlds_statistics__V_513_513;
                              MR_Integer hlds__hlds_statistics__V_514_514;
                              MR_Integer hlds__hlds_statistics__V_515_515;
                              MR_Integer hlds__hlds_statistics__V_516_516;
                              MR_Integer hlds__hlds_statistics__V_517_517;
                              MR_Integer hlds__hlds_statistics__V_518_518;
                              MR_Integer hlds__hlds_statistics__V_519_519;
                              MR_Integer hlds__hlds_statistics__V_520_520;
                              MR_Integer hlds__hlds_statistics__V_521_521;
                              MR_Integer hlds__hlds_statistics__V_522_522;
                              MR_Integer hlds__hlds_statistics__V_523_523;
                              MR_Integer hlds__hlds_statistics__V_524_524;
                              MR_Word hlds__hlds_statistics__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
                              MR_Word hlds__hlds_statistics__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 1)));

                              {
                                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__RHSVars_37, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                              }
                              hlds__hlds_statistics__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                              hlds__hlds_statistics__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                              hlds__hlds_statistics__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                              hlds__hlds_statistics__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                              hlds__hlds_statistics__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                              hlds__hlds_statistics__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                              hlds__hlds_statistics__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                              hlds__hlds_statistics__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                              hlds__hlds_statistics__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                              hlds__hlds_statistics__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                              hlds__hlds_statistics__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                              hlds__hlds_statistics__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                              hlds__hlds_statistics__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                              hlds__hlds_statistics__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                              hlds__hlds_statistics__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                              hlds__hlds_statistics__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                              hlds__hlds_statistics__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                              hlds__hlds_statistics__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                              hlds__hlds_statistics__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                              hlds__hlds_statistics__V_519_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                              hlds__hlds_statistics__V_520_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                              hlds__hlds_statistics__V_521_521 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                              hlds__hlds_statistics__V_522_522 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                              hlds__hlds_statistics__V_523_523 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                              hlds__hlds_statistics__V_524_524 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                              hlds__hlds_statistics__V_215_215 = (hlds__hlds_statistics__V_216_216 + (MR_Integer) 1);
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_501_501));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_502_502));
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_503_503));
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_504_504));
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_215_215));
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_505_505));
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_506_506));
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_507_507));
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_508_508));
                                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_509_509));
                                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_510_510));
                                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_511_511));
                                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_512_512));
                                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_513_513));
                                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_514_514));
                                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_515_515));
                                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_516_516));
                                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_517_517));
                                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_518_518));
                                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_519_519));
                                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_520_520));
                                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_521_521));
                                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_522_522));
                                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_523_523));
                                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_524_524));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word hlds__hlds_statistics__NonLocals_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 2)));
                              MR_Word hlds__hlds_statistics__QuantVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 3)));
                              MR_Word hlds__hlds_statistics__LambdaGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 6)));
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205;
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206;
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207;
                              MR_Integer hlds__hlds_statistics__V_208_208;
                              MR_Integer hlds__hlds_statistics__V_209_209;
                              MR_Integer hlds__hlds_statistics__V_550_550;
                              MR_Integer hlds__hlds_statistics__V_551_551;
                              MR_Integer hlds__hlds_statistics__V_552_552;
                              MR_Integer hlds__hlds_statistics__V_553_553;
                              MR_Integer hlds__hlds_statistics__V_554_554;
                              MR_Integer hlds__hlds_statistics__V_555_555;
                              MR_Integer hlds__hlds_statistics__V_556_556;
                              MR_Integer hlds__hlds_statistics__V_557_557;
                              MR_Integer hlds__hlds_statistics__V_558_558;
                              MR_Integer hlds__hlds_statistics__V_559_559;
                              MR_Integer hlds__hlds_statistics__V_560_560;
                              MR_Integer hlds__hlds_statistics__V_561_561;
                              MR_Integer hlds__hlds_statistics__V_562_562;
                              MR_Integer hlds__hlds_statistics__V_563_563;
                              MR_Integer hlds__hlds_statistics__V_564_564;
                              MR_Integer hlds__hlds_statistics__V_565_565;
                              MR_Integer hlds__hlds_statistics__V_566_566;
                              MR_Integer hlds__hlds_statistics__V_567_567;
                              MR_Integer hlds__hlds_statistics__V_568_568;
                              MR_Integer hlds__hlds_statistics__V_569_569;
                              MR_Integer hlds__hlds_statistics__V_570_570;
                              MR_Integer hlds__hlds_statistics__V_571_571;
                              MR_Integer hlds__hlds_statistics__V_572_572;
                              MR_Integer hlds__hlds_statistics__V_573_573;
                              MR_Word hlds__hlds_statistics__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) & (MR_Integer) 3);
                              MR_Word hlds__hlds_statistics__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                              MR_Word hlds__hlds_statistics__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                              MR_Word hlds__hlds_statistics__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 4)));
                              MR_Word hlds__hlds_statistics__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 5)));

                              {
                                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__NonLocals_42, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205);
                              }
                              {
                                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__QuantVars_43, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206);
                              }
                              hlds__hlds_statistics__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                              hlds__hlds_statistics__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                              hlds__hlds_statistics__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                              hlds__hlds_statistics__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                              hlds__hlds_statistics__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                              hlds__hlds_statistics__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                              hlds__hlds_statistics__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                              hlds__hlds_statistics__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                              hlds__hlds_statistics__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                              hlds__hlds_statistics__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                              hlds__hlds_statistics__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                              hlds__hlds_statistics__V_560_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                              hlds__hlds_statistics__V_561_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                              hlds__hlds_statistics__V_562_562 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                              hlds__hlds_statistics__V_563_563 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                              hlds__hlds_statistics__V_564_564 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                              hlds__hlds_statistics__V_565_565 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                              hlds__hlds_statistics__V_566_566 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                              hlds__hlds_statistics__V_567_567 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                              hlds__hlds_statistics__V_568_568 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                              hlds__hlds_statistics__V_569_569 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                              hlds__hlds_statistics__V_570_570 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                              hlds__hlds_statistics__V_571_571 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                              hlds__hlds_statistics__V_572_572 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                              hlds__hlds_statistics__V_573_573 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                              hlds__hlds_statistics__V_208_208 = (hlds__hlds_statistics__V_209_209 + (MR_Integer) 1);
                              {
                                hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 0) = ((MR_Box) (hlds__hlds_statistics__V_550_550));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 1) = ((MR_Box) (hlds__hlds_statistics__V_551_551));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 2) = ((MR_Box) (hlds__hlds_statistics__V_552_552));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 3) = ((MR_Box) (hlds__hlds_statistics__V_553_553));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 4) = ((MR_Box) (hlds__hlds_statistics__V_208_208));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 5) = ((MR_Box) (hlds__hlds_statistics__V_554_554));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 6) = ((MR_Box) (hlds__hlds_statistics__V_555_555));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 7) = ((MR_Box) (hlds__hlds_statistics__V_556_556));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 8) = ((MR_Box) (hlds__hlds_statistics__V_557_557));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 9) = ((MR_Box) (hlds__hlds_statistics__V_558_558));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 10) = ((MR_Box) (hlds__hlds_statistics__V_559_559));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 11) = ((MR_Box) (hlds__hlds_statistics__V_560_560));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 12) = ((MR_Box) (hlds__hlds_statistics__V_561_561));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 13) = ((MR_Box) (hlds__hlds_statistics__V_562_562));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 14) = ((MR_Box) (hlds__hlds_statistics__V_563_563));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 15) = ((MR_Box) (hlds__hlds_statistics__V_564_564));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 16) = ((MR_Box) (hlds__hlds_statistics__V_565_565));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 17) = ((MR_Box) (hlds__hlds_statistics__V_566_566));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 18) = ((MR_Box) (hlds__hlds_statistics__V_567_567));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 19) = ((MR_Box) (hlds__hlds_statistics__V_568_568));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 20) = ((MR_Box) (hlds__hlds_statistics__V_569_569));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 21) = ((MR_Box) (hlds__hlds_statistics__V_570_570));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 22) = ((MR_Box) (hlds__hlds_statistics__V_571_571));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 23) = ((MR_Box) (hlds__hlds_statistics__V_572_572));
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 24) = ((MR_Box) (hlds__hlds_statistics__V_573_573));
                              }
                              /* direct tailcall eliminated */
                              {
                                MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__LambdaGoal_46;
                                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206;
                                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207;

                                hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                                hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
                                hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
                              }
                              continue;
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer hlds__hlds_statistics__V_201_201;
              MR_Integer hlds__hlds_statistics__V_202_202;
              MR_Word hlds__hlds_statistics__ArgVars_249 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
              MR_Integer hlds__hlds_statistics__V_599_599;
              MR_Integer hlds__hlds_statistics__V_600_600;
              MR_Integer hlds__hlds_statistics__V_601_601;
              MR_Integer hlds__hlds_statistics__V_602_602;
              MR_Integer hlds__hlds_statistics__V_603_603;
              MR_Integer hlds__hlds_statistics__V_604_604;
              MR_Integer hlds__hlds_statistics__V_605_605;
              MR_Integer hlds__hlds_statistics__V_606_606;
              MR_Integer hlds__hlds_statistics__V_607_607;
              MR_Integer hlds__hlds_statistics__V_608_608;
              MR_Integer hlds__hlds_statistics__V_609_609;
              MR_Integer hlds__hlds_statistics__V_610_610;
              MR_Integer hlds__hlds_statistics__V_611_611;
              MR_Integer hlds__hlds_statistics__V_612_612;
              MR_Integer hlds__hlds_statistics__V_613_613;
              MR_Integer hlds__hlds_statistics__V_614_614;
              MR_Integer hlds__hlds_statistics__V_615_615;
              MR_Integer hlds__hlds_statistics__V_616_616;
              MR_Integer hlds__hlds_statistics__V_617_617;
              MR_Integer hlds__hlds_statistics__V_618_618;
              MR_Integer hlds__hlds_statistics__V_619_619;
              MR_Integer hlds__hlds_statistics__V_620_620;
              MR_Integer hlds__hlds_statistics__V_621_621;
              MR_Integer hlds__hlds_statistics__V_622_622;
              MR_Word hlds__hlds_statistics__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
              MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
              MR_Word hlds__hlds_statistics__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
              MR_Word hlds__hlds_statistics__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
              MR_Word hlds__hlds_statistics__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

              {
                mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__ArgVars_249, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
              }
              hlds__hlds_statistics__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
              hlds__hlds_statistics__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
              hlds__hlds_statistics__V_601_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
              hlds__hlds_statistics__V_602_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
              hlds__hlds_statistics__V_603_603 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
              hlds__hlds_statistics__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
              hlds__hlds_statistics__V_604_604 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
              hlds__hlds_statistics__V_605_605 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
              hlds__hlds_statistics__V_606_606 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
              hlds__hlds_statistics__V_607_607 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
              hlds__hlds_statistics__V_608_608 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
              hlds__hlds_statistics__V_609_609 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
              hlds__hlds_statistics__V_610_610 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
              hlds__hlds_statistics__V_611_611 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
              hlds__hlds_statistics__V_612_612 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
              hlds__hlds_statistics__V_613_613 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
              hlds__hlds_statistics__V_614_614 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
              hlds__hlds_statistics__V_615_615 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
              hlds__hlds_statistics__V_616_616 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
              hlds__hlds_statistics__V_617_617 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
              hlds__hlds_statistics__V_618_618 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
              hlds__hlds_statistics__V_619_619 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
              hlds__hlds_statistics__V_620_620 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
              hlds__hlds_statistics__V_621_621 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
              hlds__hlds_statistics__V_622_622 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
              hlds__hlds_statistics__V_201_201 = (hlds__hlds_statistics__V_202_202 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_599_599));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_600_600));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_601_601));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_602_602));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_603_603));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_201_201));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_604_604));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_605_605));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_606_606));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_607_607));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_608_608));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_609_609));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_610_610));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_611_611));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_612_612));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_613_613));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_614_614));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_615_615));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_616_616));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_617_617));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_618_618));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_619_619));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_620_620));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_621_621));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_622_622));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_statistics__TypeInfo_1395_1395 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                  MR_Word hlds__hlds_statistics__CallKind_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
                  MR_Word hlds__hlds_statistics__ArgVars_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word hlds__hlds_statistics__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word hlds__hlds_statistics__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

                  {
                    mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, hlds__hlds_statistics__ArgVars_251, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172);
                  }
                  switch (MR_tag((MR_Word) hlds__hlds_statistics__CallKind_60)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__hlds_statistics__HOVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
                        MR_Integer hlds__hlds_statistics__V_188_188;
                        MR_Integer hlds__hlds_statistics__V_189_189;
                        MR_Integer hlds__hlds_statistics__V_697_697;
                        MR_Integer hlds__hlds_statistics__V_698_698;
                        MR_Integer hlds__hlds_statistics__V_699_699;
                        MR_Integer hlds__hlds_statistics__V_700_700;
                        MR_Integer hlds__hlds_statistics__V_701_701;
                        MR_Integer hlds__hlds_statistics__V_702_702;
                        MR_Integer hlds__hlds_statistics__V_703_703;
                        MR_Integer hlds__hlds_statistics__V_704_704;
                        MR_Integer hlds__hlds_statistics__V_705_705;
                        MR_Integer hlds__hlds_statistics__V_706_706;
                        MR_Integer hlds__hlds_statistics__V_707_707;
                        MR_Integer hlds__hlds_statistics__V_708_708;
                        MR_Integer hlds__hlds_statistics__V_709_709;
                        MR_Integer hlds__hlds_statistics__V_710_710;
                        MR_Integer hlds__hlds_statistics__V_711_711;
                        MR_Integer hlds__hlds_statistics__V_712_712;
                        MR_Integer hlds__hlds_statistics__V_713_713;
                        MR_Integer hlds__hlds_statistics__V_714_714;
                        MR_Integer hlds__hlds_statistics__V_715_715;
                        MR_Integer hlds__hlds_statistics__V_716_716;
                        MR_Integer hlds__hlds_statistics__V_717_717;
                        MR_Integer hlds__hlds_statistics__V_718_718;
                        MR_Integer hlds__hlds_statistics__V_719_719;
                        MR_Integer hlds__hlds_statistics__V_720_720;
                        MR_Word hlds__hlds_statistics__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
                        MR_Word hlds__hlds_statistics__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
                        MR_Integer hlds__hlds_statistics__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

                        {
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__HOVar_64)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                        }
                        hlds__hlds_statistics__V_697_697 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                        hlds__hlds_statistics__V_698_698 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                        hlds__hlds_statistics__V_699_699 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                        hlds__hlds_statistics__V_700_700 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                        hlds__hlds_statistics__V_701_701 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                        hlds__hlds_statistics__V_702_702 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                        hlds__hlds_statistics__V_703_703 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                        hlds__hlds_statistics__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                        hlds__hlds_statistics__V_704_704 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                        hlds__hlds_statistics__V_705_705 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                        hlds__hlds_statistics__V_706_706 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                        hlds__hlds_statistics__V_707_707 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                        hlds__hlds_statistics__V_708_708 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                        hlds__hlds_statistics__V_709_709 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                        hlds__hlds_statistics__V_710_710 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                        hlds__hlds_statistics__V_711_711 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                        hlds__hlds_statistics__V_712_712 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                        hlds__hlds_statistics__V_713_713 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                        hlds__hlds_statistics__V_714_714 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                        hlds__hlds_statistics__V_715_715 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                        hlds__hlds_statistics__V_716_716 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                        hlds__hlds_statistics__V_717_717 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                        hlds__hlds_statistics__V_718_718 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                        hlds__hlds_statistics__V_719_719 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                        hlds__hlds_statistics__V_720_720 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                        hlds__hlds_statistics__V_188_188 = (hlds__hlds_statistics__V_189_189 + (MR_Integer) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_697_697));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_698_698));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_699_699));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_700_700));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_701_701));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_702_702));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_703_703));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_188_188));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_704_704));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_705_705));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_706_706));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_707_707));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_708_708));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_709_709));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_710_710));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_711_711));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_712_712));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_713_713));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_714_714));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_715_715));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_716_716));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_717_717));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_718_718));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_719_719));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_720_720));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_statistics__TCIVar_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
                        MR_Integer hlds__hlds_statistics__V_183_183;
                        MR_Integer hlds__hlds_statistics__V_184_184;
                        MR_Integer hlds__hlds_statistics__V_746_746;
                        MR_Integer hlds__hlds_statistics__V_747_747;
                        MR_Integer hlds__hlds_statistics__V_748_748;
                        MR_Integer hlds__hlds_statistics__V_749_749;
                        MR_Integer hlds__hlds_statistics__V_750_750;
                        MR_Integer hlds__hlds_statistics__V_751_751;
                        MR_Integer hlds__hlds_statistics__V_752_752;
                        MR_Integer hlds__hlds_statistics__V_753_753;
                        MR_Integer hlds__hlds_statistics__V_754_754;
                        MR_Integer hlds__hlds_statistics__V_755_755;
                        MR_Integer hlds__hlds_statistics__V_756_756;
                        MR_Integer hlds__hlds_statistics__V_757_757;
                        MR_Integer hlds__hlds_statistics__V_758_758;
                        MR_Integer hlds__hlds_statistics__V_759_759;
                        MR_Integer hlds__hlds_statistics__V_760_760;
                        MR_Integer hlds__hlds_statistics__V_761_761;
                        MR_Integer hlds__hlds_statistics__V_762_762;
                        MR_Integer hlds__hlds_statistics__V_763_763;
                        MR_Integer hlds__hlds_statistics__V_764_764;
                        MR_Integer hlds__hlds_statistics__V_765_765;
                        MR_Integer hlds__hlds_statistics__V_766_766;
                        MR_Integer hlds__hlds_statistics__V_767_767;
                        MR_Integer hlds__hlds_statistics__V_768_768;
                        MR_Integer hlds__hlds_statistics__V_769_769;
                        MR_Integer hlds__hlds_statistics__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
                        MR_Word hlds__hlds_statistics__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
                        MR_Word hlds__hlds_statistics__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

                        {
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__TCIVar_68)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                        }
                        hlds__hlds_statistics__V_746_746 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                        hlds__hlds_statistics__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                        hlds__hlds_statistics__V_748_748 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                        hlds__hlds_statistics__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                        hlds__hlds_statistics__V_750_750 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                        hlds__hlds_statistics__V_751_751 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                        hlds__hlds_statistics__V_752_752 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                        hlds__hlds_statistics__V_753_753 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                        hlds__hlds_statistics__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                        hlds__hlds_statistics__V_754_754 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                        hlds__hlds_statistics__V_755_755 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                        hlds__hlds_statistics__V_756_756 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                        hlds__hlds_statistics__V_757_757 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                        hlds__hlds_statistics__V_758_758 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                        hlds__hlds_statistics__V_759_759 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                        hlds__hlds_statistics__V_760_760 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                        hlds__hlds_statistics__V_761_761 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                        hlds__hlds_statistics__V_762_762 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                        hlds__hlds_statistics__V_763_763 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                        hlds__hlds_statistics__V_764_764 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                        hlds__hlds_statistics__V_765_765 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                        hlds__hlds_statistics__V_766_766 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                        hlds__hlds_statistics__V_767_767 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                        hlds__hlds_statistics__V_768_768 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                        hlds__hlds_statistics__V_769_769 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                        hlds__hlds_statistics__V_183_183 = (hlds__hlds_statistics__V_184_184 + (MR_Integer) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_746_746));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_747_747));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_748_748));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_749_749));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_750_750));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_751_751));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_752_752));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_753_753));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_183_183));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_754_754));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_755_755));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_756_756));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_757_757));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_758_758));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_759_759));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_760_760));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_761_761));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_762_762));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_763_763));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_764_764));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_765_765));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_766_766));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_767_767));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_768_768));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_769_769));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer hlds__hlds_statistics__V_178_178;
                        MR_Integer hlds__hlds_statistics__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                        MR_Integer hlds__hlds_statistics__V_795_795 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                        MR_Integer hlds__hlds_statistics__V_796_796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                        MR_Integer hlds__hlds_statistics__V_797_797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                        MR_Integer hlds__hlds_statistics__V_798_798 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                        MR_Integer hlds__hlds_statistics__V_799_799 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                        MR_Integer hlds__hlds_statistics__V_800_800 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                        MR_Integer hlds__hlds_statistics__V_801_801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                        MR_Integer hlds__hlds_statistics__V_802_802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                        MR_Integer hlds__hlds_statistics__V_803_803 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                        MR_Integer hlds__hlds_statistics__V_804_804 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                        MR_Integer hlds__hlds_statistics__V_805_805 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                        MR_Integer hlds__hlds_statistics__V_806_806 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                        MR_Integer hlds__hlds_statistics__V_807_807 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                        MR_Integer hlds__hlds_statistics__V_808_808 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                        MR_Integer hlds__hlds_statistics__V_809_809 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                        MR_Integer hlds__hlds_statistics__V_810_810 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                        MR_Integer hlds__hlds_statistics__V_811_811 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                        MR_Integer hlds__hlds_statistics__V_812_812 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                        MR_Integer hlds__hlds_statistics__V_813_813 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                        MR_Integer hlds__hlds_statistics__V_814_814 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                        MR_Integer hlds__hlds_statistics__V_815_815 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                        MR_Integer hlds__hlds_statistics__V_816_816 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                        MR_Integer hlds__hlds_statistics__V_817_817 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                        MR_Integer hlds__hlds_statistics__V_818_818 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                        hlds__hlds_statistics__V_178_178 = (hlds__hlds_statistics__V_179_179 + (MR_Integer) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_795_795));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_796_796));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_797_797));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_798_798));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_799_799));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_800_800));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_801_801));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_802_802));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_803_803));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_178_178));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_804_804));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_805_805));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_806_806));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_807_807));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_808_808));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_809_809));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_810_810));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_811_811));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_812_812));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_813_813));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_814_814));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_815_815));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_816_816));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_817_817));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_818_818));
                        }
                        *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer hlds__hlds_statistics__V_174_174;
                        MR_Integer hlds__hlds_statistics__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                        MR_Integer hlds__hlds_statistics__V_844_844 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                        MR_Integer hlds__hlds_statistics__V_845_845 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                        MR_Integer hlds__hlds_statistics__V_846_846 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                        MR_Integer hlds__hlds_statistics__V_847_847 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                        MR_Integer hlds__hlds_statistics__V_848_848 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                        MR_Integer hlds__hlds_statistics__V_849_849 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                        MR_Integer hlds__hlds_statistics__V_850_850 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                        MR_Integer hlds__hlds_statistics__V_851_851 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                        MR_Integer hlds__hlds_statistics__V_852_852 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                        MR_Integer hlds__hlds_statistics__V_853_853 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                        MR_Integer hlds__hlds_statistics__V_854_854 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                        MR_Integer hlds__hlds_statistics__V_855_855 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                        MR_Integer hlds__hlds_statistics__V_856_856 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                        MR_Integer hlds__hlds_statistics__V_857_857 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                        MR_Integer hlds__hlds_statistics__V_858_858 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                        MR_Integer hlds__hlds_statistics__V_859_859 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                        MR_Integer hlds__hlds_statistics__V_860_860 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                        MR_Integer hlds__hlds_statistics__V_861_861 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                        MR_Integer hlds__hlds_statistics__V_862_862 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                        MR_Integer hlds__hlds_statistics__V_863_863 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                        MR_Integer hlds__hlds_statistics__V_864_864 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                        MR_Integer hlds__hlds_statistics__V_865_865 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                        MR_Integer hlds__hlds_statistics__V_866_866 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                        MR_Integer hlds__hlds_statistics__V_867_867 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                        hlds__hlds_statistics__V_174_174 = (hlds__hlds_statistics__V_175_175 + (MR_Integer) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_844_844));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_845_845));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_846_846));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_847_847));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_848_848));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_849_849));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_850_850));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_851_851));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_852_852));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_853_853));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_174_174));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_854_854));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_855_855));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_856_856));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_857_857));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_858_858));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_859_859));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_860_860));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_861_861));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_862_862));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_863_863));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_864_864));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_865_865));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_866_866));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_867_867));
                        }
                        *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_statistics__TypeCtorInfo_1389_1389 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                  MR_Word hlds__hlds_statistics__TypeInfo_1390_1390 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                  MR_Word hlds__hlds_statistics__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word hlds__hlds_statistics__ExtraArgs_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));
                  MR_Word hlds__hlds_statistics__ExtraArgVars_59;
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193;
                  MR_Integer hlds__hlds_statistics__V_196_196;
                  MR_Integer hlds__hlds_statistics__V_197_197;
                  MR_Word hlds__hlds_statistics__ArgVars_250;
                  MR_Integer hlds__hlds_statistics__V_648_648;
                  MR_Integer hlds__hlds_statistics__V_649_649;
                  MR_Integer hlds__hlds_statistics__V_650_650;
                  MR_Integer hlds__hlds_statistics__V_651_651;
                  MR_Integer hlds__hlds_statistics__V_652_652;
                  MR_Integer hlds__hlds_statistics__V_653_653;
                  MR_Integer hlds__hlds_statistics__V_654_654;
                  MR_Integer hlds__hlds_statistics__V_655_655;
                  MR_Integer hlds__hlds_statistics__V_656_656;
                  MR_Integer hlds__hlds_statistics__V_657_657;
                  MR_Integer hlds__hlds_statistics__V_658_658;
                  MR_Integer hlds__hlds_statistics__V_659_659;
                  MR_Integer hlds__hlds_statistics__V_660_660;
                  MR_Integer hlds__hlds_statistics__V_661_661;
                  MR_Integer hlds__hlds_statistics__V_662_662;
                  MR_Integer hlds__hlds_statistics__V_663_663;
                  MR_Integer hlds__hlds_statistics__V_664_664;
                  MR_Integer hlds__hlds_statistics__V_665_665;
                  MR_Integer hlds__hlds_statistics__V_666_666;
                  MR_Integer hlds__hlds_statistics__V_667_667;
                  MR_Integer hlds__hlds_statistics__V_668_668;
                  MR_Integer hlds__hlds_statistics__V_669_669;
                  MR_Integer hlds__hlds_statistics__V_670_670;
                  MR_Integer hlds__hlds_statistics__V_671_671;
                  MR_Word hlds__hlds_statistics__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 6)));
                  MR_Word hlds__hlds_statistics__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 7)));

                  {
                    hlds__hlds_statistics__ArgVars_250 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[2], hlds__hlds_statistics__Args_55);
                  }
                  {
                    hlds__hlds_statistics__ExtraArgVars_59 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[3], hlds__hlds_statistics__ExtraArgs_56);
                  }
                  {
                    mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ArgVars_250, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193);
                  }
                  {
                    mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ExtraArgVars_59, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                  }
                  hlds__hlds_statistics__V_648_648 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  hlds__hlds_statistics__V_649_649 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  hlds__hlds_statistics__V_650_650 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  hlds__hlds_statistics__V_651_651 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  hlds__hlds_statistics__V_652_652 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  hlds__hlds_statistics__V_653_653 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  hlds__hlds_statistics__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  hlds__hlds_statistics__V_654_654 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  hlds__hlds_statistics__V_655_655 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  hlds__hlds_statistics__V_656_656 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  hlds__hlds_statistics__V_657_657 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  hlds__hlds_statistics__V_658_658 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  hlds__hlds_statistics__V_659_659 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  hlds__hlds_statistics__V_660_660 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  hlds__hlds_statistics__V_661_661 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  hlds__hlds_statistics__V_662_662 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  hlds__hlds_statistics__V_663_663 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  hlds__hlds_statistics__V_664_664 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  hlds__hlds_statistics__V_665_665 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  hlds__hlds_statistics__V_666_666 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  hlds__hlds_statistics__V_667_667 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  hlds__hlds_statistics__V_668_668 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  hlds__hlds_statistics__V_669_669 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  hlds__hlds_statistics__V_670_670 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  hlds__hlds_statistics__V_671_671 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  hlds__hlds_statistics__V_196_196 = (hlds__hlds_statistics__V_197_197 + (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_648_648));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_649_649));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_650_650));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_651_651));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_652_652));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_653_653));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_196_196));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_654_654));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_655_655));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_656_656));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_657_657));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_658_658));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_659_659));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_660_660));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_661_661));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_662_662));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_663_663));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_664_664));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_665_665));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_666_666));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_667_667));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_668_668));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_669_669));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_670_670));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_671_671));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_statistics__ConjType_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__Conjs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1405_1405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  MR_Integer hlds__hlds_statistics__V_1406_1406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  MR_Integer hlds__hlds_statistics__V_1407_1407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  MR_Integer hlds__hlds_statistics__V_1408_1408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  MR_Integer hlds__hlds_statistics__V_1409_1409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  MR_Integer hlds__hlds_statistics__V_1410_1410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  MR_Integer hlds__hlds_statistics__V_1411_1411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  MR_Integer hlds__hlds_statistics__V_1412_1412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  MR_Integer hlds__hlds_statistics__V_1413_1413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  MR_Integer hlds__hlds_statistics__V_1414_1414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  MR_Integer hlds__hlds_statistics__V_1415_1415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  MR_Integer hlds__hlds_statistics__V_1416_1416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  MR_Integer hlds__hlds_statistics__V_1417_1417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  MR_Integer hlds__hlds_statistics__V_1418_1418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  MR_Integer hlds__hlds_statistics__V_1419_1419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  MR_Integer hlds__hlds_statistics__V_1420_1420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  MR_Integer hlds__hlds_statistics__V_1421_1421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  MR_Integer hlds__hlds_statistics__V_1422_1422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  MR_Integer hlds__hlds_statistics__V_1423_1423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  MR_Integer hlds__hlds_statistics__V_1424_1424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  MR_Integer hlds__hlds_statistics__V_1425_1425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  MR_Integer hlds__hlds_statistics__V_1426_1426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  MR_Integer hlds__hlds_statistics__V_1427_1427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1428_1428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_1429_1429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

                  switch (hlds__hlds_statistics__ConjType_74) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160;
                        MR_Integer hlds__hlds_statistics__V_161_161 = (hlds__hlds_statistics__V_1416_1416 + (MR_Integer) 1);

                        {
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 0) = ((MR_Box) (hlds__hlds_statistics__V_1429_1429));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 1) = ((MR_Box) (hlds__hlds_statistics__V_1428_1428));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 2) = ((MR_Box) (hlds__hlds_statistics__V_1427_1427));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 3) = ((MR_Box) (hlds__hlds_statistics__V_1426_1426));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 4) = ((MR_Box) (hlds__hlds_statistics__V_1425_1425));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 5) = ((MR_Box) (hlds__hlds_statistics__V_1424_1424));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 6) = ((MR_Box) (hlds__hlds_statistics__V_1423_1423));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 7) = ((MR_Box) (hlds__hlds_statistics__V_1422_1422));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 8) = ((MR_Box) (hlds__hlds_statistics__V_1421_1421));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 9) = ((MR_Box) (hlds__hlds_statistics__V_1420_1420));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 10) = ((MR_Box) (hlds__hlds_statistics__V_1419_1419));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 11) = ((MR_Box) (hlds__hlds_statistics__V_1418_1418));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 12) = ((MR_Box) (hlds__hlds_statistics__V_1417_1417));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 13) = ((MR_Box) (hlds__hlds_statistics__V_161_161));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 14) = ((MR_Box) (hlds__hlds_statistics__V_1415_1415));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 15) = ((MR_Box) (hlds__hlds_statistics__V_1414_1414));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 16) = ((MR_Box) (hlds__hlds_statistics__V_1413_1413));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 17) = ((MR_Box) (hlds__hlds_statistics__V_1412_1412));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 18) = ((MR_Box) (hlds__hlds_statistics__V_1411_1411));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 19) = ((MR_Box) (hlds__hlds_statistics__V_1410_1410));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 20) = ((MR_Box) (hlds__hlds_statistics__V_1409_1409));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 21) = ((MR_Box) (hlds__hlds_statistics__V_1408_1408));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 22) = ((MR_Box) (hlds__hlds_statistics__V_1407_1407));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 23) = ((MR_Box) (hlds__hlds_statistics__V_1406_1406));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 24) = ((MR_Box) (hlds__hlds_statistics__V_1405_1405));
                        }
                        {
                          hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166;
                        MR_Integer hlds__hlds_statistics__V_167_167 = (hlds__hlds_statistics__V_1418_1418 + (MR_Integer) 1);

                        {
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 0) = ((MR_Box) (hlds__hlds_statistics__V_1429_1429));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 1) = ((MR_Box) (hlds__hlds_statistics__V_1428_1428));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 2) = ((MR_Box) (hlds__hlds_statistics__V_1427_1427));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 3) = ((MR_Box) (hlds__hlds_statistics__V_1426_1426));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 4) = ((MR_Box) (hlds__hlds_statistics__V_1425_1425));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 5) = ((MR_Box) (hlds__hlds_statistics__V_1424_1424));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 6) = ((MR_Box) (hlds__hlds_statistics__V_1423_1423));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 7) = ((MR_Box) (hlds__hlds_statistics__V_1422_1422));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 8) = ((MR_Box) (hlds__hlds_statistics__V_1421_1421));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 9) = ((MR_Box) (hlds__hlds_statistics__V_1420_1420));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 10) = ((MR_Box) (hlds__hlds_statistics__V_1419_1419));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 11) = ((MR_Box) (hlds__hlds_statistics__V_167_167));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 12) = ((MR_Box) (hlds__hlds_statistics__V_1417_1417));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 13) = ((MR_Box) (hlds__hlds_statistics__V_1416_1416));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 14) = ((MR_Box) (hlds__hlds_statistics__V_1415_1415));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 15) = ((MR_Box) (hlds__hlds_statistics__V_1414_1414));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 16) = ((MR_Box) (hlds__hlds_statistics__V_1413_1413));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 17) = ((MR_Box) (hlds__hlds_statistics__V_1412_1412));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 18) = ((MR_Box) (hlds__hlds_statistics__V_1411_1411));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 19) = ((MR_Box) (hlds__hlds_statistics__V_1410_1410));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 20) = ((MR_Box) (hlds__hlds_statistics__V_1409_1409));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 21) = ((MR_Box) (hlds__hlds_statistics__V_1408_1408));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 22) = ((MR_Box) (hlds__hlds_statistics__V_1407_1407));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 23) = ((MR_Box) (hlds__hlds_statistics__V_1406_1406));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 24) = ((MR_Box) (hlds__hlds_statistics__V_1405_1405));
                        }
                        {
                          hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_statistics__Disjs_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154;
                  MR_Integer hlds__hlds_statistics__V_155_155;
                  MR_Integer hlds__hlds_statistics__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  MR_Integer hlds__hlds_statistics__V_991_991 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_statistics__V_992_992 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_993_993 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_994_994 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  MR_Integer hlds__hlds_statistics__V_995_995 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  MR_Integer hlds__hlds_statistics__V_996_996 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  MR_Integer hlds__hlds_statistics__V_997_997 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  MR_Integer hlds__hlds_statistics__V_998_998 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  MR_Integer hlds__hlds_statistics__V_999_999 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  MR_Integer hlds__hlds_statistics__V_1000_1000 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  MR_Integer hlds__hlds_statistics__V_1001_1001 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  MR_Integer hlds__hlds_statistics__V_1002_1002 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  MR_Integer hlds__hlds_statistics__V_1003_1003 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  MR_Integer hlds__hlds_statistics__V_1004_1004 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  MR_Integer hlds__hlds_statistics__V_1005_1005 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  MR_Integer hlds__hlds_statistics__V_1006_1006 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  MR_Integer hlds__hlds_statistics__V_1007_1007 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  MR_Integer hlds__hlds_statistics__V_1008_1008 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  MR_Integer hlds__hlds_statistics__V_1009_1009 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  MR_Integer hlds__hlds_statistics__V_1010_1010 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  MR_Integer hlds__hlds_statistics__V_1011_1011 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  MR_Integer hlds__hlds_statistics__V_1012_1012 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  MR_Integer hlds__hlds_statistics__V_1013_1013 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  MR_Integer hlds__hlds_statistics__V_1014_1014 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                  hlds__hlds_statistics__V_155_155 = (hlds__hlds_statistics__V_156_156 + (MR_Integer) 1);
                  {
                    hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 0) = ((MR_Box) (hlds__hlds_statistics__V_991_991));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 1) = ((MR_Box) (hlds__hlds_statistics__V_992_992));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 2) = ((MR_Box) (hlds__hlds_statistics__V_993_993));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 3) = ((MR_Box) (hlds__hlds_statistics__V_994_994));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 4) = ((MR_Box) (hlds__hlds_statistics__V_995_995));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 5) = ((MR_Box) (hlds__hlds_statistics__V_996_996));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 6) = ((MR_Box) (hlds__hlds_statistics__V_997_997));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 7) = ((MR_Box) (hlds__hlds_statistics__V_998_998));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 8) = ((MR_Box) (hlds__hlds_statistics__V_999_999));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 9) = ((MR_Box) (hlds__hlds_statistics__V_1000_1000));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 10) = ((MR_Box) (hlds__hlds_statistics__V_1001_1001));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 11) = ((MR_Box) (hlds__hlds_statistics__V_1002_1002));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 12) = ((MR_Box) (hlds__hlds_statistics__V_1003_1003));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 13) = ((MR_Box) (hlds__hlds_statistics__V_1004_1004));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 14) = ((MR_Box) (hlds__hlds_statistics__V_1005_1005));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 15) = ((MR_Box) (hlds__hlds_statistics__V_155_155));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 16) = ((MR_Box) (hlds__hlds_statistics__V_1006_1006));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 17) = ((MR_Box) (hlds__hlds_statistics__V_1007_1007));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 18) = ((MR_Box) (hlds__hlds_statistics__V_1008_1008));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 19) = ((MR_Box) (hlds__hlds_statistics__V_1009_1009));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 20) = ((MR_Box) (hlds__hlds_statistics__V_1010_1010));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 21) = ((MR_Box) (hlds__hlds_statistics__V_1011_1011));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 22) = ((MR_Box) (hlds__hlds_statistics__V_1012_1012));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 23) = ((MR_Box) (hlds__hlds_statistics__V_1013_1013));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 24) = ((MR_Box) (hlds__hlds_statistics__V_1014_1014));
                  }
                  {
                    hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(hlds__hlds_statistics__Disjs_76, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__hlds_statistics__SwitchVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__Cases_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147;
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148;
                  MR_Integer hlds__hlds_statistics__V_149_149;
                  MR_Integer hlds__hlds_statistics__V_150_150;
                  MR_Integer hlds__hlds_statistics__V_1040_1040;
                  MR_Integer hlds__hlds_statistics__V_1041_1041;
                  MR_Integer hlds__hlds_statistics__V_1042_1042;
                  MR_Integer hlds__hlds_statistics__V_1043_1043;
                  MR_Integer hlds__hlds_statistics__V_1044_1044;
                  MR_Integer hlds__hlds_statistics__V_1045_1045;
                  MR_Integer hlds__hlds_statistics__V_1046_1046;
                  MR_Integer hlds__hlds_statistics__V_1047_1047;
                  MR_Integer hlds__hlds_statistics__V_1048_1048;
                  MR_Integer hlds__hlds_statistics__V_1049_1049;
                  MR_Integer hlds__hlds_statistics__V_1050_1050;
                  MR_Integer hlds__hlds_statistics__V_1051_1051;
                  MR_Integer hlds__hlds_statistics__V_1052_1052;
                  MR_Integer hlds__hlds_statistics__V_1053_1053;
                  MR_Integer hlds__hlds_statistics__V_1054_1054;
                  MR_Integer hlds__hlds_statistics__V_1055_1055;
                  MR_Integer hlds__hlds_statistics__V_1056_1056;
                  MR_Integer hlds__hlds_statistics__V_1057_1057;
                  MR_Integer hlds__hlds_statistics__V_1058_1058;
                  MR_Integer hlds__hlds_statistics__V_1059_1059;
                  MR_Integer hlds__hlds_statistics__V_1060_1060;
                  MR_Integer hlds__hlds_statistics__V_1061_1061;
                  MR_Integer hlds__hlds_statistics__V_1062_1062;
                  MR_Integer hlds__hlds_statistics__V_1063_1063;
                  MR_Word hlds__hlds_statistics__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));

                  {
                    mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], ((MR_Box) (hlds__hlds_statistics__SwitchVar_77)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147);
                  }
                  hlds__hlds_statistics__V_1040_1040 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  hlds__hlds_statistics__V_1041_1041 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  hlds__hlds_statistics__V_1042_1042 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  hlds__hlds_statistics__V_1043_1043 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  hlds__hlds_statistics__V_1044_1044 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  hlds__hlds_statistics__V_1045_1045 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  hlds__hlds_statistics__V_1046_1046 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  hlds__hlds_statistics__V_1047_1047 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  hlds__hlds_statistics__V_1048_1048 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  hlds__hlds_statistics__V_1049_1049 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  hlds__hlds_statistics__V_1050_1050 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  hlds__hlds_statistics__V_1051_1051 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  hlds__hlds_statistics__V_1052_1052 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  hlds__hlds_statistics__V_1053_1053 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  hlds__hlds_statistics__V_1054_1054 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  hlds__hlds_statistics__V_1055_1055 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  hlds__hlds_statistics__V_1056_1056 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  hlds__hlds_statistics__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  hlds__hlds_statistics__V_1057_1057 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  hlds__hlds_statistics__V_1058_1058 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  hlds__hlds_statistics__V_1059_1059 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  hlds__hlds_statistics__V_1060_1060 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  hlds__hlds_statistics__V_1061_1061 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  hlds__hlds_statistics__V_1062_1062 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  hlds__hlds_statistics__V_1063_1063 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  hlds__hlds_statistics__V_149_149 = (hlds__hlds_statistics__V_150_150 + (MR_Integer) 1);
                  {
                    hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 0) = ((MR_Box) (hlds__hlds_statistics__V_1040_1040));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 1) = ((MR_Box) (hlds__hlds_statistics__V_1041_1041));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 2) = ((MR_Box) (hlds__hlds_statistics__V_1042_1042));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 3) = ((MR_Box) (hlds__hlds_statistics__V_1043_1043));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 4) = ((MR_Box) (hlds__hlds_statistics__V_1044_1044));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 5) = ((MR_Box) (hlds__hlds_statistics__V_1045_1045));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 6) = ((MR_Box) (hlds__hlds_statistics__V_1046_1046));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 7) = ((MR_Box) (hlds__hlds_statistics__V_1047_1047));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 8) = ((MR_Box) (hlds__hlds_statistics__V_1048_1048));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 9) = ((MR_Box) (hlds__hlds_statistics__V_1049_1049));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 10) = ((MR_Box) (hlds__hlds_statistics__V_1050_1050));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 11) = ((MR_Box) (hlds__hlds_statistics__V_1051_1051));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 12) = ((MR_Box) (hlds__hlds_statistics__V_1052_1052));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 13) = ((MR_Box) (hlds__hlds_statistics__V_1053_1053));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 14) = ((MR_Box) (hlds__hlds_statistics__V_1054_1054));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 15) = ((MR_Box) (hlds__hlds_statistics__V_1055_1055));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 16) = ((MR_Box) (hlds__hlds_statistics__V_1056_1056));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 17) = ((MR_Box) (hlds__hlds_statistics__V_149_149));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 18) = ((MR_Box) (hlds__hlds_statistics__V_1057_1057));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 19) = ((MR_Box) (hlds__hlds_statistics__V_1058_1058));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 20) = ((MR_Box) (hlds__hlds_statistics__V_1059_1059));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 21) = ((MR_Box) (hlds__hlds_statistics__V_1060_1060));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 22) = ((MR_Box) (hlds__hlds_statistics__V_1061_1061));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 23) = ((MR_Box) (hlds__hlds_statistics__V_1062_1062));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 24) = ((MR_Box) (hlds__hlds_statistics__V_1063_1063));
                  }
                  {
                    hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(hlds__hlds_statistics__Cases_79, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;
                  MR_Integer hlds__hlds_statistics__V_126_126;
                  MR_Integer hlds__hlds_statistics__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  MR_Word hlds__hlds_statistics__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1187_1187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_statistics__V_1188_1188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_1189_1189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1190_1190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  MR_Integer hlds__hlds_statistics__V_1191_1191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  MR_Integer hlds__hlds_statistics__V_1192_1192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  MR_Integer hlds__hlds_statistics__V_1193_1193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  MR_Integer hlds__hlds_statistics__V_1194_1194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  MR_Integer hlds__hlds_statistics__V_1195_1195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  MR_Integer hlds__hlds_statistics__V_1196_1196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  MR_Integer hlds__hlds_statistics__V_1197_1197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  MR_Integer hlds__hlds_statistics__V_1198_1198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  MR_Integer hlds__hlds_statistics__V_1199_1199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  MR_Integer hlds__hlds_statistics__V_1200_1200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  MR_Integer hlds__hlds_statistics__V_1201_1201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  MR_Integer hlds__hlds_statistics__V_1202_1202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  MR_Integer hlds__hlds_statistics__V_1203_1203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  MR_Integer hlds__hlds_statistics__V_1204_1204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  MR_Integer hlds__hlds_statistics__V_1205_1205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  MR_Integer hlds__hlds_statistics__V_1206_1206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  MR_Integer hlds__hlds_statistics__V_1207_1207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  MR_Integer hlds__hlds_statistics__V_1208_1208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  MR_Integer hlds__hlds_statistics__V_1209_1209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  MR_Integer hlds__hlds_statistics__V_1210_1210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  MR_Word hlds__hlds_statistics__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

                  hlds__hlds_statistics__V_126_126 = (hlds__hlds_statistics__V_127_127 + (MR_Integer) 1);
                  {
                    hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 0) = ((MR_Box) (hlds__hlds_statistics__V_1187_1187));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 1) = ((MR_Box) (hlds__hlds_statistics__V_1188_1188));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 2) = ((MR_Box) (hlds__hlds_statistics__V_1189_1189));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 3) = ((MR_Box) (hlds__hlds_statistics__V_1190_1190));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 4) = ((MR_Box) (hlds__hlds_statistics__V_1191_1191));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 5) = ((MR_Box) (hlds__hlds_statistics__V_1192_1192));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 6) = ((MR_Box) (hlds__hlds_statistics__V_1193_1193));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 7) = ((MR_Box) (hlds__hlds_statistics__V_1194_1194));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 8) = ((MR_Box) (hlds__hlds_statistics__V_1195_1195));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 9) = ((MR_Box) (hlds__hlds_statistics__V_1196_1196));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 10) = ((MR_Box) (hlds__hlds_statistics__V_1197_1197));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 11) = ((MR_Box) (hlds__hlds_statistics__V_1198_1198));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 12) = ((MR_Box) (hlds__hlds_statistics__V_1199_1199));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 13) = ((MR_Box) (hlds__hlds_statistics__V_1200_1200));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 14) = ((MR_Box) (hlds__hlds_statistics__V_1201_1201));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 15) = ((MR_Box) (hlds__hlds_statistics__V_1202_1202));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 16) = ((MR_Box) (hlds__hlds_statistics__V_1203_1203));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 17) = ((MR_Box) (hlds__hlds_statistics__V_1204_1204));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 18) = ((MR_Box) (hlds__hlds_statistics__V_1205_1205));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 19) = ((MR_Box) (hlds__hlds_statistics__V_1206_1206));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 20) = ((MR_Box) (hlds__hlds_statistics__V_1207_1207));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 21) = ((MR_Box) (hlds__hlds_statistics__V_126_126));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 22) = ((MR_Box) (hlds__hlds_statistics__V_1208_1208));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 23) = ((MR_Box) (hlds__hlds_statistics__V_1209_1209));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 24) = ((MR_Box) (hlds__hlds_statistics__V_1210_1210));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_252;
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;

                    hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                    hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__hlds_statistics__CondGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word hlds__hlds_statistics__ThenGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__ElseGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137;
                  MR_Integer hlds__hlds_statistics__V_138_138;
                  MR_Integer hlds__hlds_statistics__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141;
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142;
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;
                  MR_Integer hlds__hlds_statistics__V_1089_1089 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_statistics__V_1090_1090 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_1091_1091 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1092_1092 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  MR_Integer hlds__hlds_statistics__V_1093_1093 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  MR_Integer hlds__hlds_statistics__V_1094_1094 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  MR_Integer hlds__hlds_statistics__V_1095_1095 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  MR_Integer hlds__hlds_statistics__V_1096_1096 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  MR_Integer hlds__hlds_statistics__V_1097_1097 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  MR_Integer hlds__hlds_statistics__V_1098_1098 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  MR_Integer hlds__hlds_statistics__V_1099_1099 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  MR_Integer hlds__hlds_statistics__V_1100_1100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  MR_Integer hlds__hlds_statistics__V_1101_1101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  MR_Integer hlds__hlds_statistics__V_1102_1102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  MR_Integer hlds__hlds_statistics__V_1103_1103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  MR_Integer hlds__hlds_statistics__V_1104_1104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  MR_Integer hlds__hlds_statistics__V_1105_1105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  MR_Integer hlds__hlds_statistics__V_1106_1106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  MR_Integer hlds__hlds_statistics__V_1107_1107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  MR_Integer hlds__hlds_statistics__V_1108_1108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  MR_Integer hlds__hlds_statistics__V_1109_1109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  MR_Integer hlds__hlds_statistics__V_1110_1110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  MR_Integer hlds__hlds_statistics__V_1111_1111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  MR_Integer hlds__hlds_statistics__V_1112_1112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  MR_Word hlds__hlds_statistics__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

                  hlds__hlds_statistics__V_138_138 = (hlds__hlds_statistics__V_139_139 + (MR_Integer) 1);
                  {
                    hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 0) = ((MR_Box) (hlds__hlds_statistics__V_1089_1089));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 1) = ((MR_Box) (hlds__hlds_statistics__V_1090_1090));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 2) = ((MR_Box) (hlds__hlds_statistics__V_1091_1091));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 3) = ((MR_Box) (hlds__hlds_statistics__V_1092_1092));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 4) = ((MR_Box) (hlds__hlds_statistics__V_1093_1093));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 5) = ((MR_Box) (hlds__hlds_statistics__V_1094_1094));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 6) = ((MR_Box) (hlds__hlds_statistics__V_1095_1095));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 7) = ((MR_Box) (hlds__hlds_statistics__V_1096_1096));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 8) = ((MR_Box) (hlds__hlds_statistics__V_1097_1097));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 9) = ((MR_Box) (hlds__hlds_statistics__V_1098_1098));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 10) = ((MR_Box) (hlds__hlds_statistics__V_1099_1099));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 11) = ((MR_Box) (hlds__hlds_statistics__V_1100_1100));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 12) = ((MR_Box) (hlds__hlds_statistics__V_1101_1101));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 13) = ((MR_Box) (hlds__hlds_statistics__V_1102_1102));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 14) = ((MR_Box) (hlds__hlds_statistics__V_1103_1103));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 15) = ((MR_Box) (hlds__hlds_statistics__V_1104_1104));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 16) = ((MR_Box) (hlds__hlds_statistics__V_1105_1105));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 17) = ((MR_Box) (hlds__hlds_statistics__V_1106_1106));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 18) = ((MR_Box) (hlds__hlds_statistics__V_1107_1107));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 19) = ((MR_Box) (hlds__hlds_statistics__V_138_138));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 20) = ((MR_Box) (hlds__hlds_statistics__V_1108_1108));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 21) = ((MR_Box) (hlds__hlds_statistics__V_1109_1109));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 22) = ((MR_Box) (hlds__hlds_statistics__V_1110_1110));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 23) = ((MR_Box) (hlds__hlds_statistics__V_1111_1111));
                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 24) = ((MR_Box) (hlds__hlds_statistics__V_1112_1112));
                  }
                  {
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__CondGoal_81, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, &hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142);
                  }
                  {
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__ThenGoal_82, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143, hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142, &hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__ElseGoal_83;
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;

                    hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                    hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
                    hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__hlds_statistics__ShortHand_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_1430_1430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  MR_Integer hlds__hlds_statistics__V_1431_1431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  MR_Integer hlds__hlds_statistics__V_1432_1432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  MR_Integer hlds__hlds_statistics__V_1433_1433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  MR_Integer hlds__hlds_statistics__V_1434_1434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  MR_Integer hlds__hlds_statistics__V_1435_1435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  MR_Integer hlds__hlds_statistics__V_1436_1436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  MR_Integer hlds__hlds_statistics__V_1437_1437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  MR_Integer hlds__hlds_statistics__V_1438_1438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  MR_Integer hlds__hlds_statistics__V_1439_1439 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  MR_Integer hlds__hlds_statistics__V_1440_1440 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  MR_Integer hlds__hlds_statistics__V_1441_1441 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  MR_Integer hlds__hlds_statistics__V_1442_1442 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  MR_Integer hlds__hlds_statistics__V_1443_1443 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  MR_Integer hlds__hlds_statistics__V_1444_1444 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  MR_Integer hlds__hlds_statistics__V_1445_1445 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  MR_Integer hlds__hlds_statistics__V_1446_1446 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  MR_Integer hlds__hlds_statistics__V_1447_1447 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  MR_Integer hlds__hlds_statistics__V_1448_1448 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  MR_Integer hlds__hlds_statistics__V_1449_1449 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  MR_Integer hlds__hlds_statistics__V_1450_1450 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  MR_Integer hlds__hlds_statistics__V_1451_1451 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  MR_Integer hlds__hlds_statistics__V_1452_1452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__V_1453_1453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  MR_Integer hlds__hlds_statistics__V_1454_1454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

                  switch (MR_tag((MR_Word) hlds__hlds_statistics__ShortHand_86)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__hlds_statistics__GoalA_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                        MR_Word hlds__hlds_statistics__GoalB_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117;
                        MR_Integer hlds__hlds_statistics__V_118_118 = (hlds__hlds_statistics__V_1432_1432 + (MR_Integer) 1);
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

                        {
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 22) = ((MR_Box) (hlds__hlds_statistics__V_118_118));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 23) = ((MR_Box) (hlds__hlds_statistics__V_1431_1431));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 24) = ((MR_Box) (hlds__hlds_statistics__V_1430_1430));
                        }
                        {
                          hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__GoalA_87, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121, hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, &hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__GoalB_88;
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

                          hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                          hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
                          hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_statistics__MainGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 4)));
                        MR_Word hlds__hlds_statistics__OrElseGoals_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 5)));
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108;
                        MR_Integer hlds__hlds_statistics__V_109_109 = (hlds__hlds_statistics__V_1431_1431 + (MR_Integer) 1);
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112;
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113;
                        MR_Word hlds__hlds_statistics__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                        MR_Word hlds__hlds_statistics__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
                        MR_Word hlds__hlds_statistics__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
                        MR_Word hlds__hlds_statistics__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 3)));
                        MR_Word hlds__hlds_statistics__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 6)));
                        MR_Box hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99;
                        MR_Box hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101;

                        {
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 22) = ((MR_Box) (hlds__hlds_statistics__V_1432_1432));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 23) = ((MR_Box) (hlds__hlds_statistics__V_109_109));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 24) = ((MR_Box) (hlds__hlds_statistics__V_1430_1430));
                        }
                        {
                          hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__MainGoal_93, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112, hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, &hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113);
                        }
                        {
                          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_statistics_scalar_common_2[1], (MR_Word) &hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0, (MR_Word) &hlds__hlds_statistics_scalar_common_1[4], hlds__hlds_statistics__OrElseGoals_94, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112)), &hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113)), &hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
                        }
                        *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = ((MR_Word) hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = ((MR_Word) hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;
                        MR_Integer hlds__hlds_statistics__V_103_103 = (hlds__hlds_statistics__V_1430_1430 + (MR_Integer) 1);
                        MR_Word hlds__hlds_statistics__SubGoal_253 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
                        MR_Word hlds__hlds_statistics__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                        MR_Word hlds__hlds_statistics__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));

                        {
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 22) = ((MR_Box) (hlds__hlds_statistics__V_1432_1432));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 23) = ((MR_Box) (hlds__hlds_statistics__V_1431_1431));
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 24) = ((MR_Box) (hlds__hlds_statistics__V_103_103));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_253;
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;

                          hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
                          hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_String hlds__hlds_statistics__Msg_9,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;

    {
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__ModuleInfo_10, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;

    {
      hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
  MR_Word hlds__hlds_statistics__OutStream_7,
  MR_String hlds__hlds_statistics__Msg_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_9,
  MR_Word hlds__hlds_statistics__HeadVar__4_4)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Word hlds__hlds_statistics__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_statistics__PredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__4_4, (MR_Integer) 1)));

    {
      hlds__hlds_statistics__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_statistics__PredInfo_11);
    }
    if (!(hlds__hlds_statistics__succeeded))
      {
        hlds__hlds_statistics__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_statistics__PredInfo_11);
      }
    if (hlds__hlds_statistics__succeeded)
      {
      }
    else
      {
        MR_Word hlds__hlds_statistics__ProcTable_13;
        MR_Word hlds__hlds_statistics__Procs_14;
        MR_Word hlds__hlds_statistics__V_17_17;
        MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_statistics__PredInfo_11, &hlds__hlds_statistics__ProcTable_13);
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_statistics__ProcTable_13, &hlds__hlds_statistics__Procs_14);
        }
        {
          hlds__hlds_statistics__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_7));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_8));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_9));
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 6) = ((MR_Box) (hlds__hlds_statistics__PredId_10));
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__V_17_17, hlds__hlds_statistics__Procs_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;

    {
      hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(
  MR_Word hlds__hlds_statistics__OutStream_6,
  MR_String hlds__hlds_statistics__Msg_7,
  MR_Word hlds__hlds_statistics__ModuleInfo_8)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;
    MR_Word hlds__hlds_statistics__ModuleSymName_10;
    MR_String hlds__hlds_statistics__ModuleName_11;
    MR_Word hlds__hlds_statistics__PredTable_12;
    MR_Word hlds__hlds_statistics__Preds_13;
    MR_Word hlds__hlds_statistics__V_21_21;
    MR_String hlds__hlds_statistics__V_33_33;
    MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__ModuleSymName_10);
    }
    {
      hlds__hlds_statistics__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_statistics__ModuleSymName_10);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "MODULE ");
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_4[0], hlds__hlds_statistics__ModuleName_11, &hlds__hlds_statistics__V_33_33);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, hlds__hlds_statistics__V_33_33);
    }
    {
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "\n");
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__PredTable_12);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_statistics__PredTable_12, &hlds__hlds_statistics__Preds_13);
    }
    {
      hlds__hlds_statistics__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_8));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__V_21_21, hlds__hlds_statistics__Preds_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

void mercury__hlds__hlds_statistics__init(void)
{
}

void mercury__hlds__hlds_statistics__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0);
}

void mercury__hlds__hlds_statistics__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_statistics. */
