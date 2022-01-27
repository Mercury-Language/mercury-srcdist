/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version rotd-2021-03-15
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
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.set_of_var.mih"
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

static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[26];

static const MR_ConstString hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0[26];

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
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word OutStream_11,
  MR_String Name_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word Stats_16,
  MR_Word UsedVars_17,
  MR_Word VarSet_18);

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
  MR_Word STATE_VARIABLE_UsedVars_0_98,
  MR_Word * STATE_VARIABLE_UsedVars_99,
  MR_Word STATE_VARIABLE_Stats_0_100,
  MR_Word * STATE_VARIABLE_Stats_101);

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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][26];

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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_statistics_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_3[1][26] = {
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
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_4[1][9] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_5[1][10] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_7[1][8] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__hlds_statistics_scalar_common_8[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[26] = {
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0[26] = {
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
  (MR_String) "ps_coerces",
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
  INT16_C(26),
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_statistics____Unify____proc_stats_0_0_10001)),
  ((MR_Box) (hlds__hlds_statistics____Compare____proc_stats_0_0_10001)),
  (MR_String) "hlds.hlds_statistics",
  (MR_String) "proc_stats",
  {     hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0 },
  {     hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0
};

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_81 == CastY_82);
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
      MR_Integer ArgX26_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Integer ArgY26_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
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
                                                      MR_Word SubResult25_78;

                                                      succeeded = (ArgX25_76 < ArgY25_77);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (ArgX25_76 > ArgY25_77);
                                                        if (succeeded)
                                                        {
                                                          SubResult25_78 = (MR_Integer) 2;
                                                          succeeded = MR_TRUE;
                                                        }
                                                        else
                                                        {
                                                          succeeded = MR_TRUE;
                                                          succeeded = !(succeeded);
                                                          if (succeeded)
                                                          {
                                                            SubResult25_78 = (MR_Integer) 0;
                                                            succeeded = MR_TRUE;
                                                          }
                                                        }
                                                      }
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult25_78;
                                                      else
                                                      {
                                                        succeeded = (ArgX26_79 < ArgY26_80);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = (MR_Integer) 1;
                                                        else
                                                        {
                                                          succeeded = (ArgX26_79 > ArgY26_80);
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
  }
}

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_55 == CastY_56);
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
      MR_Integer ArgX26_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Integer ArgY26_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));

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
                                                    {
                                                      succeeded = (ArgX25_51 == ArgY25_52);
                                                      if (succeeded)
                                                        succeeded = (ArgX26_53 == ArgY26_54);
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
    return succeeded;
  }
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
  {
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ProcInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word NamePieces_15;
    MR_String Name_16;
    MR_Word Goal_17;
    MR_Word UsedVars0_18;
    MR_Word UsedVars_20;
    MR_Word Stats_21;
    MR_Word VarSet_22;
    MR_Word Var_26;

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
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_13, &VarSet_22);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(OutStream_8, Name_16, PredId_11, ProcId_12, Stats_21, UsedVars_20, VarSet_22);
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word OutStream_11,
  MR_String Name_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word Stats_16,
  MR_Word UsedVars_17,
  MR_Word VarSet_18)
{
  {
    MR_Integer PredIdInt_20;
    MR_Integer ProcIdInt_21;
    MR_Word Var_22;
    MR_Integer VarInt_24;
    MR_Integer NumUsedVars_25;
    MR_String Var_50;
    MR_String Var_60;
    MR_String Var_74;
    MR_String Var_84;
    MR_Word _UpdatedVarSet_23;

    PredIdInt_20 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_14);
    ProcIdInt_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_15);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "PROC ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_8[0]), PredIdInt_20, &Var_50);
    mercury__io__write_string_4_p_0(OutStream_11, Var_50);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_8[0]), ProcIdInt_21, &Var_60);
    mercury__io__write_string_4_p_0(OutStream_11, Var_60);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutStream_11, Name_13);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "\n");
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(OutStream_11, Stats_16);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_22, VarSet_18, &_UpdatedVarSet_23);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, &VarInt_24);
    NumUsedVars_25 = mercury__set_tree234__count_1_f_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), UsedVars_17);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "VARS ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_8[0]), VarInt_24, &Var_74);
    mercury__io__write_string_4_p_0(OutStream_11, Var_74);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_8[0]), NumUsedVars_25, &Var_84);
    mercury__io__write_string_4_p_0(OutStream_11, Var_84);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
  MR_Word OutStream_9,
  MR_Word Stats_14)
{
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
    MR_Integer Coerces_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 11))));
    MR_Integer PlainConjs_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 12))));
    MR_Integer PlainConjuncts_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 13))));
    MR_Integer ParallelConjs_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 14))));
    MR_Integer ParallelConjuncts_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 15))));
    MR_Integer Disjs_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 16))));
    MR_Integer Disjuncts_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 17))));
    MR_Integer Switches_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 18))));
    MR_Integer SwitchArms_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 19))));
    MR_Integer IfThenElses_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 20))));
    MR_Integer Negations_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 21))));
    MR_Integer Scopes_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 22))));
    MR_Integer BiImplications_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 23))));
    MR_Integer AtomicGoals_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 24))));
    MR_Integer TryGoals_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stats_14, (MR_Integer) 25))));
    MR_Integer Total_42;
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
    MR_Integer Var_62;
    MR_Integer Var_63;
    MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) UnifyConstructs_16 + (MR_Unsigned) UnifyDeconstructs_17);

    Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) UnifyAssigns_18);
    Var_62 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) UnifyTests_19);
    Var_61 = (MR_Integer) ((MR_Unsigned) Var_62 + (MR_Unsigned) UnifyComplicateds_20);
    Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) PlainCalls_21);
    Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) ForeignCalls_22);
    Var_58 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) HOCalls_23);
    Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 + (MR_Unsigned) MethodCalls_24);
    Var_56 = (MR_Integer) ((MR_Unsigned) Var_57 + (MR_Unsigned) EventCalls_25);
    Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) Casts_26);
    Var_54 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) Coerces_27);
    Var_53 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) PlainConjs_28);
    Var_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) ParallelConjs_30);
    Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) Disjs_32);
    Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) Switches_34);
    Var_49 = (MR_Integer) ((MR_Unsigned) Var_50 + (MR_Unsigned) IfThenElses_36);
    Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 + (MR_Unsigned) Negations_37);
    Var_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Scopes_38);
    Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) BiImplications_39);
    Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) AtomicGoals_40);
    Total_42 = (MR_Integer) ((MR_Unsigned) Var_45 + (MR_Unsigned) TryGoals_41);
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
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "coerces", Coerces_27);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "plain_conjs", PlainConjs_28);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "plain_conjuncts", PlainConjuncts_29);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "parallel_conjs", ParallelConjs_30);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "parallel_conjuncts", ParallelConjuncts_31);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "disjs", Disjs_32);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "disjunctions", Disjuncts_33);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "switches", Switches_34);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "switch_arms", SwitchArms_35);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "if_then_elses", IfThenElses_36);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "negations", Negations_37);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "scopes", Scopes_38);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "bi_implications", BiImplications_39);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "atomic_goals", AtomicGoals_40);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "try_goals", TryGoals_41);
    hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(OutStream_9, (MR_String) "total_size", Total_42);
  }
}

