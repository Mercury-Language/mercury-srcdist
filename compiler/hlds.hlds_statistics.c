/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_String hlds__hlds_statistics__Msg_9,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

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
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word hlds__hlds_statistics__OutStream_10,
  MR_String hlds__hlds_statistics__ComponentName_15,
  MR_Integer hlds__hlds_statistics__ComponentCount_16);

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

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box hlds__hlds_statistics__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_1[5][3];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_2[2][2];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][25];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][10];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][5];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][8];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][1];




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
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][9] = {
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][10] = {
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0,
  hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
      MR_Integer hlds__hlds_statistics__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__ArgX11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__ArgY11_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__ArgX12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__ArgY12_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__ArgX13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__ArgY13_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__ArgX14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__ArgY14_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__ArgX15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__ArgY15_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__ArgX16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__ArgY16_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__ArgX17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__ArgY17_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__ArgX18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__ArgY18_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__ArgX19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__ArgY19_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__ArgX20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__ArgY20_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__ArgX21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__ArgY21_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__ArgX22_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__ArgY22_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__ArgX23_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__ArgY23_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__ArgX24_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__ArgY24_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__ArgX25_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));
      MR_Integer hlds__hlds_statistics__ArgY25_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 24)));
      MR_Word hlds__hlds_statistics__Var_54;

      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_54, hlds__hlds_statistics__ArgX1_4, hlds__hlds_statistics__ArgY1_5);
      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_54 == (MR_Integer) 0);
      hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
      if (hlds__hlds_statistics__succeeded)
        *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_54;
      else
      {
        MR_Word hlds__hlds_statistics__Var_55;

        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_55, hlds__hlds_statistics__ArgX2_6, hlds__hlds_statistics__ArgY2_7);
        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_55 == (MR_Integer) 0);
        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
        if (hlds__hlds_statistics__succeeded)
          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_55;
        else
        {
          MR_Word hlds__hlds_statistics__Var_56;

          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_56, hlds__hlds_statistics__ArgX3_8, hlds__hlds_statistics__ArgY3_9);
          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_56 == (MR_Integer) 0);
          hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
          if (hlds__hlds_statistics__succeeded)
            *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_56;
          else
          {
            MR_Word hlds__hlds_statistics__Var_57;

            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_57, hlds__hlds_statistics__ArgX4_10, hlds__hlds_statistics__ArgY4_11);
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_57 == (MR_Integer) 0);
            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
            if (hlds__hlds_statistics__succeeded)
              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_57;
            else
            {
              MR_Word hlds__hlds_statistics__Var_58;

              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_58, hlds__hlds_statistics__ArgX5_12, hlds__hlds_statistics__ArgY5_13);
              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_58 == (MR_Integer) 0);
              hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
              if (hlds__hlds_statistics__succeeded)
                *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_58;
              else
              {
                MR_Word hlds__hlds_statistics__Var_59;

                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_59, hlds__hlds_statistics__ArgX6_14, hlds__hlds_statistics__ArgY6_15);
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_59 == (MR_Integer) 0);
                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                if (hlds__hlds_statistics__succeeded)
                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_59;
                else
                {
                  MR_Word hlds__hlds_statistics__Var_60;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_60, hlds__hlds_statistics__ArgX7_16, hlds__hlds_statistics__ArgY7_17);
                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_60 == (MR_Integer) 0);
                  hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                  if (hlds__hlds_statistics__succeeded)
                    *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_60;
                  else
                  {
                    MR_Word hlds__hlds_statistics__Var_61;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_61, hlds__hlds_statistics__ArgX8_18, hlds__hlds_statistics__ArgY8_19);
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_61 == (MR_Integer) 0);
                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                    if (hlds__hlds_statistics__succeeded)
                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_61;
                    else
                    {
                      MR_Word hlds__hlds_statistics__Var_62;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_62, hlds__hlds_statistics__ArgX9_20, hlds__hlds_statistics__ArgY9_21);
                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_62 == (MR_Integer) 0);
                      hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                      if (hlds__hlds_statistics__succeeded)
                        *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_62;
                      else
                      {
                        MR_Word hlds__hlds_statistics__Var_63;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_63, hlds__hlds_statistics__ArgX10_22, hlds__hlds_statistics__ArgY10_23);
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_63 == (MR_Integer) 0);
                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                        if (hlds__hlds_statistics__succeeded)
                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_63;
                        else
                        {
                          MR_Word hlds__hlds_statistics__Var_64;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_64, hlds__hlds_statistics__ArgX11_24, hlds__hlds_statistics__ArgY11_25);
                          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_64 == (MR_Integer) 0);
                          hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                          if (hlds__hlds_statistics__succeeded)
                            *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_64;
                          else
                          {
                            MR_Word hlds__hlds_statistics__Var_65;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_65, hlds__hlds_statistics__ArgX12_26, hlds__hlds_statistics__ArgY12_27);
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_65 == (MR_Integer) 0);
                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                            if (hlds__hlds_statistics__succeeded)
                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_65;
                            else
                            {
                              MR_Word hlds__hlds_statistics__Var_66;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_66, hlds__hlds_statistics__ArgX13_28, hlds__hlds_statistics__ArgY13_29);
                              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_66 == (MR_Integer) 0);
                              hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                              if (hlds__hlds_statistics__succeeded)
                                *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_66;
                              else
                              {
                                MR_Word hlds__hlds_statistics__Var_67;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_67, hlds__hlds_statistics__ArgX14_30, hlds__hlds_statistics__ArgY14_31);
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_67 == (MR_Integer) 0);
                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                if (hlds__hlds_statistics__succeeded)
                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_67;
                                else
                                {
                                  MR_Word hlds__hlds_statistics__Var_68;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_68, hlds__hlds_statistics__ArgX15_32, hlds__hlds_statistics__ArgY15_33);
                                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_68 == (MR_Integer) 0);
                                  hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                  if (hlds__hlds_statistics__succeeded)
                                    *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_68;
                                  else
                                  {
                                    MR_Word hlds__hlds_statistics__Var_69;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_69, hlds__hlds_statistics__ArgX16_34, hlds__hlds_statistics__ArgY16_35);
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_69 == (MR_Integer) 0);
                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                    if (hlds__hlds_statistics__succeeded)
                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_69;
                                    else
                                    {
                                      MR_Word hlds__hlds_statistics__Var_70;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_70, hlds__hlds_statistics__ArgX17_36, hlds__hlds_statistics__ArgY17_37);
                                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_70 == (MR_Integer) 0);
                                      hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                      if (hlds__hlds_statistics__succeeded)
                                        *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_70;
                                      else
                                      {
                                        MR_Word hlds__hlds_statistics__Var_71;

                                        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_71, hlds__hlds_statistics__ArgX18_38, hlds__hlds_statistics__ArgY18_39);
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_71 == (MR_Integer) 0);
                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                        if (hlds__hlds_statistics__succeeded)
                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_71;
                                        else
                                        {
                                          MR_Word hlds__hlds_statistics__Var_72;

                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_72, hlds__hlds_statistics__ArgX19_40, hlds__hlds_statistics__ArgY19_41);
                                          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_72 == (MR_Integer) 0);
                                          hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                          if (hlds__hlds_statistics__succeeded)
                                            *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_72;
                                          else
                                          {
                                            MR_Word hlds__hlds_statistics__Var_73;

                                            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_73, hlds__hlds_statistics__ArgX20_42, hlds__hlds_statistics__ArgY20_43);
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_73 == (MR_Integer) 0);
                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                            if (hlds__hlds_statistics__succeeded)
                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_73;
                                            else
                                            {
                                              MR_Word hlds__hlds_statistics__Var_74;

                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_74, hlds__hlds_statistics__ArgX21_44, hlds__hlds_statistics__ArgY21_45);
                                              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_74 == (MR_Integer) 0);
                                              hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                              if (hlds__hlds_statistics__succeeded)
                                                *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_74;
                                              else
                                              {
                                                MR_Word hlds__hlds_statistics__Var_75;

                                                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_75, hlds__hlds_statistics__ArgX22_46, hlds__hlds_statistics__ArgY22_47);
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_75 == (MR_Integer) 0);
                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                if (hlds__hlds_statistics__succeeded)
                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_75;
                                                else
                                                {
                                                  MR_Word hlds__hlds_statistics__Var_76;

                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_76, hlds__hlds_statistics__ArgX23_48, hlds__hlds_statistics__ArgY23_49);
                                                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_76 == (MR_Integer) 0);
                                                  hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                  if (hlds__hlds_statistics__succeeded)
                                                    *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_76;
                                                  else
                                                  {
                                                    MR_Word hlds__hlds_statistics__Var_77;

                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__Var_77, hlds__hlds_statistics__ArgX24_50, hlds__hlds_statistics__ArgY24_51);
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__Var_77 == (MR_Integer) 0);
                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
                                                    if (hlds__hlds_statistics__succeeded)
                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__Var_77;
                                                    else
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_statistics__HeadVar__1_1, hlds__hlds_statistics__ArgX25_52, hlds__hlds_statistics__ArgY25_53);
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
      MR_Integer hlds__hlds_statistics__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__ArgX11_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__ArgY11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__ArgX12_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__ArgY12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__ArgX13_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__ArgY13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__ArgX14_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__ArgY14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__ArgX15_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__ArgY15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__ArgX16_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__ArgY16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__ArgX17_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__ArgY17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__ArgX18_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__ArgY18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__ArgX19_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__ArgY19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__ArgX20_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__ArgY20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__ArgX21_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__ArgY21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__ArgX22_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__ArgY22_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__ArgX23_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__ArgY23_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__ArgX24_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__ArgY24_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__ArgX25_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 24)));
      MR_Integer hlds__hlds_statistics__ArgY25_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));

      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX1_3 == hlds__hlds_statistics__ArgY1_4);
      if (hlds__hlds_statistics__succeeded)
      {
        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX2_5 == hlds__hlds_statistics__ArgY2_6);
        if (hlds__hlds_statistics__succeeded)
        {
          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX3_7 == hlds__hlds_statistics__ArgY3_8);
          if (hlds__hlds_statistics__succeeded)
          {
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX4_9 == hlds__hlds_statistics__ArgY4_10);
            if (hlds__hlds_statistics__succeeded)
            {
              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX5_11 == hlds__hlds_statistics__ArgY5_12);
              if (hlds__hlds_statistics__succeeded)
              {
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX6_13 == hlds__hlds_statistics__ArgY6_14);
                if (hlds__hlds_statistics__succeeded)
                {
                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX7_15 == hlds__hlds_statistics__ArgY7_16);
                  if (hlds__hlds_statistics__succeeded)
                  {
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX8_17 == hlds__hlds_statistics__ArgY8_18);
                    if (hlds__hlds_statistics__succeeded)
                    {
                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX9_19 == hlds__hlds_statistics__ArgY9_20);
                      if (hlds__hlds_statistics__succeeded)
                      {
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX10_21 == hlds__hlds_statistics__ArgY10_22);
                        if (hlds__hlds_statistics__succeeded)
                        {
                          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX11_23 == hlds__hlds_statistics__ArgY11_24);
                          if (hlds__hlds_statistics__succeeded)
                          {
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX12_25 == hlds__hlds_statistics__ArgY12_26);
                            if (hlds__hlds_statistics__succeeded)
                            {
                              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX13_27 == hlds__hlds_statistics__ArgY13_28);
                              if (hlds__hlds_statistics__succeeded)
                              {
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX14_29 == hlds__hlds_statistics__ArgY14_30);
                                if (hlds__hlds_statistics__succeeded)
                                {
                                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX15_31 == hlds__hlds_statistics__ArgY15_32);
                                  if (hlds__hlds_statistics__succeeded)
                                  {
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX16_33 == hlds__hlds_statistics__ArgY16_34);
                                    if (hlds__hlds_statistics__succeeded)
                                    {
                                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX17_35 == hlds__hlds_statistics__ArgY17_36);
                                      if (hlds__hlds_statistics__succeeded)
                                      {
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX18_37 == hlds__hlds_statistics__ArgY18_38);
                                        if (hlds__hlds_statistics__succeeded)
                                        {
                                          hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX19_39 == hlds__hlds_statistics__ArgY19_40);
                                          if (hlds__hlds_statistics__succeeded)
                                          {
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX20_41 == hlds__hlds_statistics__ArgY20_42);
                                            if (hlds__hlds_statistics__succeeded)
                                            {
                                              hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX21_43 == hlds__hlds_statistics__ArgY21_44);
                                              if (hlds__hlds_statistics__succeeded)
                                              {
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX22_45 == hlds__hlds_statistics__ArgY22_46);
                                                if (hlds__hlds_statistics__succeeded)
                                                {
                                                  hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX23_47 == hlds__hlds_statistics__ArgY23_48);
                                                  if (hlds__hlds_statistics__succeeded)
                                                  {
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX24_49 == hlds__hlds_statistics__ArgY24_50);
                                                    if (hlds__hlds_statistics__succeeded)
                                                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ArgX25_51 == hlds__hlds_statistics__ArgY25_52);
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
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_String hlds__hlds_statistics__Msg_9,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
{
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__ModuleInfo_10, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__HeadVar__5_5);
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__hlds_statistics__OutStream_8,
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
  MR_Word hlds__hlds_statistics__PredId_11,
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
{
  {
    MR_Integer hlds__hlds_statistics__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_statistics__ProcInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_statistics__NamePieces_15;
    MR_String hlds__hlds_statistics__Name_16;
    MR_Word hlds__hlds_statistics__Goal_17;
    MR_Word hlds__hlds_statistics__UsedVars0_18;
    MR_Word hlds__hlds_statistics__UsedVars_20;
    MR_Word hlds__hlds_statistics__Stats_21;
    MR_Word hlds__hlds_statistics__VarSet_22;
    MR_Word hlds__hlds_statistics__Var_26;

    {
      hlds__hlds_statistics__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_26, 0) = ((MR_Box) (hlds__hlds_statistics__PredId_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_26, 1) = ((MR_Box) (hlds__hlds_statistics__ProcId_12));
    }
    hlds__hlds_statistics__NamePieces_15 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(hlds__hlds_statistics__ModuleInfo_10, (MR_Integer) 1, hlds__hlds_statistics__Var_26);
    hlds__hlds_statistics__Name_16 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__hlds_statistics__NamePieces_15);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__Goal_17);
    hlds__hlds_statistics__UsedVars0_18 = mercury__set_tree234__init_0_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0]);
    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_17, hlds__hlds_statistics__UsedVars0_18, &hlds__hlds_statistics__UsedVars_20, (MR_Word) &hlds__hlds_statistics_scalar_common_3[0], &hlds__hlds_statistics__Stats_21);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__VarSet_22);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__Name_16, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__ProcId_12, hlds__hlds_statistics__Stats_21, hlds__hlds_statistics__UsedVars_20, hlds__hlds_statistics__VarSet_22);
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
    MR_Word hlds__hlds_statistics__TypeCtorInfo_45_45;
    MR_Integer hlds__hlds_statistics__PredIdInt_20;
    MR_Integer hlds__hlds_statistics__ProcIdInt_21;
    MR_Word hlds__hlds_statistics__Var_22;
    MR_Integer hlds__hlds_statistics__VarInt_24;
    MR_Integer hlds__hlds_statistics__NumUsedVars_25;
    MR_String hlds__hlds_statistics__Var_50;
    MR_Word hlds__hlds_statistics__Var_56;
    MR_String hlds__hlds_statistics__Var_60;
    MR_String hlds__hlds_statistics__Var_74;
    MR_String hlds__hlds_statistics__Var_84;
    MR_Word hlds__hlds_statistics___UpdatedVarSet_23;

    hlds__hlds_statistics__PredIdInt_20 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_statistics__PredId_14);
    hlds__hlds_statistics__ProcIdInt_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__hlds_statistics__ProcId_15);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "PROC ");
    hlds__hlds_statistics__Var_56 = (MR_Word) &hlds__hlds_statistics_scalar_common_8[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__Var_56, hlds__hlds_statistics__PredIdInt_20, &hlds__hlds_statistics__Var_50);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Var_50);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__Var_56, hlds__hlds_statistics__ProcIdInt_21, &hlds__hlds_statistics__Var_60);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Var_60);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Name_13);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Stats_16);
    hlds__hlds_statistics__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__new_var_3_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, &hlds__hlds_statistics__Var_22, hlds__hlds_statistics__VarSet_18, &hlds__hlds_statistics___UpdatedVarSet_23);
    mercury__term__var_to_int_2_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, hlds__hlds_statistics__Var_22, &hlds__hlds_statistics__VarInt_24);
    hlds__hlds_statistics__NumUsedVars_25 = mercury__set_tree234__count_1_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__UsedVars_17);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "VARS ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__Var_56, hlds__hlds_statistics__VarInt_24, &hlds__hlds_statistics__Var_74);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Var_74);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__Var_56, hlds__hlds_statistics__NumUsedVars_25, &hlds__hlds_statistics__Var_84);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Var_84);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word hlds__hlds_statistics__OutStream_9,
  MR_Word hlds__hlds_statistics__Stats_14)
{
  {
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
    MR_Integer hlds__hlds_statistics__Var_44;
    MR_Integer hlds__hlds_statistics__Var_45;
    MR_Integer hlds__hlds_statistics__Var_46;
    MR_Integer hlds__hlds_statistics__Var_47;
    MR_Integer hlds__hlds_statistics__Var_48;
    MR_Integer hlds__hlds_statistics__Var_49;
    MR_Integer hlds__hlds_statistics__Var_50;
    MR_Integer hlds__hlds_statistics__Var_51;
    MR_Integer hlds__hlds_statistics__Var_52;
    MR_Integer hlds__hlds_statistics__Var_53;
    MR_Integer hlds__hlds_statistics__Var_54;
    MR_Integer hlds__hlds_statistics__Var_55;
    MR_Integer hlds__hlds_statistics__Var_56;
    MR_Integer hlds__hlds_statistics__Var_57;
    MR_Integer hlds__hlds_statistics__Var_58;
    MR_Integer hlds__hlds_statistics__Var_59;
    MR_Integer hlds__hlds_statistics__Var_60;
    MR_Integer hlds__hlds_statistics__Var_61;
    MR_Integer hlds__hlds_statistics__Var_62 = (hlds__hlds_statistics__UnifyConstructs_16 + hlds__hlds_statistics__UnifyDeconstructs_17);

    hlds__hlds_statistics__Var_61 = (hlds__hlds_statistics__Var_62 + hlds__hlds_statistics__UnifyAssigns_18);
    hlds__hlds_statistics__Var_60 = (hlds__hlds_statistics__Var_61 + hlds__hlds_statistics__UnifyTests_19);
    hlds__hlds_statistics__Var_59 = (hlds__hlds_statistics__Var_60 + hlds__hlds_statistics__UnifyComplicateds_20);
    hlds__hlds_statistics__Var_58 = (hlds__hlds_statistics__Var_59 + hlds__hlds_statistics__PlainCalls_21);
    hlds__hlds_statistics__Var_57 = (hlds__hlds_statistics__Var_58 + hlds__hlds_statistics__ForeignCalls_22);
    hlds__hlds_statistics__Var_56 = (hlds__hlds_statistics__Var_57 + hlds__hlds_statistics__HOCalls_23);
    hlds__hlds_statistics__Var_55 = (hlds__hlds_statistics__Var_56 + hlds__hlds_statistics__MethodCalls_24);
    hlds__hlds_statistics__Var_54 = (hlds__hlds_statistics__Var_55 + hlds__hlds_statistics__EventCalls_25);
    hlds__hlds_statistics__Var_53 = (hlds__hlds_statistics__Var_54 + hlds__hlds_statistics__Casts_26);
    hlds__hlds_statistics__Var_52 = (hlds__hlds_statistics__Var_53 + hlds__hlds_statistics__PlainConjs_27);
    hlds__hlds_statistics__Var_51 = (hlds__hlds_statistics__Var_52 + hlds__hlds_statistics__ParallelConjs_29);
    hlds__hlds_statistics__Var_50 = (hlds__hlds_statistics__Var_51 + hlds__hlds_statistics__Disjs_31);
    hlds__hlds_statistics__Var_49 = (hlds__hlds_statistics__Var_50 + hlds__hlds_statistics__Switches_33);
    hlds__hlds_statistics__Var_48 = (hlds__hlds_statistics__Var_49 + hlds__hlds_statistics__IfThenElses_35);
    hlds__hlds_statistics__Var_47 = (hlds__hlds_statistics__Var_48 + hlds__hlds_statistics__Negations_36);
    hlds__hlds_statistics__Var_46 = (hlds__hlds_statistics__Var_47 + hlds__hlds_statistics__Scopes_37);
    hlds__hlds_statistics__Var_45 = (hlds__hlds_statistics__Var_46 + hlds__hlds_statistics__BiImplications_38);
    hlds__hlds_statistics__Var_44 = (hlds__hlds_statistics__Var_45 + hlds__hlds_statistics__AtomicGoals_39);
    hlds__hlds_statistics__Total_41 = (hlds__hlds_statistics__Var_44 + hlds__hlds_statistics__TryGoals_40);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_contructs", hlds__hlds_statistics__UnifyConstructs_16);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_decontructs", hlds__hlds_statistics__UnifyDeconstructs_17);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_assigns", hlds__hlds_statistics__UnifyAssigns_18);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_tests", hlds__hlds_statistics__UnifyTests_19);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_complicateds", hlds__hlds_statistics__UnifyComplicateds_20);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_calls", hlds__hlds_statistics__PlainCalls_21);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "foreign_calls", hlds__hlds_statistics__ForeignCalls_22);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "ho_calls", hlds__hlds_statistics__HOCalls_23);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "method_calls", hlds__hlds_statistics__MethodCalls_24);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "event_calls", hlds__hlds_statistics__EventCalls_25);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "casts", hlds__hlds_statistics__Casts_26);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjs", hlds__hlds_statistics__PlainConjs_27);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjuncts", hlds__hlds_statistics__PlainConjuncts_28);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjs", hlds__hlds_statistics__ParallelConjs_29);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjuncts", hlds__hlds_statistics__ParallelConjuncts_30);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjs", hlds__hlds_statistics__Disjs_31);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjunctions", hlds__hlds_statistics__Disjuncts_32);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switches", hlds__hlds_statistics__Switches_33);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switch_arms", hlds__hlds_statistics__SwitchArms_34);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "if_then_elses", hlds__hlds_statistics__IfThenElses_35);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "negations", hlds__hlds_statistics__Negations_36);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "scopes", hlds__hlds_statistics__Scopes_37);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "bi_implications", hlds__hlds_statistics__BiImplications_38);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "atomic_goals", hlds__hlds_statistics__AtomicGoals_39);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "try_goals", hlds__hlds_statistics__TryGoals_40);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "total_size", hlds__hlds_statistics__Total_41);
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
      MR_String hlds__hlds_statistics__Var_34;

      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "GOAL ");
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__ComponentName_15);
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) ": ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_8[0], hlds__hlds_statistics__ComponentCount_16, &hlds__hlds_statistics__Var_34);
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__Var_34);
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "\n");
    }
    else
    {
    }
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
      MR_Integer hlds__hlds_statistics__Var_24;
      MR_Integer hlds__hlds_statistics__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;
      MR_Integer hlds__hlds_statistics__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));
      MR_Word hlds__hlds_statistics__Var_16;
      MR_Word hlds__hlds_statistics__Var_17;

      hlds__hlds_statistics__Var_24 = (hlds__hlds_statistics__Var_25 + (MR_Integer) 1);
      {
        hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 0) = ((MR_Box) (hlds__hlds_statistics__Var_31));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 1) = ((MR_Box) (hlds__hlds_statistics__Var_32));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 2) = ((MR_Box) (hlds__hlds_statistics__Var_33));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 3) = ((MR_Box) (hlds__hlds_statistics__Var_34));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 4) = ((MR_Box) (hlds__hlds_statistics__Var_35));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 5) = ((MR_Box) (hlds__hlds_statistics__Var_36));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 6) = ((MR_Box) (hlds__hlds_statistics__Var_37));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 7) = ((MR_Box) (hlds__hlds_statistics__Var_38));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 8) = ((MR_Box) (hlds__hlds_statistics__Var_39));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 9) = ((MR_Box) (hlds__hlds_statistics__Var_40));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 10) = ((MR_Box) (hlds__hlds_statistics__Var_41));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 11) = ((MR_Box) (hlds__hlds_statistics__Var_42));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 12) = ((MR_Box) (hlds__hlds_statistics__Var_43));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 13) = ((MR_Box) (hlds__hlds_statistics__Var_44));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 14) = ((MR_Box) (hlds__hlds_statistics__Var_45));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 15) = ((MR_Box) (hlds__hlds_statistics__Var_46));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 16) = ((MR_Box) (hlds__hlds_statistics__Var_47));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 17) = ((MR_Box) (hlds__hlds_statistics__Var_48));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 18) = ((MR_Box) (hlds__hlds_statistics__Var_24));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 19) = ((MR_Box) (hlds__hlds_statistics__Var_49));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 20) = ((MR_Box) (hlds__hlds_statistics__Var_50));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 21) = ((MR_Box) (hlds__hlds_statistics__Var_51));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 22) = ((MR_Box) (hlds__hlds_statistics__Var_52));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 23) = ((MR_Box) (hlds__hlds_statistics__Var_53));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 24) = ((MR_Box) (hlds__hlds_statistics__Var_54));
      }
      hlds__hlds_statistics__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 0)));
      hlds__hlds_statistics__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 1)));
      hlds__hlds_statistics__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 2)));
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27, hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, &hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__hlds_statistics__next_value_of_HeadVar__1_1 = hlds__hlds_statistics__Cases_13;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;

        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4;
        hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2;
        hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__next_value_of_HeadVar__1_1;
      }
      continue;
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
      MR_Integer hlds__hlds_statistics__Var_21;
      MR_Integer hlds__hlds_statistics__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
      MR_Integer hlds__hlds_statistics__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

      hlds__hlds_statistics__Var_21 = (hlds__hlds_statistics__Var_22 + (MR_Integer) 1);
      {
        hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__Var_28));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__Var_29));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__Var_30));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__Var_31));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__Var_32));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__Var_33));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__Var_34));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__Var_35));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__Var_36));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__Var_37));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__Var_38));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__Var_39));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__Var_40));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__Var_41));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__Var_42));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__Var_43));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__Var_21));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__Var_44));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__Var_45));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__Var_46));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__Var_47));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__Var_48));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__Var_49));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__Var_50));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__Var_51));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__hlds_statistics__next_value_of_HeadVar__1_1 = hlds__hlds_statistics__Goals_13;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4;
        hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2;
        hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__next_value_of_HeadVar__1_1;
      }
      continue;
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
      MR_Integer hlds__hlds_statistics__Var_21;
      MR_Integer hlds__hlds_statistics__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
      MR_Integer hlds__hlds_statistics__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
      MR_Integer hlds__hlds_statistics__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

      hlds__hlds_statistics__Var_21 = (hlds__hlds_statistics__Var_22 + (MR_Integer) 1);
      {
        hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__Var_28));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__Var_29));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__Var_30));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__Var_31));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__Var_32));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__Var_33));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__Var_34));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__Var_35));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__Var_36));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__Var_37));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__Var_38));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__Var_39));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__Var_40));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__Var_41));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__Var_21));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__Var_42));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__Var_43));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__Var_44));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__Var_45));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__Var_46));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__Var_47));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__Var_48));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__Var_49));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__Var_50));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__Var_51));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__hlds_statistics__next_value_of_HeadVar__1_1 = hlds__hlds_statistics__Goals_13;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4;
        hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2;
        hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__next_value_of_HeadVar__1_1;
      }
      continue;
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
      MR_Integer hlds__hlds_statistics__Var_21;
      MR_Integer hlds__hlds_statistics__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
      MR_Integer hlds__hlds_statistics__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
      MR_Integer hlds__hlds_statistics__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
      MR_Integer hlds__hlds_statistics__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
      MR_Integer hlds__hlds_statistics__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
      MR_Integer hlds__hlds_statistics__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
      MR_Integer hlds__hlds_statistics__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
      MR_Integer hlds__hlds_statistics__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
      MR_Integer hlds__hlds_statistics__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
      MR_Integer hlds__hlds_statistics__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
      MR_Integer hlds__hlds_statistics__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
      MR_Integer hlds__hlds_statistics__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
      MR_Integer hlds__hlds_statistics__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
      MR_Integer hlds__hlds_statistics__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
      MR_Integer hlds__hlds_statistics__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
      MR_Integer hlds__hlds_statistics__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
      MR_Integer hlds__hlds_statistics__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
      MR_Integer hlds__hlds_statistics__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
      MR_Integer hlds__hlds_statistics__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
      MR_Integer hlds__hlds_statistics__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
      MR_Integer hlds__hlds_statistics__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
      MR_Integer hlds__hlds_statistics__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
      MR_Integer hlds__hlds_statistics__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
      MR_Integer hlds__hlds_statistics__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
      MR_Integer hlds__hlds_statistics__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

      hlds__hlds_statistics__Var_21 = (hlds__hlds_statistics__Var_22 + (MR_Integer) 1);
      {
        hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__Var_28));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__Var_29));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__Var_30));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__Var_31));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__Var_32));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__Var_33));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__Var_34));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__Var_35));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__Var_36));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__Var_37));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__Var_38));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__Var_39));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__Var_21));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__Var_40));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__Var_41));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__Var_42));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__Var_43));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__Var_44));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__Var_45));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__Var_46));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__Var_47));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__Var_48));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__Var_49));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__Var_50));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__Var_51));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
      /* direct tailcall eliminated */
      {
        MR_Word hlds__hlds_statistics__next_value_of_HeadVar__1_1 = hlds__hlds_statistics__Goals_13;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_4;
        hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_2;
        hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__next_value_of_HeadVar__1_1;
      }
      continue;
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

    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), &hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99, ((MR_Word) hlds__hlds_statistics__wrapper_arg_4), &hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101);
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

    hlds__hlds_statistics__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
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

    hlds__hlds_statistics__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
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
      MR_Word hlds__hlds_statistics__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 0)));
      MR_Word hlds__hlds_statistics___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__hlds_statistics__SubGoal_84 = (MR_Word) MR_body(((MR_Word) hlds__hlds_statistics__GoalExpr_9), (MR_Integer) 0);
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;
            MR_Integer hlds__hlds_statistics__Var_132;
            MR_Integer hlds__hlds_statistics__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
            MR_Integer hlds__hlds_statistics__Var_1138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__Var_1139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
            MR_Integer hlds__hlds_statistics__Var_1140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__Var_1141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
            MR_Integer hlds__hlds_statistics__Var_1142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
            MR_Integer hlds__hlds_statistics__Var_1143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
            MR_Integer hlds__hlds_statistics__Var_1144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
            MR_Integer hlds__hlds_statistics__Var_1145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
            MR_Integer hlds__hlds_statistics__Var_1146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
            MR_Integer hlds__hlds_statistics__Var_1147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
            MR_Integer hlds__hlds_statistics__Var_1148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
            MR_Integer hlds__hlds_statistics__Var_1149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
            MR_Integer hlds__hlds_statistics__Var_1150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
            MR_Integer hlds__hlds_statistics__Var_1151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
            MR_Integer hlds__hlds_statistics__Var_1152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
            MR_Integer hlds__hlds_statistics__Var_1153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
            MR_Integer hlds__hlds_statistics__Var_1154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
            MR_Integer hlds__hlds_statistics__Var_1155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
            MR_Integer hlds__hlds_statistics__Var_1156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
            MR_Integer hlds__hlds_statistics__Var_1157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
            MR_Integer hlds__hlds_statistics__Var_1158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
            MR_Integer hlds__hlds_statistics__Var_1159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
            MR_Integer hlds__hlds_statistics__Var_1160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
            MR_Integer hlds__hlds_statistics__Var_1161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

            hlds__hlds_statistics__Var_132 = (hlds__hlds_statistics__Var_133 + (MR_Integer) 1);
            {
              hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1138));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1139));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1140));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1141));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1142));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1143));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1144));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1145));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1146));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1147));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1148));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1149));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1150));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1151));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1152));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1153));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1154));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1155));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1156));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1157));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 20) = ((MR_Box) (hlds__hlds_statistics__Var_132));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1158));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1159));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1160));
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1161));
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__SubGoal_84;
              MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;

              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
              hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_statistics__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
            MR_Word hlds__hlds_statistics__RHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__Uni_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
            MR_Word hlds__hlds_statistics__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
            MR_Word hlds__hlds_statistics__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_statistics__TypeInfo_1383_1383 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                  MR_Word hlds__hlds_statistics__CellVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                  MR_Word hlds__hlds_statistics__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241;
                  MR_Integer hlds__hlds_statistics__Var_244;
                  MR_Integer hlds__hlds_statistics__Var_245;
                  MR_Integer hlds__hlds_statistics__Var_256;
                  MR_Integer hlds__hlds_statistics__Var_257;
                  MR_Integer hlds__hlds_statistics__Var_258;
                  MR_Integer hlds__hlds_statistics__Var_259;
                  MR_Integer hlds__hlds_statistics__Var_260;
                  MR_Integer hlds__hlds_statistics__Var_261;
                  MR_Integer hlds__hlds_statistics__Var_262;
                  MR_Integer hlds__hlds_statistics__Var_263;
                  MR_Integer hlds__hlds_statistics__Var_264;
                  MR_Integer hlds__hlds_statistics__Var_265;
                  MR_Integer hlds__hlds_statistics__Var_266;
                  MR_Integer hlds__hlds_statistics__Var_267;
                  MR_Integer hlds__hlds_statistics__Var_268;
                  MR_Integer hlds__hlds_statistics__Var_269;
                  MR_Integer hlds__hlds_statistics__Var_270;
                  MR_Integer hlds__hlds_statistics__Var_271;
                  MR_Integer hlds__hlds_statistics__Var_272;
                  MR_Integer hlds__hlds_statistics__Var_273;
                  MR_Integer hlds__hlds_statistics__Var_274;
                  MR_Integer hlds__hlds_statistics__Var_275;
                  MR_Integer hlds__hlds_statistics__Var_276;
                  MR_Integer hlds__hlds_statistics__Var_277;
                  MR_Integer hlds__hlds_statistics__Var_278;
                  MR_Integer hlds__hlds_statistics__Var_279;
                  MR_Word hlds__hlds_statistics__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
                  MR_Word hlds__hlds_statistics__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));
                  MR_Word hlds__hlds_statistics__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 6)));

                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, ((MR_Box) (hlds__hlds_statistics__CellVar_16)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241);
                  mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, hlds__hlds_statistics__ArgVars_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                  hlds__hlds_statistics__Var_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  hlds__hlds_statistics__Var_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  hlds__hlds_statistics__Var_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  hlds__hlds_statistics__Var_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  hlds__hlds_statistics__Var_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  hlds__hlds_statistics__Var_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  hlds__hlds_statistics__Var_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  hlds__hlds_statistics__Var_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  hlds__hlds_statistics__Var_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  hlds__hlds_statistics__Var_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  hlds__hlds_statistics__Var_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  hlds__hlds_statistics__Var_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  hlds__hlds_statistics__Var_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  hlds__hlds_statistics__Var_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  hlds__hlds_statistics__Var_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  hlds__hlds_statistics__Var_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  hlds__hlds_statistics__Var_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  hlds__hlds_statistics__Var_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  hlds__hlds_statistics__Var_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  hlds__hlds_statistics__Var_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  hlds__hlds_statistics__Var_275 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  hlds__hlds_statistics__Var_276 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  hlds__hlds_statistics__Var_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  hlds__hlds_statistics__Var_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  hlds__hlds_statistics__Var_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  hlds__hlds_statistics__Var_244 = (hlds__hlds_statistics__Var_245 + (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_244));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_256));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_257));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_258));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_259));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_260));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_261));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_262));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_263));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_264));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_265));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_266));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_267));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_268));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_269));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_270));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_271));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_272));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_273));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_274));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_275));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_276));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_277));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_278));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_279));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_statistics__TypeInfo_1384_1384 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235;
                  MR_Integer hlds__hlds_statistics__Var_238;
                  MR_Integer hlds__hlds_statistics__Var_239;
                  MR_Word hlds__hlds_statistics__CellVar_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                  MR_Word hlds__hlds_statistics__ArgVars_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
                  MR_Integer hlds__hlds_statistics__Var_305;
                  MR_Integer hlds__hlds_statistics__Var_306;
                  MR_Integer hlds__hlds_statistics__Var_307;
                  MR_Integer hlds__hlds_statistics__Var_308;
                  MR_Integer hlds__hlds_statistics__Var_309;
                  MR_Integer hlds__hlds_statistics__Var_310;
                  MR_Integer hlds__hlds_statistics__Var_311;
                  MR_Integer hlds__hlds_statistics__Var_312;
                  MR_Integer hlds__hlds_statistics__Var_313;
                  MR_Integer hlds__hlds_statistics__Var_314;
                  MR_Integer hlds__hlds_statistics__Var_315;
                  MR_Integer hlds__hlds_statistics__Var_316;
                  MR_Integer hlds__hlds_statistics__Var_317;
                  MR_Integer hlds__hlds_statistics__Var_318;
                  MR_Integer hlds__hlds_statistics__Var_319;
                  MR_Integer hlds__hlds_statistics__Var_320;
                  MR_Integer hlds__hlds_statistics__Var_321;
                  MR_Integer hlds__hlds_statistics__Var_322;
                  MR_Integer hlds__hlds_statistics__Var_323;
                  MR_Integer hlds__hlds_statistics__Var_324;
                  MR_Integer hlds__hlds_statistics__Var_325;
                  MR_Integer hlds__hlds_statistics__Var_326;
                  MR_Integer hlds__hlds_statistics__Var_327;
                  MR_Integer hlds__hlds_statistics__Var_328;
                  MR_Word hlds__hlds_statistics__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
                  MR_Word hlds__hlds_statistics__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
                  MR_Word hlds__hlds_statistics__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));

                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, ((MR_Box) (hlds__hlds_statistics__CellVar_247)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235);
                  mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, hlds__hlds_statistics__ArgVars_248, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                  hlds__hlds_statistics__Var_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  hlds__hlds_statistics__Var_239 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  hlds__hlds_statistics__Var_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  hlds__hlds_statistics__Var_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  hlds__hlds_statistics__Var_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  hlds__hlds_statistics__Var_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  hlds__hlds_statistics__Var_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  hlds__hlds_statistics__Var_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  hlds__hlds_statistics__Var_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  hlds__hlds_statistics__Var_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  hlds__hlds_statistics__Var_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  hlds__hlds_statistics__Var_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  hlds__hlds_statistics__Var_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  hlds__hlds_statistics__Var_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  hlds__hlds_statistics__Var_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  hlds__hlds_statistics__Var_319 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  hlds__hlds_statistics__Var_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  hlds__hlds_statistics__Var_321 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  hlds__hlds_statistics__Var_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  hlds__hlds_statistics__Var_323 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  hlds__hlds_statistics__Var_324 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  hlds__hlds_statistics__Var_325 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  hlds__hlds_statistics__Var_326 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  hlds__hlds_statistics__Var_327 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  hlds__hlds_statistics__Var_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  hlds__hlds_statistics__Var_238 = (hlds__hlds_statistics__Var_239 + (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_305));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_238));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_306));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_307));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_308));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_309));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_310));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_311));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_312));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_313));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_314));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_315));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_316));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_317));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_318));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_319));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_320));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_321));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_322));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_323));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_324));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_325));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_326));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_327));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_328));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_statistics__TypeInfo_1385_1385 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                  MR_Word hlds__hlds_statistics__ToVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
                  MR_Word hlds__hlds_statistics__FromVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229;
                  MR_Integer hlds__hlds_statistics__Var_232;
                  MR_Integer hlds__hlds_statistics__Var_233;
                  MR_Integer hlds__hlds_statistics__Var_354;
                  MR_Integer hlds__hlds_statistics__Var_355;
                  MR_Integer hlds__hlds_statistics__Var_356;
                  MR_Integer hlds__hlds_statistics__Var_357;
                  MR_Integer hlds__hlds_statistics__Var_358;
                  MR_Integer hlds__hlds_statistics__Var_359;
                  MR_Integer hlds__hlds_statistics__Var_360;
                  MR_Integer hlds__hlds_statistics__Var_361;
                  MR_Integer hlds__hlds_statistics__Var_362;
                  MR_Integer hlds__hlds_statistics__Var_363;
                  MR_Integer hlds__hlds_statistics__Var_364;
                  MR_Integer hlds__hlds_statistics__Var_365;
                  MR_Integer hlds__hlds_statistics__Var_366;
                  MR_Integer hlds__hlds_statistics__Var_367;
                  MR_Integer hlds__hlds_statistics__Var_368;
                  MR_Integer hlds__hlds_statistics__Var_369;
                  MR_Integer hlds__hlds_statistics__Var_370;
                  MR_Integer hlds__hlds_statistics__Var_371;
                  MR_Integer hlds__hlds_statistics__Var_372;
                  MR_Integer hlds__hlds_statistics__Var_373;
                  MR_Integer hlds__hlds_statistics__Var_374;
                  MR_Integer hlds__hlds_statistics__Var_375;
                  MR_Integer hlds__hlds_statistics__Var_376;
                  MR_Integer hlds__hlds_statistics__Var_377;

                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__ToVar_27)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229);
                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__FromVar_28)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                  hlds__hlds_statistics__Var_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                  hlds__hlds_statistics__Var_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                  hlds__hlds_statistics__Var_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                  hlds__hlds_statistics__Var_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                  hlds__hlds_statistics__Var_357 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                  hlds__hlds_statistics__Var_358 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                  hlds__hlds_statistics__Var_359 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                  hlds__hlds_statistics__Var_360 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                  hlds__hlds_statistics__Var_361 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                  hlds__hlds_statistics__Var_362 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                  hlds__hlds_statistics__Var_363 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                  hlds__hlds_statistics__Var_364 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                  hlds__hlds_statistics__Var_365 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                  hlds__hlds_statistics__Var_366 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                  hlds__hlds_statistics__Var_367 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                  hlds__hlds_statistics__Var_368 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                  hlds__hlds_statistics__Var_369 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                  hlds__hlds_statistics__Var_370 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                  hlds__hlds_statistics__Var_371 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                  hlds__hlds_statistics__Var_372 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                  hlds__hlds_statistics__Var_373 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                  hlds__hlds_statistics__Var_374 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                  hlds__hlds_statistics__Var_375 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                  hlds__hlds_statistics__Var_376 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                  hlds__hlds_statistics__Var_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                  hlds__hlds_statistics__Var_232 = (hlds__hlds_statistics__Var_233 + (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_354));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_355));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_232));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_356));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_357));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_358));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_359));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_360));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_361));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_362));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_363));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_364));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_365));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_366));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_367));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_368));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_369));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_370));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_371));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_372));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_373));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_374));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_375));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_376));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_377));
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
                      MR_Integer hlds__hlds_statistics__Var_226;
                      MR_Integer hlds__hlds_statistics__Var_227;
                      MR_Integer hlds__hlds_statistics__Var_403;
                      MR_Integer hlds__hlds_statistics__Var_404;
                      MR_Integer hlds__hlds_statistics__Var_405;
                      MR_Integer hlds__hlds_statistics__Var_406;
                      MR_Integer hlds__hlds_statistics__Var_407;
                      MR_Integer hlds__hlds_statistics__Var_408;
                      MR_Integer hlds__hlds_statistics__Var_409;
                      MR_Integer hlds__hlds_statistics__Var_410;
                      MR_Integer hlds__hlds_statistics__Var_411;
                      MR_Integer hlds__hlds_statistics__Var_412;
                      MR_Integer hlds__hlds_statistics__Var_413;
                      MR_Integer hlds__hlds_statistics__Var_414;
                      MR_Integer hlds__hlds_statistics__Var_415;
                      MR_Integer hlds__hlds_statistics__Var_416;
                      MR_Integer hlds__hlds_statistics__Var_417;
                      MR_Integer hlds__hlds_statistics__Var_418;
                      MR_Integer hlds__hlds_statistics__Var_419;
                      MR_Integer hlds__hlds_statistics__Var_420;
                      MR_Integer hlds__hlds_statistics__Var_421;
                      MR_Integer hlds__hlds_statistics__Var_422;
                      MR_Integer hlds__hlds_statistics__Var_423;
                      MR_Integer hlds__hlds_statistics__Var_424;
                      MR_Integer hlds__hlds_statistics__Var_425;
                      MR_Integer hlds__hlds_statistics__Var_426;

                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarA_29)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223);
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarB_30)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                      hlds__hlds_statistics__Var_403 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                      hlds__hlds_statistics__Var_404 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                      hlds__hlds_statistics__Var_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                      hlds__hlds_statistics__Var_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                      hlds__hlds_statistics__Var_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                      hlds__hlds_statistics__Var_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                      hlds__hlds_statistics__Var_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                      hlds__hlds_statistics__Var_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                      hlds__hlds_statistics__Var_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                      hlds__hlds_statistics__Var_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                      hlds__hlds_statistics__Var_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                      hlds__hlds_statistics__Var_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                      hlds__hlds_statistics__Var_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                      hlds__hlds_statistics__Var_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                      hlds__hlds_statistics__Var_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                      hlds__hlds_statistics__Var_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                      hlds__hlds_statistics__Var_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                      hlds__hlds_statistics__Var_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                      hlds__hlds_statistics__Var_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                      hlds__hlds_statistics__Var_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                      hlds__hlds_statistics__Var_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                      hlds__hlds_statistics__Var_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                      hlds__hlds_statistics__Var_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                      hlds__hlds_statistics__Var_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                      hlds__hlds_statistics__Var_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                      hlds__hlds_statistics__Var_226 = (hlds__hlds_statistics__Var_227 + (MR_Integer) 1);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_403));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_404));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_405));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_226));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_406));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_407));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_408));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_409));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_410));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_411));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_412));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_413));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_414));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_415));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_416));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_417));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_418));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_419));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_420));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_421));
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_422));
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_423));
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_424));
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_425));
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_426));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__hlds_statistics__TypeInfo_1387_1387 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204;

                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__LHS_11)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204);
                      switch (MR_tag((MR_Word) hlds__hlds_statistics__RHS_12)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__hlds_statistics__RHSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
                            MR_Integer hlds__hlds_statistics__Var_220;
                            MR_Integer hlds__hlds_statistics__Var_221;
                            MR_Integer hlds__hlds_statistics__Var_452;
                            MR_Integer hlds__hlds_statistics__Var_453;
                            MR_Integer hlds__hlds_statistics__Var_454;
                            MR_Integer hlds__hlds_statistics__Var_455;
                            MR_Integer hlds__hlds_statistics__Var_456;
                            MR_Integer hlds__hlds_statistics__Var_457;
                            MR_Integer hlds__hlds_statistics__Var_458;
                            MR_Integer hlds__hlds_statistics__Var_459;
                            MR_Integer hlds__hlds_statistics__Var_460;
                            MR_Integer hlds__hlds_statistics__Var_461;
                            MR_Integer hlds__hlds_statistics__Var_462;
                            MR_Integer hlds__hlds_statistics__Var_463;
                            MR_Integer hlds__hlds_statistics__Var_464;
                            MR_Integer hlds__hlds_statistics__Var_465;
                            MR_Integer hlds__hlds_statistics__Var_466;
                            MR_Integer hlds__hlds_statistics__Var_467;
                            MR_Integer hlds__hlds_statistics__Var_468;
                            MR_Integer hlds__hlds_statistics__Var_469;
                            MR_Integer hlds__hlds_statistics__Var_470;
                            MR_Integer hlds__hlds_statistics__Var_471;
                            MR_Integer hlds__hlds_statistics__Var_472;
                            MR_Integer hlds__hlds_statistics__Var_473;
                            MR_Integer hlds__hlds_statistics__Var_474;
                            MR_Integer hlds__hlds_statistics__Var_475;

                            mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__RHSVar_34)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                            hlds__hlds_statistics__Var_452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                            hlds__hlds_statistics__Var_453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                            hlds__hlds_statistics__Var_454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                            hlds__hlds_statistics__Var_455 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                            hlds__hlds_statistics__Var_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                            hlds__hlds_statistics__Var_456 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                            hlds__hlds_statistics__Var_457 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                            hlds__hlds_statistics__Var_458 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                            hlds__hlds_statistics__Var_459 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                            hlds__hlds_statistics__Var_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                            hlds__hlds_statistics__Var_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                            hlds__hlds_statistics__Var_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                            hlds__hlds_statistics__Var_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                            hlds__hlds_statistics__Var_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                            hlds__hlds_statistics__Var_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                            hlds__hlds_statistics__Var_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                            hlds__hlds_statistics__Var_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                            hlds__hlds_statistics__Var_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                            hlds__hlds_statistics__Var_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                            hlds__hlds_statistics__Var_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                            hlds__hlds_statistics__Var_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                            hlds__hlds_statistics__Var_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                            hlds__hlds_statistics__Var_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                            hlds__hlds_statistics__Var_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                            hlds__hlds_statistics__Var_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                            hlds__hlds_statistics__Var_220 = (hlds__hlds_statistics__Var_221 + (MR_Integer) 1);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_452));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_453));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_454));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_455));
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_220));
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_456));
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_457));
                              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_458));
                              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_459));
                              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_460));
                              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_461));
                              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_462));
                              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_463));
                              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_464));
                              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_465));
                              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_466));
                              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_467));
                              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_468));
                              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_469));
                              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_470));
                              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_471));
                              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_472));
                              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_473));
                              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_474));
                              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_475));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__hlds_statistics__RHSVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 2)));
                            MR_Integer hlds__hlds_statistics__Var_215;
                            MR_Integer hlds__hlds_statistics__Var_216;
                            MR_Integer hlds__hlds_statistics__Var_501;
                            MR_Integer hlds__hlds_statistics__Var_502;
                            MR_Integer hlds__hlds_statistics__Var_503;
                            MR_Integer hlds__hlds_statistics__Var_504;
                            MR_Integer hlds__hlds_statistics__Var_505;
                            MR_Integer hlds__hlds_statistics__Var_506;
                            MR_Integer hlds__hlds_statistics__Var_507;
                            MR_Integer hlds__hlds_statistics__Var_508;
                            MR_Integer hlds__hlds_statistics__Var_509;
                            MR_Integer hlds__hlds_statistics__Var_510;
                            MR_Integer hlds__hlds_statistics__Var_511;
                            MR_Integer hlds__hlds_statistics__Var_512;
                            MR_Integer hlds__hlds_statistics__Var_513;
                            MR_Integer hlds__hlds_statistics__Var_514;
                            MR_Integer hlds__hlds_statistics__Var_515;
                            MR_Integer hlds__hlds_statistics__Var_516;
                            MR_Integer hlds__hlds_statistics__Var_517;
                            MR_Integer hlds__hlds_statistics__Var_518;
                            MR_Integer hlds__hlds_statistics__Var_519;
                            MR_Integer hlds__hlds_statistics__Var_520;
                            MR_Integer hlds__hlds_statistics__Var_521;
                            MR_Integer hlds__hlds_statistics__Var_522;
                            MR_Integer hlds__hlds_statistics__Var_523;
                            MR_Integer hlds__hlds_statistics__Var_524;
                            MR_Word hlds__hlds_statistics__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
                            MR_Word hlds__hlds_statistics__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 1)));

                            mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__RHSVars_37, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                            hlds__hlds_statistics__Var_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                            hlds__hlds_statistics__Var_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                            hlds__hlds_statistics__Var_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                            hlds__hlds_statistics__Var_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                            hlds__hlds_statistics__Var_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                            hlds__hlds_statistics__Var_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                            hlds__hlds_statistics__Var_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                            hlds__hlds_statistics__Var_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                            hlds__hlds_statistics__Var_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                            hlds__hlds_statistics__Var_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                            hlds__hlds_statistics__Var_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                            hlds__hlds_statistics__Var_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                            hlds__hlds_statistics__Var_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                            hlds__hlds_statistics__Var_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                            hlds__hlds_statistics__Var_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                            hlds__hlds_statistics__Var_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                            hlds__hlds_statistics__Var_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                            hlds__hlds_statistics__Var_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                            hlds__hlds_statistics__Var_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                            hlds__hlds_statistics__Var_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                            hlds__hlds_statistics__Var_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                            hlds__hlds_statistics__Var_521 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                            hlds__hlds_statistics__Var_522 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                            hlds__hlds_statistics__Var_523 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                            hlds__hlds_statistics__Var_524 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                            hlds__hlds_statistics__Var_215 = (hlds__hlds_statistics__Var_216 + (MR_Integer) 1);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_501));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_502));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_503));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_504));
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_215));
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_505));
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_506));
                              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_507));
                              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_508));
                              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_509));
                              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_510));
                              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_511));
                              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_512));
                              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_513));
                              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_514));
                              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_515));
                              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_516));
                              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_517));
                              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_518));
                              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_519));
                              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_520));
                              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_521));
                              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_522));
                              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_523));
                              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_524));
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
                            MR_Integer hlds__hlds_statistics__Var_208;
                            MR_Integer hlds__hlds_statistics__Var_209;
                            MR_Integer hlds__hlds_statistics__Var_550;
                            MR_Integer hlds__hlds_statistics__Var_551;
                            MR_Integer hlds__hlds_statistics__Var_552;
                            MR_Integer hlds__hlds_statistics__Var_553;
                            MR_Integer hlds__hlds_statistics__Var_554;
                            MR_Integer hlds__hlds_statistics__Var_555;
                            MR_Integer hlds__hlds_statistics__Var_556;
                            MR_Integer hlds__hlds_statistics__Var_557;
                            MR_Integer hlds__hlds_statistics__Var_558;
                            MR_Integer hlds__hlds_statistics__Var_559;
                            MR_Integer hlds__hlds_statistics__Var_560;
                            MR_Integer hlds__hlds_statistics__Var_561;
                            MR_Integer hlds__hlds_statistics__Var_562;
                            MR_Integer hlds__hlds_statistics__Var_563;
                            MR_Integer hlds__hlds_statistics__Var_564;
                            MR_Integer hlds__hlds_statistics__Var_565;
                            MR_Integer hlds__hlds_statistics__Var_566;
                            MR_Integer hlds__hlds_statistics__Var_567;
                            MR_Integer hlds__hlds_statistics__Var_568;
                            MR_Integer hlds__hlds_statistics__Var_569;
                            MR_Integer hlds__hlds_statistics__Var_570;
                            MR_Integer hlds__hlds_statistics__Var_571;
                            MR_Integer hlds__hlds_statistics__Var_572;
                            MR_Integer hlds__hlds_statistics__Var_573;
                            MR_Word hlds__hlds_statistics__Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) & (MR_Integer) 3);
                            MR_Word hlds__hlds_statistics__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            MR_Word hlds__hlds_statistics__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            MR_Word hlds__hlds_statistics__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 4)));
                            MR_Word hlds__hlds_statistics__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 5)));

                            mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__NonLocals_42, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205);
                            mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__QuantVars_43, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206);
                            hlds__hlds_statistics__Var_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                            hlds__hlds_statistics__Var_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                            hlds__hlds_statistics__Var_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                            hlds__hlds_statistics__Var_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                            hlds__hlds_statistics__Var_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                            hlds__hlds_statistics__Var_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                            hlds__hlds_statistics__Var_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                            hlds__hlds_statistics__Var_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                            hlds__hlds_statistics__Var_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                            hlds__hlds_statistics__Var_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                            hlds__hlds_statistics__Var_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                            hlds__hlds_statistics__Var_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                            hlds__hlds_statistics__Var_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                            hlds__hlds_statistics__Var_562 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                            hlds__hlds_statistics__Var_563 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                            hlds__hlds_statistics__Var_564 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                            hlds__hlds_statistics__Var_565 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                            hlds__hlds_statistics__Var_566 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                            hlds__hlds_statistics__Var_567 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                            hlds__hlds_statistics__Var_568 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                            hlds__hlds_statistics__Var_569 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                            hlds__hlds_statistics__Var_570 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                            hlds__hlds_statistics__Var_571 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                            hlds__hlds_statistics__Var_572 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                            hlds__hlds_statistics__Var_573 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                            hlds__hlds_statistics__Var_208 = (hlds__hlds_statistics__Var_209 + (MR_Integer) 1);
                            {
                              hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 0) = ((MR_Box) (hlds__hlds_statistics__Var_550));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 1) = ((MR_Box) (hlds__hlds_statistics__Var_551));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 2) = ((MR_Box) (hlds__hlds_statistics__Var_552));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 3) = ((MR_Box) (hlds__hlds_statistics__Var_553));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 4) = ((MR_Box) (hlds__hlds_statistics__Var_208));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 5) = ((MR_Box) (hlds__hlds_statistics__Var_554));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 6) = ((MR_Box) (hlds__hlds_statistics__Var_555));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 7) = ((MR_Box) (hlds__hlds_statistics__Var_556));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 8) = ((MR_Box) (hlds__hlds_statistics__Var_557));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 9) = ((MR_Box) (hlds__hlds_statistics__Var_558));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 10) = ((MR_Box) (hlds__hlds_statistics__Var_559));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 11) = ((MR_Box) (hlds__hlds_statistics__Var_560));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 12) = ((MR_Box) (hlds__hlds_statistics__Var_561));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 13) = ((MR_Box) (hlds__hlds_statistics__Var_562));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 14) = ((MR_Box) (hlds__hlds_statistics__Var_563));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 15) = ((MR_Box) (hlds__hlds_statistics__Var_564));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 16) = ((MR_Box) (hlds__hlds_statistics__Var_565));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 17) = ((MR_Box) (hlds__hlds_statistics__Var_566));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 18) = ((MR_Box) (hlds__hlds_statistics__Var_567));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 19) = ((MR_Box) (hlds__hlds_statistics__Var_568));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 20) = ((MR_Box) (hlds__hlds_statistics__Var_569));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 21) = ((MR_Box) (hlds__hlds_statistics__Var_570));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 22) = ((MR_Box) (hlds__hlds_statistics__Var_571));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 23) = ((MR_Box) (hlds__hlds_statistics__Var_572));
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 24) = ((MR_Box) (hlds__hlds_statistics__Var_573));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__LambdaGoal_46;
                              MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206;
                              MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207;

                              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
                              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98;
                              hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
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
            MR_Integer hlds__hlds_statistics__Var_201;
            MR_Integer hlds__hlds_statistics__Var_202;
            MR_Word hlds__hlds_statistics__ArgVars_249 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
            MR_Integer hlds__hlds_statistics__Var_599;
            MR_Integer hlds__hlds_statistics__Var_600;
            MR_Integer hlds__hlds_statistics__Var_601;
            MR_Integer hlds__hlds_statistics__Var_602;
            MR_Integer hlds__hlds_statistics__Var_603;
            MR_Integer hlds__hlds_statistics__Var_604;
            MR_Integer hlds__hlds_statistics__Var_605;
            MR_Integer hlds__hlds_statistics__Var_606;
            MR_Integer hlds__hlds_statistics__Var_607;
            MR_Integer hlds__hlds_statistics__Var_608;
            MR_Integer hlds__hlds_statistics__Var_609;
            MR_Integer hlds__hlds_statistics__Var_610;
            MR_Integer hlds__hlds_statistics__Var_611;
            MR_Integer hlds__hlds_statistics__Var_612;
            MR_Integer hlds__hlds_statistics__Var_613;
            MR_Integer hlds__hlds_statistics__Var_614;
            MR_Integer hlds__hlds_statistics__Var_615;
            MR_Integer hlds__hlds_statistics__Var_616;
            MR_Integer hlds__hlds_statistics__Var_617;
            MR_Integer hlds__hlds_statistics__Var_618;
            MR_Integer hlds__hlds_statistics__Var_619;
            MR_Integer hlds__hlds_statistics__Var_620;
            MR_Integer hlds__hlds_statistics__Var_621;
            MR_Integer hlds__hlds_statistics__Var_622;
            MR_Word hlds__hlds_statistics__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
            MR_Integer hlds__hlds_statistics__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
            MR_Word hlds__hlds_statistics__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
            MR_Word hlds__hlds_statistics__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
            MR_Word hlds__hlds_statistics__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

            mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__ArgVars_249, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
            hlds__hlds_statistics__Var_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
            hlds__hlds_statistics__Var_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
            hlds__hlds_statistics__Var_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
            hlds__hlds_statistics__Var_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
            hlds__hlds_statistics__Var_603 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
            hlds__hlds_statistics__Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
            hlds__hlds_statistics__Var_604 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
            hlds__hlds_statistics__Var_605 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
            hlds__hlds_statistics__Var_606 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
            hlds__hlds_statistics__Var_607 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
            hlds__hlds_statistics__Var_608 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
            hlds__hlds_statistics__Var_609 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
            hlds__hlds_statistics__Var_610 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
            hlds__hlds_statistics__Var_611 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
            hlds__hlds_statistics__Var_612 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
            hlds__hlds_statistics__Var_613 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
            hlds__hlds_statistics__Var_614 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
            hlds__hlds_statistics__Var_615 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
            hlds__hlds_statistics__Var_616 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
            hlds__hlds_statistics__Var_617 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
            hlds__hlds_statistics__Var_618 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
            hlds__hlds_statistics__Var_619 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
            hlds__hlds_statistics__Var_620 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
            hlds__hlds_statistics__Var_621 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
            hlds__hlds_statistics__Var_622 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
            hlds__hlds_statistics__Var_201 = (hlds__hlds_statistics__Var_202 + (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
              *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_599));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_600));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_601));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_602));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_603));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_201));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_604));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_605));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_606));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_607));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_608));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_609));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_610));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_611));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_612));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_613));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_614));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_615));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_616));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_617));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_618));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_619));
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_620));
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_621));
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_622));
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
                MR_Word hlds__hlds_statistics__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                MR_Word hlds__hlds_statistics__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
                MR_Word hlds__hlds_statistics__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, hlds__hlds_statistics__ArgVars_251, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172);
                switch (MR_tag((MR_Word) hlds__hlds_statistics__CallKind_60)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__hlds_statistics__HOVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
                      MR_Integer hlds__hlds_statistics__Var_188;
                      MR_Integer hlds__hlds_statistics__Var_189;
                      MR_Integer hlds__hlds_statistics__Var_697;
                      MR_Integer hlds__hlds_statistics__Var_698;
                      MR_Integer hlds__hlds_statistics__Var_699;
                      MR_Integer hlds__hlds_statistics__Var_700;
                      MR_Integer hlds__hlds_statistics__Var_701;
                      MR_Integer hlds__hlds_statistics__Var_702;
                      MR_Integer hlds__hlds_statistics__Var_703;
                      MR_Integer hlds__hlds_statistics__Var_704;
                      MR_Integer hlds__hlds_statistics__Var_705;
                      MR_Integer hlds__hlds_statistics__Var_706;
                      MR_Integer hlds__hlds_statistics__Var_707;
                      MR_Integer hlds__hlds_statistics__Var_708;
                      MR_Integer hlds__hlds_statistics__Var_709;
                      MR_Integer hlds__hlds_statistics__Var_710;
                      MR_Integer hlds__hlds_statistics__Var_711;
                      MR_Integer hlds__hlds_statistics__Var_712;
                      MR_Integer hlds__hlds_statistics__Var_713;
                      MR_Integer hlds__hlds_statistics__Var_714;
                      MR_Integer hlds__hlds_statistics__Var_715;
                      MR_Integer hlds__hlds_statistics__Var_716;
                      MR_Integer hlds__hlds_statistics__Var_717;
                      MR_Integer hlds__hlds_statistics__Var_718;
                      MR_Integer hlds__hlds_statistics__Var_719;
                      MR_Integer hlds__hlds_statistics__Var_720;
                      MR_Word hlds__hlds_statistics__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
                      MR_Word hlds__hlds_statistics__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
                      MR_Integer hlds__hlds_statistics__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__HOVar_64)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                      hlds__hlds_statistics__Var_697 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                      hlds__hlds_statistics__Var_698 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                      hlds__hlds_statistics__Var_699 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                      hlds__hlds_statistics__Var_700 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                      hlds__hlds_statistics__Var_701 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                      hlds__hlds_statistics__Var_702 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                      hlds__hlds_statistics__Var_703 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                      hlds__hlds_statistics__Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                      hlds__hlds_statistics__Var_704 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                      hlds__hlds_statistics__Var_705 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                      hlds__hlds_statistics__Var_706 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                      hlds__hlds_statistics__Var_707 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                      hlds__hlds_statistics__Var_708 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                      hlds__hlds_statistics__Var_709 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                      hlds__hlds_statistics__Var_710 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                      hlds__hlds_statistics__Var_711 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                      hlds__hlds_statistics__Var_712 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                      hlds__hlds_statistics__Var_713 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                      hlds__hlds_statistics__Var_714 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                      hlds__hlds_statistics__Var_715 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                      hlds__hlds_statistics__Var_716 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                      hlds__hlds_statistics__Var_717 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                      hlds__hlds_statistics__Var_718 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                      hlds__hlds_statistics__Var_719 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                      hlds__hlds_statistics__Var_720 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                      hlds__hlds_statistics__Var_188 = (hlds__hlds_statistics__Var_189 + (MR_Integer) 1);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_697));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_698));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_699));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_700));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_701));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_702));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_703));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_188));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_704));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_705));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_706));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_707));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_708));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_709));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_710));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_711));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_712));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_713));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_714));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_715));
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_716));
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_717));
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_718));
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_719));
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_720));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__hlds_statistics__TCIVar_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
                      MR_Integer hlds__hlds_statistics__Var_183;
                      MR_Integer hlds__hlds_statistics__Var_184;
                      MR_Integer hlds__hlds_statistics__Var_746;
                      MR_Integer hlds__hlds_statistics__Var_747;
                      MR_Integer hlds__hlds_statistics__Var_748;
                      MR_Integer hlds__hlds_statistics__Var_749;
                      MR_Integer hlds__hlds_statistics__Var_750;
                      MR_Integer hlds__hlds_statistics__Var_751;
                      MR_Integer hlds__hlds_statistics__Var_752;
                      MR_Integer hlds__hlds_statistics__Var_753;
                      MR_Integer hlds__hlds_statistics__Var_754;
                      MR_Integer hlds__hlds_statistics__Var_755;
                      MR_Integer hlds__hlds_statistics__Var_756;
                      MR_Integer hlds__hlds_statistics__Var_757;
                      MR_Integer hlds__hlds_statistics__Var_758;
                      MR_Integer hlds__hlds_statistics__Var_759;
                      MR_Integer hlds__hlds_statistics__Var_760;
                      MR_Integer hlds__hlds_statistics__Var_761;
                      MR_Integer hlds__hlds_statistics__Var_762;
                      MR_Integer hlds__hlds_statistics__Var_763;
                      MR_Integer hlds__hlds_statistics__Var_764;
                      MR_Integer hlds__hlds_statistics__Var_765;
                      MR_Integer hlds__hlds_statistics__Var_766;
                      MR_Integer hlds__hlds_statistics__Var_767;
                      MR_Integer hlds__hlds_statistics__Var_768;
                      MR_Integer hlds__hlds_statistics__Var_769;
                      MR_Integer hlds__hlds_statistics__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
                      MR_Word hlds__hlds_statistics__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
                      MR_Word hlds__hlds_statistics__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__TCIVar_68)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                      hlds__hlds_statistics__Var_746 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                      hlds__hlds_statistics__Var_747 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                      hlds__hlds_statistics__Var_748 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                      hlds__hlds_statistics__Var_749 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                      hlds__hlds_statistics__Var_750 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                      hlds__hlds_statistics__Var_751 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                      hlds__hlds_statistics__Var_752 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                      hlds__hlds_statistics__Var_753 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                      hlds__hlds_statistics__Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                      hlds__hlds_statistics__Var_754 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                      hlds__hlds_statistics__Var_755 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                      hlds__hlds_statistics__Var_756 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                      hlds__hlds_statistics__Var_757 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                      hlds__hlds_statistics__Var_758 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                      hlds__hlds_statistics__Var_759 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                      hlds__hlds_statistics__Var_760 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                      hlds__hlds_statistics__Var_761 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                      hlds__hlds_statistics__Var_762 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                      hlds__hlds_statistics__Var_763 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                      hlds__hlds_statistics__Var_764 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                      hlds__hlds_statistics__Var_765 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                      hlds__hlds_statistics__Var_766 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                      hlds__hlds_statistics__Var_767 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                      hlds__hlds_statistics__Var_768 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                      hlds__hlds_statistics__Var_769 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                      hlds__hlds_statistics__Var_183 = (hlds__hlds_statistics__Var_184 + (MR_Integer) 1);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_746));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_747));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_748));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_749));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_750));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_751));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_752));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_753));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_183));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_754));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_755));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_756));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_757));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_758));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_759));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_760));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_761));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_762));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_763));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_764));
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_765));
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_766));
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_767));
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_768));
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_769));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer hlds__hlds_statistics__Var_178;
                      MR_Integer hlds__hlds_statistics__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                      MR_Integer hlds__hlds_statistics__Var_795 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                      MR_Integer hlds__hlds_statistics__Var_796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                      MR_Integer hlds__hlds_statistics__Var_797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                      MR_Integer hlds__hlds_statistics__Var_798 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                      MR_Integer hlds__hlds_statistics__Var_799 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                      MR_Integer hlds__hlds_statistics__Var_800 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                      MR_Integer hlds__hlds_statistics__Var_801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                      MR_Integer hlds__hlds_statistics__Var_802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                      MR_Integer hlds__hlds_statistics__Var_803 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                      MR_Integer hlds__hlds_statistics__Var_804 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                      MR_Integer hlds__hlds_statistics__Var_805 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                      MR_Integer hlds__hlds_statistics__Var_806 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                      MR_Integer hlds__hlds_statistics__Var_807 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                      MR_Integer hlds__hlds_statistics__Var_808 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                      MR_Integer hlds__hlds_statistics__Var_809 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                      MR_Integer hlds__hlds_statistics__Var_810 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                      MR_Integer hlds__hlds_statistics__Var_811 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                      MR_Integer hlds__hlds_statistics__Var_812 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                      MR_Integer hlds__hlds_statistics__Var_813 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                      MR_Integer hlds__hlds_statistics__Var_814 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                      MR_Integer hlds__hlds_statistics__Var_815 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                      MR_Integer hlds__hlds_statistics__Var_816 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                      MR_Integer hlds__hlds_statistics__Var_817 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                      MR_Integer hlds__hlds_statistics__Var_818 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                      hlds__hlds_statistics__Var_178 = (hlds__hlds_statistics__Var_179 + (MR_Integer) 1);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_795));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_796));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_797));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_798));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_799));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_800));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_801));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_802));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_803));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_178));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_804));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_805));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_806));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_807));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_808));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_809));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_810));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_811));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_812));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_813));
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_814));
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_815));
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_816));
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_817));
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_818));
                      }
                      *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Integer hlds__hlds_statistics__Var_174;
                      MR_Integer hlds__hlds_statistics__Var_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                      MR_Integer hlds__hlds_statistics__Var_844 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                      MR_Integer hlds__hlds_statistics__Var_845 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                      MR_Integer hlds__hlds_statistics__Var_846 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                      MR_Integer hlds__hlds_statistics__Var_847 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                      MR_Integer hlds__hlds_statistics__Var_848 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                      MR_Integer hlds__hlds_statistics__Var_849 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                      MR_Integer hlds__hlds_statistics__Var_850 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                      MR_Integer hlds__hlds_statistics__Var_851 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                      MR_Integer hlds__hlds_statistics__Var_852 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                      MR_Integer hlds__hlds_statistics__Var_853 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                      MR_Integer hlds__hlds_statistics__Var_854 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                      MR_Integer hlds__hlds_statistics__Var_855 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                      MR_Integer hlds__hlds_statistics__Var_856 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                      MR_Integer hlds__hlds_statistics__Var_857 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                      MR_Integer hlds__hlds_statistics__Var_858 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                      MR_Integer hlds__hlds_statistics__Var_859 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                      MR_Integer hlds__hlds_statistics__Var_860 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                      MR_Integer hlds__hlds_statistics__Var_861 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                      MR_Integer hlds__hlds_statistics__Var_862 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                      MR_Integer hlds__hlds_statistics__Var_863 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                      MR_Integer hlds__hlds_statistics__Var_864 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                      MR_Integer hlds__hlds_statistics__Var_865 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                      MR_Integer hlds__hlds_statistics__Var_866 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                      MR_Integer hlds__hlds_statistics__Var_867 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                      hlds__hlds_statistics__Var_174 = (hlds__hlds_statistics__Var_175 + (MR_Integer) 1);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_844));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_845));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_846));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_847));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_848));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_849));
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_850));
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_851));
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_852));
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_853));
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_174));
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_854));
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_855));
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_856));
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_857));
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_858));
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_859));
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_860));
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_861));
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_862));
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_863));
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_864));
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_865));
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_866));
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_867));
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
                MR_Integer hlds__hlds_statistics__Var_196;
                MR_Integer hlds__hlds_statistics__Var_197;
                MR_Word hlds__hlds_statistics__ArgVars_250;
                MR_Integer hlds__hlds_statistics__Var_648;
                MR_Integer hlds__hlds_statistics__Var_649;
                MR_Integer hlds__hlds_statistics__Var_650;
                MR_Integer hlds__hlds_statistics__Var_651;
                MR_Integer hlds__hlds_statistics__Var_652;
                MR_Integer hlds__hlds_statistics__Var_653;
                MR_Integer hlds__hlds_statistics__Var_654;
                MR_Integer hlds__hlds_statistics__Var_655;
                MR_Integer hlds__hlds_statistics__Var_656;
                MR_Integer hlds__hlds_statistics__Var_657;
                MR_Integer hlds__hlds_statistics__Var_658;
                MR_Integer hlds__hlds_statistics__Var_659;
                MR_Integer hlds__hlds_statistics__Var_660;
                MR_Integer hlds__hlds_statistics__Var_661;
                MR_Integer hlds__hlds_statistics__Var_662;
                MR_Integer hlds__hlds_statistics__Var_663;
                MR_Integer hlds__hlds_statistics__Var_664;
                MR_Integer hlds__hlds_statistics__Var_665;
                MR_Integer hlds__hlds_statistics__Var_666;
                MR_Integer hlds__hlds_statistics__Var_667;
                MR_Integer hlds__hlds_statistics__Var_668;
                MR_Integer hlds__hlds_statistics__Var_669;
                MR_Integer hlds__hlds_statistics__Var_670;
                MR_Integer hlds__hlds_statistics__Var_671;
                MR_Word hlds__hlds_statistics__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__hlds_statistics__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                MR_Word hlds__hlds_statistics__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 6)));
                MR_Word hlds__hlds_statistics__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 7)));

                hlds__hlds_statistics__ArgVars_250 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[2], hlds__hlds_statistics__Args_55);
                hlds__hlds_statistics__ExtraArgVars_59 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[3], hlds__hlds_statistics__ExtraArgs_56);
                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ArgVars_250, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193);
                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ExtraArgVars_59, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                hlds__hlds_statistics__Var_648 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                hlds__hlds_statistics__Var_649 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                hlds__hlds_statistics__Var_650 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                hlds__hlds_statistics__Var_651 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                hlds__hlds_statistics__Var_652 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                hlds__hlds_statistics__Var_653 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                hlds__hlds_statistics__Var_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                hlds__hlds_statistics__Var_654 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                hlds__hlds_statistics__Var_655 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                hlds__hlds_statistics__Var_656 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                hlds__hlds_statistics__Var_657 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                hlds__hlds_statistics__Var_658 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                hlds__hlds_statistics__Var_659 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                hlds__hlds_statistics__Var_660 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                hlds__hlds_statistics__Var_661 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                hlds__hlds_statistics__Var_662 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                hlds__hlds_statistics__Var_663 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                hlds__hlds_statistics__Var_664 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                hlds__hlds_statistics__Var_665 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                hlds__hlds_statistics__Var_666 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                hlds__hlds_statistics__Var_667 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                hlds__hlds_statistics__Var_668 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                hlds__hlds_statistics__Var_669 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                hlds__hlds_statistics__Var_670 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                hlds__hlds_statistics__Var_671 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                hlds__hlds_statistics__Var_196 = (hlds__hlds_statistics__Var_197 + (MR_Integer) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__Var_648));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__Var_649));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__Var_650));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__Var_651));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__Var_652));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__Var_653));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__Var_196));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__Var_654));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__Var_655));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__Var_656));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__Var_657));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__Var_658));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__Var_659));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__Var_660));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__Var_661));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__Var_662));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__Var_663));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__Var_664));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__Var_665));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__Var_666));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__Var_667));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__Var_668));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__Var_669));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__Var_670));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__Var_671));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__hlds_statistics__ConjType_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__hlds_statistics__Conjs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                MR_Integer hlds__hlds_statistics__Var_1406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                MR_Integer hlds__hlds_statistics__Var_1407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                MR_Integer hlds__hlds_statistics__Var_1408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                MR_Integer hlds__hlds_statistics__Var_1409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                MR_Integer hlds__hlds_statistics__Var_1410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                MR_Integer hlds__hlds_statistics__Var_1411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                MR_Integer hlds__hlds_statistics__Var_1412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                MR_Integer hlds__hlds_statistics__Var_1413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                MR_Integer hlds__hlds_statistics__Var_1414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                MR_Integer hlds__hlds_statistics__Var_1415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                MR_Integer hlds__hlds_statistics__Var_1416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                MR_Integer hlds__hlds_statistics__Var_1417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                MR_Integer hlds__hlds_statistics__Var_1418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                MR_Integer hlds__hlds_statistics__Var_1419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                MR_Integer hlds__hlds_statistics__Var_1420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                MR_Integer hlds__hlds_statistics__Var_1421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                MR_Integer hlds__hlds_statistics__Var_1422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                MR_Integer hlds__hlds_statistics__Var_1423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                MR_Integer hlds__hlds_statistics__Var_1424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                MR_Integer hlds__hlds_statistics__Var_1425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                MR_Integer hlds__hlds_statistics__Var_1426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                MR_Integer hlds__hlds_statistics__Var_1427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_1429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

                switch (hlds__hlds_statistics__ConjType_74) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160;
                      MR_Integer hlds__hlds_statistics__Var_161 = (hlds__hlds_statistics__Var_1416 + (MR_Integer) 1);

                      {
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1429));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1428));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1427));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1426));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1425));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1424));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1423));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1422));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1421));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1420));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1419));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1418));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1417));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 13) = ((MR_Box) (hlds__hlds_statistics__Var_161));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1415));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1414));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1413));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1412));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1411));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1410));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1409));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1408));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1407));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1406));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1405));
                      }
                      hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166;
                      MR_Integer hlds__hlds_statistics__Var_167 = (hlds__hlds_statistics__Var_1418 + (MR_Integer) 1);

                      {
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1429));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1428));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1427));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1426));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1425));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1424));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1423));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1422));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1421));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1420));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1419));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 11) = ((MR_Box) (hlds__hlds_statistics__Var_167));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1417));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1416));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1415));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1414));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1413));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1412));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1411));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1410));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1409));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1408));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1407));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1406));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1405));
                      }
                      hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__hlds_statistics__Disjs_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154;
                MR_Integer hlds__hlds_statistics__Var_155;
                MR_Integer hlds__hlds_statistics__Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                MR_Integer hlds__hlds_statistics__Var_991 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                MR_Integer hlds__hlds_statistics__Var_992 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_993 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_994 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                MR_Integer hlds__hlds_statistics__Var_995 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                MR_Integer hlds__hlds_statistics__Var_996 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                MR_Integer hlds__hlds_statistics__Var_997 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                MR_Integer hlds__hlds_statistics__Var_998 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                MR_Integer hlds__hlds_statistics__Var_999 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                MR_Integer hlds__hlds_statistics__Var_1000 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                MR_Integer hlds__hlds_statistics__Var_1001 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                MR_Integer hlds__hlds_statistics__Var_1002 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                MR_Integer hlds__hlds_statistics__Var_1003 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                MR_Integer hlds__hlds_statistics__Var_1004 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                MR_Integer hlds__hlds_statistics__Var_1005 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                MR_Integer hlds__hlds_statistics__Var_1006 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                MR_Integer hlds__hlds_statistics__Var_1007 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                MR_Integer hlds__hlds_statistics__Var_1008 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                MR_Integer hlds__hlds_statistics__Var_1009 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                MR_Integer hlds__hlds_statistics__Var_1010 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                MR_Integer hlds__hlds_statistics__Var_1011 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                MR_Integer hlds__hlds_statistics__Var_1012 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                MR_Integer hlds__hlds_statistics__Var_1013 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                MR_Integer hlds__hlds_statistics__Var_1014 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

                hlds__hlds_statistics__Var_155 = (hlds__hlds_statistics__Var_156 + (MR_Integer) 1);
                {
                  hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 0) = ((MR_Box) (hlds__hlds_statistics__Var_991));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 1) = ((MR_Box) (hlds__hlds_statistics__Var_992));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 2) = ((MR_Box) (hlds__hlds_statistics__Var_993));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 3) = ((MR_Box) (hlds__hlds_statistics__Var_994));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 4) = ((MR_Box) (hlds__hlds_statistics__Var_995));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 5) = ((MR_Box) (hlds__hlds_statistics__Var_996));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 6) = ((MR_Box) (hlds__hlds_statistics__Var_997));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 7) = ((MR_Box) (hlds__hlds_statistics__Var_998));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 8) = ((MR_Box) (hlds__hlds_statistics__Var_999));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1000));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1001));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1002));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1003));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1004));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1005));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 15) = ((MR_Box) (hlds__hlds_statistics__Var_155));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1006));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1007));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1008));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1009));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1010));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1011));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1012));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1013));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1014));
                }
                hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(hlds__hlds_statistics__Disjs_76, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__hlds_statistics__SwitchVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                MR_Word hlds__hlds_statistics__Cases_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147;
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148;
                MR_Integer hlds__hlds_statistics__Var_149;
                MR_Integer hlds__hlds_statistics__Var_150;
                MR_Integer hlds__hlds_statistics__Var_1040;
                MR_Integer hlds__hlds_statistics__Var_1041;
                MR_Integer hlds__hlds_statistics__Var_1042;
                MR_Integer hlds__hlds_statistics__Var_1043;
                MR_Integer hlds__hlds_statistics__Var_1044;
                MR_Integer hlds__hlds_statistics__Var_1045;
                MR_Integer hlds__hlds_statistics__Var_1046;
                MR_Integer hlds__hlds_statistics__Var_1047;
                MR_Integer hlds__hlds_statistics__Var_1048;
                MR_Integer hlds__hlds_statistics__Var_1049;
                MR_Integer hlds__hlds_statistics__Var_1050;
                MR_Integer hlds__hlds_statistics__Var_1051;
                MR_Integer hlds__hlds_statistics__Var_1052;
                MR_Integer hlds__hlds_statistics__Var_1053;
                MR_Integer hlds__hlds_statistics__Var_1054;
                MR_Integer hlds__hlds_statistics__Var_1055;
                MR_Integer hlds__hlds_statistics__Var_1056;
                MR_Integer hlds__hlds_statistics__Var_1057;
                MR_Integer hlds__hlds_statistics__Var_1058;
                MR_Integer hlds__hlds_statistics__Var_1059;
                MR_Integer hlds__hlds_statistics__Var_1060;
                MR_Integer hlds__hlds_statistics__Var_1061;
                MR_Integer hlds__hlds_statistics__Var_1062;
                MR_Integer hlds__hlds_statistics__Var_1063;
                MR_Word hlds__hlds_statistics__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));

                mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], ((MR_Box) (hlds__hlds_statistics__SwitchVar_77)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147);
                hlds__hlds_statistics__Var_1040 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                hlds__hlds_statistics__Var_1041 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                hlds__hlds_statistics__Var_1042 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                hlds__hlds_statistics__Var_1043 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                hlds__hlds_statistics__Var_1044 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                hlds__hlds_statistics__Var_1045 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                hlds__hlds_statistics__Var_1046 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                hlds__hlds_statistics__Var_1047 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                hlds__hlds_statistics__Var_1048 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                hlds__hlds_statistics__Var_1049 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                hlds__hlds_statistics__Var_1050 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                hlds__hlds_statistics__Var_1051 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                hlds__hlds_statistics__Var_1052 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                hlds__hlds_statistics__Var_1053 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                hlds__hlds_statistics__Var_1054 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                hlds__hlds_statistics__Var_1055 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                hlds__hlds_statistics__Var_1056 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                hlds__hlds_statistics__Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                hlds__hlds_statistics__Var_1057 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                hlds__hlds_statistics__Var_1058 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                hlds__hlds_statistics__Var_1059 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                hlds__hlds_statistics__Var_1060 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                hlds__hlds_statistics__Var_1061 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                hlds__hlds_statistics__Var_1062 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                hlds__hlds_statistics__Var_1063 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                hlds__hlds_statistics__Var_149 = (hlds__hlds_statistics__Var_150 + (MR_Integer) 1);
                {
                  hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1040));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1041));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1042));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1043));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1044));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1045));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1046));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1047));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1048));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1049));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1050));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1051));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1052));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1053));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1054));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1055));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1056));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 17) = ((MR_Box) (hlds__hlds_statistics__Var_149));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1057));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1058));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1059));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1060));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1061));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1062));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1063));
                }
                hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(hlds__hlds_statistics__Cases_79, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;
                MR_Integer hlds__hlds_statistics__Var_126;
                MR_Integer hlds__hlds_statistics__Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                MR_Word hlds__hlds_statistics__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                MR_Integer hlds__hlds_statistics__Var_1188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_1189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                MR_Integer hlds__hlds_statistics__Var_1191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                MR_Integer hlds__hlds_statistics__Var_1192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                MR_Integer hlds__hlds_statistics__Var_1193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                MR_Integer hlds__hlds_statistics__Var_1194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                MR_Integer hlds__hlds_statistics__Var_1195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                MR_Integer hlds__hlds_statistics__Var_1196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                MR_Integer hlds__hlds_statistics__Var_1197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                MR_Integer hlds__hlds_statistics__Var_1198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                MR_Integer hlds__hlds_statistics__Var_1199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                MR_Integer hlds__hlds_statistics__Var_1200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                MR_Integer hlds__hlds_statistics__Var_1201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                MR_Integer hlds__hlds_statistics__Var_1202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                MR_Integer hlds__hlds_statistics__Var_1203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                MR_Integer hlds__hlds_statistics__Var_1204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                MR_Integer hlds__hlds_statistics__Var_1205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                MR_Integer hlds__hlds_statistics__Var_1206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                MR_Integer hlds__hlds_statistics__Var_1207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                MR_Integer hlds__hlds_statistics__Var_1208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                MR_Integer hlds__hlds_statistics__Var_1209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                MR_Integer hlds__hlds_statistics__Var_1210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                MR_Word hlds__hlds_statistics__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

                hlds__hlds_statistics__Var_126 = (hlds__hlds_statistics__Var_127 + (MR_Integer) 1);
                {
                  hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1187));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1188));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1189));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1190));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1191));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1192));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1193));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1194));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1195));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1196));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1197));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1198));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1199));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1200));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1201));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1202));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1203));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1204));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1205));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1206));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1207));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 21) = ((MR_Box) (hlds__hlds_statistics__Var_126));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1208));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1209));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1210));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__SubGoal_252;
                  MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;

                  hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
                  hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
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
                MR_Integer hlds__hlds_statistics__Var_138;
                MR_Integer hlds__hlds_statistics__Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141;
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142;
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;
                MR_Integer hlds__hlds_statistics__Var_1089 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
                MR_Integer hlds__hlds_statistics__Var_1090 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_1091 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1092 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                MR_Integer hlds__hlds_statistics__Var_1093 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                MR_Integer hlds__hlds_statistics__Var_1094 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                MR_Integer hlds__hlds_statistics__Var_1095 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                MR_Integer hlds__hlds_statistics__Var_1096 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                MR_Integer hlds__hlds_statistics__Var_1097 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                MR_Integer hlds__hlds_statistics__Var_1098 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                MR_Integer hlds__hlds_statistics__Var_1099 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                MR_Integer hlds__hlds_statistics__Var_1100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                MR_Integer hlds__hlds_statistics__Var_1101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                MR_Integer hlds__hlds_statistics__Var_1102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                MR_Integer hlds__hlds_statistics__Var_1103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                MR_Integer hlds__hlds_statistics__Var_1104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                MR_Integer hlds__hlds_statistics__Var_1105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                MR_Integer hlds__hlds_statistics__Var_1106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                MR_Integer hlds__hlds_statistics__Var_1107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                MR_Integer hlds__hlds_statistics__Var_1108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                MR_Integer hlds__hlds_statistics__Var_1109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                MR_Integer hlds__hlds_statistics__Var_1110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                MR_Integer hlds__hlds_statistics__Var_1111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                MR_Integer hlds__hlds_statistics__Var_1112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                MR_Word hlds__hlds_statistics__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

                hlds__hlds_statistics__Var_138 = (hlds__hlds_statistics__Var_139 + (MR_Integer) 1);
                {
                  hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1089));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1090));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1091));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1092));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1093));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1094));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1095));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1096));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1097));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1098));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1099));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1100));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1101));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1102));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1103));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1104));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1105));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1106));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1107));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 19) = ((MR_Box) (hlds__hlds_statistics__Var_138));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1108));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1109));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1110));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1111));
                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1112));
                }
                hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__CondGoal_81, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, &hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142);
                hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__ThenGoal_82, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143, hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142, &hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__ElseGoal_83;
                  MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
                  MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;

                  hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
                  hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98;
                  hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__hlds_statistics__ShortHand_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_1430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
                MR_Integer hlds__hlds_statistics__Var_1431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
                MR_Integer hlds__hlds_statistics__Var_1432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
                MR_Integer hlds__hlds_statistics__Var_1433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
                MR_Integer hlds__hlds_statistics__Var_1434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
                MR_Integer hlds__hlds_statistics__Var_1435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
                MR_Integer hlds__hlds_statistics__Var_1436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
                MR_Integer hlds__hlds_statistics__Var_1437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
                MR_Integer hlds__hlds_statistics__Var_1438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
                MR_Integer hlds__hlds_statistics__Var_1439 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
                MR_Integer hlds__hlds_statistics__Var_1440 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
                MR_Integer hlds__hlds_statistics__Var_1441 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
                MR_Integer hlds__hlds_statistics__Var_1442 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
                MR_Integer hlds__hlds_statistics__Var_1443 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
                MR_Integer hlds__hlds_statistics__Var_1444 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
                MR_Integer hlds__hlds_statistics__Var_1445 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
                MR_Integer hlds__hlds_statistics__Var_1446 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
                MR_Integer hlds__hlds_statistics__Var_1447 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
                MR_Integer hlds__hlds_statistics__Var_1448 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
                MR_Integer hlds__hlds_statistics__Var_1449 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
                MR_Integer hlds__hlds_statistics__Var_1450 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
                MR_Integer hlds__hlds_statistics__Var_1451 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
                MR_Integer hlds__hlds_statistics__Var_1452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
                MR_Integer hlds__hlds_statistics__Var_1453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
                MR_Integer hlds__hlds_statistics__Var_1454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) hlds__hlds_statistics__ShortHand_86)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__hlds_statistics__GoalA_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                      MR_Word hlds__hlds_statistics__GoalB_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117;
                      MR_Integer hlds__hlds_statistics__Var_118 = (hlds__hlds_statistics__Var_1432 + (MR_Integer) 1);
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

                      {
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1454));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1453));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1452));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1451));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1450));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1449));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1448));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1447));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1446));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1445));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1444));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1443));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1442));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1441));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1440));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1439));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1438));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1437));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1436));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1435));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1434));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1433));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 22) = ((MR_Box) (hlds__hlds_statistics__Var_118));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1431));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1430));
                      }
                      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__GoalA_87, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121, hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, &hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122);
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__GoalB_88;
                        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
                        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

                        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
                        hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_UsedVars_0_98;
                        hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__hlds_statistics__MainGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 4)));
                      MR_Word hlds__hlds_statistics__OrElseGoals_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 5)));
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108;
                      MR_Integer hlds__hlds_statistics__Var_109 = (hlds__hlds_statistics__Var_1431 + (MR_Integer) 1);
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112;
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113;
                      MR_Word hlds__hlds_statistics__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                      MR_Word hlds__hlds_statistics__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
                      MR_Word hlds__hlds_statistics__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
                      MR_Word hlds__hlds_statistics__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 3)));
                      MR_Word hlds__hlds_statistics__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 6)));
                      MR_Box hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99;
                      MR_Box hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101;

                      {
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1454));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1453));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1452));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1451));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1450));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1449));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1448));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1447));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1446));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1445));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1444));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1443));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1442));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1441));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1440));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1439));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1438));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1437));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1436));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1435));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1434));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1433));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1432));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 23) = ((MR_Box) (hlds__hlds_statistics__Var_109));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 24) = ((MR_Box) (hlds__hlds_statistics__Var_1430));
                      }
                      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__MainGoal_93, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112, hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, &hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113);
                      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_statistics_scalar_common_2[1], (MR_Word) &hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0, (MR_Word) &hlds__hlds_statistics_scalar_common_1[4], hlds__hlds_statistics__OrElseGoals_94, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112)), &hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113)), &hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
                      *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = ((MR_Word) hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99);
                      *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = ((MR_Word) hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;
                      MR_Integer hlds__hlds_statistics__Var_103 = (hlds__hlds_statistics__Var_1430 + (MR_Integer) 1);
                      MR_Word hlds__hlds_statistics__SubGoal_253 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
                      MR_Word hlds__hlds_statistics__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
                      MR_Word hlds__hlds_statistics__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));

                      {
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 0) = ((MR_Box) (hlds__hlds_statistics__Var_1454));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 1) = ((MR_Box) (hlds__hlds_statistics__Var_1453));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 2) = ((MR_Box) (hlds__hlds_statistics__Var_1452));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 3) = ((MR_Box) (hlds__hlds_statistics__Var_1451));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 4) = ((MR_Box) (hlds__hlds_statistics__Var_1450));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 5) = ((MR_Box) (hlds__hlds_statistics__Var_1449));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 6) = ((MR_Box) (hlds__hlds_statistics__Var_1448));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 7) = ((MR_Box) (hlds__hlds_statistics__Var_1447));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 8) = ((MR_Box) (hlds__hlds_statistics__Var_1446));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 9) = ((MR_Box) (hlds__hlds_statistics__Var_1445));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 10) = ((MR_Box) (hlds__hlds_statistics__Var_1444));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 11) = ((MR_Box) (hlds__hlds_statistics__Var_1443));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 12) = ((MR_Box) (hlds__hlds_statistics__Var_1442));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 13) = ((MR_Box) (hlds__hlds_statistics__Var_1441));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 14) = ((MR_Box) (hlds__hlds_statistics__Var_1440));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 15) = ((MR_Box) (hlds__hlds_statistics__Var_1439));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 16) = ((MR_Box) (hlds__hlds_statistics__Var_1438));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 17) = ((MR_Box) (hlds__hlds_statistics__Var_1437));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 18) = ((MR_Box) (hlds__hlds_statistics__Var_1436));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 19) = ((MR_Box) (hlds__hlds_statistics__Var_1435));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 20) = ((MR_Box) (hlds__hlds_statistics__Var_1434));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 21) = ((MR_Box) (hlds__hlds_statistics__Var_1433));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 22) = ((MR_Box) (hlds__hlds_statistics__Var_1432));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 23) = ((MR_Box) (hlds__hlds_statistics__Var_1431));
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 24) = ((MR_Box) (hlds__hlds_statistics__Var_103));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__hlds_statistics__next_value_of_Goal_6 = hlds__hlds_statistics__SubGoal_253;
                        MR_Word hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;

                        hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__next_value_of_STATE_VARIABLE_Stats_0_100;
                        hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__next_value_of_Goal_6;
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
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
  MR_Box hlds__hlds_statistics__closure_arg,
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
  MR_Box * hlds__hlds_statistics__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;

    hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
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

    hlds__hlds_statistics__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_statistics__PredInfo_11);
    if (!(hlds__hlds_statistics__succeeded))
      hlds__hlds_statistics__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_statistics__PredInfo_11);
    if (!(hlds__hlds_statistics__succeeded))
    {
      MR_Word hlds__hlds_statistics__ProcTable_13;
      MR_Word hlds__hlds_statistics__Procs_14;
      MR_Word hlds__hlds_statistics__Var_17;
      MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_statistics__PredInfo_11, &hlds__hlds_statistics__ProcTable_13);
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_statistics__ProcTable_13, &hlds__hlds_statistics__Procs_14);
      {
        hlds__hlds_statistics__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_7));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_8));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_9));
        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_17, 6) = ((MR_Box) (hlds__hlds_statistics__PredId_10));
      }
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__Var_17, hlds__hlds_statistics__Procs_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16);
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

    hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
  }
}

