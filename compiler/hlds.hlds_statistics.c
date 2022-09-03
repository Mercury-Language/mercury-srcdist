/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version rotd-2022-09-03
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


// :- module hlds.hlds_statistics.
// :- implementation.

/*
INIT mercury__hlds__hlds_statistics__init
ENDINIT
*/

#include "hlds.hlds_statistics.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word OutStream_8,
  MR_String Msg_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OutStream_8,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word OutStream_9,
  MR_Word Stats_14);

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word OutStream_10,
  MR_String ComponentName_15,
  MR_Integer ComponentCount_16);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedVars_0_97,
  MR_Word * STATE_VARIABLE_UsedVars_98,
  MR_Word STATE_VARIABLE_Stats_0_99,
  MR_Word * STATE_VARIABLE_Stats_100);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
  MR_Word OutStream_7,
  MR_String Msg_8,
  MR_Word ModuleInfo_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_1[5][3];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_2[2][2];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][25];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][9];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][8];




static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][25] = {
  /* row   0 */
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
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0)),
    ((MR_Box) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[25] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(25),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0,
  hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_statistics____Unify____proc_stats_0_0_10001)),
  ((MR_Box) (hlds__hlds_statistics____Compare____proc_stats_0_0_10001)),
  (MR_String) "hlds.hlds_statistics",
  (MR_String) "proc_stats",
  { hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0 },
  { hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0,

};

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_78 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_79 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_78 == CastY_79);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
    MR_Integer ArgX15_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgY15_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
    MR_Integer ArgX17_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgY17_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
    MR_Integer ArgX18_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgY18_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
    MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
    MR_Integer ArgX20_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgY20_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
    MR_Integer ArgX21_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgY21_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
    MR_Integer ArgX22_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgY22_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
    MR_Integer ArgX23_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgY23_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
    MR_Integer ArgX24_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
    MR_Integer ArgY24_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
    MR_Integer ArgX25_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
    MR_Integer ArgY25_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              succeeded = (ArgX14_43 < ArgY14_44);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX14_43 > ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                succeeded = (ArgX15_46 < ArgY15_47);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX15_46 > ArgY15_47);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  succeeded = (ArgX16_49 < ArgY16_50);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX16_49 > ArgY16_50);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    succeeded = (ArgX17_52 < ArgY17_53);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (ArgX17_52 > ArgY17_53);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      succeeded = (ArgX18_55 < ArgY18_56);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (ArgX18_55 > ArgY18_56);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        succeeded = (ArgX19_58 < ArgY19_59);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (ArgX19_58 > ArgY19_59);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          succeeded = (ArgX20_61 < ArgY20_62);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (ArgX20_61 > ArgY20_62);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            succeeded = (ArgX21_64 < ArgY21_65);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (ArgX21_64 > ArgY21_65);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              succeeded = (ArgX22_67 < ArgY22_68);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (ArgX22_67 > ArgY22_68);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                succeeded = (ArgX23_70 < ArgY23_71);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (ArgX23_70 > ArgY23_71);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  succeeded = (ArgX24_73 < ArgY24_74);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (ArgX24_73 > ArgY24_74);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = MR_TRUE;
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                      {
                                                        SubResult24_75 = (MR_Integer) 0;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    succeeded = (ArgX25_76 < ArgY25_77);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = (MR_Integer) 1;
                                                    else
                                                    {
                                                      succeeded = (ArgX25_76 > ArgY25_77);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_53 == CastY_54);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
    MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
    MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
    MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
    MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
    MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
    MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
    MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
    MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
    MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
    MR_Integer ArgX25_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
    MR_Integer ArgY25_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX24_49 == ArgY24_50);
                                                  if (succeeded)
                                                    succeeded = (ArgX25_51 == ArgY25_52);
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
  return succeeded;
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
  MR_Word OutStream_8,
  MR_String Msg_9,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word HeadVar__5_5)
{
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(OutStream_8, ModuleInfo_10, PredId_11, HeadVar__5_5);
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OutStream_8,
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word HeadVar__5_5)
{
  MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
  MR_Word ProcInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
  MR_Word NamePieces_15;
  MR_String Name_16;
  MR_Word Goal_17;
  MR_Word UsedVars0_18;
  MR_Word UsedVars_20;
  MR_Word Stats_21;
  MR_Word VarTable_22;
  MR_Word Var_26;
  MR_Integer PredIdInt_28;
  MR_Integer ProcIdInt_29;
  MR_Integer VarTableCount_30;
  MR_Integer NumUsedVars_31;
  MR_String Var_52;
  MR_String Var_62;
  MR_String Var_76;
  MR_String Var_86;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredId_11));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ProcId_12));
  }
  NamePieces_15 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_10, (MR_Integer) 1, Var_26);
  Name_16 = parse_tree__error_util__error_pieces_to_string_1_f_0(NamePieces_15);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_13, &Goal_17);
  UsedVars0_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]));
  hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(Goal_17, UsedVars0_18, &UsedVars_20, (MR_Word) (&hlds__hlds_statistics_scalar_common_3[0]), &Stats_21);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_13, &VarTable_22);
  PredIdInt_28 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_11);
  ProcIdInt_29 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_12);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "PROC ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_4[0]), PredIdInt_28, &Var_52);
  mercury__io__write_string_4_p_0(OutStream_8, Var_52);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_4[0]), ProcIdInt_29, &Var_62);
  mercury__io__write_string_4_p_0(OutStream_8, Var_62);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(OutStream_8, Name_16);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(OutStream_8, Stats_21);
  parse_tree__var_table__var_table_count_2_p_0(VarTable_22, &VarTableCount_30);
  NumUsedVars_31 = mercury__set_tree234__count_1_f_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), UsedVars_20);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "VARS ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_4[0]), VarTableCount_30, &Var_76);
  mercury__io__write_string_4_p_0(OutStream_8, Var_76);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_4[0]), NumUsedVars_31, &Var_86);
  mercury__io__write_string_4_p_0(OutStream_8, Var_86);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word OutStream_9,
  MR_Word Stats_14)
{
  MR_Integer UnifyConstructs_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 0))));
  MR_Integer UnifyDeconstructs_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 1))));
  MR_Integer UnifyAssigns_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 2))));
  MR_Integer UnifyTests_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 3))));
  MR_Integer UnifyComplicateds_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 4))));
  MR_Integer PlainCalls_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 5))));
  MR_Integer ForeignCalls_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 6))));
  MR_Integer HOCalls_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 7))));
  MR_Integer MethodCalls_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 8))));
  MR_Integer EventCalls_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 9))));
  MR_Integer Casts_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 10))));
  MR_Integer PlainConjs_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 11))));
  MR_Integer PlainConjuncts_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 12))));
  MR_Integer ParallelConjs_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 13))));
  MR_Integer ParallelConjuncts_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 14))));
  MR_Integer Disjs_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 15))));
  MR_Integer Disjuncts_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 16))));
  MR_Integer Switches_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 17))));
  MR_Integer SwitchArms_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 18))));
  MR_Integer IfThenElses_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 19))));
  MR_Integer Negations_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 20))));
  MR_Integer Scopes_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 21))));
  MR_Integer BiImplications_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 22))));
  MR_Integer AtomicGoals_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 23))));
  MR_Integer TryGoals_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 24))));
  MR_Integer Total_41;
  MR_Integer Var_44;
  MR_Integer Var_45;
  MR_Integer Var_46;
  MR_Integer Var_47;
  MR_Integer Var_48;
  MR_Integer Var_49;
  MR_Integer Var_50;
  MR_Integer Var_51;
  MR_Integer Var_52;
  MR_Integer Var_53;
  MR_Integer Var_54;
  MR_Integer Var_55;
  MR_Integer Var_56;
  MR_Integer Var_57;
  MR_Integer Var_58;
  MR_Integer Var_59;
  MR_Integer Var_60;
  MR_Integer Var_61;
  MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) UnifyConstructs_16 + (MR_Unsigned) UnifyDeconstructs_17);

  Var_61 = (MR_Integer) ((MR_Unsigned) Var_62 + (MR_Unsigned) UnifyAssigns_18);
  Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) UnifyTests_19);
  Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) UnifyComplicateds_20);
  Var_58 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) PlainCalls_21);
  Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 + (MR_Unsigned) ForeignCalls_22);
  Var_56 = (MR_Integer) ((MR_Unsigned) Var_57 + (MR_Unsigned) HOCalls_23);
  Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) MethodCalls_24);
  Var_54 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) EventCalls_25);
  Var_53 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) Casts_26);
  Var_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) PlainConjs_27);
  Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) ParallelConjs_29);
  Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) Disjs_31);
  Var_49 = (MR_Integer) ((MR_Unsigned) Var_50 + (MR_Unsigned) Switches_33);
  Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 + (MR_Unsigned) IfThenElses_35);
  Var_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Negations_36);
  Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) Scopes_37);
  Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) BiImplications_38);
  Var_44 = (MR_Integer) ((MR_Unsigned) Var_45 + (MR_Unsigned) AtomicGoals_39);
  Total_41 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) TryGoals_40);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "unify_contructs", UnifyConstructs_16);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "unify_decontructs", UnifyDeconstructs_17);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "unify_assigns", UnifyAssigns_18);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "unify_tests", UnifyTests_19);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "unify_complicateds", UnifyComplicateds_20);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "plain_calls", PlainCalls_21);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "foreign_calls", ForeignCalls_22);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "ho_calls", HOCalls_23);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "method_calls", MethodCalls_24);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "event_calls", EventCalls_25);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "casts", Casts_26);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "plain_conjs", PlainConjs_27);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "plain_conjuncts", PlainConjuncts_28);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "parallel_conjs", ParallelConjs_29);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "parallel_conjuncts", ParallelConjuncts_30);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "disjs", Disjs_31);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "disjunctions", Disjuncts_32);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "switches", Switches_33);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "switch_arms", SwitchArms_34);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "if_then_elses", IfThenElses_35);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "negations", Negations_36);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "scopes", Scopes_37);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "bi_implications", BiImplications_38);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "atomic_goals", AtomicGoals_39);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "try_goals", TryGoals_40);
  hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "total_size", Total_41);
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word OutStream_10,
  MR_String ComponentName_15,
  MR_Integer ComponentCount_16)
{
  MR_bool succeeded = (ComponentCount_16 > (MR_Integer) 0);

  if (succeeded)
  {
    MR_String Var_34;

    mercury__io__write_string_4_p_0(OutStream_10, (MR_String) "GOAL ");
    mercury__io__write_string_4_p_0(OutStream_10, ComponentName_15);
    mercury__io__write_string_4_p_0(OutStream_10, (MR_String) ": ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_4[0]), ComponentCount_16, &Var_34);
    mercury__io__write_string_4_p_0(OutStream_10, Var_34);
    mercury__io__write_string_4_p_0(OutStream_10, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_UsedVars_98;
  MR_Word conv2_STATE_VARIABLE_Stats_100;

  hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_UsedVars_98, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Stats_100);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_UsedVars_98));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Stats_100));
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedVars_0_97,
  MR_Word * STATE_VARIABLE_UsedVars_98,
  MR_Word STATE_VARIABLE_Stats_0_99,
  MR_Word * STATE_VARIABLE_Stats_100)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_83 = (MR_Word) ((MR_Word) (GoalExpr_9));
          MR_Word STATE_VARIABLE_Stats_211_211;
          MR_Integer Var_212;
          MR_Integer Var_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
          MR_Integer Var_1138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
          MR_Integer Var_1139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
          MR_Integer Var_1140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
          MR_Integer Var_1141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
          MR_Integer Var_1142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
          MR_Integer Var_1143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
          MR_Integer Var_1144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
          MR_Integer Var_1145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
          MR_Integer Var_1146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
          MR_Integer Var_1147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
          MR_Integer Var_1148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
          MR_Integer Var_1149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
          MR_Integer Var_1150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
          MR_Integer Var_1151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
          MR_Integer Var_1152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
          MR_Integer Var_1153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
          MR_Integer Var_1154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
          MR_Integer Var_1155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
          MR_Integer Var_1156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
          MR_Integer Var_1157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
          MR_Integer Var_1158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
          MR_Integer Var_1159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
          MR_Integer Var_1160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
          MR_Integer Var_1161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

          Var_212 = (MR_Integer) ((MR_Unsigned) Var_213 + (MR_Unsigned) 1);
          {
            STATE_VARIABLE_Stats_211_211 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 0) = ((MR_Box) (Var_1138));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 1) = ((MR_Box) (Var_1139));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 2) = ((MR_Box) (Var_1140));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 3) = ((MR_Box) (Var_1141));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 4) = ((MR_Box) (Var_1142));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 5) = ((MR_Box) (Var_1143));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 6) = ((MR_Box) (Var_1144));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 7) = ((MR_Box) (Var_1145));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 8) = ((MR_Box) (Var_1146));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 9) = ((MR_Box) (Var_1147));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 10) = ((MR_Box) (Var_1148));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 11) = ((MR_Box) (Var_1149));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 12) = ((MR_Box) (Var_1150));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 13) = ((MR_Box) (Var_1151));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 14) = ((MR_Box) (Var_1152));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 15) = ((MR_Box) (Var_1153));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 16) = ((MR_Box) (Var_1154));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 17) = ((MR_Box) (Var_1155));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 18) = ((MR_Box) (Var_1156));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 19) = ((MR_Box) (Var_1157));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 20) = ((MR_Box) (Var_212));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 21) = ((MR_Box) (Var_1158));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 22) = ((MR_Box) (Var_1159));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 23) = ((MR_Box) (Var_1160));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 24) = ((MR_Box) (Var_1161));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoal_83;
          next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_211_211;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_9, (MR_Integer) 0))));
          MR_Word RHS_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_9, (MR_Integer) 1))));
          MR_Word Uni_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_9, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Uni_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_14, (MR_Integer) 0))));
                MR_Word ArgVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_14, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_UsedVars_101_101;
                MR_Integer Var_104;
                MR_Integer Var_105;
                MR_Integer Var_256;
                MR_Integer Var_257;
                MR_Integer Var_258;
                MR_Integer Var_259;
                MR_Integer Var_260;
                MR_Integer Var_261;
                MR_Integer Var_262;
                MR_Integer Var_263;
                MR_Integer Var_264;
                MR_Integer Var_265;
                MR_Integer Var_266;
                MR_Integer Var_267;
                MR_Integer Var_268;
                MR_Integer Var_269;
                MR_Integer Var_270;
                MR_Integer Var_271;
                MR_Integer Var_272;
                MR_Integer Var_273;
                MR_Integer Var_274;
                MR_Integer Var_275;
                MR_Integer Var_276;
                MR_Integer Var_277;
                MR_Integer Var_278;
                MR_Integer Var_279;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (CellVar_16)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_101_101);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_18, STATE_VARIABLE_UsedVars_101_101, STATE_VARIABLE_UsedVars_98);
                Var_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                Var_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                Var_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                Var_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                Var_259 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                Var_260 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                Var_261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                Var_262 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                Var_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                Var_264 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                Var_265 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                Var_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                Var_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                Var_268 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                Var_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                Var_270 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                Var_271 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                Var_272 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                Var_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                Var_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                Var_275 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                Var_276 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                Var_277 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                Var_278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                Var_279 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                Var_104 = (MR_Integer) ((MR_Unsigned) Var_105 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_100 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_104));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_256));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_257));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_258));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_259));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_260));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_261));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_262));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_263));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_264));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_265));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_266));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_267));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_268));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_269));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_270));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_271));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_272));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_273));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_274));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_275));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_276));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_277));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_278));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_279));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_UsedVars_107_107;
                MR_Integer Var_110;
                MR_Integer Var_111;
                MR_Word CellVar_246 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_14, (MR_Integer) 0))));
                MR_Word ArgVars_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_14, (MR_Integer) 2))));
                MR_Integer Var_305;
                MR_Integer Var_306;
                MR_Integer Var_307;
                MR_Integer Var_308;
                MR_Integer Var_309;
                MR_Integer Var_310;
                MR_Integer Var_311;
                MR_Integer Var_312;
                MR_Integer Var_313;
                MR_Integer Var_314;
                MR_Integer Var_315;
                MR_Integer Var_316;
                MR_Integer Var_317;
                MR_Integer Var_318;
                MR_Integer Var_319;
                MR_Integer Var_320;
                MR_Integer Var_321;
                MR_Integer Var_322;
                MR_Integer Var_323;
                MR_Integer Var_324;
                MR_Integer Var_325;
                MR_Integer Var_326;
                MR_Integer Var_327;
                MR_Integer Var_328;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (CellVar_246)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_107_107);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_247, STATE_VARIABLE_UsedVars_107_107, STATE_VARIABLE_UsedVars_98);
                Var_305 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                Var_306 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                Var_307 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                Var_308 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                Var_309 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                Var_310 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                Var_311 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                Var_312 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                Var_313 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                Var_314 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                Var_315 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                Var_316 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                Var_317 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                Var_318 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                Var_319 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                Var_320 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                Var_321 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                Var_322 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                Var_323 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                Var_324 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                Var_325 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                Var_326 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                Var_327 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                Var_328 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                Var_110 = (MR_Integer) ((MR_Unsigned) Var_111 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_100 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_305));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_306));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_307));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_308));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_309));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_310));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_311));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_312));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_313));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_314));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_315));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_316));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_317));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_318));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_319));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_320));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_321));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_322));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_323));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_324));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_325));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_326));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_327));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_328));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_14, (MR_Integer) 0))));
                MR_Word FromVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_14, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_UsedVars_113_113;
                MR_Integer Var_116;
                MR_Integer Var_117;
                MR_Integer Var_354;
                MR_Integer Var_355;
                MR_Integer Var_356;
                MR_Integer Var_357;
                MR_Integer Var_358;
                MR_Integer Var_359;
                MR_Integer Var_360;
                MR_Integer Var_361;
                MR_Integer Var_362;
                MR_Integer Var_363;
                MR_Integer Var_364;
                MR_Integer Var_365;
                MR_Integer Var_366;
                MR_Integer Var_367;
                MR_Integer Var_368;
                MR_Integer Var_369;
                MR_Integer Var_370;
                MR_Integer Var_371;
                MR_Integer Var_372;
                MR_Integer Var_373;
                MR_Integer Var_374;
                MR_Integer Var_375;
                MR_Integer Var_376;
                MR_Integer Var_377;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (ToVar_27)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_113_113);
                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (FromVar_28)), STATE_VARIABLE_UsedVars_113_113, STATE_VARIABLE_UsedVars_98);
                Var_354 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                Var_355 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                Var_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                Var_356 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                Var_357 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                Var_358 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                Var_359 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                Var_360 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                Var_361 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                Var_362 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                Var_363 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                Var_364 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                Var_365 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                Var_366 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                Var_367 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                Var_368 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                Var_369 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                Var_370 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                Var_371 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                Var_372 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                Var_373 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                Var_374 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                Var_375 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                Var_376 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                Var_377 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                Var_116 = (MR_Integer) ((MR_Unsigned) Var_117 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_100 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_354));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_355));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_116));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_356));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_357));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_358));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_359));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_360));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_361));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_362));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_363));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_364));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_365));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_366));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_367));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_368));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_369));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_370));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_371));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_372));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_373));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_374));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_375));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_376));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_377));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word VarA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_14, (MR_Integer) 1))));
                    MR_Word VarB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_14, (MR_Integer) 2))));
                    MR_Word STATE_VARIABLE_UsedVars_119_119;
                    MR_Integer Var_122;
                    MR_Integer Var_123;
                    MR_Integer Var_403;
                    MR_Integer Var_404;
                    MR_Integer Var_405;
                    MR_Integer Var_406;
                    MR_Integer Var_407;
                    MR_Integer Var_408;
                    MR_Integer Var_409;
                    MR_Integer Var_410;
                    MR_Integer Var_411;
                    MR_Integer Var_412;
                    MR_Integer Var_413;
                    MR_Integer Var_414;
                    MR_Integer Var_415;
                    MR_Integer Var_416;
                    MR_Integer Var_417;
                    MR_Integer Var_418;
                    MR_Integer Var_419;
                    MR_Integer Var_420;
                    MR_Integer Var_421;
                    MR_Integer Var_422;
                    MR_Integer Var_423;
                    MR_Integer Var_424;
                    MR_Integer Var_425;
                    MR_Integer Var_426;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (VarA_29)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_119_119);
                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (VarB_30)), STATE_VARIABLE_UsedVars_119_119, STATE_VARIABLE_UsedVars_98);
                    Var_403 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                    Var_404 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                    Var_405 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                    Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                    Var_406 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                    Var_407 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                    Var_408 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                    Var_409 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                    Var_410 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                    Var_411 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                    Var_412 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                    Var_413 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                    Var_414 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                    Var_415 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                    Var_416 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                    Var_417 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                    Var_418 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                    Var_419 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                    Var_420 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                    Var_421 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                    Var_422 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                    Var_423 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                    Var_424 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                    Var_425 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                    Var_426 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                    Var_122 = (MR_Integer) ((MR_Unsigned) Var_123 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_100 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_403));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_404));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_405));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_122));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_406));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_407));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_408));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_409));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_410));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_411));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_412));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_413));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_414));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_415));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_416));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_417));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_418));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_419));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_420));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_421));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_422));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_423));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_424));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_425));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_426));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_UsedVars_125_125;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (LHS_11)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_125_125);
                    switch (MR_tag((MR_Word) RHS_12)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word RHSVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_12, (MR_Integer) 0))));
                          MR_Integer Var_128;
                          MR_Integer Var_129;
                          MR_Integer Var_452;
                          MR_Integer Var_453;
                          MR_Integer Var_454;
                          MR_Integer Var_455;
                          MR_Integer Var_456;
                          MR_Integer Var_457;
                          MR_Integer Var_458;
                          MR_Integer Var_459;
                          MR_Integer Var_460;
                          MR_Integer Var_461;
                          MR_Integer Var_462;
                          MR_Integer Var_463;
                          MR_Integer Var_464;
                          MR_Integer Var_465;
                          MR_Integer Var_466;
                          MR_Integer Var_467;
                          MR_Integer Var_468;
                          MR_Integer Var_469;
                          MR_Integer Var_470;
                          MR_Integer Var_471;
                          MR_Integer Var_472;
                          MR_Integer Var_473;
                          MR_Integer Var_474;
                          MR_Integer Var_475;

                          mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (RHSVar_34)), STATE_VARIABLE_UsedVars_125_125, STATE_VARIABLE_UsedVars_98);
                          Var_452 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                          Var_453 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                          Var_454 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                          Var_455 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                          Var_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                          Var_456 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                          Var_457 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                          Var_458 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                          Var_459 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                          Var_460 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                          Var_461 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                          Var_462 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                          Var_463 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                          Var_464 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                          Var_465 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                          Var_466 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                          Var_467 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                          Var_468 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                          Var_469 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                          Var_470 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                          Var_471 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                          Var_472 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                          Var_473 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                          Var_474 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                          Var_475 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                          Var_128 = (MR_Integer) ((MR_Unsigned) Var_129 + (MR_Unsigned) 1);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                            *STATE_VARIABLE_Stats_100 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_452));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_453));
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_454));
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_455));
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_128));
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_456));
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_457));
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_458));
                            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_459));
                            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_460));
                            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_461));
                            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_462));
                            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_463));
                            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_464));
                            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_465));
                            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_466));
                            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_467));
                            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_468));
                            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_469));
                            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_470));
                            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_471));
                            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_472));
                            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_473));
                            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_474));
                            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_475));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word RHSVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_12, (MR_Integer) 2))));
                          MR_Integer Var_133;
                          MR_Integer Var_134;
                          MR_Integer Var_501;
                          MR_Integer Var_502;
                          MR_Integer Var_503;
                          MR_Integer Var_504;
                          MR_Integer Var_505;
                          MR_Integer Var_506;
                          MR_Integer Var_507;
                          MR_Integer Var_508;
                          MR_Integer Var_509;
                          MR_Integer Var_510;
                          MR_Integer Var_511;
                          MR_Integer Var_512;
                          MR_Integer Var_513;
                          MR_Integer Var_514;
                          MR_Integer Var_515;
                          MR_Integer Var_516;
                          MR_Integer Var_517;
                          MR_Integer Var_518;
                          MR_Integer Var_519;
                          MR_Integer Var_520;
                          MR_Integer Var_521;
                          MR_Integer Var_522;
                          MR_Integer Var_523;
                          MR_Integer Var_524;

                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), RHSVars_37, STATE_VARIABLE_UsedVars_125_125, STATE_VARIABLE_UsedVars_98);
                          Var_501 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                          Var_502 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                          Var_503 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                          Var_504 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                          Var_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                          Var_505 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                          Var_506 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                          Var_507 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                          Var_508 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                          Var_509 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                          Var_510 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                          Var_511 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                          Var_512 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                          Var_513 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                          Var_514 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                          Var_515 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                          Var_516 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                          Var_517 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                          Var_518 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                          Var_519 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                          Var_520 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                          Var_521 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                          Var_522 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                          Var_523 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                          Var_524 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                          Var_133 = (MR_Integer) ((MR_Unsigned) Var_134 + (MR_Unsigned) 1);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                            *STATE_VARIABLE_Stats_100 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_501));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_502));
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_503));
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_504));
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_133));
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_505));
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_506));
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_507));
                            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_508));
                            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_509));
                            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_510));
                            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_511));
                            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_512));
                            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_513));
                            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_514));
                            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_515));
                            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_516));
                            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_517));
                            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_518));
                            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_519));
                            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_520));
                            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_521));
                            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_522));
                            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_523));
                            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_524));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word NonLocals_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 2))));
                          MR_Word ArgVarsModes_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 3))));
                          MR_Word LambdaGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 5))));
                          MR_Word STATE_VARIABLE_UsedVars_136_136;
                          MR_Word STATE_VARIABLE_UsedVars_137_137;
                          MR_Word STATE_VARIABLE_Stats_138_138;
                          MR_Integer Var_139;
                          MR_Integer Var_140;
                          MR_Word ArgVars_248;
                          MR_Integer Var_550;
                          MR_Integer Var_551;
                          MR_Integer Var_552;
                          MR_Integer Var_553;
                          MR_Integer Var_554;
                          MR_Integer Var_555;
                          MR_Integer Var_556;
                          MR_Integer Var_557;
                          MR_Integer Var_558;
                          MR_Integer Var_559;
                          MR_Integer Var_560;
                          MR_Integer Var_561;
                          MR_Integer Var_562;
                          MR_Integer Var_563;
                          MR_Integer Var_564;
                          MR_Integer Var_565;
                          MR_Integer Var_566;
                          MR_Integer Var_567;
                          MR_Integer Var_568;
                          MR_Integer Var_569;
                          MR_Integer Var_570;
                          MR_Integer Var_571;
                          MR_Integer Var_572;
                          MR_Integer Var_573;
                          MR_Word next_value_of_Goal_6;
                          MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_97;
                          MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

                          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_43, &ArgVars_248);
                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), NonLocals_42, STATE_VARIABLE_UsedVars_125_125, &STATE_VARIABLE_UsedVars_136_136);
                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_248, STATE_VARIABLE_UsedVars_136_136, &STATE_VARIABLE_UsedVars_137_137);
                          Var_550 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                          Var_551 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                          Var_552 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                          Var_553 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                          Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                          Var_554 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                          Var_555 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                          Var_556 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                          Var_557 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                          Var_558 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                          Var_559 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                          Var_560 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                          Var_561 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                          Var_562 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                          Var_563 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                          Var_564 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                          Var_565 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                          Var_566 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                          Var_567 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                          Var_568 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                          Var_569 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                          Var_570 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                          Var_571 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                          Var_572 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                          Var_573 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                          Var_139 = (MR_Integer) ((MR_Unsigned) Var_140 + (MR_Unsigned) 1);
                          {
                            STATE_VARIABLE_Stats_138_138 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 0) = ((MR_Box) (Var_550));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 1) = ((MR_Box) (Var_551));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 2) = ((MR_Box) (Var_552));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 3) = ((MR_Box) (Var_553));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 4) = ((MR_Box) (Var_139));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 5) = ((MR_Box) (Var_554));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 6) = ((MR_Box) (Var_555));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 7) = ((MR_Box) (Var_556));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 8) = ((MR_Box) (Var_557));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 9) = ((MR_Box) (Var_558));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 10) = ((MR_Box) (Var_559));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 11) = ((MR_Box) (Var_560));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 12) = ((MR_Box) (Var_561));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 13) = ((MR_Box) (Var_562));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 14) = ((MR_Box) (Var_563));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 15) = ((MR_Box) (Var_564));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 16) = ((MR_Box) (Var_565));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 17) = ((MR_Box) (Var_566));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 18) = ((MR_Box) (Var_567));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 19) = ((MR_Box) (Var_568));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 20) = ((MR_Box) (Var_569));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 21) = ((MR_Box) (Var_570));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 22) = ((MR_Box) (Var_571));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 23) = ((MR_Box) (Var_572));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_138_138, 24) = ((MR_Box) (Var_573));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_Goal_6 = LambdaGoal_45;
                          next_value_of_STATE_VARIABLE_UsedVars_0_97 = STATE_VARIABLE_UsedVars_137_137;
                          next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_138_138;
                          Goal_6 = next_value_of_Goal_6;
                          STATE_VARIABLE_UsedVars_0_97 = next_value_of_STATE_VARIABLE_UsedVars_0_97;
                          STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
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
          MR_Integer Var_146;
          MR_Integer Var_147;
          MR_Word ArgVars_251 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 2))));
          MR_Integer Var_599;
          MR_Integer Var_600;
          MR_Integer Var_601;
          MR_Integer Var_602;
          MR_Integer Var_603;
          MR_Integer Var_604;
          MR_Integer Var_605;
          MR_Integer Var_606;
          MR_Integer Var_607;
          MR_Integer Var_608;
          MR_Integer Var_609;
          MR_Integer Var_610;
          MR_Integer Var_611;
          MR_Integer Var_612;
          MR_Integer Var_613;
          MR_Integer Var_614;
          MR_Integer Var_615;
          MR_Integer Var_616;
          MR_Integer Var_617;
          MR_Integer Var_618;
          MR_Integer Var_619;
          MR_Integer Var_620;
          MR_Integer Var_621;
          MR_Integer Var_622;

          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_251, STATE_VARIABLE_UsedVars_0_97, STATE_VARIABLE_UsedVars_98);
          Var_599 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
          Var_600 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
          Var_601 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
          Var_602 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
          Var_603 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
          Var_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
          Var_604 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
          Var_605 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
          Var_606 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
          Var_607 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
          Var_608 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
          Var_609 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
          Var_610 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
          Var_611 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
          Var_612 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
          Var_613 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
          Var_614 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
          Var_615 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
          Var_616 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
          Var_617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
          Var_618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
          Var_619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
          Var_620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
          Var_621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
          Var_622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
          Var_146 = (MR_Integer) ((MR_Unsigned) Var_147 + (MR_Unsigned) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Stats_100 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_599));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_600));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_601));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_602));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_603));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_604));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_605));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_606));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_607));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_608));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_609));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_610));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_611));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_612));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_613));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_614));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_615));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_616));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_617));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_618));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_619));
            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_620));
            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_621));
            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_622));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallKind_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_UsedVars_157_157;
              MR_Word ArgVars_253 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_253, STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_157_157);
              switch (MR_tag((MR_Word) CallKind_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word HOVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallKind_59, (MR_Integer) 0))));
                    MR_Integer Var_160;
                    MR_Integer Var_161;
                    MR_Integer Var_697;
                    MR_Integer Var_698;
                    MR_Integer Var_699;
                    MR_Integer Var_700;
                    MR_Integer Var_701;
                    MR_Integer Var_702;
                    MR_Integer Var_703;
                    MR_Integer Var_704;
                    MR_Integer Var_705;
                    MR_Integer Var_706;
                    MR_Integer Var_707;
                    MR_Integer Var_708;
                    MR_Integer Var_709;
                    MR_Integer Var_710;
                    MR_Integer Var_711;
                    MR_Integer Var_712;
                    MR_Integer Var_713;
                    MR_Integer Var_714;
                    MR_Integer Var_715;
                    MR_Integer Var_716;
                    MR_Integer Var_717;
                    MR_Integer Var_718;
                    MR_Integer Var_719;
                    MR_Integer Var_720;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (HOVar_63)), STATE_VARIABLE_UsedVars_157_157, STATE_VARIABLE_UsedVars_98);
                    Var_697 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                    Var_698 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                    Var_699 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                    Var_700 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                    Var_701 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                    Var_702 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                    Var_703 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                    Var_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                    Var_704 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                    Var_705 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                    Var_706 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                    Var_707 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                    Var_708 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                    Var_709 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                    Var_710 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                    Var_711 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                    Var_712 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                    Var_713 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                    Var_714 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                    Var_715 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                    Var_716 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                    Var_717 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                    Var_718 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                    Var_719 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                    Var_720 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                    Var_160 = (MR_Integer) ((MR_Unsigned) Var_161 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_100 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_697));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_698));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_699));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_700));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_701));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_702));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_703));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_160));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_704));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_705));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_706));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_707));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_708));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_709));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_710));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_711));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_712));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_713));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_714));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_715));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_716));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_717));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_718));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_719));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_720));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TCIVar_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_59, (MR_Integer) 0))));
                    MR_Integer Var_165;
                    MR_Integer Var_166;
                    MR_Integer Var_746;
                    MR_Integer Var_747;
                    MR_Integer Var_748;
                    MR_Integer Var_749;
                    MR_Integer Var_750;
                    MR_Integer Var_751;
                    MR_Integer Var_752;
                    MR_Integer Var_753;
                    MR_Integer Var_754;
                    MR_Integer Var_755;
                    MR_Integer Var_756;
                    MR_Integer Var_757;
                    MR_Integer Var_758;
                    MR_Integer Var_759;
                    MR_Integer Var_760;
                    MR_Integer Var_761;
                    MR_Integer Var_762;
                    MR_Integer Var_763;
                    MR_Integer Var_764;
                    MR_Integer Var_765;
                    MR_Integer Var_766;
                    MR_Integer Var_767;
                    MR_Integer Var_768;
                    MR_Integer Var_769;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (TCIVar_67)), STATE_VARIABLE_UsedVars_157_157, STATE_VARIABLE_UsedVars_98);
                    Var_746 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                    Var_747 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                    Var_748 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                    Var_749 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                    Var_750 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                    Var_751 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                    Var_752 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                    Var_753 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                    Var_166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                    Var_754 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                    Var_755 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                    Var_756 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                    Var_757 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                    Var_758 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                    Var_759 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                    Var_760 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                    Var_761 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                    Var_762 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                    Var_763 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                    Var_764 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                    Var_765 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                    Var_766 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                    Var_767 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                    Var_768 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                    Var_769 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
                    Var_165 = (MR_Integer) ((MR_Unsigned) Var_166 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_100 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_746));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_747));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_748));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_749));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_750));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_751));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_752));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_753));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_165));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_754));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_755));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_756));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_757));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_758));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_759));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_760));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_761));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_762));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_763));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_764));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_765));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_766));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_767));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_768));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_769));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer Var_169;
                    MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                    MR_Integer Var_795 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                    MR_Integer Var_796 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                    MR_Integer Var_797 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                    MR_Integer Var_798 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                    MR_Integer Var_799 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                    MR_Integer Var_800 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                    MR_Integer Var_801 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                    MR_Integer Var_802 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                    MR_Integer Var_803 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                    MR_Integer Var_804 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                    MR_Integer Var_805 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                    MR_Integer Var_806 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                    MR_Integer Var_807 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                    MR_Integer Var_808 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                    MR_Integer Var_809 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                    MR_Integer Var_810 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                    MR_Integer Var_811 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                    MR_Integer Var_812 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                    MR_Integer Var_813 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                    MR_Integer Var_814 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                    MR_Integer Var_815 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                    MR_Integer Var_816 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                    MR_Integer Var_817 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                    MR_Integer Var_818 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));

                    Var_169 = (MR_Integer) ((MR_Unsigned) Var_170 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_100 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_795));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_796));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_797));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_798));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_799));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_800));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_801));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_802));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_803));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_169));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_804));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_805));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_806));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_807));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_808));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_809));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_810));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_811));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_812));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_813));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_814));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_815));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_816));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_817));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_818));
                    }
                    *STATE_VARIABLE_UsedVars_98 = STATE_VARIABLE_UsedVars_157_157;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer Var_173;
                    MR_Integer Var_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
                    MR_Integer Var_844 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
                    MR_Integer Var_845 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
                    MR_Integer Var_846 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
                    MR_Integer Var_847 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
                    MR_Integer Var_848 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
                    MR_Integer Var_849 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
                    MR_Integer Var_850 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
                    MR_Integer Var_851 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
                    MR_Integer Var_852 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
                    MR_Integer Var_853 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
                    MR_Integer Var_854 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
                    MR_Integer Var_855 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
                    MR_Integer Var_856 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
                    MR_Integer Var_857 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
                    MR_Integer Var_858 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
                    MR_Integer Var_859 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
                    MR_Integer Var_860 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
                    MR_Integer Var_861 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
                    MR_Integer Var_862 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
                    MR_Integer Var_863 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
                    MR_Integer Var_864 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
                    MR_Integer Var_865 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
                    MR_Integer Var_866 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
                    MR_Integer Var_867 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));

                    Var_173 = (MR_Integer) ((MR_Unsigned) Var_174 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_100 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_844));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_845));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_846));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_847));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_848));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_849));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_850));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_851));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_852));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_853));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_173));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_854));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_855));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_856));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_857));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_858));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_859));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_860));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_861));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_862));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_863));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_864));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_865));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_866));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_867));
                    }
                    *STATE_VARIABLE_UsedVars_98 = STATE_VARIABLE_UsedVars_157_157;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Word ExtraArgs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 5))));
              MR_Word ExtraArgVars_58;
              MR_Word STATE_VARIABLE_UsedVars_151_151;
              MR_Integer Var_154;
              MR_Integer Var_155;
              MR_Word ArgVars_252;
              MR_Integer Var_648;
              MR_Integer Var_649;
              MR_Integer Var_650;
              MR_Integer Var_651;
              MR_Integer Var_652;
              MR_Integer Var_653;
              MR_Integer Var_654;
              MR_Integer Var_655;
              MR_Integer Var_656;
              MR_Integer Var_657;
              MR_Integer Var_658;
              MR_Integer Var_659;
              MR_Integer Var_660;
              MR_Integer Var_661;
              MR_Integer Var_662;
              MR_Integer Var_663;
              MR_Integer Var_664;
              MR_Integer Var_665;
              MR_Integer Var_666;
              MR_Integer Var_667;
              MR_Integer Var_668;
              MR_Integer Var_669;
              MR_Integer Var_670;
              MR_Integer Var_671;

              ArgVars_252 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[2]), Args_54);
              ExtraArgVars_58 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[3]), ExtraArgs_55);
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_252, STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_151_151);
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ExtraArgVars_58, STATE_VARIABLE_UsedVars_151_151, STATE_VARIABLE_UsedVars_98);
              Var_648 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
              Var_649 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              Var_650 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              Var_651 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              Var_652 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              Var_653 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              Var_654 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              Var_655 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              Var_656 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              Var_657 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              Var_658 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              Var_659 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              Var_660 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              Var_661 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              Var_662 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              Var_663 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              Var_664 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              Var_665 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              Var_666 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              Var_667 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              Var_668 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              Var_669 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              Var_670 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              Var_671 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              Var_154 = (MR_Integer) ((MR_Unsigned) Var_155 + (MR_Unsigned) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Stats_100 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_648));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_649));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_650));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_651));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_652));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_653));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_154));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_654));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_655));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_656));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_657));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_658));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_659));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_660));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_661));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_662));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_663));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_664));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_665));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_666));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_667));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_668));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_669));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_670));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_671));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjs_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Integer Var_1406 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              MR_Integer Var_1407 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              MR_Integer Var_1408 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              MR_Integer Var_1409 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              MR_Integer Var_1410 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              MR_Integer Var_1411 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              MR_Integer Var_1412 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              MR_Integer Var_1413 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              MR_Integer Var_1414 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              MR_Integer Var_1415 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              MR_Integer Var_1416 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              MR_Integer Var_1417 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              MR_Integer Var_1418 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              MR_Integer Var_1419 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              MR_Integer Var_1420 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              MR_Integer Var_1421 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              MR_Integer Var_1422 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              MR_Integer Var_1423 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              MR_Integer Var_1424 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              MR_Integer Var_1425 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              MR_Integer Var_1426 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              MR_Integer Var_1427 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              MR_Integer Var_1428 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              MR_Integer Var_1429 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              MR_Integer Var_1430 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));

              switch (ConjType_73) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Stats_182_182;
                    MR_Integer Var_183 = (MR_Integer) ((MR_Unsigned) Var_1417 + (MR_Unsigned) 1);

                    {
                      STATE_VARIABLE_Stats_182_182 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 0) = ((MR_Box) (Var_1430));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 1) = ((MR_Box) (Var_1429));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 2) = ((MR_Box) (Var_1428));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 3) = ((MR_Box) (Var_1427));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 4) = ((MR_Box) (Var_1426));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 5) = ((MR_Box) (Var_1425));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 6) = ((MR_Box) (Var_1424));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 7) = ((MR_Box) (Var_1423));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 8) = ((MR_Box) (Var_1422));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 9) = ((MR_Box) (Var_1421));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 10) = ((MR_Box) (Var_1420));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 11) = ((MR_Box) (Var_1419));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 12) = ((MR_Box) (Var_1418));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 13) = ((MR_Box) (Var_183));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 14) = ((MR_Box) (Var_1416));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 15) = ((MR_Box) (Var_1415));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 16) = ((MR_Box) (Var_1414));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 17) = ((MR_Box) (Var_1413));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 18) = ((MR_Box) (Var_1412));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 19) = ((MR_Box) (Var_1411));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 20) = ((MR_Box) (Var_1410));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 21) = ((MR_Box) (Var_1409));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 22) = ((MR_Box) (Var_1408));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 23) = ((MR_Box) (Var_1407));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_182_182, 24) = ((MR_Box) (Var_1406));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(Conjs_74, STATE_VARIABLE_UsedVars_0_97, STATE_VARIABLE_UsedVars_98, STATE_VARIABLE_Stats_182_182, STATE_VARIABLE_Stats_100);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Stats_176_176;
                    MR_Integer Var_177 = (MR_Integer) ((MR_Unsigned) Var_1419 + (MR_Unsigned) 1);

                    {
                      STATE_VARIABLE_Stats_176_176 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 0) = ((MR_Box) (Var_1430));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 1) = ((MR_Box) (Var_1429));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 2) = ((MR_Box) (Var_1428));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 3) = ((MR_Box) (Var_1427));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 4) = ((MR_Box) (Var_1426));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 5) = ((MR_Box) (Var_1425));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 6) = ((MR_Box) (Var_1424));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 7) = ((MR_Box) (Var_1423));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 8) = ((MR_Box) (Var_1422));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 9) = ((MR_Box) (Var_1421));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 10) = ((MR_Box) (Var_1420));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 11) = ((MR_Box) (Var_177));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 12) = ((MR_Box) (Var_1418));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 13) = ((MR_Box) (Var_1417));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 14) = ((MR_Box) (Var_1416));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 15) = ((MR_Box) (Var_1415));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 16) = ((MR_Box) (Var_1414));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 17) = ((MR_Box) (Var_1413));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 18) = ((MR_Box) (Var_1412));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 19) = ((MR_Box) (Var_1411));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 20) = ((MR_Box) (Var_1410));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 21) = ((MR_Box) (Var_1409));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 22) = ((MR_Box) (Var_1408));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 23) = ((MR_Box) (Var_1407));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_176_176, 24) = ((MR_Box) (Var_1406));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(Conjs_74, STATE_VARIABLE_UsedVars_0_97, STATE_VARIABLE_UsedVars_98, STATE_VARIABLE_Stats_176_176, STATE_VARIABLE_Stats_100);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Stats_188_188;
              MR_Integer Var_189;
              MR_Integer Var_190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              MR_Integer Var_991 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
              MR_Integer Var_992 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              MR_Integer Var_993 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              MR_Integer Var_994 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              MR_Integer Var_995 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              MR_Integer Var_996 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              MR_Integer Var_997 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              MR_Integer Var_998 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              MR_Integer Var_999 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              MR_Integer Var_1000 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              MR_Integer Var_1001 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              MR_Integer Var_1002 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              MR_Integer Var_1003 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              MR_Integer Var_1004 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              MR_Integer Var_1005 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              MR_Integer Var_1006 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              MR_Integer Var_1007 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              MR_Integer Var_1008 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              MR_Integer Var_1009 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              MR_Integer Var_1010 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              MR_Integer Var_1011 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              MR_Integer Var_1012 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              MR_Integer Var_1013 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              MR_Integer Var_1014 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));

              Var_189 = (MR_Integer) ((MR_Unsigned) Var_190 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_188_188 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 0) = ((MR_Box) (Var_991));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 1) = ((MR_Box) (Var_992));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 2) = ((MR_Box) (Var_993));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 3) = ((MR_Box) (Var_994));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 4) = ((MR_Box) (Var_995));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 5) = ((MR_Box) (Var_996));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 6) = ((MR_Box) (Var_997));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 7) = ((MR_Box) (Var_998));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 8) = ((MR_Box) (Var_999));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 9) = ((MR_Box) (Var_1000));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 10) = ((MR_Box) (Var_1001));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 11) = ((MR_Box) (Var_1002));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 12) = ((MR_Box) (Var_1003));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 13) = ((MR_Box) (Var_1004));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 14) = ((MR_Box) (Var_1005));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 15) = ((MR_Box) (Var_189));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 16) = ((MR_Box) (Var_1006));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 17) = ((MR_Box) (Var_1007));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 18) = ((MR_Box) (Var_1008));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 19) = ((MR_Box) (Var_1009));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 20) = ((MR_Box) (Var_1010));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 21) = ((MR_Box) (Var_1011));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 22) = ((MR_Box) (Var_1012));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 23) = ((MR_Box) (Var_1013));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_188_188, 24) = ((MR_Box) (Var_1014));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(Disjs_75, STATE_VARIABLE_UsedVars_0_97, STATE_VARIABLE_UsedVars_98, STATE_VARIABLE_Stats_188_188, STATE_VARIABLE_Stats_100);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word Cases_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedVars_194_194;
              MR_Word STATE_VARIABLE_Stats_195_195;
              MR_Integer Var_196;
              MR_Integer Var_197;
              MR_Integer Var_1040;
              MR_Integer Var_1041;
              MR_Integer Var_1042;
              MR_Integer Var_1043;
              MR_Integer Var_1044;
              MR_Integer Var_1045;
              MR_Integer Var_1046;
              MR_Integer Var_1047;
              MR_Integer Var_1048;
              MR_Integer Var_1049;
              MR_Integer Var_1050;
              MR_Integer Var_1051;
              MR_Integer Var_1052;
              MR_Integer Var_1053;
              MR_Integer Var_1054;
              MR_Integer Var_1055;
              MR_Integer Var_1056;
              MR_Integer Var_1057;
              MR_Integer Var_1058;
              MR_Integer Var_1059;
              MR_Integer Var_1060;
              MR_Integer Var_1061;
              MR_Integer Var_1062;
              MR_Integer Var_1063;

              mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (SwitchVar_76)), STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_194_194);
              Var_1040 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
              Var_1041 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              Var_1042 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              Var_1043 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              Var_1044 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              Var_1045 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              Var_1046 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              Var_1047 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              Var_1048 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              Var_1049 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              Var_1050 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              Var_1051 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              Var_1052 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              Var_1053 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              Var_1054 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              Var_1055 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              Var_1056 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              Var_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              Var_1057 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              Var_1058 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              Var_1059 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              Var_1060 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              Var_1061 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              Var_1062 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              Var_1063 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              Var_196 = (MR_Integer) ((MR_Unsigned) Var_197 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_195_195 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 0) = ((MR_Box) (Var_1040));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 1) = ((MR_Box) (Var_1041));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 2) = ((MR_Box) (Var_1042));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 3) = ((MR_Box) (Var_1043));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 4) = ((MR_Box) (Var_1044));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 5) = ((MR_Box) (Var_1045));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 6) = ((MR_Box) (Var_1046));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 7) = ((MR_Box) (Var_1047));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 8) = ((MR_Box) (Var_1048));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 9) = ((MR_Box) (Var_1049));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 10) = ((MR_Box) (Var_1050));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 11) = ((MR_Box) (Var_1051));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 12) = ((MR_Box) (Var_1052));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 13) = ((MR_Box) (Var_1053));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 14) = ((MR_Box) (Var_1054));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 15) = ((MR_Box) (Var_1055));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 16) = ((MR_Box) (Var_1056));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 17) = ((MR_Box) (Var_196));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 18) = ((MR_Box) (Var_1057));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 19) = ((MR_Box) (Var_1058));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 20) = ((MR_Box) (Var_1059));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 21) = ((MR_Box) (Var_1060));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 22) = ((MR_Box) (Var_1061));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 23) = ((MR_Box) (Var_1062));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_195_195, 24) = ((MR_Box) (Var_1063));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(Cases_78, STATE_VARIABLE_UsedVars_194_194, STATE_VARIABLE_UsedVars_98, STATE_VARIABLE_Stats_195_195, STATE_VARIABLE_Stats_100);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Stats_217_217;
              MR_Integer Var_218;
              MR_Integer Var_219 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              MR_Word SubGoal_254 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Integer Var_1187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
              MR_Integer Var_1188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              MR_Integer Var_1189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              MR_Integer Var_1190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              MR_Integer Var_1191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              MR_Integer Var_1192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              MR_Integer Var_1193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              MR_Integer Var_1194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              MR_Integer Var_1195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              MR_Integer Var_1196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              MR_Integer Var_1197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              MR_Integer Var_1198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              MR_Integer Var_1199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              MR_Integer Var_1200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              MR_Integer Var_1201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              MR_Integer Var_1202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              MR_Integer Var_1203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              MR_Integer Var_1204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              MR_Integer Var_1205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              MR_Integer Var_1206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              MR_Integer Var_1207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              MR_Integer Var_1208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              MR_Integer Var_1209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              MR_Integer Var_1210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

              Var_218 = (MR_Integer) ((MR_Unsigned) Var_219 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_217_217 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 0) = ((MR_Box) (Var_1187));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 1) = ((MR_Box) (Var_1188));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 2) = ((MR_Box) (Var_1189));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 3) = ((MR_Box) (Var_1190));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 4) = ((MR_Box) (Var_1191));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 5) = ((MR_Box) (Var_1192));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 6) = ((MR_Box) (Var_1193));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 7) = ((MR_Box) (Var_1194));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 8) = ((MR_Box) (Var_1195));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 9) = ((MR_Box) (Var_1196));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 10) = ((MR_Box) (Var_1197));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 11) = ((MR_Box) (Var_1198));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 12) = ((MR_Box) (Var_1199));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 13) = ((MR_Box) (Var_1200));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 14) = ((MR_Box) (Var_1201));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 15) = ((MR_Box) (Var_1202));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 16) = ((MR_Box) (Var_1203));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 17) = ((MR_Box) (Var_1204));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 18) = ((MR_Box) (Var_1205));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 19) = ((MR_Box) (Var_1206));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 20) = ((MR_Box) (Var_1207));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 21) = ((MR_Box) (Var_218));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 22) = ((MR_Box) (Var_1208));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 23) = ((MR_Box) (Var_1209));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_217_217, 24) = ((MR_Box) (Var_1210));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoal_254;
              next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_217_217;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word ThenGoal_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word ElseGoal_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Stats_201_201;
              MR_Integer Var_202;
              MR_Integer Var_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              MR_Word STATE_VARIABLE_UsedVars_205_205;
              MR_Word STATE_VARIABLE_Stats_206_206;
              MR_Word STATE_VARIABLE_UsedVars_207_207;
              MR_Word STATE_VARIABLE_Stats_208_208;
              MR_Integer Var_1089 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));
              MR_Integer Var_1090 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              MR_Integer Var_1091 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              MR_Integer Var_1092 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              MR_Integer Var_1093 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              MR_Integer Var_1094 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              MR_Integer Var_1095 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              MR_Integer Var_1096 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              MR_Integer Var_1097 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              MR_Integer Var_1098 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              MR_Integer Var_1099 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              MR_Integer Var_1100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              MR_Integer Var_1101 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              MR_Integer Var_1102 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              MR_Integer Var_1103 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              MR_Integer Var_1104 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              MR_Integer Var_1105 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              MR_Integer Var_1106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              MR_Integer Var_1107 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              MR_Integer Var_1108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              MR_Integer Var_1109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              MR_Integer Var_1110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              MR_Integer Var_1111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              MR_Integer Var_1112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_97;
              MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

              Var_202 = (MR_Integer) ((MR_Unsigned) Var_203 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_201_201 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 0) = ((MR_Box) (Var_1089));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 1) = ((MR_Box) (Var_1090));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 2) = ((MR_Box) (Var_1091));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 3) = ((MR_Box) (Var_1092));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 4) = ((MR_Box) (Var_1093));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 5) = ((MR_Box) (Var_1094));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 6) = ((MR_Box) (Var_1095));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 7) = ((MR_Box) (Var_1096));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 8) = ((MR_Box) (Var_1097));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 9) = ((MR_Box) (Var_1098));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 10) = ((MR_Box) (Var_1099));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 11) = ((MR_Box) (Var_1100));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 12) = ((MR_Box) (Var_1101));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 13) = ((MR_Box) (Var_1102));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 14) = ((MR_Box) (Var_1103));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 15) = ((MR_Box) (Var_1104));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 16) = ((MR_Box) (Var_1105));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 17) = ((MR_Box) (Var_1106));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 18) = ((MR_Box) (Var_1107));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 19) = ((MR_Box) (Var_202));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 20) = ((MR_Box) (Var_1108));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 21) = ((MR_Box) (Var_1109));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 22) = ((MR_Box) (Var_1110));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 23) = ((MR_Box) (Var_1111));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_201_201, 24) = ((MR_Box) (Var_1112));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(CondGoal_80, STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_205_205, STATE_VARIABLE_Stats_201_201, &STATE_VARIABLE_Stats_206_206);
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(ThenGoal_81, STATE_VARIABLE_UsedVars_205_205, &STATE_VARIABLE_UsedVars_207_207, STATE_VARIABLE_Stats_206_206, &STATE_VARIABLE_Stats_208_208);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_82;
              next_value_of_STATE_VARIABLE_UsedVars_0_97 = STATE_VARIABLE_UsedVars_207_207;
              next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_208_208;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedVars_0_97 = next_value_of_STATE_VARIABLE_UsedVars_0_97;
              STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Integer Var_1431 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 24))));
              MR_Integer Var_1432 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 23))));
              MR_Integer Var_1433 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 22))));
              MR_Integer Var_1434 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 21))));
              MR_Integer Var_1435 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 20))));
              MR_Integer Var_1436 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 19))));
              MR_Integer Var_1437 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 18))));
              MR_Integer Var_1438 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 17))));
              MR_Integer Var_1439 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 16))));
              MR_Integer Var_1440 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 15))));
              MR_Integer Var_1441 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 14))));
              MR_Integer Var_1442 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 13))));
              MR_Integer Var_1443 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 12))));
              MR_Integer Var_1444 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 11))));
              MR_Integer Var_1445 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 10))));
              MR_Integer Var_1446 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 9))));
              MR_Integer Var_1447 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 8))));
              MR_Integer Var_1448 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 7))));
              MR_Integer Var_1449 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 6))));
              MR_Integer Var_1450 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 5))));
              MR_Integer Var_1451 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 4))));
              MR_Integer Var_1452 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 3))));
              MR_Integer Var_1453 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 2))));
              MR_Integer Var_1454 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 1))));
              MR_Integer Var_1455 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_99, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) ShortHand_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_85, (MR_Integer) 0))));
                    MR_Word GoalB_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_85, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Stats_223_223;
                    MR_Integer Var_224 = (MR_Integer) ((MR_Unsigned) Var_1433 + (MR_Unsigned) 1);
                    MR_Word STATE_VARIABLE_UsedVars_227_227;
                    MR_Word STATE_VARIABLE_Stats_228_228;
                    MR_Word next_value_of_Goal_6;
                    MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_97;
                    MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

                    {
                      STATE_VARIABLE_Stats_223_223 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 0) = ((MR_Box) (Var_1455));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 1) = ((MR_Box) (Var_1454));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 2) = ((MR_Box) (Var_1453));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 3) = ((MR_Box) (Var_1452));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 4) = ((MR_Box) (Var_1451));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 5) = ((MR_Box) (Var_1450));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 6) = ((MR_Box) (Var_1449));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 7) = ((MR_Box) (Var_1448));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 8) = ((MR_Box) (Var_1447));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 9) = ((MR_Box) (Var_1446));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 10) = ((MR_Box) (Var_1445));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 11) = ((MR_Box) (Var_1444));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 12) = ((MR_Box) (Var_1443));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 13) = ((MR_Box) (Var_1442));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 14) = ((MR_Box) (Var_1441));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 15) = ((MR_Box) (Var_1440));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 16) = ((MR_Box) (Var_1439));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 17) = ((MR_Box) (Var_1438));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 18) = ((MR_Box) (Var_1437));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 19) = ((MR_Box) (Var_1436));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 20) = ((MR_Box) (Var_1435));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 21) = ((MR_Box) (Var_1434));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 22) = ((MR_Box) (Var_224));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 23) = ((MR_Box) (Var_1432));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_223_223, 24) = ((MR_Box) (Var_1431));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(GoalA_86, STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_227_227, STATE_VARIABLE_Stats_223_223, &STATE_VARIABLE_Stats_228_228);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_6 = GoalB_87;
                    next_value_of_STATE_VARIABLE_UsedVars_0_97 = STATE_VARIABLE_UsedVars_227_227;
                    next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_228_228;
                    Goal_6 = next_value_of_Goal_6;
                    STATE_VARIABLE_UsedVars_0_97 = next_value_of_STATE_VARIABLE_UsedVars_0_97;
                    STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_85, (MR_Integer) 4))));
                    MR_Word OrElseGoals_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_85, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Stats_231_231;
                    MR_Integer Var_232 = (MR_Integer) ((MR_Unsigned) Var_1432 + (MR_Unsigned) 1);
                    MR_Word STATE_VARIABLE_UsedVars_235_235;
                    MR_Word STATE_VARIABLE_Stats_236_236;
                    MR_Box conv5_STATE_VARIABLE_UsedVars_98;
                    MR_Box conv4_STATE_VARIABLE_Stats_100;

                    {
                      STATE_VARIABLE_Stats_231_231 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 0) = ((MR_Box) (Var_1455));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 1) = ((MR_Box) (Var_1454));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 2) = ((MR_Box) (Var_1453));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 3) = ((MR_Box) (Var_1452));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 4) = ((MR_Box) (Var_1451));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 5) = ((MR_Box) (Var_1450));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 6) = ((MR_Box) (Var_1449));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 7) = ((MR_Box) (Var_1448));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 8) = ((MR_Box) (Var_1447));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 9) = ((MR_Box) (Var_1446));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 10) = ((MR_Box) (Var_1445));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 11) = ((MR_Box) (Var_1444));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 12) = ((MR_Box) (Var_1443));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 13) = ((MR_Box) (Var_1442));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 14) = ((MR_Box) (Var_1441));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 15) = ((MR_Box) (Var_1440));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 16) = ((MR_Box) (Var_1439));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 17) = ((MR_Box) (Var_1438));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 18) = ((MR_Box) (Var_1437));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 19) = ((MR_Box) (Var_1436));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 20) = ((MR_Box) (Var_1435));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 21) = ((MR_Box) (Var_1434));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 22) = ((MR_Box) (Var_1433));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 23) = ((MR_Box) (Var_232));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_231_231, 24) = ((MR_Box) (Var_1431));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(MainGoal_92, STATE_VARIABLE_UsedVars_0_97, &STATE_VARIABLE_UsedVars_235_235, STATE_VARIABLE_Stats_231_231, &STATE_VARIABLE_Stats_236_236);
                    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[1]), (MR_Word) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[4]), OrElseGoals_93, ((MR_Box) (STATE_VARIABLE_UsedVars_235_235)), &conv5_STATE_VARIABLE_UsedVars_98, ((MR_Box) (STATE_VARIABLE_Stats_236_236)), &conv4_STATE_VARIABLE_Stats_100);
                    *STATE_VARIABLE_UsedVars_98 = ((MR_Word) (conv5_STATE_VARIABLE_UsedVars_98));
                    *STATE_VARIABLE_Stats_100 = ((MR_Word) (conv4_STATE_VARIABLE_Stats_100));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Stats_240_240;
                    MR_Integer Var_241 = (MR_Integer) ((MR_Unsigned) Var_1431 + (MR_Unsigned) 1);
                    MR_Word SubGoal_255 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_85, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_6;
                    MR_Word next_value_of_STATE_VARIABLE_Stats_0_99;

                    {
                      STATE_VARIABLE_Stats_240_240 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 0) = ((MR_Box) (Var_1455));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 1) = ((MR_Box) (Var_1454));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 2) = ((MR_Box) (Var_1453));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 3) = ((MR_Box) (Var_1452));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 4) = ((MR_Box) (Var_1451));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 5) = ((MR_Box) (Var_1450));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 6) = ((MR_Box) (Var_1449));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 7) = ((MR_Box) (Var_1448));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 8) = ((MR_Box) (Var_1447));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 9) = ((MR_Box) (Var_1446));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 10) = ((MR_Box) (Var_1445));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 11) = ((MR_Box) (Var_1444));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 12) = ((MR_Box) (Var_1443));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 13) = ((MR_Box) (Var_1442));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 14) = ((MR_Box) (Var_1441));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 15) = ((MR_Box) (Var_1440));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 16) = ((MR_Box) (Var_1439));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 17) = ((MR_Box) (Var_1438));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 18) = ((MR_Box) (Var_1437));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 19) = ((MR_Box) (Var_1436));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 20) = ((MR_Box) (Var_1435));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 21) = ((MR_Box) (Var_1434));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 22) = ((MR_Box) (Var_1433));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 23) = ((MR_Box) (Var_1432));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_240_240, 24) = ((MR_Box) (Var_241));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_6 = SubGoal_255;
                    next_value_of_STATE_VARIABLE_Stats_0_99 = STATE_VARIABLE_Stats_240_240;
                    Goal_6 = next_value_of_Goal_6;
                    STATE_VARIABLE_Stats_0_99 = next_value_of_STATE_VARIABLE_Stats_0_99;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Stats_5 = STATE_VARIABLE_Stats_0_4;
      *STATE_VARIABLE_UsedVars_3 = STATE_VARIABLE_UsedVars_0_2;
    }
    else
    {
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_18;
      MR_Word STATE_VARIABLE_Stats_23_23;
      MR_Integer Var_24;
      MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Word STATE_VARIABLE_UsedVars_27_27;
      MR_Word STATE_VARIABLE_Stats_28_28;
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_23_23 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 2) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 3) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 4) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 5) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 6) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 7) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 8) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 9) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 10) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 11) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 12) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 13) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 14) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 15) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 16) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 17) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 18) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 19) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 20) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 21) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 22) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 23) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 24) = ((MR_Box) (Var_52));
      }
      Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_12, (MR_Integer) 2))));
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(Goal_18, STATE_VARIABLE_UsedVars_0_2, &STATE_VARIABLE_UsedVars_27_27, STATE_VARIABLE_Stats_23_23, &STATE_VARIABLE_Stats_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_13;
      next_value_of_STATE_VARIABLE_UsedVars_0_2 = STATE_VARIABLE_UsedVars_27_27;
      next_value_of_STATE_VARIABLE_Stats_0_4 = STATE_VARIABLE_Stats_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedVars_0_2 = next_value_of_STATE_VARIABLE_UsedVars_0_2;
      STATE_VARIABLE_Stats_0_4 = next_value_of_STATE_VARIABLE_Stats_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Stats_5 = STATE_VARIABLE_Stats_0_4;
      *STATE_VARIABLE_UsedVars_3 = STATE_VARIABLE_UsedVars_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Stats_20_20;
      MR_Integer Var_21;
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_49));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedVars_0_2, &STATE_VARIABLE_UsedVars_24_24, STATE_VARIABLE_Stats_20_20, &STATE_VARIABLE_Stats_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedVars_0_2 = STATE_VARIABLE_UsedVars_24_24;
      next_value_of_STATE_VARIABLE_Stats_0_4 = STATE_VARIABLE_Stats_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedVars_0_2 = next_value_of_STATE_VARIABLE_UsedVars_0_2;
      STATE_VARIABLE_Stats_0_4 = next_value_of_STATE_VARIABLE_Stats_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Stats_5 = STATE_VARIABLE_Stats_0_4;
      *STATE_VARIABLE_UsedVars_3 = STATE_VARIABLE_UsedVars_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Stats_20_20;
      MR_Integer Var_21;
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_49));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedVars_0_2, &STATE_VARIABLE_UsedVars_24_24, STATE_VARIABLE_Stats_20_20, &STATE_VARIABLE_Stats_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedVars_0_2 = STATE_VARIABLE_UsedVars_24_24;
      next_value_of_STATE_VARIABLE_Stats_0_4 = STATE_VARIABLE_Stats_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedVars_0_2 = next_value_of_STATE_VARIABLE_UsedVars_0_2;
      STATE_VARIABLE_Stats_0_4 = next_value_of_STATE_VARIABLE_Stats_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedVars_0_2,
  MR_Word * STATE_VARIABLE_UsedVars_3,
  MR_Word STATE_VARIABLE_Stats_0_4,
  MR_Word * STATE_VARIABLE_Stats_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Stats_5 = STATE_VARIABLE_Stats_0_4;
      *STATE_VARIABLE_UsedVars_3 = STATE_VARIABLE_UsedVars_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Stats_20_20;
      MR_Integer Var_21;
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_49));
      }
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedVars_0_2, &STATE_VARIABLE_UsedVars_24_24, STATE_VARIABLE_Stats_20_20, &STATE_VARIABLE_Stats_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedVars_0_2 = STATE_VARIABLE_UsedVars_24_24;
      next_value_of_STATE_VARIABLE_Stats_0_4 = STATE_VARIABLE_Stats_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedVars_0_2 = next_value_of_STATE_VARIABLE_UsedVars_0_2;
      STATE_VARIABLE_Stats_0_4 = next_value_of_STATE_VARIABLE_Stats_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
  MR_Word OutStream_7,
  MR_String Msg_8,
  MR_Word ModuleInfo_9,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
  MR_Word PredInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));

  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_11);
  if (!(succeeded))
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_11);
  if (!(succeeded))
  {
    MR_Word ProcTable_13;
    MR_Word Procs_14;
    MR_Word Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_16;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_13);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_13, &Procs_14);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (OutStream_7));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Msg_8));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (PredId_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_statistics_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Procs_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16);
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(
  MR_Word OutStream_6,
  MR_String Msg_7,
  MR_Word ModuleInfo_8)
{
  MR_Word ModuleSymName_10;
  MR_String ModuleName_11;
  MR_Word PredIdTable_12;
  MR_Word PredIdsInfos_13;
  MR_Word Var_21;
  MR_Box conv0_STATE_VARIABLE_IO_15;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleSymName_10);
  ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_10);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "MODULE ");
  mercury__io__write_string_4_p_0(OutStream_6, ModuleName_11);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_8, &PredIdTable_12);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_12, &PredIdsInfos_13);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (OutStream_6));
    MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Msg_7));
    MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ModuleInfo_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_statistics_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, PredIdsInfos_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
}

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_statistics____Unify____proc_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_statistics____Compare____proc_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.hlds_statistics.