static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
  MR_Word OutStream_10,
  MR_String ComponentName_15,
  MR_Integer ComponentCount_16)
{
  {
    MR_bool succeeded = (ComponentCount_16 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_String Var_34;

      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) "GOAL ");
      mercury__io__write_string_4_p_0(OutStream_10, ComponentName_15);
      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) ": ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_8[0]), ComponentCount_16, &Var_34);
      mercury__io__write_string_4_p_0(OutStream_10, Var_34);
      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) "\n");
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_UsedVars_99;
    MR_Word conv2_STATE_VARIABLE_Stats_101;

    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_UsedVars_99, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Stats_101);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_UsedVars_99));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Stats_101));
  }
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedVars_0_98,
  MR_Word * STATE_VARIABLE_UsedVars_99,
  MR_Word STATE_VARIABLE_Stats_0_100,
  MR_Word * STATE_VARIABLE_Stats_101)
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
          MR_Word SubGoal_84 = (MR_Word) ((MR_Word) (GoalExpr_9));
          MR_Word STATE_VARIABLE_Stats_131_131;
          MR_Integer Var_132;
          MR_Integer Var_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
          MR_Integer Var_1229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
          MR_Integer Var_1230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
          MR_Integer Var_1231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
          MR_Integer Var_1232 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
          MR_Integer Var_1233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
          MR_Integer Var_1234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
          MR_Integer Var_1235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
          MR_Integer Var_1236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
          MR_Integer Var_1237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
          MR_Integer Var_1238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
          MR_Integer Var_1239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
          MR_Integer Var_1240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
          MR_Integer Var_1241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
          MR_Integer Var_1242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
          MR_Integer Var_1243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
          MR_Integer Var_1244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
          MR_Integer Var_1245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
          MR_Integer Var_1246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
          MR_Integer Var_1247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
          MR_Integer Var_1248 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
          MR_Integer Var_1249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
          MR_Integer Var_1250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
          MR_Integer Var_1251 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
          MR_Integer Var_1252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
          MR_Integer Var_1253 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

          Var_132 = (MR_Integer) ((MR_Unsigned) Var_133 + (MR_Unsigned) 1);
          {
            STATE_VARIABLE_Stats_131_131 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 0) = ((MR_Box) (Var_1229));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 1) = ((MR_Box) (Var_1230));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 2) = ((MR_Box) (Var_1231));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 3) = ((MR_Box) (Var_1232));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 4) = ((MR_Box) (Var_1233));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 5) = ((MR_Box) (Var_1234));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 6) = ((MR_Box) (Var_1235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 7) = ((MR_Box) (Var_1236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 8) = ((MR_Box) (Var_1237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 9) = ((MR_Box) (Var_1238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 10) = ((MR_Box) (Var_1239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 11) = ((MR_Box) (Var_1240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 12) = ((MR_Box) (Var_1241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 13) = ((MR_Box) (Var_1242));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 14) = ((MR_Box) (Var_1243));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 15) = ((MR_Box) (Var_1244));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 16) = ((MR_Box) (Var_1245));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 17) = ((MR_Box) (Var_1246));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 18) = ((MR_Box) (Var_1247));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 19) = ((MR_Box) (Var_1248));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 20) = ((MR_Box) (Var_1249));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 21) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 22) = ((MR_Box) (Var_1250));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 23) = ((MR_Box) (Var_1251));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 24) = ((MR_Box) (Var_1252));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_131_131, 25) = ((MR_Box) (Var_1253));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoal_84;
          next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_131_131;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
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
                MR_Word STATE_VARIABLE_UsedVars_245_245;
                MR_Integer Var_248;
                MR_Integer Var_249;
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
                MR_Integer Var_280;
                MR_Integer Var_281;
                MR_Integer Var_282;
                MR_Integer Var_283;
                MR_Integer Var_284;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (CellVar_16)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_245_245);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_18, STATE_VARIABLE_UsedVars_245_245, STATE_VARIABLE_UsedVars_99);
                Var_249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                Var_260 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                Var_261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                Var_262 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                Var_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                Var_264 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                Var_265 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                Var_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                Var_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                Var_268 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                Var_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                Var_270 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                Var_271 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                Var_272 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                Var_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                Var_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                Var_275 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                Var_276 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                Var_277 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                Var_278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                Var_279 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                Var_280 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                Var_281 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                Var_282 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                Var_283 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                Var_284 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                Var_248 = (MR_Integer) ((MR_Unsigned) Var_249 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_101 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_248));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_261));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_267));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_268));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_269));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_270));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_271));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_272));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_273));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_274));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_275));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_276));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_277));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_278));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_279));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_280));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_281));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_282));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_283));
                  MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_284));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_UsedVars_239_239;
                MR_Integer Var_242;
                MR_Integer Var_243;
                MR_Word CellVar_251 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_14, (MR_Integer) 0))));
                MR_Word ArgVars_252 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_14, (MR_Integer) 2))));
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
                MR_Integer Var_329;
                MR_Integer Var_330;
                MR_Integer Var_331;
                MR_Integer Var_332;
                MR_Integer Var_333;
                MR_Integer Var_334;
                MR_Integer Var_335;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (CellVar_251)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_239_239);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_252, STATE_VARIABLE_UsedVars_239_239, STATE_VARIABLE_UsedVars_99);
                Var_311 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                Var_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                Var_312 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                Var_313 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                Var_314 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                Var_315 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                Var_316 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                Var_317 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                Var_318 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                Var_319 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                Var_320 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                Var_321 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                Var_322 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                Var_323 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                Var_324 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                Var_325 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                Var_326 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                Var_327 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                Var_328 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                Var_329 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                Var_330 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                Var_331 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                Var_332 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                Var_333 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                Var_334 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                Var_335 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                Var_242 = (MR_Integer) ((MR_Unsigned) Var_243 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_101 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_311));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_242));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_312));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_313));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_314));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_315));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_316));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_317));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_318));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_319));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_320));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_321));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_322));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_323));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_324));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_325));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_326));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_327));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_328));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_329));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_330));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_331));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_332));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_333));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_334));
                  MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_335));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_14, (MR_Integer) 0))));
                MR_Word FromVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_14, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_UsedVars_233_233;
                MR_Integer Var_236;
                MR_Integer Var_237;
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
                MR_Integer Var_378;
                MR_Integer Var_379;
                MR_Integer Var_380;
                MR_Integer Var_381;
                MR_Integer Var_382;
                MR_Integer Var_383;
                MR_Integer Var_384;
                MR_Integer Var_385;
                MR_Integer Var_386;

                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (ToVar_27)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_233_233);
                mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (FromVar_28)), STATE_VARIABLE_UsedVars_233_233, STATE_VARIABLE_UsedVars_99);
                Var_362 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                Var_363 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                Var_237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                Var_364 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                Var_365 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                Var_366 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                Var_367 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                Var_368 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                Var_369 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                Var_370 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                Var_371 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                Var_372 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                Var_373 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                Var_374 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                Var_375 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                Var_376 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                Var_377 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                Var_378 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                Var_379 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                Var_380 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                Var_381 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                Var_382 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                Var_383 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                Var_384 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                Var_385 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                Var_386 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                Var_236 = (MR_Integer) ((MR_Unsigned) Var_237 + (MR_Unsigned) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Stats_101 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_362));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_363));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_236));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_364));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_365));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_366));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_367));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_368));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_369));
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_370));
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_371));
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_372));
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_373));
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_374));
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_375));
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_376));
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_377));
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_378));
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_379));
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_380));
                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_381));
                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_382));
                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_383));
                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_384));
                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_385));
                  MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_386));
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
                    MR_Word STATE_VARIABLE_UsedVars_227_227;
                    MR_Integer Var_230;
                    MR_Integer Var_231;
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
                    MR_Integer Var_427;
                    MR_Integer Var_428;
                    MR_Integer Var_429;
                    MR_Integer Var_430;
                    MR_Integer Var_431;
                    MR_Integer Var_432;
                    MR_Integer Var_433;
                    MR_Integer Var_434;
                    MR_Integer Var_435;
                    MR_Integer Var_436;
                    MR_Integer Var_437;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (VarA_29)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_227_227);
                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (VarB_30)), STATE_VARIABLE_UsedVars_227_227, STATE_VARIABLE_UsedVars_99);
                    Var_413 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                    Var_414 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                    Var_415 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                    Var_231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                    Var_416 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                    Var_417 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                    Var_418 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                    Var_419 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                    Var_420 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                    Var_421 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                    Var_422 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                    Var_423 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                    Var_424 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                    Var_425 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                    Var_426 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                    Var_427 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                    Var_428 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                    Var_429 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                    Var_430 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                    Var_431 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                    Var_432 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                    Var_433 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                    Var_434 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                    Var_435 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                    Var_436 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                    Var_437 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                    Var_230 = (MR_Integer) ((MR_Unsigned) Var_231 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_413));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_414));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_415));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_230));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_416));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_417));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_418));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_419));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_420));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_421));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_422));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_423));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_424));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_425));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_426));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_427));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_428));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_429));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_430));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_431));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_432));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_433));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_434));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_435));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_436));
                      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_437));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_UsedVars_208_208;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (LHS_11)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_208_208);
                    switch (MR_tag((MR_Word) RHS_12)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word RHSVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_12, (MR_Integer) 0))));
                          MR_Integer Var_224;
                          MR_Integer Var_225;
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
                          MR_Integer Var_476;
                          MR_Integer Var_477;
                          MR_Integer Var_478;
                          MR_Integer Var_479;
                          MR_Integer Var_480;
                          MR_Integer Var_481;
                          MR_Integer Var_482;
                          MR_Integer Var_483;
                          MR_Integer Var_484;
                          MR_Integer Var_485;
                          MR_Integer Var_486;
                          MR_Integer Var_487;
                          MR_Integer Var_488;

                          mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (RHSVar_34)), STATE_VARIABLE_UsedVars_208_208, STATE_VARIABLE_UsedVars_99);
                          Var_464 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                          Var_465 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                          Var_466 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                          Var_467 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                          Var_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                          Var_468 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                          Var_469 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                          Var_470 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                          Var_471 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                          Var_472 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                          Var_473 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                          Var_474 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                          Var_475 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                          Var_476 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                          Var_477 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                          Var_478 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                          Var_479 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                          Var_480 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                          Var_481 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                          Var_482 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                          Var_483 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                          Var_484 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                          Var_485 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                          Var_486 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                          Var_487 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                          Var_488 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                          Var_224 = (MR_Integer) ((MR_Unsigned) Var_225 + (MR_Unsigned) 1);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                            *STATE_VARIABLE_Stats_101 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_464));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_465));
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_466));
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_467));
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_224));
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_468));
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_469));
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_470));
                            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_471));
                            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_472));
                            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_473));
                            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_474));
                            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_475));
                            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_476));
                            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_477));
                            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_478));
                            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_479));
                            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_480));
                            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_481));
                            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_482));
                            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_483));
                            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_484));
                            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_485));
                            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_486));
                            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_487));
                            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_488));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word RHSVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_12, (MR_Integer) 2))));
                          MR_Integer Var_219;
                          MR_Integer Var_220;
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
                          MR_Integer Var_525;
                          MR_Integer Var_526;
                          MR_Integer Var_527;
                          MR_Integer Var_528;
                          MR_Integer Var_529;
                          MR_Integer Var_530;
                          MR_Integer Var_531;
                          MR_Integer Var_532;
                          MR_Integer Var_533;
                          MR_Integer Var_534;
                          MR_Integer Var_535;
                          MR_Integer Var_536;
                          MR_Integer Var_537;
                          MR_Integer Var_538;
                          MR_Integer Var_539;

                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), RHSVars_37, STATE_VARIABLE_UsedVars_208_208, STATE_VARIABLE_UsedVars_99);
                          Var_515 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                          Var_516 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                          Var_517 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                          Var_518 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                          Var_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                          Var_519 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                          Var_520 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                          Var_521 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                          Var_522 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                          Var_523 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                          Var_524 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                          Var_525 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                          Var_526 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                          Var_527 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                          Var_528 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                          Var_529 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                          Var_530 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                          Var_531 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                          Var_532 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                          Var_533 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                          Var_534 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                          Var_535 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                          Var_536 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                          Var_537 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                          Var_538 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                          Var_539 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                          Var_219 = (MR_Integer) ((MR_Unsigned) Var_220 + (MR_Unsigned) 1);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                            *STATE_VARIABLE_Stats_101 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_515));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_516));
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_517));
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_518));
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_219));
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_519));
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_520));
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_521));
                            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_522));
                            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_523));
                            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_524));
                            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_525));
                            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_526));
                            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_527));
                            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_528));
                            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_529));
                            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_530));
                            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_531));
                            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_532));
                            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_533));
                            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_534));
                            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_535));
                            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_536));
                            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_537));
                            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_538));
                            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_539));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word NonLocals_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 2))));
                          MR_Word QuantVars_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 3))));
                          MR_Word LambdaGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_12, (MR_Integer) 6))));
                          MR_Word STATE_VARIABLE_UsedVars_209_209;
                          MR_Word STATE_VARIABLE_UsedVars_210_210;
                          MR_Word STATE_VARIABLE_Stats_211_211;
                          MR_Integer Var_212;
                          MR_Integer Var_213;
                          MR_Integer Var_566;
                          MR_Integer Var_567;
                          MR_Integer Var_568;
                          MR_Integer Var_569;
                          MR_Integer Var_570;
                          MR_Integer Var_571;
                          MR_Integer Var_572;
                          MR_Integer Var_573;
                          MR_Integer Var_574;
                          MR_Integer Var_575;
                          MR_Integer Var_576;
                          MR_Integer Var_577;
                          MR_Integer Var_578;
                          MR_Integer Var_579;
                          MR_Integer Var_580;
                          MR_Integer Var_581;
                          MR_Integer Var_582;
                          MR_Integer Var_583;
                          MR_Integer Var_584;
                          MR_Integer Var_585;
                          MR_Integer Var_586;
                          MR_Integer Var_587;
                          MR_Integer Var_588;
                          MR_Integer Var_589;
                          MR_Integer Var_590;
                          MR_Word next_value_of_Goal_6;
                          MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_98;
                          MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), NonLocals_42, STATE_VARIABLE_UsedVars_208_208, &STATE_VARIABLE_UsedVars_209_209);
                          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), QuantVars_43, STATE_VARIABLE_UsedVars_209_209, &STATE_VARIABLE_UsedVars_210_210);
                          Var_566 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                          Var_567 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                          Var_568 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                          Var_569 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                          Var_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                          Var_570 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                          Var_571 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                          Var_572 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                          Var_573 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                          Var_574 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                          Var_575 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                          Var_576 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                          Var_577 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                          Var_578 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                          Var_579 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                          Var_580 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                          Var_581 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                          Var_582 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                          Var_583 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                          Var_584 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                          Var_585 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                          Var_586 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                          Var_587 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                          Var_588 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                          Var_589 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                          Var_590 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                          Var_212 = (MR_Integer) ((MR_Unsigned) Var_213 + (MR_Unsigned) 1);
                          {
                            STATE_VARIABLE_Stats_211_211 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 0) = ((MR_Box) (Var_566));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 1) = ((MR_Box) (Var_567));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 2) = ((MR_Box) (Var_568));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 3) = ((MR_Box) (Var_569));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 4) = ((MR_Box) (Var_212));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 5) = ((MR_Box) (Var_570));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 6) = ((MR_Box) (Var_571));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 7) = ((MR_Box) (Var_572));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 8) = ((MR_Box) (Var_573));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 9) = ((MR_Box) (Var_574));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 10) = ((MR_Box) (Var_575));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 11) = ((MR_Box) (Var_576));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 12) = ((MR_Box) (Var_577));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 13) = ((MR_Box) (Var_578));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 14) = ((MR_Box) (Var_579));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 15) = ((MR_Box) (Var_580));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 16) = ((MR_Box) (Var_581));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 17) = ((MR_Box) (Var_582));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 18) = ((MR_Box) (Var_583));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 19) = ((MR_Box) (Var_584));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 20) = ((MR_Box) (Var_585));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 21) = ((MR_Box) (Var_586));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 22) = ((MR_Box) (Var_587));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 23) = ((MR_Box) (Var_588));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 24) = ((MR_Box) (Var_589));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_211_211, 25) = ((MR_Box) (Var_590));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_Goal_6 = LambdaGoal_46;
                          next_value_of_STATE_VARIABLE_UsedVars_0_98 = STATE_VARIABLE_UsedVars_210_210;
                          next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_211_211;
                          Goal_6 = next_value_of_Goal_6;
                          STATE_VARIABLE_UsedVars_0_98 = next_value_of_STATE_VARIABLE_UsedVars_0_98;
                          STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
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
          MR_Integer Var_205;
          MR_Integer Var_206;
          MR_Word ArgVars_253 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 2))));
          MR_Integer Var_617;
          MR_Integer Var_618;
          MR_Integer Var_619;
          MR_Integer Var_620;
          MR_Integer Var_621;
          MR_Integer Var_622;
          MR_Integer Var_623;
          MR_Integer Var_624;
          MR_Integer Var_625;
          MR_Integer Var_626;
          MR_Integer Var_627;
          MR_Integer Var_628;
          MR_Integer Var_629;
          MR_Integer Var_630;
          MR_Integer Var_631;
          MR_Integer Var_632;
          MR_Integer Var_633;
          MR_Integer Var_634;
          MR_Integer Var_635;
          MR_Integer Var_636;
          MR_Integer Var_637;
          MR_Integer Var_638;
          MR_Integer Var_639;
          MR_Integer Var_640;
          MR_Integer Var_641;

          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_253, STATE_VARIABLE_UsedVars_0_98, STATE_VARIABLE_UsedVars_99);
          Var_617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
          Var_618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
          Var_619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
          Var_620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
          Var_621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
          Var_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
          Var_622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
          Var_623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
          Var_624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
          Var_625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
          Var_626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
          Var_627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
          Var_628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
          Var_629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
          Var_630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
          Var_631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
          Var_632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
          Var_633 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
          Var_634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
          Var_635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
          Var_636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
          Var_637 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
          Var_638 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
          Var_639 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
          Var_640 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
          Var_641 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
          Var_205 = (MR_Integer) ((MR_Unsigned) Var_206 + (MR_Unsigned) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Stats_101 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_617));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_618));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_619));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_620));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_621));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_205));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_622));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_623));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_624));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_625));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_626));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_627));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_628));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_629));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_630));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_631));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_632));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_633));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_634));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_635));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_636));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_637));
            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_638));
            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_639));
            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_640));
            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_641));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallKind_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_UsedVars_172_172;
              MR_Word ArgVars_255 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_255, STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_172_172);
              switch (MR_tag((MR_Word) CallKind_60)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Var_174;
                    MR_Integer Var_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                    MR_Integer Var_923 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                    MR_Integer Var_924 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                    MR_Integer Var_925 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                    MR_Integer Var_926 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                    MR_Integer Var_927 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                    MR_Integer Var_928 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                    MR_Integer Var_929 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                    MR_Integer Var_930 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                    MR_Integer Var_931 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                    MR_Integer Var_932 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                    MR_Integer Var_933 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                    MR_Integer Var_934 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                    MR_Integer Var_935 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                    MR_Integer Var_936 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                    MR_Integer Var_937 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                    MR_Integer Var_938 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                    MR_Integer Var_939 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                    MR_Integer Var_940 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                    MR_Integer Var_941 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                    MR_Integer Var_942 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                    MR_Integer Var_943 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                    MR_Integer Var_944 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                    MR_Integer Var_945 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                    MR_Integer Var_946 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                    MR_Integer Var_947 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));

                    Var_174 = (MR_Integer) ((MR_Unsigned) Var_175 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_923));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_924));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_925));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_926));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_927));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_928));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_929));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_930));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_931));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_932));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_933));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_174));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_934));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_935));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_936));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_937));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_938));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_939));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_940));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_941));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_942));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_943));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_944));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_945));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_946));
                      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_947));
                    }
                    *STATE_VARIABLE_UsedVars_99 = STATE_VARIABLE_UsedVars_172_172;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word HOVar_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_60, (MR_Integer) 0))));
                    MR_Integer Var_192;
                    MR_Integer Var_193;
                    MR_Integer Var_719;
                    MR_Integer Var_720;
                    MR_Integer Var_721;
                    MR_Integer Var_722;
                    MR_Integer Var_723;
                    MR_Integer Var_724;
                    MR_Integer Var_725;
                    MR_Integer Var_726;
                    MR_Integer Var_727;
                    MR_Integer Var_728;
                    MR_Integer Var_729;
                    MR_Integer Var_730;
                    MR_Integer Var_731;
                    MR_Integer Var_732;
                    MR_Integer Var_733;
                    MR_Integer Var_734;
                    MR_Integer Var_735;
                    MR_Integer Var_736;
                    MR_Integer Var_737;
                    MR_Integer Var_738;
                    MR_Integer Var_739;
                    MR_Integer Var_740;
                    MR_Integer Var_741;
                    MR_Integer Var_742;
                    MR_Integer Var_743;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (HOVar_64)), STATE_VARIABLE_UsedVars_172_172, STATE_VARIABLE_UsedVars_99);
                    Var_719 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                    Var_720 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                    Var_721 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                    Var_722 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                    Var_723 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                    Var_724 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                    Var_725 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                    Var_726 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                    Var_727 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                    Var_728 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                    Var_729 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                    Var_730 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                    Var_731 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                    Var_732 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                    Var_733 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                    Var_734 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                    Var_735 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                    Var_736 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                    Var_737 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                    Var_738 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                    Var_739 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                    Var_740 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                    Var_741 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                    Var_742 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                    Var_743 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                    Var_192 = (MR_Integer) ((MR_Unsigned) Var_193 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_719));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_720));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_721));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_722));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_723));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_724));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_725));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_192));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_726));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_727));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_728));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_729));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_730));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_731));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_732));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_733));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_734));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_735));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_736));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_737));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_738));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_739));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_740));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_741));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_742));
                      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_743));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TCIVar_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_60, (MR_Integer) 0))));
                    MR_Integer Var_187;
                    MR_Integer Var_188;
                    MR_Integer Var_770;
                    MR_Integer Var_771;
                    MR_Integer Var_772;
                    MR_Integer Var_773;
                    MR_Integer Var_774;
                    MR_Integer Var_775;
                    MR_Integer Var_776;
                    MR_Integer Var_777;
                    MR_Integer Var_778;
                    MR_Integer Var_779;
                    MR_Integer Var_780;
                    MR_Integer Var_781;
                    MR_Integer Var_782;
                    MR_Integer Var_783;
                    MR_Integer Var_784;
                    MR_Integer Var_785;
                    MR_Integer Var_786;
                    MR_Integer Var_787;
                    MR_Integer Var_788;
                    MR_Integer Var_789;
                    MR_Integer Var_790;
                    MR_Integer Var_791;
                    MR_Integer Var_792;
                    MR_Integer Var_793;
                    MR_Integer Var_794;

                    mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (TCIVar_68)), STATE_VARIABLE_UsedVars_172_172, STATE_VARIABLE_UsedVars_99);
                    Var_770 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                    Var_771 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                    Var_772 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                    Var_773 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                    Var_774 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                    Var_775 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                    Var_776 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                    Var_777 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                    Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                    Var_778 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                    Var_779 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                    Var_780 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                    Var_781 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                    Var_782 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                    Var_783 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                    Var_784 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                    Var_785 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                    Var_786 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                    Var_787 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                    Var_788 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                    Var_789 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                    Var_790 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                    Var_791 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                    Var_792 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                    Var_793 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                    Var_794 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
                    Var_187 = (MR_Integer) ((MR_Unsigned) Var_188 + (MR_Unsigned) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Stats_101 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_770));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_771));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_772));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_773));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_774));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_775));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_776));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_777));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_187));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_778));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_779));
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_780));
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_781));
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_782));
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_783));
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_784));
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_785));
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_786));
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_787));
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_788));
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_789));
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_790));
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_791));
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_792));
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_793));
                      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_794));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallKind_60, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_182;
                        MR_Integer Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                        MR_Integer Var_821 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                        MR_Integer Var_822 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                        MR_Integer Var_823 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                        MR_Integer Var_824 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                        MR_Integer Var_825 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                        MR_Integer Var_826 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                        MR_Integer Var_827 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                        MR_Integer Var_828 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                        MR_Integer Var_829 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                        MR_Integer Var_830 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                        MR_Integer Var_831 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                        MR_Integer Var_832 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                        MR_Integer Var_833 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                        MR_Integer Var_834 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                        MR_Integer Var_835 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                        MR_Integer Var_836 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                        MR_Integer Var_837 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                        MR_Integer Var_838 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                        MR_Integer Var_839 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                        MR_Integer Var_840 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                        MR_Integer Var_841 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                        MR_Integer Var_842 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                        MR_Integer Var_843 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                        MR_Integer Var_844 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                        MR_Integer Var_845 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));

                        Var_182 = (MR_Integer) ((MR_Unsigned) Var_183 + (MR_Unsigned) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                          *STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_821));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_822));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_823));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_824));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_825));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_826));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_827));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_828));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_829));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_182));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_830));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_831));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_832));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_833));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_834));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_835));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_836));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_837));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_838));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_839));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_840));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_841));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_842));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_843));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_844));
                          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_845));
                        }
                        *STATE_VARIABLE_UsedVars_99 = STATE_VARIABLE_UsedVars_172_172;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_178;
                        MR_Integer Var_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
                        MR_Integer Var_872 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
                        MR_Integer Var_873 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
                        MR_Integer Var_874 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
                        MR_Integer Var_875 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
                        MR_Integer Var_876 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
                        MR_Integer Var_877 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
                        MR_Integer Var_878 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
                        MR_Integer Var_879 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
                        MR_Integer Var_880 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
                        MR_Integer Var_881 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
                        MR_Integer Var_882 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
                        MR_Integer Var_883 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
                        MR_Integer Var_884 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
                        MR_Integer Var_885 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
                        MR_Integer Var_886 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
                        MR_Integer Var_887 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
                        MR_Integer Var_888 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
                        MR_Integer Var_889 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
                        MR_Integer Var_890 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
                        MR_Integer Var_891 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
                        MR_Integer Var_892 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
                        MR_Integer Var_893 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
                        MR_Integer Var_894 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
                        MR_Integer Var_895 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
                        MR_Integer Var_896 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));

                        Var_178 = (MR_Integer) ((MR_Unsigned) Var_179 + (MR_Unsigned) 1);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                          *STATE_VARIABLE_Stats_101 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_872));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_873));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_874));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_875));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_876));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_877));
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_878));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_879));
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_880));
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_881));
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_178));
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_882));
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_883));
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_884));
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_885));
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_886));
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_887));
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_888));
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_889));
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_890));
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_891));
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_892));
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_893));
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_894));
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_895));
                          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_896));
                        }
                        *STATE_VARIABLE_UsedVars_99 = STATE_VARIABLE_UsedVars_172_172;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Word ExtraArgs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 5))));
              MR_Word ExtraArgVars_59;
              MR_Word STATE_VARIABLE_UsedVars_197_197;
              MR_Integer Var_200;
              MR_Integer Var_201;
              MR_Word ArgVars_254;
              MR_Integer Var_668;
              MR_Integer Var_669;
              MR_Integer Var_670;
              MR_Integer Var_671;
              MR_Integer Var_672;
              MR_Integer Var_673;
              MR_Integer Var_674;
              MR_Integer Var_675;
              MR_Integer Var_676;
              MR_Integer Var_677;
              MR_Integer Var_678;
              MR_Integer Var_679;
              MR_Integer Var_680;
              MR_Integer Var_681;
              MR_Integer Var_682;
              MR_Integer Var_683;
              MR_Integer Var_684;
              MR_Integer Var_685;
              MR_Integer Var_686;
              MR_Integer Var_687;
              MR_Integer Var_688;
              MR_Integer Var_689;
              MR_Integer Var_690;
              MR_Integer Var_691;
              MR_Integer Var_692;

              ArgVars_254 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[2]), Args_55);
              ExtraArgVars_59 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[3]), ExtraArgs_56);
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ArgVars_254, STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_197_197);
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ExtraArgVars_59, STATE_VARIABLE_UsedVars_197_197, STATE_VARIABLE_UsedVars_99);
              Var_668 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
              Var_669 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              Var_670 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              Var_671 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              Var_672 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              Var_673 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              Var_674 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              Var_675 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              Var_676 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              Var_677 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              Var_678 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              Var_679 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              Var_680 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              Var_681 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              Var_682 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              Var_683 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              Var_684 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              Var_685 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              Var_686 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              Var_687 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              Var_688 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              Var_689 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              Var_690 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              Var_691 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              Var_692 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              Var_200 = (MR_Integer) ((MR_Unsigned) Var_201 + (MR_Unsigned) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Stats_101 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_668));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_669));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_670));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_671));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_672));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_673));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_200));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_674));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_675));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_676));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_677));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_678));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_679));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_680));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_681));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_682));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_683));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_684));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_685));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_686));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_687));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_688));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_689));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_690));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_691));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_692));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Integer Var_1506 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              MR_Integer Var_1507 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              MR_Integer Var_1508 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              MR_Integer Var_1509 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              MR_Integer Var_1510 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              MR_Integer Var_1511 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              MR_Integer Var_1512 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              MR_Integer Var_1513 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              MR_Integer Var_1514 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              MR_Integer Var_1515 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              MR_Integer Var_1516 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              MR_Integer Var_1517 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              MR_Integer Var_1518 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              MR_Integer Var_1519 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              MR_Integer Var_1520 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              MR_Integer Var_1521 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              MR_Integer Var_1522 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              MR_Integer Var_1523 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              MR_Integer Var_1524 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              MR_Integer Var_1525 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              MR_Integer Var_1526 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              MR_Integer Var_1527 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              MR_Integer Var_1528 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              MR_Integer Var_1529 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              MR_Integer Var_1530 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              MR_Integer Var_1531 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));

              switch (ConjType_74) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Stats_160_160;
                    MR_Integer Var_161 = (MR_Integer) ((MR_Unsigned) Var_1517 + (MR_Unsigned) 1);

                    {
                      STATE_VARIABLE_Stats_160_160 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 0) = ((MR_Box) (Var_1531));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 1) = ((MR_Box) (Var_1530));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 2) = ((MR_Box) (Var_1529));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 3) = ((MR_Box) (Var_1528));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 4) = ((MR_Box) (Var_1527));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 5) = ((MR_Box) (Var_1526));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 6) = ((MR_Box) (Var_1525));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 7) = ((MR_Box) (Var_1524));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 8) = ((MR_Box) (Var_1523));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 9) = ((MR_Box) (Var_1522));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 10) = ((MR_Box) (Var_1521));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 11) = ((MR_Box) (Var_1520));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 12) = ((MR_Box) (Var_1519));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 13) = ((MR_Box) (Var_1518));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 14) = ((MR_Box) (Var_161));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 15) = ((MR_Box) (Var_1516));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 16) = ((MR_Box) (Var_1515));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 17) = ((MR_Box) (Var_1514));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 18) = ((MR_Box) (Var_1513));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 19) = ((MR_Box) (Var_1512));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 20) = ((MR_Box) (Var_1511));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 21) = ((MR_Box) (Var_1510));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 22) = ((MR_Box) (Var_1509));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 23) = ((MR_Box) (Var_1508));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 24) = ((MR_Box) (Var_1507));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_160_160, 25) = ((MR_Box) (Var_1506));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(Conjs_75, STATE_VARIABLE_UsedVars_0_98, STATE_VARIABLE_UsedVars_99, STATE_VARIABLE_Stats_160_160, STATE_VARIABLE_Stats_101);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Stats_166_166;
                    MR_Integer Var_167 = (MR_Integer) ((MR_Unsigned) Var_1519 + (MR_Unsigned) 1);

                    {
                      STATE_VARIABLE_Stats_166_166 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 0) = ((MR_Box) (Var_1531));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 1) = ((MR_Box) (Var_1530));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 2) = ((MR_Box) (Var_1529));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 3) = ((MR_Box) (Var_1528));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 4) = ((MR_Box) (Var_1527));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 5) = ((MR_Box) (Var_1526));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 6) = ((MR_Box) (Var_1525));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 7) = ((MR_Box) (Var_1524));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 8) = ((MR_Box) (Var_1523));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 9) = ((MR_Box) (Var_1522));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 10) = ((MR_Box) (Var_1521));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 11) = ((MR_Box) (Var_1520));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 12) = ((MR_Box) (Var_167));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 13) = ((MR_Box) (Var_1518));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 14) = ((MR_Box) (Var_1517));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 15) = ((MR_Box) (Var_1516));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 16) = ((MR_Box) (Var_1515));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 17) = ((MR_Box) (Var_1514));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 18) = ((MR_Box) (Var_1513));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 19) = ((MR_Box) (Var_1512));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 20) = ((MR_Box) (Var_1511));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 21) = ((MR_Box) (Var_1510));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 22) = ((MR_Box) (Var_1509));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 23) = ((MR_Box) (Var_1508));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 24) = ((MR_Box) (Var_1507));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_166_166, 25) = ((MR_Box) (Var_1506));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(Conjs_75, STATE_VARIABLE_UsedVars_0_98, STATE_VARIABLE_UsedVars_99, STATE_VARIABLE_Stats_166_166, STATE_VARIABLE_Stats_101);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Stats_154_154;
              MR_Integer Var_155;
              MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              MR_Integer Var_1076 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
              MR_Integer Var_1077 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              MR_Integer Var_1078 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              MR_Integer Var_1079 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              MR_Integer Var_1080 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              MR_Integer Var_1081 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              MR_Integer Var_1082 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              MR_Integer Var_1083 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              MR_Integer Var_1084 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              MR_Integer Var_1085 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              MR_Integer Var_1086 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              MR_Integer Var_1087 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              MR_Integer Var_1088 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              MR_Integer Var_1089 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              MR_Integer Var_1090 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              MR_Integer Var_1091 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              MR_Integer Var_1092 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              MR_Integer Var_1093 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              MR_Integer Var_1094 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              MR_Integer Var_1095 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              MR_Integer Var_1096 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              MR_Integer Var_1097 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              MR_Integer Var_1098 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              MR_Integer Var_1099 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              MR_Integer Var_1100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));

              Var_155 = (MR_Integer) ((MR_Unsigned) Var_156 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_154_154 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 0) = ((MR_Box) (Var_1076));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 1) = ((MR_Box) (Var_1077));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 2) = ((MR_Box) (Var_1078));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 3) = ((MR_Box) (Var_1079));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 4) = ((MR_Box) (Var_1080));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 5) = ((MR_Box) (Var_1081));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 6) = ((MR_Box) (Var_1082));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 7) = ((MR_Box) (Var_1083));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 8) = ((MR_Box) (Var_1084));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 9) = ((MR_Box) (Var_1085));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 10) = ((MR_Box) (Var_1086));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 11) = ((MR_Box) (Var_1087));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 12) = ((MR_Box) (Var_1088));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 13) = ((MR_Box) (Var_1089));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 14) = ((MR_Box) (Var_1090));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 15) = ((MR_Box) (Var_1091));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 16) = ((MR_Box) (Var_155));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 17) = ((MR_Box) (Var_1092));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 18) = ((MR_Box) (Var_1093));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 19) = ((MR_Box) (Var_1094));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 20) = ((MR_Box) (Var_1095));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 21) = ((MR_Box) (Var_1096));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 22) = ((MR_Box) (Var_1097));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 23) = ((MR_Box) (Var_1098));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 24) = ((MR_Box) (Var_1099));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_154_154, 25) = ((MR_Box) (Var_1100));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(Disjs_76, STATE_VARIABLE_UsedVars_0_98, STATE_VARIABLE_UsedVars_99, STATE_VARIABLE_Stats_154_154, STATE_VARIABLE_Stats_101);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Word Cases_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedVars_147_147;
              MR_Word STATE_VARIABLE_Stats_148_148;
              MR_Integer Var_149;
              MR_Integer Var_150;
              MR_Integer Var_1127;
              MR_Integer Var_1128;
              MR_Integer Var_1129;
              MR_Integer Var_1130;
              MR_Integer Var_1131;
              MR_Integer Var_1132;
              MR_Integer Var_1133;
              MR_Integer Var_1134;
              MR_Integer Var_1135;
              MR_Integer Var_1136;
              MR_Integer Var_1137;
              MR_Integer Var_1138;
              MR_Integer Var_1139;
              MR_Integer Var_1140;
              MR_Integer Var_1141;
              MR_Integer Var_1142;
              MR_Integer Var_1143;
              MR_Integer Var_1144;
              MR_Integer Var_1145;
              MR_Integer Var_1146;
              MR_Integer Var_1147;
              MR_Integer Var_1148;
              MR_Integer Var_1149;
              MR_Integer Var_1150;
              MR_Integer Var_1151;

              mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_statistics_scalar_common_2[0]), ((MR_Box) (SwitchVar_77)), STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_147_147);
              Var_1127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
              Var_1128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              Var_1129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              Var_1130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              Var_1131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              Var_1132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              Var_1133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              Var_1134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              Var_1135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              Var_1136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              Var_1137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              Var_1138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              Var_1139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              Var_1140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              Var_1141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              Var_1142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              Var_1143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              Var_1144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              Var_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              Var_1145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              Var_1146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              Var_1147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              Var_1148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              Var_1149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              Var_1150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              Var_1151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              Var_149 = (MR_Integer) ((MR_Unsigned) Var_150 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_148_148 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 0) = ((MR_Box) (Var_1127));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 1) = ((MR_Box) (Var_1128));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 2) = ((MR_Box) (Var_1129));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 3) = ((MR_Box) (Var_1130));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 4) = ((MR_Box) (Var_1131));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 5) = ((MR_Box) (Var_1132));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 6) = ((MR_Box) (Var_1133));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 7) = ((MR_Box) (Var_1134));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 8) = ((MR_Box) (Var_1135));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 9) = ((MR_Box) (Var_1136));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 10) = ((MR_Box) (Var_1137));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 11) = ((MR_Box) (Var_1138));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 12) = ((MR_Box) (Var_1139));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 13) = ((MR_Box) (Var_1140));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 14) = ((MR_Box) (Var_1141));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 15) = ((MR_Box) (Var_1142));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 16) = ((MR_Box) (Var_1143));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 17) = ((MR_Box) (Var_1144));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 18) = ((MR_Box) (Var_149));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 19) = ((MR_Box) (Var_1145));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 20) = ((MR_Box) (Var_1146));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 21) = ((MR_Box) (Var_1147));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 22) = ((MR_Box) (Var_1148));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 23) = ((MR_Box) (Var_1149));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 24) = ((MR_Box) (Var_1150));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_148_148, 25) = ((MR_Box) (Var_1151));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(Cases_79, STATE_VARIABLE_UsedVars_147_147, STATE_VARIABLE_UsedVars_99, STATE_VARIABLE_Stats_148_148, STATE_VARIABLE_Stats_101);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_Stats_125_125;
              MR_Integer Var_126;
              MR_Integer Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              MR_Word SubGoal_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Integer Var_1280 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
              MR_Integer Var_1281 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              MR_Integer Var_1282 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              MR_Integer Var_1283 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              MR_Integer Var_1284 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              MR_Integer Var_1285 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              MR_Integer Var_1286 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              MR_Integer Var_1287 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              MR_Integer Var_1288 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              MR_Integer Var_1289 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              MR_Integer Var_1290 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              MR_Integer Var_1291 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              MR_Integer Var_1292 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              MR_Integer Var_1293 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              MR_Integer Var_1294 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              MR_Integer Var_1295 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              MR_Integer Var_1296 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              MR_Integer Var_1297 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              MR_Integer Var_1298 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              MR_Integer Var_1299 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              MR_Integer Var_1300 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              MR_Integer Var_1301 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              MR_Integer Var_1302 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              MR_Integer Var_1303 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              MR_Integer Var_1304 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

              Var_126 = (MR_Integer) ((MR_Unsigned) Var_127 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_125_125 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 0) = ((MR_Box) (Var_1280));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 1) = ((MR_Box) (Var_1281));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 2) = ((MR_Box) (Var_1282));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 3) = ((MR_Box) (Var_1283));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 4) = ((MR_Box) (Var_1284));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 5) = ((MR_Box) (Var_1285));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 6) = ((MR_Box) (Var_1286));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 7) = ((MR_Box) (Var_1287));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 8) = ((MR_Box) (Var_1288));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 9) = ((MR_Box) (Var_1289));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 10) = ((MR_Box) (Var_1290));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 11) = ((MR_Box) (Var_1291));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 12) = ((MR_Box) (Var_1292));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 13) = ((MR_Box) (Var_1293));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 14) = ((MR_Box) (Var_1294));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 15) = ((MR_Box) (Var_1295));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 16) = ((MR_Box) (Var_1296));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 17) = ((MR_Box) (Var_1297));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 18) = ((MR_Box) (Var_1298));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 19) = ((MR_Box) (Var_1299));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 20) = ((MR_Box) (Var_1300));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 21) = ((MR_Box) (Var_1301));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 22) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 23) = ((MR_Box) (Var_1302));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 24) = ((MR_Box) (Var_1303));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_125_125, 25) = ((MR_Box) (Var_1304));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoal_256;
              next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_125_125;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
              MR_Word ThenGoal_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
              MR_Word ElseGoal_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Stats_137_137;
              MR_Integer Var_138;
              MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              MR_Word STATE_VARIABLE_UsedVars_141_141;
              MR_Word STATE_VARIABLE_Stats_142_142;
              MR_Word STATE_VARIABLE_UsedVars_143_143;
              MR_Word STATE_VARIABLE_Stats_144_144;
              MR_Integer Var_1178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));
              MR_Integer Var_1179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              MR_Integer Var_1180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              MR_Integer Var_1181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              MR_Integer Var_1182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              MR_Integer Var_1183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              MR_Integer Var_1184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              MR_Integer Var_1185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              MR_Integer Var_1186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              MR_Integer Var_1187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              MR_Integer Var_1188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              MR_Integer Var_1189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              MR_Integer Var_1190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              MR_Integer Var_1191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              MR_Integer Var_1192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              MR_Integer Var_1193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              MR_Integer Var_1194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              MR_Integer Var_1195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              MR_Integer Var_1196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              MR_Integer Var_1197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              MR_Integer Var_1198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              MR_Integer Var_1199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              MR_Integer Var_1200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              MR_Integer Var_1201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              MR_Integer Var_1202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_98;
              MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

              Var_138 = (MR_Integer) ((MR_Unsigned) Var_139 + (MR_Unsigned) 1);
              {
                STATE_VARIABLE_Stats_137_137 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 0) = ((MR_Box) (Var_1178));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 1) = ((MR_Box) (Var_1179));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 2) = ((MR_Box) (Var_1180));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 3) = ((MR_Box) (Var_1181));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 4) = ((MR_Box) (Var_1182));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 5) = ((MR_Box) (Var_1183));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 6) = ((MR_Box) (Var_1184));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 7) = ((MR_Box) (Var_1185));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 8) = ((MR_Box) (Var_1186));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 9) = ((MR_Box) (Var_1187));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 10) = ((MR_Box) (Var_1188));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 11) = ((MR_Box) (Var_1189));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 12) = ((MR_Box) (Var_1190));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 13) = ((MR_Box) (Var_1191));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 14) = ((MR_Box) (Var_1192));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 15) = ((MR_Box) (Var_1193));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 16) = ((MR_Box) (Var_1194));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 17) = ((MR_Box) (Var_1195));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 18) = ((MR_Box) (Var_1196));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 19) = ((MR_Box) (Var_1197));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 20) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 21) = ((MR_Box) (Var_1198));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 22) = ((MR_Box) (Var_1199));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 23) = ((MR_Box) (Var_1200));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 24) = ((MR_Box) (Var_1201));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_137_137, 25) = ((MR_Box) (Var_1202));
              }
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(CondGoal_81, STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_141_141, STATE_VARIABLE_Stats_137_137, &STATE_VARIABLE_Stats_142_142);
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(ThenGoal_82, STATE_VARIABLE_UsedVars_141_141, &STATE_VARIABLE_UsedVars_143_143, STATE_VARIABLE_Stats_142_142, &STATE_VARIABLE_Stats_144_144);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_83;
              next_value_of_STATE_VARIABLE_UsedVars_0_98 = STATE_VARIABLE_UsedVars_143_143;
              next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_144_144;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedVars_0_98 = next_value_of_STATE_VARIABLE_UsedVars_0_98;
              STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
              MR_Integer Var_1532 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 25))));
              MR_Integer Var_1533 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 24))));
              MR_Integer Var_1534 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 23))));
              MR_Integer Var_1535 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 22))));
              MR_Integer Var_1536 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 21))));
              MR_Integer Var_1537 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 20))));
              MR_Integer Var_1538 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 19))));
              MR_Integer Var_1539 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 18))));
              MR_Integer Var_1540 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 17))));
              MR_Integer Var_1541 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 16))));
              MR_Integer Var_1542 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 15))));
              MR_Integer Var_1543 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 14))));
              MR_Integer Var_1544 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 13))));
              MR_Integer Var_1545 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 12))));
              MR_Integer Var_1546 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 11))));
              MR_Integer Var_1547 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 10))));
              MR_Integer Var_1548 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 9))));
              MR_Integer Var_1549 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 8))));
              MR_Integer Var_1550 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 7))));
              MR_Integer Var_1551 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 6))));
              MR_Integer Var_1552 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 5))));
              MR_Integer Var_1553 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 4))));
              MR_Integer Var_1554 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 3))));
              MR_Integer Var_1555 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 2))));
              MR_Integer Var_1556 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 1))));
              MR_Integer Var_1557 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_100, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) ShortHand_86)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_86, (MR_Integer) 0))));
                    MR_Word GoalB_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_86, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Stats_117_117;
                    MR_Integer Var_118 = (MR_Integer) ((MR_Unsigned) Var_1534 + (MR_Unsigned) 1);
                    MR_Word STATE_VARIABLE_UsedVars_121_121;
                    MR_Word STATE_VARIABLE_Stats_122_122;
                    MR_Word next_value_of_Goal_6;
                    MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_98;
                    MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

                    {
                      STATE_VARIABLE_Stats_117_117 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 0) = ((MR_Box) (Var_1557));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 1) = ((MR_Box) (Var_1556));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 2) = ((MR_Box) (Var_1555));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 3) = ((MR_Box) (Var_1554));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 4) = ((MR_Box) (Var_1553));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 5) = ((MR_Box) (Var_1552));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 6) = ((MR_Box) (Var_1551));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 7) = ((MR_Box) (Var_1550));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 8) = ((MR_Box) (Var_1549));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 9) = ((MR_Box) (Var_1548));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 10) = ((MR_Box) (Var_1547));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 11) = ((MR_Box) (Var_1546));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 12) = ((MR_Box) (Var_1545));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 13) = ((MR_Box) (Var_1544));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 14) = ((MR_Box) (Var_1543));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 15) = ((MR_Box) (Var_1542));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 16) = ((MR_Box) (Var_1541));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 17) = ((MR_Box) (Var_1540));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 18) = ((MR_Box) (Var_1539));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 19) = ((MR_Box) (Var_1538));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 20) = ((MR_Box) (Var_1537));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 21) = ((MR_Box) (Var_1536));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 22) = ((MR_Box) (Var_1535));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 23) = ((MR_Box) (Var_118));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 24) = ((MR_Box) (Var_1533));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_117_117, 25) = ((MR_Box) (Var_1532));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(GoalA_87, STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_121_121, STATE_VARIABLE_Stats_117_117, &STATE_VARIABLE_Stats_122_122);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_6 = GoalB_88;
                    next_value_of_STATE_VARIABLE_UsedVars_0_98 = STATE_VARIABLE_UsedVars_121_121;
                    next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_122_122;
                    Goal_6 = next_value_of_Goal_6;
                    STATE_VARIABLE_UsedVars_0_98 = next_value_of_STATE_VARIABLE_UsedVars_0_98;
                    STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_86, (MR_Integer) 4))));
                    MR_Word OrElseGoals_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_86, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Stats_108_108;
                    MR_Integer Var_109 = (MR_Integer) ((MR_Unsigned) Var_1533 + (MR_Unsigned) 1);
                    MR_Word STATE_VARIABLE_UsedVars_112_112;
                    MR_Word STATE_VARIABLE_Stats_113_113;
                    MR_Box conv5_STATE_VARIABLE_UsedVars_99;
                    MR_Box conv4_STATE_VARIABLE_Stats_101;

                    {
                      STATE_VARIABLE_Stats_108_108 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 0) = ((MR_Box) (Var_1557));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 1) = ((MR_Box) (Var_1556));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 2) = ((MR_Box) (Var_1555));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 3) = ((MR_Box) (Var_1554));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 4) = ((MR_Box) (Var_1553));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 5) = ((MR_Box) (Var_1552));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 6) = ((MR_Box) (Var_1551));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 7) = ((MR_Box) (Var_1550));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 8) = ((MR_Box) (Var_1549));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 9) = ((MR_Box) (Var_1548));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 10) = ((MR_Box) (Var_1547));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 11) = ((MR_Box) (Var_1546));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 12) = ((MR_Box) (Var_1545));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 13) = ((MR_Box) (Var_1544));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 14) = ((MR_Box) (Var_1543));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 15) = ((MR_Box) (Var_1542));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 16) = ((MR_Box) (Var_1541));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 17) = ((MR_Box) (Var_1540));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 18) = ((MR_Box) (Var_1539));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 19) = ((MR_Box) (Var_1538));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 20) = ((MR_Box) (Var_1537));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 21) = ((MR_Box) (Var_1536));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 22) = ((MR_Box) (Var_1535));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 23) = ((MR_Box) (Var_1534));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 24) = ((MR_Box) (Var_109));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_108_108, 25) = ((MR_Box) (Var_1532));
                    }
                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(MainGoal_93, STATE_VARIABLE_UsedVars_0_98, &STATE_VARIABLE_UsedVars_112_112, STATE_VARIABLE_Stats_108_108, &STATE_VARIABLE_Stats_113_113);
                    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_2[1]), (MR_Word) (&hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0), (MR_Word) (&hlds__hlds_statistics_scalar_common_1[4]), OrElseGoals_94, ((MR_Box) (STATE_VARIABLE_UsedVars_112_112)), &conv5_STATE_VARIABLE_UsedVars_99, ((MR_Box) (STATE_VARIABLE_Stats_113_113)), &conv4_STATE_VARIABLE_Stats_101);
                    *STATE_VARIABLE_UsedVars_99 = ((MR_Word) (conv5_STATE_VARIABLE_UsedVars_99));
                    *STATE_VARIABLE_Stats_101 = ((MR_Word) (conv4_STATE_VARIABLE_Stats_101));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Stats_102_102;
                    MR_Integer Var_103 = (MR_Integer) ((MR_Unsigned) Var_1532 + (MR_Unsigned) 1);
                    MR_Word SubGoal_257 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_86, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_6;
                    MR_Word next_value_of_STATE_VARIABLE_Stats_0_100;

                    {
                      STATE_VARIABLE_Stats_102_102 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 0) = ((MR_Box) (Var_1557));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 1) = ((MR_Box) (Var_1556));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 2) = ((MR_Box) (Var_1555));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 3) = ((MR_Box) (Var_1554));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 4) = ((MR_Box) (Var_1553));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 5) = ((MR_Box) (Var_1552));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 6) = ((MR_Box) (Var_1551));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 7) = ((MR_Box) (Var_1550));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 8) = ((MR_Box) (Var_1549));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 9) = ((MR_Box) (Var_1548));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 10) = ((MR_Box) (Var_1547));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 11) = ((MR_Box) (Var_1546));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 12) = ((MR_Box) (Var_1545));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 13) = ((MR_Box) (Var_1544));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 14) = ((MR_Box) (Var_1543));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 15) = ((MR_Box) (Var_1542));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 16) = ((MR_Box) (Var_1541));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 17) = ((MR_Box) (Var_1540));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 18) = ((MR_Box) (Var_1539));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 19) = ((MR_Box) (Var_1538));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 20) = ((MR_Box) (Var_1537));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 21) = ((MR_Box) (Var_1536));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 22) = ((MR_Box) (Var_1535));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 23) = ((MR_Box) (Var_1534));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 24) = ((MR_Box) (Var_1533));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_102_102, 25) = ((MR_Box) (Var_103));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_6 = SubGoal_257;
                    next_value_of_STATE_VARIABLE_Stats_0_100 = STATE_VARIABLE_Stats_102_102;
                    Goal_6 = next_value_of_Goal_6;
                    STATE_VARIABLE_Stats_0_100 = next_value_of_STATE_VARIABLE_Stats_0_100;
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
      MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Word STATE_VARIABLE_UsedVars_27_27;
      MR_Word STATE_VARIABLE_Stats_28_28;
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 25))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_23_23 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 1) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 4) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 5) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 6) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 7) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 8) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 9) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 10) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 11) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 12) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 13) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 14) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 15) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 16) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 17) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 18) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 19) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 20) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 21) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 22) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 23) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 24) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_23_23, 25) = ((MR_Box) (Var_55));
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
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 25))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 25) = ((MR_Box) (Var_52));
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
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 25))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 25) = ((MR_Box) (Var_52));
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
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 13))));
      MR_Word STATE_VARIABLE_UsedVars_24_24;
      MR_Word STATE_VARIABLE_Stats_25_25;
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 0))));
      MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 1))));
      MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 2))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 3))));
      MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 4))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 5))));
      MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 6))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 7))));
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 8))));
      MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 9))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 10))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 11))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 12))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 14))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 15))));
      MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 16))));
      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 17))));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 18))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 19))));
      MR_Integer Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 20))));
      MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 21))));
      MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 22))));
      MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 23))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 24))));
      MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_0_4, (MR_Integer) 25))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Stats_0_4;

      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stats_20_20, 25) = ((MR_Box) (Var_52));
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
  {
    MR_Box closure = closure_arg;

    hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
  MR_Word OutStream_7,
  MR_String Msg_8,
  MR_Word ModuleInfo_9,
  MR_Word HeadVar__4_4)
{
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
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_5[0]));
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
}

static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(
  MR_Word OutStream_6,
  MR_String Msg_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_Word ModuleSymName_10;
    MR_String ModuleName_11;
    MR_Word PredTable_12;
    MR_Word Preds_13;
    MR_Word Var_21;
    MR_Box conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleSymName_10);
    ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_10);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "MODULE ");
    mercury__io__write_string_4_p_0(OutStream_6, ModuleName_11);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_8, &PredTable_12);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_12, &Preds_13);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (OutStream_6));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Msg_7));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (ModuleInfo_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_statistics_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Preds_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_statistics____Unify____proc_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_statistics____Compare____proc_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.hlds_statistics.