void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(
  MR_Word hlds__hlds_statistics__OutStream_6,
  MR_String hlds__hlds_statistics__Msg_7,
  MR_Word hlds__hlds_statistics__ModuleInfo_8)
{
  {
    MR_Word hlds__hlds_statistics__ModuleSymName_10;
    MR_String hlds__hlds_statistics__ModuleName_11;
    MR_Word hlds__hlds_statistics__PredTable_12;
    MR_Word hlds__hlds_statistics__Preds_13;
    MR_Word hlds__hlds_statistics__Var_21;
    MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__ModuleSymName_10);
    hlds__hlds_statistics__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_statistics__ModuleSymName_10);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "MODULE ");
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, hlds__hlds_statistics__ModuleName_11);
    mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "\n");
    hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__PredTable_12);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_statistics__PredTable_12, &hlds__hlds_statistics__Preds_13);
    {
      hlds__hlds_statistics__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Var_21, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__Var_21, hlds__hlds_statistics__Preds_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15);
  }
}

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
  MR_Box hlds__hlds_statistics__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_statistics__succeeded;

    hlds__hlds_statistics__succeeded = hlds__hlds_statistics____Unify____proc_stats_0_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2));
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

    hlds__hlds_statistics____Compare____proc_stats_0_0(&hlds__hlds_statistics__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), ((MR_Word) hlds__hlds_statistics__wrapper_arg_3));
    *hlds__hlds_statistics__wrapper_arg_1 = ((MR_Box) (hlds__hlds_statistics__conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_statistics__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_statistics. */
