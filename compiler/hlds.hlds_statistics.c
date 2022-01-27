/*
** Automatically generated from `hlds_statistics.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 139 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 142 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "hlds.hlds_statistics.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "hlds.hlds_statistics.c"
static const MR_PseudoTypeInfo hlds__hlds_statistics__hlds__hlds_statistics__field_types_proc_stats_0_0[25];

#line 154 "hlds.hlds_statistics.c"
static const MR_ConstString hlds__hlds_statistics__hlds__hlds_statistics__field_names_proc_stats_0_0[25];

#line 157 "hlds.hlds_statistics.c"
static const MR_DuFunctorDesc hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0;

#line 160 "hlds.hlds_statistics.c"
static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1];

#line 163 "hlds.hlds_statistics.c"
static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1];

#line 166 "hlds.hlds_statistics.c"
static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0[1];

#line 169 "hlds.hlds_statistics.c"
static const MR_Integer hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0[1];

#line 172 "hlds.hlds_statistics.c"
static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
#line 175 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 177 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_2);

#line 180 "hlds.hlds_statistics.c"
static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
#line 183 "hlds.hlds_statistics.c"
  MR_Box * hlds__hlds_statistics__wrapper_arg_1,
#line 185 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 187 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_3);

#line 430 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
#line 430 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_10,
#line 430 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__ComponentName_15,
#line 430 "hlds_statistics.m"
  MR_Integer hlds__hlds_statistics__ComponentCount_16);

#line 410 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_11,
#line 410 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Name_13,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_14,
#line 410 "hlds_statistics.m"
  MR_Integer hlds__hlds_statistics__ProcId_15,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Stats_16,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__UsedVars_17,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__VarSet_18);

#line 328 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
#line 328 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_9,
#line 328 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Stats_14);

#line 82 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_8,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_11,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

#line 283 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
#line 283 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__HeadVar__1_1,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__2_2,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__3_3);

#line 283 "hlds_statistics.m"
static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__2_2);

#line 270 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 270 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 270 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

#line 260 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 260 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 260 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

#line 250 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 250 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 250 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

#line 240 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 240 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 240 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5);

#line 229 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 229 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_3,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_4,
#line 229 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_5);

#line 162 "hlds_statistics.m"
static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
#line 162 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 162 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1);

#line 161 "hlds_statistics.m"
static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
#line 161 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 161 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1);

#line 103 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Goal_6,
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98,
#line 103 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99,
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100,
#line 103 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_101);

#line 82 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_8,
#line 82 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Msg_9,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_11,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__5_5);

#line 78 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 78 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_3);

#line 63 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_7,
#line 63 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Msg_8,
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_9,
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__4_4);

#line 60 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 60 "hlds_statistics.m"
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
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



#line 585 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 594 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_statistics__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 603 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 611 "hlds.hlds_statistics.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 619 "hlds.hlds_statistics.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_statistics__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_statistics__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 627 "hlds.hlds_statistics.c"
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

#line 656 "hlds.hlds_statistics.c"
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

#line 685 "hlds.hlds_statistics.c"
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

#line 700 "hlds.hlds_statistics.c"
static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

#line 705 "hlds.hlds_statistics.c"
static const MR_DuPtagLayout hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_statistics__hlds__hlds_statistics__du_stag_ordered_proc_stats_0_0
  }
};

#line 714 "hlds.hlds_statistics.c"
static const MR_DuFunctorDescPtr hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0[1] = {
  &hlds__hlds_statistics__hlds__hlds_statistics__du_functor_desc_proc_stats_0_0
};

#line 719 "hlds.hlds_statistics.c"
static const MR_Integer hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0[1] = {
  (MR_Integer) 0
};

#line 724 "hlds.hlds_statistics.c"
const MR_TypeCtorInfo_Struct hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_statistics____Unify____proc_stats_0_0_10001)),
  ((MR_Box) (hlds__hlds_statistics____Compare____proc_stats_0_0_10001)),
  (MR_String) "hlds.hlds_statistics",
  (MR_String) "proc_stats",
  {
    hlds__hlds_statistics__hlds__hlds_statistics__du_name_ordered_proc_stats_0
  },
  {
    hlds__hlds_statistics__hlds__hlds_statistics__du_ptag_ordered_proc_stats_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_statistics__hlds__hlds_statistics__functor_number_map_proc_stats_0
};

#line 745 "hlds.hlds_statistics.c"
static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0_10001(
#line 748 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 750 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_2)
#line 752 "hlds.hlds_statistics.c"
{
#line 754 "hlds.hlds_statistics.c"
  {
#line 756 "hlds.hlds_statistics.c"
    MR_bool hlds__hlds_statistics__succeeded;

#line 759 "hlds.hlds_statistics.c"
    {
#line 761 "hlds.hlds_statistics.c"
      hlds__hlds_statistics__succeeded = hlds__hlds_statistics____Unify____proc_stats_0_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2));
    }
#line 764 "hlds.hlds_statistics.c"
    return hlds__hlds_statistics__succeeded;
#line 766 "hlds.hlds_statistics.c"
  }
#line 768 "hlds.hlds_statistics.c"
}

#line 771 "hlds.hlds_statistics.c"
static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0_10001(
#line 774 "hlds.hlds_statistics.c"
  MR_Box * hlds__hlds_statistics__wrapper_arg_1,
#line 776 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 778 "hlds.hlds_statistics.c"
  MR_Box hlds__hlds_statistics__wrapper_arg_3)
#line 780 "hlds.hlds_statistics.c"
{
#line 782 "hlds.hlds_statistics.c"
  {
#line 784 "hlds.hlds_statistics.c"
    MR_Word hlds__hlds_statistics__conv0_HeadVar__1_1;

#line 787 "hlds.hlds_statistics.c"
    {
#line 789 "hlds.hlds_statistics.c"
      hlds__hlds_statistics____Compare____proc_stats_0_0(&hlds__hlds_statistics__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), ((MR_Word) hlds__hlds_statistics__wrapper_arg_3));
    }
#line 792 "hlds.hlds_statistics.c"
    *hlds__hlds_statistics__wrapper_arg_1 = ((MR_Box) (hlds__hlds_statistics__conv0_HeadVar__1_1));
#line 794 "hlds.hlds_statistics.c"
  }
#line 796 "hlds.hlds_statistics.c"
}

#line 430 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(
#line 430 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_10,
#line 430 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__ComponentName_15,
#line 430 "hlds_statistics.m"
  MR_Integer hlds__hlds_statistics__ComponentCount_16)
#line 430 "hlds_statistics.m"
{
#line 439 "hlds_statistics.m"
  {
#line 439 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__ComponentCount_16 > (MR_Integer) 0);

#line 439 "hlds_statistics.m"
    if (hlds__hlds_statistics__succeeded)
#line 437 "hlds_statistics.m"
      {
#line 437 "hlds_statistics.m"
        MR_String hlds__hlds_statistics__V_31_31;
#line 437 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__V_37_37;
#line 437 "hlds_statistics.m"
        MR_String hlds__hlds_statistics__V_41_41;

#line 437 "hlds_statistics.m"
        {
#line 437 "hlds_statistics.m"
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "GOAL ");
        }
#line 831 "hlds.hlds_statistics.c"
        hlds__hlds_statistics__V_37_37 = (MR_Word) &hlds__hlds_statistics_scalar_common_4[0];
#line 438 "hlds_statistics.m"
        {
#line 438 "hlds_statistics.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_37_37, hlds__hlds_statistics__ComponentName_15, &hlds__hlds_statistics__V_31_31);
        }
#line 438 "hlds_statistics.m"
        {
#line 438 "hlds_statistics.m"
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__V_31_31);
        }
#line 437 "hlds_statistics.m"
        {
#line 437 "hlds_statistics.m"
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) ": ");
        }
#line 438 "hlds_statistics.m"
        {
#line 438 "hlds_statistics.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_37_37, hlds__hlds_statistics__ComponentCount_16, &hlds__hlds_statistics__V_41_41);
        }
#line 438 "hlds_statistics.m"
        {
#line 438 "hlds_statistics.m"
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, hlds__hlds_statistics__V_41_41);
        }
#line 437 "hlds_statistics.m"
        {
#line 437 "hlds_statistics.m"
          mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_10, (MR_String) "\n");
#line 437 "hlds_statistics.m"
          return;
        }
#line 437 "hlds_statistics.m"
      }
#line 439 "hlds_statistics.m"
    else
#line 437 "hlds_statistics.m"
      {
#line 437 "hlds_statistics.m"
      }
#line 439 "hlds_statistics.m"
  }
#line 430 "hlds_statistics.m"
}

#line 410 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_11,
#line 410 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Name_13,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_14,
#line 410 "hlds_statistics.m"
  MR_Integer hlds__hlds_statistics__ProcId_15,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Stats_16,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__UsedVars_17,
#line 410 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__VarSet_18)
#line 410 "hlds_statistics.m"
{
#line 416 "hlds_statistics.m"
  {
#line 416 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 416 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__TypeCtorInfo_45_45;
#line 416 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__PredIdInt_20;
#line 416 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__ProcIdInt_21;
#line 416 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__Var_22;
#line 416 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__VarInt_24;
#line 416 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__NumUsedVars_25;
#line 416 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_50_50;
#line 416 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__V_56_56;
#line 416 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_60_60;
#line 416 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_70_70;
#line 416 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_81_81;
#line 416 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_91_91;
#line 425 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics___UpdatedVarSet_23;

#line 417 "hlds_statistics.m"
    {
#line 417 "hlds_statistics.m"
      hlds__hlds_statistics__PredIdInt_20 = hlds__hlds_pred__pred_id_to_int_1_f_0(hlds__hlds_statistics__PredId_14);
    }
#line 418 "hlds_statistics.m"
    {
#line 418 "hlds_statistics.m"
      hlds__hlds_statistics__ProcIdInt_21 = hlds__hlds_pred__proc_id_to_int_1_f_0(hlds__hlds_statistics__ProcId_15);
    }
#line 419 "hlds_statistics.m"
    {
#line 419 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "PROC ");
    }
#line 943 "hlds.hlds_statistics.c"
    hlds__hlds_statistics__V_56_56 = (MR_Word) &hlds__hlds_statistics_scalar_common_4[0];
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__PredIdInt_20, &hlds__hlds_statistics__V_50_50);
    }
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_50_50);
    }
#line 419 "hlds_statistics.m"
    {
#line 419 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__ProcIdInt_21, &hlds__hlds_statistics__V_60_60);
    }
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_60_60);
    }
#line 419 "hlds_statistics.m"
    {
#line 419 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__Name_13, &hlds__hlds_statistics__V_70_70);
    }
#line 420 "hlds_statistics.m"
    {
#line 420 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_70_70);
    }
#line 419 "hlds_statistics.m"
    {
#line 419 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
    }
#line 422 "hlds_statistics.m"
    {
#line 422 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__Stats_16);
    }
#line 995 "hlds.hlds_statistics.c"
    hlds__hlds_statistics__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 425 "hlds_statistics.m"
    {
#line 425 "hlds_statistics.m"
      mercury__varset__new_var_3_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, &hlds__hlds_statistics__Var_22, hlds__hlds_statistics__VarSet_18, &hlds__hlds_statistics___UpdatedVarSet_23);
    }
#line 426 "hlds_statistics.m"
    {
#line 426 "hlds_statistics.m"
      mercury__term__var_to_int_2_p_0(hlds__hlds_statistics__TypeCtorInfo_45_45, hlds__hlds_statistics__Var_22, &hlds__hlds_statistics__VarInt_24);
    }
#line 427 "hlds_statistics.m"
    {
#line 427 "hlds_statistics.m"
      hlds__hlds_statistics__NumUsedVars_25 = mercury__set_tree234__count_1_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__UsedVars_17);
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "VARS ");
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__VarInt_24, &hlds__hlds_statistics__V_81_81);
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_81_81);
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) " ");
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__NumUsedVars_25, &hlds__hlds_statistics__V_91_91);
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, hlds__hlds_statistics__V_91_91);
    }
#line 428 "hlds_statistics.m"
    {
#line 428 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_11, (MR_String) "\n");
#line 428 "hlds_statistics.m"
      return;
    }
#line 416 "hlds_statistics.m"
  }
#line 410 "hlds_statistics.m"
}

#line 328 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_115_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_8_p_0(
#line 328 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_9,
#line 328 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Stats_14)
#line 328 "hlds_statistics.m"
{
#line 332 "hlds_statistics.m"
  {
#line 332 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__UnifyConstructs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 0)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__UnifyDeconstructs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 1)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__UnifyAssigns_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 2)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__UnifyTests_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 3)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__UnifyComplicateds_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 4)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__PlainCalls_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 5)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__ForeignCalls_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 6)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__HOCalls_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 7)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__MethodCalls_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 8)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__EventCalls_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 9)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Casts_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 10)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__PlainConjs_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 11)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__PlainConjuncts_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 12)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__ParallelConjs_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 13)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__ParallelConjuncts_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 14)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Disjs_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 15)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Disjuncts_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 16)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Switches_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 17)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__SwitchArms_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 18)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__IfThenElses_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 19)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Negations_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 20)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Scopes_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 21)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__BiImplications_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 22)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__AtomicGoals_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 23)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__TryGoals_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Stats_14, (MR_Integer) 24)));
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__Total_41;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_44_44;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_45_45;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_46_46;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_47_47;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_48_48;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_49_49;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_50_50;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_51_51;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_52_52;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_53_53;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_54_54;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_55_55;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_56_56;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_57_57;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_58_58;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_59_59;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_60_60;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_61_61;
#line 332 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__V_62_62 = (hlds__hlds_statistics__UnifyConstructs_16 + hlds__hlds_statistics__UnifyDeconstructs_17);

#line 341 "hlds_statistics.m"
    hlds__hlds_statistics__V_61_61 = (hlds__hlds_statistics__V_62_62 + hlds__hlds_statistics__UnifyAssigns_18);
#line 342 "hlds_statistics.m"
    hlds__hlds_statistics__V_60_60 = (hlds__hlds_statistics__V_61_61 + hlds__hlds_statistics__UnifyTests_19);
#line 342 "hlds_statistics.m"
    hlds__hlds_statistics__V_59_59 = (hlds__hlds_statistics__V_60_60 + hlds__hlds_statistics__UnifyComplicateds_20);
#line 342 "hlds_statistics.m"
    hlds__hlds_statistics__V_58_58 = (hlds__hlds_statistics__V_59_59 + hlds__hlds_statistics__PlainCalls_21);
#line 343 "hlds_statistics.m"
    hlds__hlds_statistics__V_57_57 = (hlds__hlds_statistics__V_58_58 + hlds__hlds_statistics__ForeignCalls_22);
#line 343 "hlds_statistics.m"
    hlds__hlds_statistics__V_56_56 = (hlds__hlds_statistics__V_57_57 + hlds__hlds_statistics__HOCalls_23);
#line 344 "hlds_statistics.m"
    hlds__hlds_statistics__V_55_55 = (hlds__hlds_statistics__V_56_56 + hlds__hlds_statistics__MethodCalls_24);
#line 344 "hlds_statistics.m"
    hlds__hlds_statistics__V_54_54 = (hlds__hlds_statistics__V_55_55 + hlds__hlds_statistics__EventCalls_25);
#line 344 "hlds_statistics.m"
    hlds__hlds_statistics__V_53_53 = (hlds__hlds_statistics__V_54_54 + hlds__hlds_statistics__Casts_26);
#line 344 "hlds_statistics.m"
    hlds__hlds_statistics__V_52_52 = (hlds__hlds_statistics__V_53_53 + hlds__hlds_statistics__PlainConjs_27);
#line 345 "hlds_statistics.m"
    hlds__hlds_statistics__V_51_51 = (hlds__hlds_statistics__V_52_52 + hlds__hlds_statistics__ParallelConjs_29);
#line 345 "hlds_statistics.m"
    hlds__hlds_statistics__V_50_50 = (hlds__hlds_statistics__V_51_51 + hlds__hlds_statistics__Disjs_31);
#line 346 "hlds_statistics.m"
    hlds__hlds_statistics__V_49_49 = (hlds__hlds_statistics__V_50_50 + hlds__hlds_statistics__Switches_33);
#line 346 "hlds_statistics.m"
    hlds__hlds_statistics__V_48_48 = (hlds__hlds_statistics__V_49_49 + hlds__hlds_statistics__IfThenElses_35);
#line 347 "hlds_statistics.m"
    hlds__hlds_statistics__V_47_47 = (hlds__hlds_statistics__V_48_48 + hlds__hlds_statistics__Negations_36);
#line 347 "hlds_statistics.m"
    hlds__hlds_statistics__V_46_46 = (hlds__hlds_statistics__V_47_47 + hlds__hlds_statistics__Scopes_37);
#line 347 "hlds_statistics.m"
    hlds__hlds_statistics__V_45_45 = (hlds__hlds_statistics__V_46_46 + hlds__hlds_statistics__BiImplications_38);
#line 348 "hlds_statistics.m"
    hlds__hlds_statistics__V_44_44 = (hlds__hlds_statistics__V_45_45 + hlds__hlds_statistics__AtomicGoals_39);
#line 348 "hlds_statistics.m"
    hlds__hlds_statistics__Total_41 = (hlds__hlds_statistics__V_44_44 + hlds__hlds_statistics__TryGoals_40);
#line 350 "hlds_statistics.m"
    {
#line 350 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_contructs", hlds__hlds_statistics__UnifyConstructs_16);
    }
#line 352 "hlds_statistics.m"
    {
#line 352 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_decontructs", hlds__hlds_statistics__UnifyDeconstructs_17);
    }
#line 354 "hlds_statistics.m"
    {
#line 354 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_assigns", hlds__hlds_statistics__UnifyAssigns_18);
    }
#line 356 "hlds_statistics.m"
    {
#line 356 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_tests", hlds__hlds_statistics__UnifyTests_19);
    }
#line 358 "hlds_statistics.m"
    {
#line 358 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "unify_complicateds", hlds__hlds_statistics__UnifyComplicateds_20);
    }
#line 361 "hlds_statistics.m"
    {
#line 361 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_calls", hlds__hlds_statistics__PlainCalls_21);
    }
#line 363 "hlds_statistics.m"
    {
#line 363 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "foreign_calls", hlds__hlds_statistics__ForeignCalls_22);
    }
#line 365 "hlds_statistics.m"
    {
#line 365 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "ho_calls", hlds__hlds_statistics__HOCalls_23);
    }
#line 367 "hlds_statistics.m"
    {
#line 367 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "method_calls", hlds__hlds_statistics__MethodCalls_24);
    }
#line 369 "hlds_statistics.m"
    {
#line 369 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "event_calls", hlds__hlds_statistics__EventCalls_25);
    }
#line 371 "hlds_statistics.m"
    {
#line 371 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "casts", hlds__hlds_statistics__Casts_26);
    }
#line 374 "hlds_statistics.m"
    {
#line 374 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjs", hlds__hlds_statistics__PlainConjs_27);
    }
#line 376 "hlds_statistics.m"
    {
#line 376 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "plain_conjuncts", hlds__hlds_statistics__PlainConjuncts_28);
    }
#line 378 "hlds_statistics.m"
    {
#line 378 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjs", hlds__hlds_statistics__ParallelConjs_29);
    }
#line 380 "hlds_statistics.m"
    {
#line 380 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "parallel_conjuncts", hlds__hlds_statistics__ParallelConjuncts_30);
    }
#line 383 "hlds_statistics.m"
    {
#line 383 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjs", hlds__hlds_statistics__Disjs_31);
    }
#line 385 "hlds_statistics.m"
    {
#line 385 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "disjunctions", hlds__hlds_statistics__Disjuncts_32);
    }
#line 387 "hlds_statistics.m"
    {
#line 387 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switches", hlds__hlds_statistics__Switches_33);
    }
#line 389 "hlds_statistics.m"
    {
#line 389 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "switch_arms", hlds__hlds_statistics__SwitchArms_34);
    }
#line 392 "hlds_statistics.m"
    {
#line 392 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "if_then_elses", hlds__hlds_statistics__IfThenElses_35);
    }
#line 394 "hlds_statistics.m"
    {
#line 394 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "negations", hlds__hlds_statistics__Negations_36);
    }
#line 396 "hlds_statistics.m"
    {
#line 396 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "scopes", hlds__hlds_statistics__Scopes_37);
    }
#line 398 "hlds_statistics.m"
    {
#line 398 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "bi_implications", hlds__hlds_statistics__BiImplications_38);
    }
#line 400 "hlds_statistics.m"
    {
#line 400 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "atomic_goals", hlds__hlds_statistics__AtomicGoals_39);
    }
#line 402 "hlds_statistics.m"
    {
#line 402 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "try_goals", hlds__hlds_statistics__TryGoals_40);
    }
#line 405 "hlds_statistics.m"
    {
#line 405 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_112_114_111_99_95_115_116_97_116_95_99_111_109_112_111_110_101_110_116_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_9_p_0(hlds__hlds_statistics__OutStream_9, (MR_String) "total_size", hlds__hlds_statistics__Total_41);
#line 405 "hlds_statistics.m"
      return;
    }
#line 332 "hlds_statistics.m"
  }
#line 328 "hlds_statistics.m"
}

#line 82 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_8,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_11,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
#line 82 "hlds_statistics.m"
{
#line 87 "hlds_statistics.m"
  {
#line 87 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 87 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 0)));
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__ProcInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__5_5, (MR_Integer) 1)));
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__NamePieces_15;
#line 87 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__Name_16;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__Goal_17;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__UsedVars0_18;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__UsedVars_20;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__Stats_21;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__VarSet_22;
#line 87 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__V_26_26;

#line 89 "hlds_statistics.m"
    {
#line 89 "hlds_statistics.m"
      hlds__hlds_statistics__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 89 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_26_26, 0) = ((MR_Box) (hlds__hlds_statistics__PredId_11));
#line 89 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_26_26, 1) = ((MR_Box) (hlds__hlds_statistics__ProcId_12));
#line 89 "hlds_statistics.m"
    }
#line 88 "hlds_statistics.m"
    {
#line 88 "hlds_statistics.m"
      hlds__hlds_statistics__NamePieces_15 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(hlds__hlds_statistics__ModuleInfo_10, (MR_Integer) 1, hlds__hlds_statistics__V_26_26);
    }
#line 90 "hlds_statistics.m"
    {
#line 90 "hlds_statistics.m"
      hlds__hlds_statistics__Name_16 = parse_tree__error_util__error_pieces_to_string_1_f_0(hlds__hlds_statistics__NamePieces_15);
    }
#line 92 "hlds_statistics.m"
    {
#line 92 "hlds_statistics.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__Goal_17);
    }
#line 93 "hlds_statistics.m"
    {
#line 93 "hlds_statistics.m"
      hlds__hlds_statistics__UsedVars0_18 = mercury__set_tree234__init_0_f_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0]);
    }
#line 95 "hlds_statistics.m"
    {
#line 95 "hlds_statistics.m"
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_17, hlds__hlds_statistics__UsedVars0_18, &hlds__hlds_statistics__UsedVars_20, (MR_Word) &hlds__hlds_statistics_scalar_common_3[0], &hlds__hlds_statistics__Stats_21);
    }
#line 97 "hlds_statistics.m"
    {
#line 97 "hlds_statistics.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_statistics__ProcInfo_13, &hlds__hlds_statistics__VarSet_22);
    }
#line 98 "hlds_statistics.m"
    {
#line 98 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_95_91_50_93_95_48_10_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__Name_16, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__ProcId_12, hlds__hlds_statistics__Stats_21, hlds__hlds_statistics__UsedVars_20, hlds__hlds_statistics__VarSet_22);
#line 98 "hlds_statistics.m"
      return;
    }
#line 87 "hlds_statistics.m"
  }
#line 82 "hlds_statistics.m"
}

#line 283 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics____Compare____proc_stats_0_0(
#line 283 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__HeadVar__1_1,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__2_2,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__3_3)
#line 283 "hlds_statistics.m"
{
#line 283 "hlds_statistics.m"
  {
#line 283 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 283 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__CastX_78 = (MR_Integer) hlds__hlds_statistics__HeadVar__2_2;
#line 283 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__CastY_79 = (MR_Integer) hlds__hlds_statistics__HeadVar__3_3;

#line 283 "hlds_statistics.m"
    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__CastX_78 == hlds__hlds_statistics__CastY_79);
#line 283 "hlds_statistics.m"
    if (hlds__hlds_statistics__succeeded)
#line 1447 "hlds.hlds_statistics.c"
      *hlds__hlds_statistics__HeadVar__1_1 = (MR_Integer) 0;
#line 283 "hlds_statistics.m"
    else
#line 283 "hlds_statistics.m"
      {
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 0)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 1)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 2)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 3)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 4)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 5)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 6)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 7)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 8)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 9)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 10)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 11)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 12)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 13)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 14)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 15)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 16)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 17)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 18)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 19)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 20)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 21)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 22)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 23)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__3_3, (MR_Integer) 24)));
#line 283 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__V_54_54;

#line 283 "hlds_statistics.m"
        {
#line 283 "hlds_statistics.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_54_54, hlds__hlds_statistics__V_4_4, hlds__hlds_statistics__V_29_29);
        }
#line 1561 "hlds.hlds_statistics.c"
        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_54_54 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_54_54;
#line 283 "hlds_statistics.m"
        else
#line 283 "hlds_statistics.m"
          {
#line 283 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__V_55_55;

#line 283 "hlds_statistics.m"
            {
#line 283 "hlds_statistics.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_55_55, hlds__hlds_statistics__V_5_5, hlds__hlds_statistics__V_30_30);
            }
#line 1581 "hlds.hlds_statistics.c"
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_55_55 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_55_55;
#line 283 "hlds_statistics.m"
            else
#line 283 "hlds_statistics.m"
              {
#line 283 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__V_56_56;

#line 283 "hlds_statistics.m"
                {
#line 283 "hlds_statistics.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_56_56, hlds__hlds_statistics__V_6_6, hlds__hlds_statistics__V_31_31);
                }
#line 1601 "hlds.hlds_statistics.c"
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_56_56 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_56_56;
#line 283 "hlds_statistics.m"
                else
#line 283 "hlds_statistics.m"
                  {
#line 283 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__V_57_57;

#line 283 "hlds_statistics.m"
                    {
#line 283 "hlds_statistics.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_57_57, hlds__hlds_statistics__V_7_7, hlds__hlds_statistics__V_32_32);
                    }
#line 1621 "hlds.hlds_statistics.c"
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_57_57 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_57_57;
#line 283 "hlds_statistics.m"
                    else
#line 283 "hlds_statistics.m"
                      {
#line 283 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_58_58;

#line 283 "hlds_statistics.m"
                        {
#line 283 "hlds_statistics.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_58_58, hlds__hlds_statistics__V_8_8, hlds__hlds_statistics__V_33_33);
                        }
#line 1641 "hlds.hlds_statistics.c"
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_58_58 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_58_58;
#line 283 "hlds_statistics.m"
                        else
#line 283 "hlds_statistics.m"
                          {
#line 283 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__V_59_59;

#line 283 "hlds_statistics.m"
                            {
#line 283 "hlds_statistics.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_59_59, hlds__hlds_statistics__V_9_9, hlds__hlds_statistics__V_34_34);
                            }
#line 1661 "hlds.hlds_statistics.c"
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_59_59 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_59_59;
#line 283 "hlds_statistics.m"
                            else
#line 283 "hlds_statistics.m"
                              {
#line 283 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_60_60;

#line 283 "hlds_statistics.m"
                                {
#line 283 "hlds_statistics.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_60_60, hlds__hlds_statistics__V_10_10, hlds__hlds_statistics__V_35_35);
                                }
#line 1681 "hlds.hlds_statistics.c"
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_60_60 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_60_60;
#line 283 "hlds_statistics.m"
                                else
#line 283 "hlds_statistics.m"
                                  {
#line 283 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__V_61_61;

#line 283 "hlds_statistics.m"
                                    {
#line 283 "hlds_statistics.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_61_61, hlds__hlds_statistics__V_11_11, hlds__hlds_statistics__V_36_36);
                                    }
#line 1701 "hlds.hlds_statistics.c"
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_61_61 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_61_61;
#line 283 "hlds_statistics.m"
                                    else
#line 283 "hlds_statistics.m"
                                      {
#line 283 "hlds_statistics.m"
                                        MR_Word hlds__hlds_statistics__V_62_62;

#line 283 "hlds_statistics.m"
                                        {
#line 283 "hlds_statistics.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_62_62, hlds__hlds_statistics__V_12_12, hlds__hlds_statistics__V_37_37);
                                        }
#line 1721 "hlds.hlds_statistics.c"
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_62_62 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_62_62;
#line 283 "hlds_statistics.m"
                                        else
#line 283 "hlds_statistics.m"
                                          {
#line 283 "hlds_statistics.m"
                                            MR_Word hlds__hlds_statistics__V_63_63;

#line 283 "hlds_statistics.m"
                                            {
#line 283 "hlds_statistics.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_63_63, hlds__hlds_statistics__V_13_13, hlds__hlds_statistics__V_38_38);
                                            }
#line 1741 "hlds.hlds_statistics.c"
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_63_63 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_63_63;
#line 283 "hlds_statistics.m"
                                            else
#line 283 "hlds_statistics.m"
                                              {
#line 283 "hlds_statistics.m"
                                                MR_Word hlds__hlds_statistics__V_64_64;

#line 283 "hlds_statistics.m"
                                                {
#line 283 "hlds_statistics.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_64_64, hlds__hlds_statistics__V_14_14, hlds__hlds_statistics__V_39_39);
                                                }
#line 1761 "hlds.hlds_statistics.c"
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_64_64 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_64_64;
#line 283 "hlds_statistics.m"
                                                else
#line 283 "hlds_statistics.m"
                                                  {
#line 283 "hlds_statistics.m"
                                                    MR_Word hlds__hlds_statistics__V_65_65;

#line 283 "hlds_statistics.m"
                                                    {
#line 283 "hlds_statistics.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_65_65, hlds__hlds_statistics__V_15_15, hlds__hlds_statistics__V_40_40);
                                                    }
#line 1781 "hlds.hlds_statistics.c"
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_65_65 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_65_65;
#line 283 "hlds_statistics.m"
                                                    else
#line 283 "hlds_statistics.m"
                                                      {
#line 283 "hlds_statistics.m"
                                                        MR_Word hlds__hlds_statistics__V_66_66;

#line 283 "hlds_statistics.m"
                                                        {
#line 283 "hlds_statistics.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_66_66, hlds__hlds_statistics__V_16_16, hlds__hlds_statistics__V_41_41);
                                                        }
#line 1801 "hlds.hlds_statistics.c"
                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_66_66 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_66_66;
#line 283 "hlds_statistics.m"
                                                        else
#line 283 "hlds_statistics.m"
                                                          {
#line 283 "hlds_statistics.m"
                                                            MR_Word hlds__hlds_statistics__V_67_67;

#line 283 "hlds_statistics.m"
                                                            {
#line 283 "hlds_statistics.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_67_67, hlds__hlds_statistics__V_17_17, hlds__hlds_statistics__V_42_42);
                                                            }
#line 1821 "hlds.hlds_statistics.c"
                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_67_67 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_67_67;
#line 283 "hlds_statistics.m"
                                                            else
#line 283 "hlds_statistics.m"
                                                              {
#line 283 "hlds_statistics.m"
                                                                MR_Word hlds__hlds_statistics__V_68_68;

#line 283 "hlds_statistics.m"
                                                                {
#line 283 "hlds_statistics.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_68_68, hlds__hlds_statistics__V_18_18, hlds__hlds_statistics__V_43_43);
                                                                }
#line 1841 "hlds.hlds_statistics.c"
                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_68_68 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_68_68;
#line 283 "hlds_statistics.m"
                                                                else
#line 283 "hlds_statistics.m"
                                                                  {
#line 283 "hlds_statistics.m"
                                                                    MR_Word hlds__hlds_statistics__V_69_69;

#line 283 "hlds_statistics.m"
                                                                    {
#line 283 "hlds_statistics.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_69_69, hlds__hlds_statistics__V_19_19, hlds__hlds_statistics__V_44_44);
                                                                    }
#line 1861 "hlds.hlds_statistics.c"
                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_69_69 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_69_69;
#line 283 "hlds_statistics.m"
                                                                    else
#line 283 "hlds_statistics.m"
                                                                      {
#line 283 "hlds_statistics.m"
                                                                        MR_Word hlds__hlds_statistics__V_70_70;

#line 283 "hlds_statistics.m"
                                                                        {
#line 283 "hlds_statistics.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_70_70, hlds__hlds_statistics__V_20_20, hlds__hlds_statistics__V_45_45);
                                                                        }
#line 1881 "hlds.hlds_statistics.c"
                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_70_70 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_70_70;
#line 283 "hlds_statistics.m"
                                                                        else
#line 283 "hlds_statistics.m"
                                                                          {
#line 283 "hlds_statistics.m"
                                                                            MR_Word hlds__hlds_statistics__V_71_71;

#line 283 "hlds_statistics.m"
                                                                            {
#line 283 "hlds_statistics.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_71_71, hlds__hlds_statistics__V_21_21, hlds__hlds_statistics__V_46_46);
                                                                            }
#line 1901 "hlds.hlds_statistics.c"
                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_71_71 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_71_71;
#line 283 "hlds_statistics.m"
                                                                            else
#line 283 "hlds_statistics.m"
                                                                              {
#line 283 "hlds_statistics.m"
                                                                                MR_Word hlds__hlds_statistics__V_72_72;

#line 283 "hlds_statistics.m"
                                                                                {
#line 283 "hlds_statistics.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_72_72, hlds__hlds_statistics__V_22_22, hlds__hlds_statistics__V_47_47);
                                                                                }
#line 1921 "hlds.hlds_statistics.c"
                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_72_72 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_72_72;
#line 283 "hlds_statistics.m"
                                                                                else
#line 283 "hlds_statistics.m"
                                                                                  {
#line 283 "hlds_statistics.m"
                                                                                    MR_Word hlds__hlds_statistics__V_73_73;

#line 283 "hlds_statistics.m"
                                                                                    {
#line 283 "hlds_statistics.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_73_73, hlds__hlds_statistics__V_23_23, hlds__hlds_statistics__V_48_48);
                                                                                    }
#line 1941 "hlds.hlds_statistics.c"
                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_73_73 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_73_73;
#line 283 "hlds_statistics.m"
                                                                                    else
#line 283 "hlds_statistics.m"
                                                                                      {
#line 283 "hlds_statistics.m"
                                                                                        MR_Word hlds__hlds_statistics__V_74_74;

#line 283 "hlds_statistics.m"
                                                                                        {
#line 283 "hlds_statistics.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_74_74, hlds__hlds_statistics__V_24_24, hlds__hlds_statistics__V_49_49);
                                                                                        }
#line 1961 "hlds.hlds_statistics.c"
                                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_74_74 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                        hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                          *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_74_74;
#line 283 "hlds_statistics.m"
                                                                                        else
#line 283 "hlds_statistics.m"
                                                                                          {
#line 283 "hlds_statistics.m"
                                                                                            MR_Word hlds__hlds_statistics__V_75_75;

#line 283 "hlds_statistics.m"
                                                                                            {
#line 283 "hlds_statistics.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_75_75, hlds__hlds_statistics__V_25_25, hlds__hlds_statistics__V_50_50);
                                                                                            }
#line 1981 "hlds.hlds_statistics.c"
                                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_75_75 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                            hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                              *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_75_75;
#line 283 "hlds_statistics.m"
                                                                                            else
#line 283 "hlds_statistics.m"
                                                                                              {
#line 283 "hlds_statistics.m"
                                                                                                MR_Word hlds__hlds_statistics__V_76_76;

#line 283 "hlds_statistics.m"
                                                                                                {
#line 283 "hlds_statistics.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_76_76, hlds__hlds_statistics__V_26_26, hlds__hlds_statistics__V_51_51);
                                                                                                }
#line 2001 "hlds.hlds_statistics.c"
                                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_76_76 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                                hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                                  *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_76_76;
#line 283 "hlds_statistics.m"
                                                                                                else
#line 283 "hlds_statistics.m"
                                                                                                  {
#line 283 "hlds_statistics.m"
                                                                                                    MR_Word hlds__hlds_statistics__V_77_77;

#line 283 "hlds_statistics.m"
                                                                                                    {
#line 283 "hlds_statistics.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_statistics__V_77_77, hlds__hlds_statistics__V_27_27, hlds__hlds_statistics__V_52_52);
                                                                                                    }
#line 2021 "hlds.hlds_statistics.c"
                                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_77_77 == (MR_Integer) 0);
#line 283 "hlds_statistics.m"
                                                                                                    hlds__hlds_statistics__succeeded = !(hlds__hlds_statistics__succeeded);
#line 283 "hlds_statistics.m"
                                                                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                                      *hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__V_77_77;
#line 283 "hlds_statistics.m"
                                                                                                    else
#line 283 "hlds_statistics.m"
                                                                                                      {
#line 283 "hlds_statistics.m"
                                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_statistics__HeadVar__1_1, hlds__hlds_statistics__V_28_28, hlds__hlds_statistics__V_53_53);
#line 283 "hlds_statistics.m"
                                                                                                        return;
                                                                                                      }
#line 283 "hlds_statistics.m"
                                                                                                  }
#line 283 "hlds_statistics.m"
                                                                                              }
#line 283 "hlds_statistics.m"
                                                                                          }
#line 283 "hlds_statistics.m"
                                                                                      }
#line 283 "hlds_statistics.m"
                                                                                  }
#line 283 "hlds_statistics.m"
                                                                              }
#line 283 "hlds_statistics.m"
                                                                          }
#line 283 "hlds_statistics.m"
                                                                      }
#line 283 "hlds_statistics.m"
                                                                  }
#line 283 "hlds_statistics.m"
                                                              }
#line 283 "hlds_statistics.m"
                                                          }
#line 283 "hlds_statistics.m"
                                                      }
#line 283 "hlds_statistics.m"
                                                  }
#line 283 "hlds_statistics.m"
                                              }
#line 283 "hlds_statistics.m"
                                          }
#line 283 "hlds_statistics.m"
                                      }
#line 283 "hlds_statistics.m"
                                  }
#line 283 "hlds_statistics.m"
                              }
#line 283 "hlds_statistics.m"
                          }
#line 283 "hlds_statistics.m"
                      }
#line 283 "hlds_statistics.m"
                  }
#line 283 "hlds_statistics.m"
              }
#line 283 "hlds_statistics.m"
          }
#line 283 "hlds_statistics.m"
      }
#line 283 "hlds_statistics.m"
  }
#line 283 "hlds_statistics.m"
}

#line 283 "hlds_statistics.m"
static MR_bool MR_CALL 
hlds__hlds_statistics____Unify____proc_stats_0_0(
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 283 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__2_2)
#line 283 "hlds_statistics.m"
{
#line 283 "hlds_statistics.m"
  {
#line 283 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 283 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__CastX_53 = (MR_Integer) hlds__hlds_statistics__HeadVar__1_1;
#line 283 "hlds_statistics.m"
    MR_Integer hlds__hlds_statistics__CastY_54 = (MR_Integer) hlds__hlds_statistics__HeadVar__2_2;

#line 283 "hlds_statistics.m"
    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__CastX_53 == hlds__hlds_statistics__CastY_54);
#line 283 "hlds_statistics.m"
    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
      hlds__hlds_statistics__succeeded = MR_TRUE;
#line 283 "hlds_statistics.m"
    else
#line 283 "hlds_statistics.m"
      {
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 2)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 3)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 4)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 5)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 6)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 7)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 8)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 9)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 10)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 11)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 12)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 13)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 14)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 15)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 16)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 17)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 18)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 19)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 20)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 21)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 22)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 23)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 24)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 2)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 3)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 4)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 5)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 6)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 7)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 8)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 9)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 10)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 11)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 12)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 13)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 14)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 15)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 16)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 17)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 18)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 19)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 20)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 21)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 22)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 23)));
#line 283 "hlds_statistics.m"
        MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__2_2, (MR_Integer) 24)));

#line 2220 "hlds.hlds_statistics.c"
        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_3_3 == hlds__hlds_statistics__V_28_28);
#line 283 "hlds_statistics.m"
        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
          {
#line 2226 "hlds.hlds_statistics.c"
            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_4_4 == hlds__hlds_statistics__V_29_29);
#line 283 "hlds_statistics.m"
            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
              {
#line 2232 "hlds.hlds_statistics.c"
                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_5_5 == hlds__hlds_statistics__V_30_30);
#line 283 "hlds_statistics.m"
                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                  {
#line 2238 "hlds.hlds_statistics.c"
                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_6_6 == hlds__hlds_statistics__V_31_31);
#line 283 "hlds_statistics.m"
                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                      {
#line 2244 "hlds.hlds_statistics.c"
                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_7_7 == hlds__hlds_statistics__V_32_32);
#line 283 "hlds_statistics.m"
                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                          {
#line 2250 "hlds.hlds_statistics.c"
                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_8_8 == hlds__hlds_statistics__V_33_33);
#line 283 "hlds_statistics.m"
                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                              {
#line 2256 "hlds.hlds_statistics.c"
                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_9_9 == hlds__hlds_statistics__V_34_34);
#line 283 "hlds_statistics.m"
                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                  {
#line 2262 "hlds.hlds_statistics.c"
                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_10_10 == hlds__hlds_statistics__V_35_35);
#line 283 "hlds_statistics.m"
                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                      {
#line 2268 "hlds.hlds_statistics.c"
                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_11_11 == hlds__hlds_statistics__V_36_36);
#line 283 "hlds_statistics.m"
                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                          {
#line 2274 "hlds.hlds_statistics.c"
                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_12_12 == hlds__hlds_statistics__V_37_37);
#line 283 "hlds_statistics.m"
                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                              {
#line 2280 "hlds.hlds_statistics.c"
                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_13_13 == hlds__hlds_statistics__V_38_38);
#line 283 "hlds_statistics.m"
                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                  {
#line 2286 "hlds.hlds_statistics.c"
                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_14_14 == hlds__hlds_statistics__V_39_39);
#line 283 "hlds_statistics.m"
                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                      {
#line 2292 "hlds.hlds_statistics.c"
                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_15_15 == hlds__hlds_statistics__V_40_40);
#line 283 "hlds_statistics.m"
                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                          {
#line 2298 "hlds.hlds_statistics.c"
                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_16_16 == hlds__hlds_statistics__V_41_41);
#line 283 "hlds_statistics.m"
                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                              {
#line 2304 "hlds.hlds_statistics.c"
                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_17_17 == hlds__hlds_statistics__V_42_42);
#line 283 "hlds_statistics.m"
                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                  {
#line 2310 "hlds.hlds_statistics.c"
                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_18_18 == hlds__hlds_statistics__V_43_43);
#line 283 "hlds_statistics.m"
                                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                      {
#line 2316 "hlds.hlds_statistics.c"
                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_19_19 == hlds__hlds_statistics__V_44_44);
#line 283 "hlds_statistics.m"
                                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                          {
#line 2322 "hlds.hlds_statistics.c"
                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_20_20 == hlds__hlds_statistics__V_45_45);
#line 283 "hlds_statistics.m"
                                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                              {
#line 2328 "hlds.hlds_statistics.c"
                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_21_21 == hlds__hlds_statistics__V_46_46);
#line 283 "hlds_statistics.m"
                                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                  {
#line 2334 "hlds.hlds_statistics.c"
                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_22_22 == hlds__hlds_statistics__V_47_47);
#line 283 "hlds_statistics.m"
                                                                                    if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                      {
#line 2340 "hlds.hlds_statistics.c"
                                                                                        hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_23_23 == hlds__hlds_statistics__V_48_48);
#line 283 "hlds_statistics.m"
                                                                                        if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                          {
#line 2346 "hlds.hlds_statistics.c"
                                                                                            hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_24_24 == hlds__hlds_statistics__V_49_49);
#line 283 "hlds_statistics.m"
                                                                                            if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                              {
#line 2352 "hlds.hlds_statistics.c"
                                                                                                hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_25_25 == hlds__hlds_statistics__V_50_50);
#line 283 "hlds_statistics.m"
                                                                                                if (hlds__hlds_statistics__succeeded)
#line 283 "hlds_statistics.m"
                                                                                                  {
#line 2358 "hlds.hlds_statistics.c"
                                                                                                    hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_26_26 == hlds__hlds_statistics__V_51_51);
#line 283 "hlds_statistics.m"
                                                                                                    if (hlds__hlds_statistics__succeeded)
#line 2362 "hlds.hlds_statistics.c"
                                                                                                      hlds__hlds_statistics__succeeded = (hlds__hlds_statistics__V_27_27 == hlds__hlds_statistics__V_52_52);
#line 283 "hlds_statistics.m"
                                                                                                  }
#line 283 "hlds_statistics.m"
                                                                                              }
#line 283 "hlds_statistics.m"
                                                                                          }
#line 283 "hlds_statistics.m"
                                                                                      }
#line 283 "hlds_statistics.m"
                                                                                  }
#line 283 "hlds_statistics.m"
                                                                              }
#line 283 "hlds_statistics.m"
                                                                          }
#line 283 "hlds_statistics.m"
                                                                      }
#line 283 "hlds_statistics.m"
                                                                  }
#line 283 "hlds_statistics.m"
                                                              }
#line 283 "hlds_statistics.m"
                                                          }
#line 283 "hlds_statistics.m"
                                                      }
#line 283 "hlds_statistics.m"
                                                  }
#line 283 "hlds_statistics.m"
                                              }
#line 283 "hlds_statistics.m"
                                          }
#line 283 "hlds_statistics.m"
                                      }
#line 283 "hlds_statistics.m"
                                  }
#line 283 "hlds_statistics.m"
                              }
#line 283 "hlds_statistics.m"
                          }
#line 283 "hlds_statistics.m"
                      }
#line 283 "hlds_statistics.m"
                  }
#line 283 "hlds_statistics.m"
              }
#line 283 "hlds_statistics.m"
          }
#line 283 "hlds_statistics.m"
      }
#line 283 "hlds_statistics.m"
    return hlds__hlds_statistics__succeeded;
#line 283 "hlds_statistics.m"
  }
#line 283 "hlds_statistics.m"
}

#line 270 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 270 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 270 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 270 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
#line 270 "hlds_statistics.m"
{
#line 274 "hlds_statistics.m"
  while (MR_TRUE)
#line 274 "hlds_statistics.m"
    {
#line 274 "hlds_statistics.m"
      /* tailcall optimized into a loop */
#line 274 "hlds_statistics.m"
      {
#line 274 "hlds_statistics.m"
        MR_bool hlds__hlds_statistics__succeeded;

#line 274 "hlds_statistics.m"
        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "hlds_statistics.m"
          {
#line 274 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
#line 274 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
#line 274 "hlds_statistics.m"
          }
#line 274 "hlds_statistics.m"
        else
#line 275 "hlds_statistics.m"
          {
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goal_18;
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23;
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_24_24;
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
#line 275 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
#line 275 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));
#line 277 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__V_16_16;
#line 277 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__V_17_17;

#line 276 "hlds_statistics.m"
            hlds__hlds_statistics__V_24_24 = (hlds__hlds_statistics__V_25_25 + (MR_Integer) 1);
#line 276 "hlds_statistics.m"
            {
#line 276 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 0) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 1) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 2) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 3) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 4) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 5) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 6) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 7) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 8) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 9) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 10) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 11) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 12) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 13) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 14) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 15) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 16) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 17) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 18) = ((MR_Box) (hlds__hlds_statistics__V_24_24));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 19) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 20) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 21) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 22) = ((MR_Box) (hlds__hlds_statistics__V_52_52));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 23) = ((MR_Box) (hlds__hlds_statistics__V_53_53));
#line 276 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, 24) = ((MR_Box) (hlds__hlds_statistics__V_54_54));
#line 276 "hlds_statistics.m"
            }
#line 277 "hlds_statistics.m"
            hlds__hlds_statistics__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 0)));
#line 277 "hlds_statistics.m"
            hlds__hlds_statistics__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 1)));
#line 277 "hlds_statistics.m"
            hlds__hlds_statistics__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Case_12, (MR_Integer) 2)));
#line 278 "hlds_statistics.m"
            {
#line 278 "hlds_statistics.m"
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27, hlds__hlds_statistics__STATE_VARIABLE_Stats_23_23, &hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28);
            }
#line 279 "hlds_statistics.m"
            /* direct tailcall eliminated */
#line 279 "hlds_statistics.m"
            {
#line 279 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Cases_13;
#line 279 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_27_27;
#line 279 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_28_28;

#line 279 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
#line 279 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
#line 279 "hlds_statistics.m"
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
#line 279 "hlds_statistics.m"
            }
#line 279 "hlds_statistics.m"
            continue;
#line 275 "hlds_statistics.m"
          }
#line 274 "hlds_statistics.m"
      }
#line 274 "hlds_statistics.m"
      break;
#line 274 "hlds_statistics.m"
    }
#line 270 "hlds_statistics.m"
}

#line 260 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 260 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 260 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 260 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
#line 260 "hlds_statistics.m"
{
#line 264 "hlds_statistics.m"
  while (MR_TRUE)
#line 264 "hlds_statistics.m"
    {
#line 264 "hlds_statistics.m"
      /* tailcall optimized into a loop */
#line 264 "hlds_statistics.m"
      {
#line 264 "hlds_statistics.m"
        MR_bool hlds__hlds_statistics__succeeded;

#line 264 "hlds_statistics.m"
        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "hlds_statistics.m"
          {
#line 264 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
#line 264 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
#line 264 "hlds_statistics.m"
          }
#line 264 "hlds_statistics.m"
        else
#line 265 "hlds_statistics.m"
          {
#line 265 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 265 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_21_21;
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
#line 265 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 265 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
#line 265 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

#line 266 "hlds_statistics.m"
            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
#line 266 "hlds_statistics.m"
            {
#line 266 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
#line 266 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
#line 266 "hlds_statistics.m"
            }
#line 267 "hlds_statistics.m"
            {
#line 267 "hlds_statistics.m"
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
#line 268 "hlds_statistics.m"
            /* direct tailcall eliminated */
#line 268 "hlds_statistics.m"
            {
#line 268 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
#line 268 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 268 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

#line 268 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
#line 268 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
#line 268 "hlds_statistics.m"
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
#line 268 "hlds_statistics.m"
            }
#line 268 "hlds_statistics.m"
            continue;
#line 265 "hlds_statistics.m"
          }
#line 264 "hlds_statistics.m"
      }
#line 264 "hlds_statistics.m"
      break;
#line 264 "hlds_statistics.m"
    }
#line 260 "hlds_statistics.m"
}

#line 250 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 250 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 250 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 250 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
#line 250 "hlds_statistics.m"
{
#line 254 "hlds_statistics.m"
  while (MR_TRUE)
#line 254 "hlds_statistics.m"
    {
#line 254 "hlds_statistics.m"
      /* tailcall optimized into a loop */
#line 254 "hlds_statistics.m"
      {
#line 254 "hlds_statistics.m"
        MR_bool hlds__hlds_statistics__succeeded;

#line 254 "hlds_statistics.m"
        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "hlds_statistics.m"
          {
#line 254 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
#line 254 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
#line 254 "hlds_statistics.m"
          }
#line 254 "hlds_statistics.m"
        else
#line 255 "hlds_statistics.m"
          {
#line 255 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_21_21;
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
#line 255 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 255 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
#line 255 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

#line 256 "hlds_statistics.m"
            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
#line 256 "hlds_statistics.m"
            {
#line 256 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
#line 256 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
#line 256 "hlds_statistics.m"
            }
#line 257 "hlds_statistics.m"
            {
#line 257 "hlds_statistics.m"
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
#line 258 "hlds_statistics.m"
            /* direct tailcall eliminated */
#line 258 "hlds_statistics.m"
            {
#line 258 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
#line 258 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 258 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

#line 258 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
#line 258 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
#line 258 "hlds_statistics.m"
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
#line 258 "hlds_statistics.m"
            }
#line 258 "hlds_statistics.m"
            continue;
#line 255 "hlds_statistics.m"
          }
#line 254 "hlds_statistics.m"
      }
#line 254 "hlds_statistics.m"
      break;
#line 254 "hlds_statistics.m"
    }
#line 250 "hlds_statistics.m"
}

#line 240 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__1_1,
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2,
#line 240 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3,
#line 240 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4,
#line 240 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_5)
#line 240 "hlds_statistics.m"
{
#line 244 "hlds_statistics.m"
  while (MR_TRUE)
#line 244 "hlds_statistics.m"
    {
#line 244 "hlds_statistics.m"
      /* tailcall optimized into a loop */
#line 244 "hlds_statistics.m"
      {
#line 244 "hlds_statistics.m"
        MR_bool hlds__hlds_statistics__succeeded;

#line 244 "hlds_statistics.m"
        if ((hlds__hlds_statistics__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "hlds_statistics.m"
          {
#line 244 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_Stats_5 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4;
#line 244 "hlds_statistics.m"
            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_3 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2;
#line 244 "hlds_statistics.m"
          }
#line 244 "hlds_statistics.m"
        else
#line 245 "hlds_statistics.m"
          {
#line 245 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20;
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_21_21;
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 12)));
#line 245 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 245 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 0)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 1)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 2)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 3)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 4)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 5)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 6)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 7)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 8)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 9)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 10)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 11)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 13)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 14)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 15)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 16)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 17)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 18)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 19)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 20)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 21)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 22)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 23)));
#line 245 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4, (MR_Integer) 24)));

#line 246 "hlds_statistics.m"
            hlds__hlds_statistics__V_21_21 = (hlds__hlds_statistics__V_22_22 + (MR_Integer) 1);
#line 246 "hlds_statistics.m"
            {
#line 246 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 0) = ((MR_Box) (hlds__hlds_statistics__V_28_28));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 1) = ((MR_Box) (hlds__hlds_statistics__V_29_29));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 2) = ((MR_Box) (hlds__hlds_statistics__V_30_30));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 3) = ((MR_Box) (hlds__hlds_statistics__V_31_31));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 4) = ((MR_Box) (hlds__hlds_statistics__V_32_32));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 5) = ((MR_Box) (hlds__hlds_statistics__V_33_33));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 6) = ((MR_Box) (hlds__hlds_statistics__V_34_34));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 7) = ((MR_Box) (hlds__hlds_statistics__V_35_35));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 8) = ((MR_Box) (hlds__hlds_statistics__V_36_36));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 9) = ((MR_Box) (hlds__hlds_statistics__V_37_37));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 10) = ((MR_Box) (hlds__hlds_statistics__V_38_38));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 11) = ((MR_Box) (hlds__hlds_statistics__V_39_39));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 12) = ((MR_Box) (hlds__hlds_statistics__V_21_21));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 13) = ((MR_Box) (hlds__hlds_statistics__V_40_40));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 14) = ((MR_Box) (hlds__hlds_statistics__V_41_41));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 15) = ((MR_Box) (hlds__hlds_statistics__V_42_42));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 16) = ((MR_Box) (hlds__hlds_statistics__V_43_43));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 17) = ((MR_Box) (hlds__hlds_statistics__V_44_44));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 18) = ((MR_Box) (hlds__hlds_statistics__V_45_45));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 19) = ((MR_Box) (hlds__hlds_statistics__V_46_46));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 20) = ((MR_Box) (hlds__hlds_statistics__V_47_47));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 21) = ((MR_Box) (hlds__hlds_statistics__V_48_48));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 22) = ((MR_Box) (hlds__hlds_statistics__V_49_49));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 23) = ((MR_Box) (hlds__hlds_statistics__V_50_50));
#line 246 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, 24) = ((MR_Box) (hlds__hlds_statistics__V_51_51));
#line 246 "hlds_statistics.m"
            }
#line 247 "hlds_statistics.m"
            {
#line 247 "hlds_statistics.m"
              hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__Goal_12, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24, hlds__hlds_statistics__STATE_VARIABLE_Stats_20_20, &hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25);
            }
#line 248 "hlds_statistics.m"
            /* direct tailcall eliminated */
#line 248 "hlds_statistics.m"
            {
#line 248 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__HeadVar__1__tmp_copy_1 = hlds__hlds_statistics__Goals_13;
#line 248 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_24_24;
#line 248 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_25_25;

#line 248 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_4 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_4;
#line 248 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_2 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_2;
#line 248 "hlds_statistics.m"
              hlds__hlds_statistics__HeadVar__1_1 = hlds__hlds_statistics__HeadVar__1__tmp_copy_1;
#line 248 "hlds_statistics.m"
            }
#line 248 "hlds_statistics.m"
            continue;
#line 245 "hlds_statistics.m"
          }
#line 244 "hlds_statistics.m"
      }
#line 244 "hlds_statistics.m"
      break;
#line 244 "hlds_statistics.m"
    }
#line 240 "hlds_statistics.m"
}

#line 229 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_3(
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 229 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_3,
#line 229 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_4,
#line 229 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_5)
#line 229 "hlds_statistics.m"
{
#line 229 "hlds_statistics.m"
  {
#line 229 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
#line 229 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99;
#line 229 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101;

#line 229 "hlds_statistics.m"
    {
#line 229 "hlds_statistics.m"
      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1), ((MR_Word) hlds__hlds_statistics__wrapper_arg_2), &hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99, ((MR_Word) hlds__hlds_statistics__wrapper_arg_4), &hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101);
    }
#line 229 "hlds_statistics.m"
    *hlds__hlds_statistics__wrapper_arg_3 = ((MR_Box) (hlds__hlds_statistics__conv3_STATE_VARIABLE_UsedVars_99));
#line 229 "hlds_statistics.m"
    *hlds__hlds_statistics__wrapper_arg_5 = ((MR_Box) (hlds__hlds_statistics__conv2_STATE_VARIABLE_Stats_101));
#line 229 "hlds_statistics.m"
  }
#line 229 "hlds_statistics.m"
}

#line 162 "hlds_statistics.m"
static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_2(
#line 162 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 162 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1)
#line 162 "hlds_statistics.m"
{
#line 162 "hlds_statistics.m"
  {
#line 162 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__wrapper_arg_2;
#line 162 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
#line 162 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__conv1_HeadVar__2_2;

#line 162 "hlds_statistics.m"
    {
#line 162 "hlds_statistics.m"
      hlds__hlds_statistics__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
#line 162 "hlds_statistics.m"
    hlds__hlds_statistics__wrapper_arg_2 = ((MR_Box) (hlds__hlds_statistics__conv1_HeadVar__2_2));
#line 162 "hlds_statistics.m"
    return hlds__hlds_statistics__wrapper_arg_2;
#line 162 "hlds_statistics.m"
  }
#line 162 "hlds_statistics.m"
}

#line 161 "hlds_statistics.m"
static MR_Box MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0_1(
#line 161 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 161 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1)
#line 161 "hlds_statistics.m"
{
#line 161 "hlds_statistics.m"
  {
#line 161 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__wrapper_arg_2;
#line 161 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;
#line 161 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__conv0_HeadVar__2_2;

#line 161 "hlds_statistics.m"
    {
#line 161 "hlds_statistics.m"
      hlds__hlds_statistics__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
    }
#line 161 "hlds_statistics.m"
    hlds__hlds_statistics__wrapper_arg_2 = ((MR_Box) (hlds__hlds_statistics__conv0_HeadVar__2_2));
#line 161 "hlds_statistics.m"
    return hlds__hlds_statistics__wrapper_arg_2;
#line 161 "hlds_statistics.m"
  }
#line 161 "hlds_statistics.m"
}

#line 103 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__Goal_6,
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98,
#line 103 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99,
#line 103 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100,
#line 103 "hlds_statistics.m"
  MR_Word * hlds__hlds_statistics__STATE_VARIABLE_Stats_101)
#line 103 "hlds_statistics.m"
{
#line 107 "hlds_statistics.m"
  while (MR_TRUE)
#line 107 "hlds_statistics.m"
    {
#line 107 "hlds_statistics.m"
      /* tailcall optimized into a loop */
#line 107 "hlds_statistics.m"
      {
#line 107 "hlds_statistics.m"
        MR_bool hlds__hlds_statistics__succeeded;
#line 107 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 0)));
#line 108 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Goal_6, (MR_Integer) 1)));

#line 155 "hlds_statistics.m"
        if (((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 0))))
#line 211 "hlds_statistics.m"
          {
#line 211 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__SubGoal_84 = (MR_Word) MR_body(((MR_Word) hlds__hlds_statistics__GoalExpr_9), (MR_Integer) 0);
#line 211 "hlds_statistics.m"
            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_132_132;
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1138_1138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1139_1139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1140_1140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1141_1141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1142_1142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1143_1143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1144_1144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1145_1145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1146_1146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1147_1147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1148_1148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1149_1149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1150_1150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1151_1151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1152_1152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1153_1153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1154_1154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1155_1155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1156_1156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1157_1157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1158_1158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1159_1159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1160_1160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 211 "hlds_statistics.m"
            MR_Integer hlds__hlds_statistics__V_1161_1161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

#line 212 "hlds_statistics.m"
            hlds__hlds_statistics__V_132_132 = (hlds__hlds_statistics__V_133_133 + (MR_Integer) 1);
#line 212 "hlds_statistics.m"
            {
#line 212 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 0) = ((MR_Box) (hlds__hlds_statistics__V_1138_1138));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 1) = ((MR_Box) (hlds__hlds_statistics__V_1139_1139));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 2) = ((MR_Box) (hlds__hlds_statistics__V_1140_1140));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 3) = ((MR_Box) (hlds__hlds_statistics__V_1141_1141));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 4) = ((MR_Box) (hlds__hlds_statistics__V_1142_1142));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 5) = ((MR_Box) (hlds__hlds_statistics__V_1143_1143));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 6) = ((MR_Box) (hlds__hlds_statistics__V_1144_1144));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 7) = ((MR_Box) (hlds__hlds_statistics__V_1145_1145));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 8) = ((MR_Box) (hlds__hlds_statistics__V_1146_1146));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 9) = ((MR_Box) (hlds__hlds_statistics__V_1147_1147));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 10) = ((MR_Box) (hlds__hlds_statistics__V_1148_1148));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 11) = ((MR_Box) (hlds__hlds_statistics__V_1149_1149));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 12) = ((MR_Box) (hlds__hlds_statistics__V_1150_1150));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 13) = ((MR_Box) (hlds__hlds_statistics__V_1151_1151));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 14) = ((MR_Box) (hlds__hlds_statistics__V_1152_1152));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 15) = ((MR_Box) (hlds__hlds_statistics__V_1153_1153));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 16) = ((MR_Box) (hlds__hlds_statistics__V_1154_1154));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 17) = ((MR_Box) (hlds__hlds_statistics__V_1155_1155));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 18) = ((MR_Box) (hlds__hlds_statistics__V_1156_1156));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 19) = ((MR_Box) (hlds__hlds_statistics__V_1157_1157));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 20) = ((MR_Box) (hlds__hlds_statistics__V_132_132));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 21) = ((MR_Box) (hlds__hlds_statistics__V_1158_1158));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 22) = ((MR_Box) (hlds__hlds_statistics__V_1159_1159));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 23) = ((MR_Box) (hlds__hlds_statistics__V_1160_1160));
#line 212 "hlds_statistics.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131, 24) = ((MR_Box) (hlds__hlds_statistics__V_1161_1161));
#line 212 "hlds_statistics.m"
            }
#line 213 "hlds_statistics.m"
            /* direct tailcall eliminated */
#line 213 "hlds_statistics.m"
            {
#line 213 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_84;
#line 213 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_131_131;

#line 213 "hlds_statistics.m"
              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 213 "hlds_statistics.m"
              hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 213 "hlds_statistics.m"
            }
#line 213 "hlds_statistics.m"
            continue;
#line 211 "hlds_statistics.m"
          }
#line 155 "hlds_statistics.m"
        else
#line 155 "hlds_statistics.m"
          if (((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 2))))
#line 156 "hlds_statistics.m"
            {
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_201_201;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_202_202;
#line 156 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__ArgVars_249 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_599_599;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_600_600;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_601_601;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_602_602;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_603_603;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_604_604;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_605_605;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_606_606;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_607_607;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_608_608;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_609_609;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_610_610;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_611_611;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_612_612;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_613_613;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_614_614;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_615_615;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_616_616;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_617_617;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_618_618;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_619_619;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_620_620;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_621_621;
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_622_622;
#line 156 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
#line 156 "hlds_statistics.m"
              MR_Integer hlds__hlds_statistics__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 156 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 156 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
#line 156 "hlds_statistics.m"
              MR_Word hlds__hlds_statistics__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

#line 157 "hlds_statistics.m"
              {
#line 157 "hlds_statistics.m"
                mercury__set_tree234__insert_list_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], hlds__hlds_statistics__ArgVars_249, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
              }
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_601_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_602_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_603_603 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_604_604 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_605_605 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_606_606 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_607_607 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_608_608 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_609_609 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_610_610 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_611_611 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_612_612 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_613_613 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_614_614 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_615_615 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_616_616 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_617_617 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_618_618 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_619_619 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_620_620 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_621_621 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_622_622 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 158 "hlds_statistics.m"
              hlds__hlds_statistics__V_201_201 = (hlds__hlds_statistics__V_202_202 + (MR_Integer) 1);
#line 158 "hlds_statistics.m"
              {
#line 158 "hlds_statistics.m"
                MR_Word base;
#line 158 "hlds_statistics.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 158 "hlds_statistics.m"
                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_599_599));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_600_600));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_601_601));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_602_602));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_603_603));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_201_201));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_604_604));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_605_605));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_606_606));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_607_607));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_608_608));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_609_609));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_610_610));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_611_611));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_612_612));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_613_613));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_614_614));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_615_615));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_616_616));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_617_617));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_618_618));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_619_619));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_620_620));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_621_621));
#line 158 "hlds_statistics.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_622_622));
#line 158 "hlds_statistics.m"
              }
#line 156 "hlds_statistics.m"
            }
#line 155 "hlds_statistics.m"
          else
#line 155 "hlds_statistics.m"
            if (((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 1))))
#line 110 "hlds_statistics.m"
              {
#line 110 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)));
#line 110 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__RHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 110 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__Uni_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 110 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 110 "hlds_statistics.m"
                MR_Word hlds__hlds_statistics__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));

#line 116 "hlds_statistics.m"
                if (((MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) == (MR_mktag((MR_Integer) 2))))
#line 123 "hlds_statistics.m"
                  {
#line 123 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__TypeInfo_1385_1385 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 123 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__ToVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
#line 123 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__FromVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
#line 123 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_232_232;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_233_233;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_354_354;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_355_355;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_356_356;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_357_357;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_358_358;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_359_359;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_360_360;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_361_361;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_362_362;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_363_363;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_364_364;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_365_365;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_366_366;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_367_367;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_368_368;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_369_369;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_370_370;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_371_371;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_372_372;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_373_373;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_374_374;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_375_375;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_376_376;
#line 123 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_377_377;

#line 124 "hlds_statistics.m"
                    {
#line 124 "hlds_statistics.m"
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__ToVar_27)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229);
                    }
#line 125 "hlds_statistics.m"
                    {
#line 125 "hlds_statistics.m"
                      mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1385_1385, ((MR_Box) (hlds__hlds_statistics__FromVar_28)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_229_229, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                    }
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_233_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_357_357 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_358_358 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_359_359 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_360_360 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_361_361 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_362_362 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_363_363 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_364_364 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_365_365 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_366_366 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_367_367 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_368_368 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_369_369 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_370_370 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_371_371 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_372_372 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_373_373 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_374_374 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_375_375 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_376_376 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_377_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 126 "hlds_statistics.m"
                    hlds__hlds_statistics__V_232_232 = (hlds__hlds_statistics__V_233_233 + (MR_Integer) 1);
#line 126 "hlds_statistics.m"
                    {
#line 126 "hlds_statistics.m"
                      MR_Word base;
#line 126 "hlds_statistics.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 126 "hlds_statistics.m"
                      *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_354_354));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_355_355));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_232_232));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_356_356));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_357_357));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_358_358));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_359_359));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_360_360));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_361_361));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_362_362));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_363_363));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_364_364));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_365_365));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_366_366));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_367_367));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_368_368));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_369_369));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_370_370));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_371_371));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_372_372));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_373_373));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_374_374));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_375_375));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_376_376));
#line 126 "hlds_statistics.m"
                      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_377_377));
#line 126 "hlds_statistics.m"
                    }
#line 123 "hlds_statistics.m"
                  }
#line 116 "hlds_statistics.m"
                else
#line 116 "hlds_statistics.m"
                  if (((MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) == (MR_mktag((MR_Integer) 0))))
#line 112 "hlds_statistics.m"
                    {
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__TypeInfo_1383_1383 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__CellVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_244_244;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_245_245;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_256_256;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_257_257;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_258_258;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_259_259;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_260_260;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_261_261;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_262_262;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_263_263;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_264_264;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_265_265;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_266_266;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_267_267;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_268_268;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_269_269;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_270_270;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_271_271;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_272_272;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_273_273;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_274_274;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_275_275;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_276_276;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_277_277;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_278_278;
#line 112 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_279_279;
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));
#line 112 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__Uni_14, (MR_Integer) 6)));

#line 113 "hlds_statistics.m"
                      {
#line 113 "hlds_statistics.m"
                        mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, ((MR_Box) (hlds__hlds_statistics__CellVar_16)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241);
                      }
#line 114 "hlds_statistics.m"
                      {
#line 114 "hlds_statistics.m"
                        mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1383_1383, hlds__hlds_statistics__ArgVars_18, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_241_241, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                      }
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_274_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_275_275 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_276_276 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_279_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 115 "hlds_statistics.m"
                      hlds__hlds_statistics__V_244_244 = (hlds__hlds_statistics__V_245_245 + (MR_Integer) 1);
#line 115 "hlds_statistics.m"
                      {
#line 115 "hlds_statistics.m"
                        MR_Word base;
#line 115 "hlds_statistics.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 115 "hlds_statistics.m"
                        *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_244_244));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_256_256));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_257_257));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_258_258));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_259_259));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_260_260));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_261_261));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_262_262));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_263_263));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_264_264));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_265_265));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_266_266));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_267_267));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_268_268));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_269_269));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_270_270));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_271_271));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_272_272));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_273_273));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_274_274));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_275_275));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_276_276));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_277_277));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_278_278));
#line 115 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_279_279));
#line 115 "hlds_statistics.m"
                      }
#line 112 "hlds_statistics.m"
                    }
#line 116 "hlds_statistics.m"
                  else
#line 116 "hlds_statistics.m"
                    if (((MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) == (MR_mktag((MR_Integer) 1))))
#line 117 "hlds_statistics.m"
                      {
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__TypeInfo_1384_1384 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_238_238;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_239_239;
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__CellVar_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)));
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__ArgVars_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_305_305;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_306_306;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_307_307;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_308_308;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_309_309;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_310_310;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_311_311;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_312_312;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_313_313;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_314_314;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_315_315;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_316_316;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_317_317;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_318_318;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_319_319;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_320_320;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_321_321;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_322_322;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_323_323;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_324_324;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_325_325;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_326_326;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_327_327;
#line 117 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_328_328;
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 3)));
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 4)));
#line 117 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__Uni_14, (MR_Integer) 5)));

#line 118 "hlds_statistics.m"
                        {
#line 118 "hlds_statistics.m"
                          mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, ((MR_Box) (hlds__hlds_statistics__CellVar_247)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235);
                        }
#line 119 "hlds_statistics.m"
                        {
#line 119 "hlds_statistics.m"
                          mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1384_1384, hlds__hlds_statistics__ArgVars_248, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_235_235, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                        }
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_239_239 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_316_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_317_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_318_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_319_319 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_320_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_321_321 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_322_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_323_323 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_326_326 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_327_327 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_328_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 121 "hlds_statistics.m"
                        hlds__hlds_statistics__V_238_238 = (hlds__hlds_statistics__V_239_239 + (MR_Integer) 1);
#line 120 "hlds_statistics.m"
                        {
#line 120 "hlds_statistics.m"
                          MR_Word base;
#line 120 "hlds_statistics.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 120 "hlds_statistics.m"
                          *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_305_305));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_238_238));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_306_306));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_307_307));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_308_308));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_309_309));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_310_310));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_311_311));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_312_312));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_313_313));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_314_314));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_315_315));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_316_316));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_317_317));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_318_318));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_319_319));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_320_320));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_321_321));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_322_322));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_323_323));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_324_324));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_325_325));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_326_326));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_327_327));
#line 120 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_328_328));
#line 120 "hlds_statistics.m"
                        }
#line 117 "hlds_statistics.m"
                      }
#line 116 "hlds_statistics.m"
                    else
#line 116 "hlds_statistics.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_statistics__Uni_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 133 "hlds_statistics.m"
                        {
#line 133 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__TypeInfo_1387_1387 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 133 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204;

#line 134 "hlds_statistics.m"
                          {
#line 134 "hlds_statistics.m"
                            mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__LHS_11)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204);
                          }
#line 140 "hlds_statistics.m"
                          if (((MR_tag((MR_Word) hlds__hlds_statistics__RHS_12)) == (MR_mktag((MR_Integer) 1))))
#line 141 "hlds_statistics.m"
                            {
#line 141 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__RHSVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 2)));
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_215_215;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_216_216;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_501_501;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_502_502;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_503_503;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_504_504;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_505_505;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_506_506;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_507_507;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_508_508;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_509_509;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_510_510;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_511_511;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_512_512;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_513_513;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_514_514;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_515_515;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_516_516;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_517_517;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_518_518;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_519_519;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_520_520;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_521_521;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_522_522;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_523_523;
#line 141 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_524_524;
#line 141 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
#line 141 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__RHS_12, (MR_Integer) 1)));

#line 142 "hlds_statistics.m"
                              {
#line 142 "hlds_statistics.m"
                                mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__RHSVars_37, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                              }
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_519_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_520_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_521_521 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_522_522 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_523_523 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_524_524 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 144 "hlds_statistics.m"
                              hlds__hlds_statistics__V_215_215 = (hlds__hlds_statistics__V_216_216 + (MR_Integer) 1);
#line 143 "hlds_statistics.m"
                              {
#line 143 "hlds_statistics.m"
                                MR_Word base;
#line 143 "hlds_statistics.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 143 "hlds_statistics.m"
                                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_501_501));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_502_502));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_503_503));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_504_504));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_215_215));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_505_505));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_506_506));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_507_507));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_508_508));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_509_509));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_510_510));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_511_511));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_512_512));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_513_513));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_514_514));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_515_515));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_516_516));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_517_517));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_518_518));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_519_519));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_520_520));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_521_521));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_522_522));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_523_523));
#line 143 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_524_524));
#line 143 "hlds_statistics.m"
                              }
#line 141 "hlds_statistics.m"
                            }
#line 140 "hlds_statistics.m"
                          else
#line 140 "hlds_statistics.m"
                            if (((MR_tag((MR_Word) hlds__hlds_statistics__RHS_12)) == (MR_mktag((MR_Integer) 2))))
#line 147 "hlds_statistics.m"
                              {
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__NonLocals_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 2)));
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__QuantVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 3)));
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__LambdaGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 6)));
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205;
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206;
#line 147 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_208_208;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_209_209;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_550_550;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_551_551;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_552_552;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_553_553;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_554_554;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_555_555;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_556_556;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_557_557;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_558_558;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_559_559;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_560_560;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_561_561;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_562_562;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_563_563;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_564_564;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_565_565;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_566_566;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_567_567;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_568_568;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_569_569;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_570_570;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_571_571;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_572_572;
#line 147 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_573_573;
#line 146 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 146 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 146 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 146 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 4)));
#line 146 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__RHS_12, (MR_Integer) 5)));

#line 148 "hlds_statistics.m"
                                {
#line 148 "hlds_statistics.m"
                                  mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__NonLocals_42, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205);
                                }
#line 149 "hlds_statistics.m"
                                {
#line 149 "hlds_statistics.m"
                                  mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, hlds__hlds_statistics__QuantVars_43, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_205_205, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206);
                                }
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_560_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_561_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_562_562 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_563_563 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_564_564 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_565_565 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_566_566 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_567_567 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_568_568 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_569_569 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_570_570 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_571_571 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_572_572 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_573_573 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 151 "hlds_statistics.m"
                                hlds__hlds_statistics__V_208_208 = (hlds__hlds_statistics__V_209_209 + (MR_Integer) 1);
#line 150 "hlds_statistics.m"
                                {
#line 150 "hlds_statistics.m"
                                  hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 0) = ((MR_Box) (hlds__hlds_statistics__V_550_550));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 1) = ((MR_Box) (hlds__hlds_statistics__V_551_551));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 2) = ((MR_Box) (hlds__hlds_statistics__V_552_552));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 3) = ((MR_Box) (hlds__hlds_statistics__V_553_553));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 4) = ((MR_Box) (hlds__hlds_statistics__V_208_208));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 5) = ((MR_Box) (hlds__hlds_statistics__V_554_554));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 6) = ((MR_Box) (hlds__hlds_statistics__V_555_555));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 7) = ((MR_Box) (hlds__hlds_statistics__V_556_556));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 8) = ((MR_Box) (hlds__hlds_statistics__V_557_557));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 9) = ((MR_Box) (hlds__hlds_statistics__V_558_558));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 10) = ((MR_Box) (hlds__hlds_statistics__V_559_559));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 11) = ((MR_Box) (hlds__hlds_statistics__V_560_560));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 12) = ((MR_Box) (hlds__hlds_statistics__V_561_561));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 13) = ((MR_Box) (hlds__hlds_statistics__V_562_562));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 14) = ((MR_Box) (hlds__hlds_statistics__V_563_563));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 15) = ((MR_Box) (hlds__hlds_statistics__V_564_564));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 16) = ((MR_Box) (hlds__hlds_statistics__V_565_565));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 17) = ((MR_Box) (hlds__hlds_statistics__V_566_566));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 18) = ((MR_Box) (hlds__hlds_statistics__V_567_567));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 19) = ((MR_Box) (hlds__hlds_statistics__V_568_568));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 20) = ((MR_Box) (hlds__hlds_statistics__V_569_569));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 21) = ((MR_Box) (hlds__hlds_statistics__V_570_570));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 22) = ((MR_Box) (hlds__hlds_statistics__V_571_571));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 23) = ((MR_Box) (hlds__hlds_statistics__V_572_572));
#line 150 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207, 24) = ((MR_Box) (hlds__hlds_statistics__V_573_573));
#line 150 "hlds_statistics.m"
                                }
#line 152 "hlds_statistics.m"
                                /* direct tailcall eliminated */
#line 152 "hlds_statistics.m"
                                {
#line 152 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__LambdaGoal_46;
#line 152 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_206_206;
#line 152 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_207_207;

#line 152 "hlds_statistics.m"
                                  hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 152 "hlds_statistics.m"
                                  hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
#line 152 "hlds_statistics.m"
                                  hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 152 "hlds_statistics.m"
                                }
#line 152 "hlds_statistics.m"
                                continue;
#line 147 "hlds_statistics.m"
                              }
#line 140 "hlds_statistics.m"
                            else
#line 136 "hlds_statistics.m"
                              {
#line 136 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__RHSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__RHS_12, (MR_Integer) 0)));
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_220_220;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_221_221;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_452_452;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_453_453;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_454_454;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_455_455;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_456_456;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_457_457;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_458_458;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_459_459;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_460_460;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_461_461;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_462_462;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_463_463;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_464_464;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_465_465;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_466_466;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_467_467;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_468_468;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_469_469;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_470_470;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_471_471;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_472_472;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_473_473;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_474_474;
#line 136 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_475_475;

#line 137 "hlds_statistics.m"
                                {
#line 137 "hlds_statistics.m"
                                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1387_1387, ((MR_Box) (hlds__hlds_statistics__RHSVar_34)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_204_204, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                                }
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_452_452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_453_453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_454_454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_455_455 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_456_456 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_457_457 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_458_458 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_459_459 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 139 "hlds_statistics.m"
                                hlds__hlds_statistics__V_220_220 = (hlds__hlds_statistics__V_221_221 + (MR_Integer) 1);
#line 138 "hlds_statistics.m"
                                {
#line 138 "hlds_statistics.m"
                                  MR_Word base;
#line 138 "hlds_statistics.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 138 "hlds_statistics.m"
                                  *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_452_452));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_453_453));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_454_454));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_455_455));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_220_220));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_456_456));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_457_457));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_458_458));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_459_459));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_460_460));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_461_461));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_462_462));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_463_463));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_464_464));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_465_465));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_466_466));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_467_467));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_468_468));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_469_469));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_470_470));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_471_471));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_472_472));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_473_473));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_474_474));
#line 138 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_475_475));
#line 138 "hlds_statistics.m"
                                }
#line 136 "hlds_statistics.m"
                              }
#line 133 "hlds_statistics.m"
                        }
#line 116 "hlds_statistics.m"
                      else
#line 128 "hlds_statistics.m"
                        {
#line 128 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__TypeInfo_1386_1386 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 128 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__VarA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 1)));
#line 128 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__VarB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__Uni_14, (MR_Integer) 2)));
#line 128 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_226_226;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_227_227;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_403_403;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_404_404;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_405_405;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_406_406;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_407_407;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_408_408;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_409_409;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_410_410;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_411_411;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_412_412;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_413_413;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_414_414;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_415_415;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_416_416;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_417_417;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_418_418;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_419_419;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_420_420;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_421_421;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_422_422;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_423_423;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_424_424;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_425_425;
#line 128 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_426_426;

#line 129 "hlds_statistics.m"
                          {
#line 129 "hlds_statistics.m"
                            mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarA_29)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223);
                          }
#line 130 "hlds_statistics.m"
                          {
#line 130 "hlds_statistics.m"
                            mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1386_1386, ((MR_Box) (hlds__hlds_statistics__VarB_30)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_223_223, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                          }
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_403_403 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_404_404 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_405_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_406_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 131 "hlds_statistics.m"
                          hlds__hlds_statistics__V_226_226 = (hlds__hlds_statistics__V_227_227 + (MR_Integer) 1);
#line 131 "hlds_statistics.m"
                          {
#line 131 "hlds_statistics.m"
                            MR_Word base;
#line 131 "hlds_statistics.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_statistics.m"
                            *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_403_403));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_404_404));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_405_405));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_226_226));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_406_406));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_407_407));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_408_408));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_409_409));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_410_410));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_411_411));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_412_412));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_413_413));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_414_414));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_415_415));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_416_416));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_417_417));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_418_418));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_419_419));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_420_420));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_421_421));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_422_422));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_423_423));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_424_424));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_425_425));
#line 131 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_426_426));
#line 131 "hlds_statistics.m"
                          }
#line 128 "hlds_statistics.m"
                        }
#line 110 "hlds_statistics.m"
              }
#line 155 "hlds_statistics.m"
            else
#line 155 "hlds_statistics.m"
              if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 160 "hlds_statistics.m"
                {
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__TypeCtorInfo_1389_1389 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__TypeInfo_1390_1390 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__ExtraArgs_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__ExtraArgVars_59;
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_196_196;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_197_197;
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__ArgVars_250;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_648_648;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_649_649;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_650_650;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_651_651;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_652_652;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_653_653;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_654_654;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_655_655;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_656_656;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_657_657;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_658_658;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_659_659;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_660_660;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_661_661;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_662_662;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_663_663;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_664_664;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_665_665;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_666_666;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_667_667;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_668_668;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_669_669;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_670_670;
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_671_671;
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 160 "hlds_statistics.m"
                  MR_Integer hlds__hlds_statistics__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 6)));
#line 160 "hlds_statistics.m"
                  MR_Word hlds__hlds_statistics__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 7)));

#line 161 "hlds_statistics.m"
                  {
#line 161 "hlds_statistics.m"
                    hlds__hlds_statistics__ArgVars_250 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[2], hlds__hlds_statistics__Args_55);
                  }
#line 162 "hlds_statistics.m"
                  {
#line 162 "hlds_statistics.m"
                    hlds__hlds_statistics__ExtraArgVars_59 = mercury__list__map_2_f_0(hlds__hlds_statistics__TypeCtorInfo_1389_1389, hlds__hlds_statistics__TypeInfo_1390_1390, (MR_Word) &hlds__hlds_statistics_scalar_common_1[3], hlds__hlds_statistics__ExtraArgs_56);
                  }
#line 163 "hlds_statistics.m"
                  {
#line 163 "hlds_statistics.m"
                    mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ArgVars_250, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193);
                  }
#line 164 "hlds_statistics.m"
                  {
#line 164 "hlds_statistics.m"
                    mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1390_1390, hlds__hlds_statistics__ExtraArgVars_59, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_193_193, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                  }
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_648_648 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_649_649 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_650_650 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_651_651 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_652_652 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_653_653 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_654_654 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_655_655 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_656_656 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_657_657 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_658_658 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_659_659 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_660_660 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_661_661 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_662_662 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_663_663 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_664_664 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_665_665 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_666_666 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_667_667 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_668_668 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_669_669 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_670_670 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_671_671 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 165 "hlds_statistics.m"
                  hlds__hlds_statistics__V_196_196 = (hlds__hlds_statistics__V_197_197 + (MR_Integer) 1);
#line 165 "hlds_statistics.m"
                  {
#line 165 "hlds_statistics.m"
                    MR_Word base;
#line 165 "hlds_statistics.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 165 "hlds_statistics.m"
                    *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_648_648));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_649_649));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_650_650));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_651_651));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_652_652));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_653_653));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_196_196));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_654_654));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_655_655));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_656_656));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_657_657));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_658_658));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_659_659));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_660_660));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_661_661));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_662_662));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_663_663));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_664_664));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_665_665));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_666_666));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_667_667));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_668_668));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_669_669));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_670_670));
#line 165 "hlds_statistics.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_671_671));
#line 165 "hlds_statistics.m"
                  }
#line 160 "hlds_statistics.m"
                }
#line 155 "hlds_statistics.m"
              else
#line 155 "hlds_statistics.m"
                if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 185 "hlds_statistics.m"
                  {
#line 185 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__ConjType_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 185 "hlds_statistics.m"
                    MR_Word hlds__hlds_statistics__Conjs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1405_1405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1406_1406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1407_1407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1408_1408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1409_1409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1410_1410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1411_1411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1412_1412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1413_1413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1414_1414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1415_1415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1416_1416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1417_1417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1418_1418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1419_1419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1420_1420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1421_1421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1422_1422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1423_1423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1424_1424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1425_1425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1426_1426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1427_1427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1428_1428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 185 "hlds_statistics.m"
                    MR_Integer hlds__hlds_statistics__V_1429_1429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

#line 190 "hlds_statistics.m"
                    if ((hlds__hlds_statistics__ConjType_74 == (MR_Integer) 1))
#line 191 "hlds_statistics.m"
                      {
#line 191 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160;
#line 191 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_161_161 = (hlds__hlds_statistics__V_1416_1416 + (MR_Integer) 1);

#line 192 "hlds_statistics.m"
                        {
#line 192 "hlds_statistics.m"
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 0) = ((MR_Box) (hlds__hlds_statistics__V_1429_1429));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 1) = ((MR_Box) (hlds__hlds_statistics__V_1428_1428));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 2) = ((MR_Box) (hlds__hlds_statistics__V_1427_1427));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 3) = ((MR_Box) (hlds__hlds_statistics__V_1426_1426));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 4) = ((MR_Box) (hlds__hlds_statistics__V_1425_1425));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 5) = ((MR_Box) (hlds__hlds_statistics__V_1424_1424));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 6) = ((MR_Box) (hlds__hlds_statistics__V_1423_1423));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 7) = ((MR_Box) (hlds__hlds_statistics__V_1422_1422));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 8) = ((MR_Box) (hlds__hlds_statistics__V_1421_1421));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 9) = ((MR_Box) (hlds__hlds_statistics__V_1420_1420));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 10) = ((MR_Box) (hlds__hlds_statistics__V_1419_1419));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 11) = ((MR_Box) (hlds__hlds_statistics__V_1418_1418));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 12) = ((MR_Box) (hlds__hlds_statistics__V_1417_1417));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 13) = ((MR_Box) (hlds__hlds_statistics__V_161_161));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 14) = ((MR_Box) (hlds__hlds_statistics__V_1415_1415));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 15) = ((MR_Box) (hlds__hlds_statistics__V_1414_1414));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 16) = ((MR_Box) (hlds__hlds_statistics__V_1413_1413));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 17) = ((MR_Box) (hlds__hlds_statistics__V_1412_1412));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 18) = ((MR_Box) (hlds__hlds_statistics__V_1411_1411));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 19) = ((MR_Box) (hlds__hlds_statistics__V_1410_1410));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 20) = ((MR_Box) (hlds__hlds_statistics__V_1409_1409));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 21) = ((MR_Box) (hlds__hlds_statistics__V_1408_1408));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 22) = ((MR_Box) (hlds__hlds_statistics__V_1407_1407));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 23) = ((MR_Box) (hlds__hlds_statistics__V_1406_1406));
#line 192 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, 24) = ((MR_Box) (hlds__hlds_statistics__V_1405_1405));
#line 192 "hlds_statistics.m"
                        }
#line 193 "hlds_statistics.m"
                        {
#line 193 "hlds_statistics.m"
                          hlds__hlds_statistics__accumulate_proc_stats_in_parallel_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_160_160, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
#line 193 "hlds_statistics.m"
                          return;
                        }
#line 191 "hlds_statistics.m"
                      }
#line 190 "hlds_statistics.m"
                    else
#line 187 "hlds_statistics.m"
                      {
#line 187 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166;
#line 187 "hlds_statistics.m"
                        MR_Integer hlds__hlds_statistics__V_167_167 = (hlds__hlds_statistics__V_1418_1418 + (MR_Integer) 1);

#line 188 "hlds_statistics.m"
                        {
#line 188 "hlds_statistics.m"
                          hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 0) = ((MR_Box) (hlds__hlds_statistics__V_1429_1429));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 1) = ((MR_Box) (hlds__hlds_statistics__V_1428_1428));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 2) = ((MR_Box) (hlds__hlds_statistics__V_1427_1427));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 3) = ((MR_Box) (hlds__hlds_statistics__V_1426_1426));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 4) = ((MR_Box) (hlds__hlds_statistics__V_1425_1425));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 5) = ((MR_Box) (hlds__hlds_statistics__V_1424_1424));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 6) = ((MR_Box) (hlds__hlds_statistics__V_1423_1423));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 7) = ((MR_Box) (hlds__hlds_statistics__V_1422_1422));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 8) = ((MR_Box) (hlds__hlds_statistics__V_1421_1421));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 9) = ((MR_Box) (hlds__hlds_statistics__V_1420_1420));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 10) = ((MR_Box) (hlds__hlds_statistics__V_1419_1419));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 11) = ((MR_Box) (hlds__hlds_statistics__V_167_167));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 12) = ((MR_Box) (hlds__hlds_statistics__V_1417_1417));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 13) = ((MR_Box) (hlds__hlds_statistics__V_1416_1416));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 14) = ((MR_Box) (hlds__hlds_statistics__V_1415_1415));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 15) = ((MR_Box) (hlds__hlds_statistics__V_1414_1414));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 16) = ((MR_Box) (hlds__hlds_statistics__V_1413_1413));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 17) = ((MR_Box) (hlds__hlds_statistics__V_1412_1412));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 18) = ((MR_Box) (hlds__hlds_statistics__V_1411_1411));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 19) = ((MR_Box) (hlds__hlds_statistics__V_1410_1410));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 20) = ((MR_Box) (hlds__hlds_statistics__V_1409_1409));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 21) = ((MR_Box) (hlds__hlds_statistics__V_1408_1408));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 22) = ((MR_Box) (hlds__hlds_statistics__V_1407_1407));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 23) = ((MR_Box) (hlds__hlds_statistics__V_1406_1406));
#line 188 "hlds_statistics.m"
                          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, 24) = ((MR_Box) (hlds__hlds_statistics__V_1405_1405));
#line 188 "hlds_statistics.m"
                        }
#line 189 "hlds_statistics.m"
                        {
#line 189 "hlds_statistics.m"
                          hlds__hlds_statistics__accumulate_proc_stats_in_plain_conj_5_p_0(hlds__hlds_statistics__Conjs_75, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_166_166, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
#line 189 "hlds_statistics.m"
                          return;
                        }
#line 187 "hlds_statistics.m"
                      }
#line 185 "hlds_statistics.m"
                  }
#line 155 "hlds_statistics.m"
                else
#line 155 "hlds_statistics.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 196 "hlds_statistics.m"
                    {
#line 196 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__Disjs_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 196 "hlds_statistics.m"
                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154;
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_155_155;
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_991_991 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_992_992 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_993_993 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_994_994 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_995_995 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_996_996 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_997_997 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_998_998 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_999_999 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1000_1000 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1001_1001 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1002_1002 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1003_1003 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1004_1004 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1005_1005 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1006_1006 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1007_1007 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1008_1008 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1009_1009 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1010_1010 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1011_1011 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1012_1012 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1013_1013 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 196 "hlds_statistics.m"
                      MR_Integer hlds__hlds_statistics__V_1014_1014 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

#line 197 "hlds_statistics.m"
                      hlds__hlds_statistics__V_155_155 = (hlds__hlds_statistics__V_156_156 + (MR_Integer) 1);
#line 197 "hlds_statistics.m"
                      {
#line 197 "hlds_statistics.m"
                        hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 0) = ((MR_Box) (hlds__hlds_statistics__V_991_991));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 1) = ((MR_Box) (hlds__hlds_statistics__V_992_992));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 2) = ((MR_Box) (hlds__hlds_statistics__V_993_993));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 3) = ((MR_Box) (hlds__hlds_statistics__V_994_994));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 4) = ((MR_Box) (hlds__hlds_statistics__V_995_995));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 5) = ((MR_Box) (hlds__hlds_statistics__V_996_996));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 6) = ((MR_Box) (hlds__hlds_statistics__V_997_997));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 7) = ((MR_Box) (hlds__hlds_statistics__V_998_998));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 8) = ((MR_Box) (hlds__hlds_statistics__V_999_999));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 9) = ((MR_Box) (hlds__hlds_statistics__V_1000_1000));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 10) = ((MR_Box) (hlds__hlds_statistics__V_1001_1001));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 11) = ((MR_Box) (hlds__hlds_statistics__V_1002_1002));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 12) = ((MR_Box) (hlds__hlds_statistics__V_1003_1003));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 13) = ((MR_Box) (hlds__hlds_statistics__V_1004_1004));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 14) = ((MR_Box) (hlds__hlds_statistics__V_1005_1005));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 15) = ((MR_Box) (hlds__hlds_statistics__V_155_155));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 16) = ((MR_Box) (hlds__hlds_statistics__V_1006_1006));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 17) = ((MR_Box) (hlds__hlds_statistics__V_1007_1007));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 18) = ((MR_Box) (hlds__hlds_statistics__V_1008_1008));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 19) = ((MR_Box) (hlds__hlds_statistics__V_1009_1009));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 20) = ((MR_Box) (hlds__hlds_statistics__V_1010_1010));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 21) = ((MR_Box) (hlds__hlds_statistics__V_1011_1011));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 22) = ((MR_Box) (hlds__hlds_statistics__V_1012_1012));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 23) = ((MR_Box) (hlds__hlds_statistics__V_1013_1013));
#line 197 "hlds_statistics.m"
                        MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, 24) = ((MR_Box) (hlds__hlds_statistics__V_1014_1014));
#line 197 "hlds_statistics.m"
                      }
#line 198 "hlds_statistics.m"
                      {
#line 198 "hlds_statistics.m"
                        hlds__hlds_statistics__accumulate_proc_stats_in_disj_5_p_0(hlds__hlds_statistics__Disjs_76, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_154_154, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
#line 198 "hlds_statistics.m"
                        return;
                      }
#line 196 "hlds_statistics.m"
                    }
#line 155 "hlds_statistics.m"
                  else
#line 155 "hlds_statistics.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 167 "hlds_statistics.m"
                      {
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__TypeInfo_1395_1395 = (MR_Word) &hlds__hlds_statistics_scalar_common_2[0];
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__CallKind_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__ArgVars_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
#line 167 "hlds_statistics.m"
                        MR_Word hlds__hlds_statistics__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 5)));

#line 168 "hlds_statistics.m"
                        {
#line 168 "hlds_statistics.m"
                          mercury__set_tree234__insert_list_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, hlds__hlds_statistics__ArgVars_251, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172);
                        }
#line 173 "hlds_statistics.m"
                        if (((MR_tag((MR_Word) hlds__hlds_statistics__CallKind_60)) == (MR_mktag((MR_Integer) 3))))
#line 181 "hlds_statistics.m"
                          {
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_174_174;
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_844_844 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_845_845 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_846_846 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_847_847 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_848_848 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_849_849 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_850_850 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_851_851 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_852_852 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_853_853 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_854_854 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_855_855 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_856_856 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_857_857 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_858_858 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_859_859 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_860_860 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_861_861 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_862_862 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_863_863 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_864_864 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_865_865 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_866_866 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 181 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_867_867 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

#line 182 "hlds_statistics.m"
                            hlds__hlds_statistics__V_174_174 = (hlds__hlds_statistics__V_175_175 + (MR_Integer) 1);
#line 182 "hlds_statistics.m"
                            {
#line 182 "hlds_statistics.m"
                              MR_Word base;
#line 182 "hlds_statistics.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 182 "hlds_statistics.m"
                              *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_844_844));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_845_845));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_846_846));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_847_847));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_848_848));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_849_849));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_850_850));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_851_851));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_852_852));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_853_853));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_174_174));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_854_854));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_855_855));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_856_856));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_857_857));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_858_858));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_859_859));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_860_860));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_861_861));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_862_862));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_863_863));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_864_864));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_865_865));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_866_866));
#line 182 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_867_867));
#line 182 "hlds_statistics.m"
                            }
#line 182 "hlds_statistics.m"
                            *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
#line 181 "hlds_statistics.m"
                          }
#line 173 "hlds_statistics.m"
                        else
#line 173 "hlds_statistics.m"
                          if (((MR_tag((MR_Word) hlds__hlds_statistics__CallKind_60)) == (MR_mktag((MR_Integer) 1))))
#line 174 "hlds_statistics.m"
                            {
#line 174 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__TCIVar_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_183_183;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_184_184;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_746_746;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_747_747;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_748_748;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_749_749;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_750_750;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_751_751;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_752_752;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_753_753;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_754_754;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_755_755;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_756_756;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_757_757;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_758_758;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_759_759;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_760_760;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_761_761;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_762_762;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_763_763;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_764_764;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_765_765;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_766_766;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_767_767;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_768_768;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_769_769;
#line 174 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
#line 174 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
#line 174 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

#line 175 "hlds_statistics.m"
                              {
#line 175 "hlds_statistics.m"
                                mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__TCIVar_68)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                              }
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_746_746 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_748_748 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_750_750 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_751_751 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_752_752 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_753_753 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_754_754 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_755_755 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_756_756 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_757_757 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_758_758 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_759_759 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_760_760 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_761_761 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_762_762 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_763_763 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_764_764 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_765_765 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_766_766 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_767_767 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_768_768 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_769_769 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 176 "hlds_statistics.m"
                              hlds__hlds_statistics__V_183_183 = (hlds__hlds_statistics__V_184_184 + (MR_Integer) 1);
#line 176 "hlds_statistics.m"
                              {
#line 176 "hlds_statistics.m"
                                MR_Word base;
#line 176 "hlds_statistics.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 176 "hlds_statistics.m"
                                *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_746_746));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_747_747));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_748_748));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_749_749));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_750_750));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_751_751));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_752_752));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_753_753));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_183_183));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_754_754));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_755_755));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_756_756));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_757_757));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_758_758));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_759_759));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_760_760));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_761_761));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_762_762));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_763_763));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_764_764));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_765_765));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_766_766));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_767_767));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_768_768));
#line 176 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_769_769));
#line 176 "hlds_statistics.m"
                              }
#line 174 "hlds_statistics.m"
                            }
#line 173 "hlds_statistics.m"
                          else
#line 173 "hlds_statistics.m"
                            if (((MR_tag((MR_Word) hlds__hlds_statistics__CallKind_60)) == (MR_mktag((MR_Integer) 2))))
#line 178 "hlds_statistics.m"
                              {
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_178_178;
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_795_795 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_796_796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_797_797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_798_798 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_799_799 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_800_800 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_801_801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_802_802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_803_803 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_804_804 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_805_805 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_806_806 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_807_807 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_808_808 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_809_809 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_810_810 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_811_811 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_812_812 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_813_813 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_814_814 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_815_815 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_816_816 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_817_817 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 178 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_818_818 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));

#line 179 "hlds_statistics.m"
                                hlds__hlds_statistics__V_178_178 = (hlds__hlds_statistics__V_179_179 + (MR_Integer) 1);
#line 179 "hlds_statistics.m"
                                {
#line 179 "hlds_statistics.m"
                                  MR_Word base;
#line 179 "hlds_statistics.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 179 "hlds_statistics.m"
                                  *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_795_795));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_796_796));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_797_797));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_798_798));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_799_799));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_800_800));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_801_801));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_802_802));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_803_803));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_178_178));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_804_804));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_805_805));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_806_806));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_807_807));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_808_808));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_809_809));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_810_810));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_811_811));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_812_812));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_813_813));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_814_814));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_815_815));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_816_816));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_817_817));
#line 179 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_818_818));
#line 179 "hlds_statistics.m"
                                }
#line 179 "hlds_statistics.m"
                                *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172;
#line 178 "hlds_statistics.m"
                              }
#line 173 "hlds_statistics.m"
                            else
#line 170 "hlds_statistics.m"
                              {
#line 170 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__HOVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 0)));
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_188_188;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_189_189;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_697_697;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_698_698;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_699_699;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_700_700;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_701_701;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_702_702;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_703_703;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_704_704;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_705_705;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_706_706;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_707_707;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_708_708;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_709_709;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_710_710;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_711_711;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_712_712;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_713_713;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_714_714;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_715_715;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_716_716;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_717_717;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_718_718;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_719_719;
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_720_720;
#line 170 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 1)));
#line 170 "hlds_statistics.m"
                                MR_Word hlds__hlds_statistics__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 2)));
#line 170 "hlds_statistics.m"
                                MR_Integer hlds__hlds_statistics__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__CallKind_60, (MR_Integer) 3)));

#line 171 "hlds_statistics.m"
                                {
#line 171 "hlds_statistics.m"
                                  mercury__set_tree234__insert_3_p_0(hlds__hlds_statistics__TypeInfo_1395_1395, ((MR_Box) (hlds__hlds_statistics__HOVar_64)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_172_172, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99);
                                }
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_697_697 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_698_698 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_699_699 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_700_700 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_701_701 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_702_702 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_703_703 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_704_704 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_705_705 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_706_706 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_707_707 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_708_708 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_709_709 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_710_710 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_711_711 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_712_712 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_713_713 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_714_714 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_715_715 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_716_716 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_717_717 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_718_718 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_719_719 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_720_720 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 172 "hlds_statistics.m"
                                hlds__hlds_statistics__V_188_188 = (hlds__hlds_statistics__V_189_189 + (MR_Integer) 1);
#line 172 "hlds_statistics.m"
                                {
#line 172 "hlds_statistics.m"
                                  MR_Word base;
#line 172 "hlds_statistics.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 172 "hlds_statistics.m"
                                  *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = base;
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_statistics__V_697_697));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_statistics__V_698_698));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_statistics__V_699_699));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_statistics__V_700_700));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_statistics__V_701_701));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_statistics__V_702_702));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_statistics__V_703_703));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_statistics__V_188_188));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_statistics__V_704_704));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_statistics__V_705_705));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (hlds__hlds_statistics__V_706_706));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (hlds__hlds_statistics__V_707_707));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (hlds__hlds_statistics__V_708_708));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (hlds__hlds_statistics__V_709_709));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (hlds__hlds_statistics__V_710_710));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (hlds__hlds_statistics__V_711_711));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (hlds__hlds_statistics__V_712_712));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (hlds__hlds_statistics__V_713_713));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (hlds__hlds_statistics__V_714_714));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (hlds__hlds_statistics__V_715_715));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (hlds__hlds_statistics__V_716_716));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (hlds__hlds_statistics__V_717_717));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (hlds__hlds_statistics__V_718_718));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (hlds__hlds_statistics__V_719_719));
#line 172 "hlds_statistics.m"
                                  MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (hlds__hlds_statistics__V_720_720));
#line 172 "hlds_statistics.m"
                                }
#line 170 "hlds_statistics.m"
                              }
#line 167 "hlds_statistics.m"
                      }
#line 155 "hlds_statistics.m"
                    else
#line 155 "hlds_statistics.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 205 "hlds_statistics.m"
                        {
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__CondGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__ThenGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__ElseGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 4)));
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137;
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_138_138;
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141;
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142;
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1089_1089 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1090_1090 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1091_1091 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1092_1092 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1093_1093 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1094_1094 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1095_1095 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1096_1096 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1097_1097 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1098_1098 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1099_1099 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1100_1100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1101_1101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1102_1102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1103_1103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1104_1104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1105_1105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1106_1106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1107_1107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1108_1108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1109_1109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1110_1110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1111_1111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 205 "hlds_statistics.m"
                          MR_Integer hlds__hlds_statistics__V_1112_1112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 205 "hlds_statistics.m"
                          MR_Word hlds__hlds_statistics__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

#line 206 "hlds_statistics.m"
                          hlds__hlds_statistics__V_138_138 = (hlds__hlds_statistics__V_139_139 + (MR_Integer) 1);
#line 206 "hlds_statistics.m"
                          {
#line 206 "hlds_statistics.m"
                            hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 0) = ((MR_Box) (hlds__hlds_statistics__V_1089_1089));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 1) = ((MR_Box) (hlds__hlds_statistics__V_1090_1090));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 2) = ((MR_Box) (hlds__hlds_statistics__V_1091_1091));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 3) = ((MR_Box) (hlds__hlds_statistics__V_1092_1092));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 4) = ((MR_Box) (hlds__hlds_statistics__V_1093_1093));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 5) = ((MR_Box) (hlds__hlds_statistics__V_1094_1094));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 6) = ((MR_Box) (hlds__hlds_statistics__V_1095_1095));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 7) = ((MR_Box) (hlds__hlds_statistics__V_1096_1096));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 8) = ((MR_Box) (hlds__hlds_statistics__V_1097_1097));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 9) = ((MR_Box) (hlds__hlds_statistics__V_1098_1098));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 10) = ((MR_Box) (hlds__hlds_statistics__V_1099_1099));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 11) = ((MR_Box) (hlds__hlds_statistics__V_1100_1100));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 12) = ((MR_Box) (hlds__hlds_statistics__V_1101_1101));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 13) = ((MR_Box) (hlds__hlds_statistics__V_1102_1102));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 14) = ((MR_Box) (hlds__hlds_statistics__V_1103_1103));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 15) = ((MR_Box) (hlds__hlds_statistics__V_1104_1104));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 16) = ((MR_Box) (hlds__hlds_statistics__V_1105_1105));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 17) = ((MR_Box) (hlds__hlds_statistics__V_1106_1106));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 18) = ((MR_Box) (hlds__hlds_statistics__V_1107_1107));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 19) = ((MR_Box) (hlds__hlds_statistics__V_138_138));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 20) = ((MR_Box) (hlds__hlds_statistics__V_1108_1108));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 21) = ((MR_Box) (hlds__hlds_statistics__V_1109_1109));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 22) = ((MR_Box) (hlds__hlds_statistics__V_1110_1110));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 23) = ((MR_Box) (hlds__hlds_statistics__V_1111_1111));
#line 206 "hlds_statistics.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, 24) = ((MR_Box) (hlds__hlds_statistics__V_1112_1112));
#line 206 "hlds_statistics.m"
                          }
#line 207 "hlds_statistics.m"
                          {
#line 207 "hlds_statistics.m"
                            hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__CondGoal_81, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, hlds__hlds_statistics__STATE_VARIABLE_Stats_137_137, &hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142);
                          }
#line 208 "hlds_statistics.m"
                          {
#line 208 "hlds_statistics.m"
                            hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__ThenGoal_82, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_141_141, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143, hlds__hlds_statistics__STATE_VARIABLE_Stats_142_142, &hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144);
                          }
#line 209 "hlds_statistics.m"
                          /* direct tailcall eliminated */
#line 209 "hlds_statistics.m"
                          {
#line 209 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__ElseGoal_83;
#line 209 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_143_143;
#line 209 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_144_144;

#line 209 "hlds_statistics.m"
                            hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 209 "hlds_statistics.m"
                            hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
#line 209 "hlds_statistics.m"
                            hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 209 "hlds_statistics.m"
                          }
#line 209 "hlds_statistics.m"
                          continue;
#line 205 "hlds_statistics.m"
                        }
#line 155 "hlds_statistics.m"
                      else
#line 155 "hlds_statistics.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 215 "hlds_statistics.m"
                          {
#line 215 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_126_126;
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 215 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1187_1187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1188_1188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1189_1189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1190_1190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1191_1191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1192_1192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1193_1193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1194_1194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1195_1195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1196_1196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1197_1197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1198_1198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1199_1199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1200_1200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1201_1201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1202_1202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1203_1203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1204_1204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1205_1205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1206_1206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1207_1207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1208_1208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1209_1209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 215 "hlds_statistics.m"
                            MR_Integer hlds__hlds_statistics__V_1210_1210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 215 "hlds_statistics.m"
                            MR_Word hlds__hlds_statistics__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));

#line 216 "hlds_statistics.m"
                            hlds__hlds_statistics__V_126_126 = (hlds__hlds_statistics__V_127_127 + (MR_Integer) 1);
#line 216 "hlds_statistics.m"
                            {
#line 216 "hlds_statistics.m"
                              hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 0) = ((MR_Box) (hlds__hlds_statistics__V_1187_1187));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 1) = ((MR_Box) (hlds__hlds_statistics__V_1188_1188));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 2) = ((MR_Box) (hlds__hlds_statistics__V_1189_1189));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 3) = ((MR_Box) (hlds__hlds_statistics__V_1190_1190));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 4) = ((MR_Box) (hlds__hlds_statistics__V_1191_1191));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 5) = ((MR_Box) (hlds__hlds_statistics__V_1192_1192));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 6) = ((MR_Box) (hlds__hlds_statistics__V_1193_1193));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 7) = ((MR_Box) (hlds__hlds_statistics__V_1194_1194));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 8) = ((MR_Box) (hlds__hlds_statistics__V_1195_1195));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 9) = ((MR_Box) (hlds__hlds_statistics__V_1196_1196));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 10) = ((MR_Box) (hlds__hlds_statistics__V_1197_1197));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 11) = ((MR_Box) (hlds__hlds_statistics__V_1198_1198));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 12) = ((MR_Box) (hlds__hlds_statistics__V_1199_1199));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 13) = ((MR_Box) (hlds__hlds_statistics__V_1200_1200));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 14) = ((MR_Box) (hlds__hlds_statistics__V_1201_1201));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 15) = ((MR_Box) (hlds__hlds_statistics__V_1202_1202));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 16) = ((MR_Box) (hlds__hlds_statistics__V_1203_1203));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 17) = ((MR_Box) (hlds__hlds_statistics__V_1204_1204));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 18) = ((MR_Box) (hlds__hlds_statistics__V_1205_1205));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 19) = ((MR_Box) (hlds__hlds_statistics__V_1206_1206));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 20) = ((MR_Box) (hlds__hlds_statistics__V_1207_1207));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 21) = ((MR_Box) (hlds__hlds_statistics__V_126_126));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 22) = ((MR_Box) (hlds__hlds_statistics__V_1208_1208));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 23) = ((MR_Box) (hlds__hlds_statistics__V_1209_1209));
#line 216 "hlds_statistics.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125, 24) = ((MR_Box) (hlds__hlds_statistics__V_1210_1210));
#line 216 "hlds_statistics.m"
                            }
#line 217 "hlds_statistics.m"
                            /* direct tailcall eliminated */
#line 217 "hlds_statistics.m"
                            {
#line 217 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_252;
#line 217 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_125_125;

#line 217 "hlds_statistics.m"
                              hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 217 "hlds_statistics.m"
                              hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 217 "hlds_statistics.m"
                            }
#line 217 "hlds_statistics.m"
                            continue;
#line 215 "hlds_statistics.m"
                          }
#line 155 "hlds_statistics.m"
                        else
#line 155 "hlds_statistics.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_statistics__GoalExpr_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 219 "hlds_statistics.m"
                            {
#line 219 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__ShortHand_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1430_1430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1431_1431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1432_1432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1433_1433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1434_1434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1435_1435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1436_1436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1437_1437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1438_1438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1439_1439 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1440_1440 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1441_1441 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1442_1442 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1443_1443 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1444_1444 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1445_1445 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1446_1446 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1447_1447 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1448_1448 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1449_1449 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1450_1450 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1451_1451 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1452_1452 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1453_1453 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 219 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1454_1454 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));

#line 225 "hlds_statistics.m"
                              if (((MR_tag((MR_Word) hlds__hlds_statistics__ShortHand_86)) == (MR_mktag((MR_Integer) 1))))
#line 226 "hlds_statistics.m"
                                {
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__MainGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 4)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__OrElseGoals_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 5)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108;
#line 226 "hlds_statistics.m"
                                  MR_Integer hlds__hlds_statistics__V_109_109 = (hlds__hlds_statistics__V_1431_1431 + (MR_Integer) 1);
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112;
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113;
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 3)));
#line 226 "hlds_statistics.m"
                                  MR_Word hlds__hlds_statistics__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 6)));
#line 229 "hlds_statistics.m"
                                  MR_Box hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99;
#line 229 "hlds_statistics.m"
                                  MR_Box hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101;

#line 227 "hlds_statistics.m"
                                  {
#line 227 "hlds_statistics.m"
                                    hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 22) = ((MR_Box) (hlds__hlds_statistics__V_1432_1432));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 23) = ((MR_Box) (hlds__hlds_statistics__V_109_109));
#line 227 "hlds_statistics.m"
                                    MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, 24) = ((MR_Box) (hlds__hlds_statistics__V_1430_1430));
#line 227 "hlds_statistics.m"
                                  }
#line 228 "hlds_statistics.m"
                                  {
#line 228 "hlds_statistics.m"
                                    hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__MainGoal_93, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112, hlds__hlds_statistics__STATE_VARIABLE_Stats_108_108, &hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113);
                                  }
#line 229 "hlds_statistics.m"
                                  {
#line 229 "hlds_statistics.m"
                                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_statistics_scalar_common_2[1], (MR_Word) &hlds__hlds_statistics__hlds__hlds_statistics__type_ctor_info_proc_stats_0, (MR_Word) &hlds__hlds_statistics_scalar_common_1[4], hlds__hlds_statistics__OrElseGoals_94, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_UsedVars_112_112)), &hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99, ((MR_Box) (hlds__hlds_statistics__STATE_VARIABLE_Stats_113_113)), &hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
                                  }
#line 229 "hlds_statistics.m"
                                  *hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99 = ((MR_Word) hlds__hlds_statistics__conv5_STATE_VARIABLE_UsedVars_99);
#line 229 "hlds_statistics.m"
                                  *hlds__hlds_statistics__STATE_VARIABLE_Stats_101 = ((MR_Word) hlds__hlds_statistics__conv4_STATE_VARIABLE_Stats_101);
#line 226 "hlds_statistics.m"
                                }
#line 225 "hlds_statistics.m"
                              else
#line 225 "hlds_statistics.m"
                                if (((MR_tag((MR_Word) hlds__hlds_statistics__ShortHand_86)) == (MR_mktag((MR_Integer) 0))))
#line 221 "hlds_statistics.m"
                                  {
#line 221 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__GoalA_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
#line 221 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__GoalB_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));
#line 221 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117;
#line 221 "hlds_statistics.m"
                                    MR_Integer hlds__hlds_statistics__V_118_118 = (hlds__hlds_statistics__V_1432_1432 + (MR_Integer) 1);
#line 221 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
#line 221 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

#line 222 "hlds_statistics.m"
                                    {
#line 222 "hlds_statistics.m"
                                      hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 22) = ((MR_Box) (hlds__hlds_statistics__V_118_118));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 23) = ((MR_Box) (hlds__hlds_statistics__V_1431_1431));
#line 222 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, 24) = ((MR_Box) (hlds__hlds_statistics__V_1430_1430));
#line 222 "hlds_statistics.m"
                                    }
#line 223 "hlds_statistics.m"
                                    {
#line 223 "hlds_statistics.m"
                                      hlds__hlds_statistics__accumulate_proc_stats_in_goal_5_p_0(hlds__hlds_statistics__GoalA_87, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121, hlds__hlds_statistics__STATE_VARIABLE_Stats_117_117, &hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122);
                                    }
#line 224 "hlds_statistics.m"
                                    /* direct tailcall eliminated */
#line 224 "hlds_statistics.m"
                                    {
#line 224 "hlds_statistics.m"
                                      MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__GoalB_88;
#line 224 "hlds_statistics.m"
                                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_121_121;
#line 224 "hlds_statistics.m"
                                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_122_122;

#line 224 "hlds_statistics.m"
                                      hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 224 "hlds_statistics.m"
                                      hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98 = hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0__tmp_copy_98;
#line 224 "hlds_statistics.m"
                                      hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 224 "hlds_statistics.m"
                                    }
#line 224 "hlds_statistics.m"
                                    continue;
#line 221 "hlds_statistics.m"
                                  }
#line 225 "hlds_statistics.m"
                                else
#line 232 "hlds_statistics.m"
                                  {
#line 232 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;
#line 232 "hlds_statistics.m"
                                    MR_Integer hlds__hlds_statistics__V_103_103 = (hlds__hlds_statistics__V_1430_1430 + (MR_Integer) 1);
#line 232 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__SubGoal_253 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 2)));
#line 232 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 0)));
#line 232 "hlds_statistics.m"
                                    MR_Word hlds__hlds_statistics__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_statistics__ShortHand_86, (MR_Integer) 1)));

#line 233 "hlds_statistics.m"
                                    {
#line 233 "hlds_statistics.m"
                                      hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 0) = ((MR_Box) (hlds__hlds_statistics__V_1454_1454));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 1) = ((MR_Box) (hlds__hlds_statistics__V_1453_1453));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 2) = ((MR_Box) (hlds__hlds_statistics__V_1452_1452));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 3) = ((MR_Box) (hlds__hlds_statistics__V_1451_1451));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 4) = ((MR_Box) (hlds__hlds_statistics__V_1450_1450));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 5) = ((MR_Box) (hlds__hlds_statistics__V_1449_1449));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 6) = ((MR_Box) (hlds__hlds_statistics__V_1448_1448));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 7) = ((MR_Box) (hlds__hlds_statistics__V_1447_1447));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 8) = ((MR_Box) (hlds__hlds_statistics__V_1446_1446));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 9) = ((MR_Box) (hlds__hlds_statistics__V_1445_1445));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 10) = ((MR_Box) (hlds__hlds_statistics__V_1444_1444));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 11) = ((MR_Box) (hlds__hlds_statistics__V_1443_1443));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 12) = ((MR_Box) (hlds__hlds_statistics__V_1442_1442));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 13) = ((MR_Box) (hlds__hlds_statistics__V_1441_1441));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 14) = ((MR_Box) (hlds__hlds_statistics__V_1440_1440));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 15) = ((MR_Box) (hlds__hlds_statistics__V_1439_1439));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 16) = ((MR_Box) (hlds__hlds_statistics__V_1438_1438));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 17) = ((MR_Box) (hlds__hlds_statistics__V_1437_1437));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 18) = ((MR_Box) (hlds__hlds_statistics__V_1436_1436));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 19) = ((MR_Box) (hlds__hlds_statistics__V_1435_1435));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 20) = ((MR_Box) (hlds__hlds_statistics__V_1434_1434));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 21) = ((MR_Box) (hlds__hlds_statistics__V_1433_1433));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 22) = ((MR_Box) (hlds__hlds_statistics__V_1432_1432));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 23) = ((MR_Box) (hlds__hlds_statistics__V_1431_1431));
#line 233 "hlds_statistics.m"
                                      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102, 24) = ((MR_Box) (hlds__hlds_statistics__V_103_103));
#line 233 "hlds_statistics.m"
                                    }
#line 234 "hlds_statistics.m"
                                    /* direct tailcall eliminated */
#line 234 "hlds_statistics.m"
                                    {
#line 234 "hlds_statistics.m"
                                      MR_Word hlds__hlds_statistics__Goal__tmp_copy_6 = hlds__hlds_statistics__SubGoal_253;
#line 234 "hlds_statistics.m"
                                      MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_102_102;

#line 234 "hlds_statistics.m"
                                      hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100 = hlds__hlds_statistics__STATE_VARIABLE_Stats_0__tmp_copy_100;
#line 234 "hlds_statistics.m"
                                      hlds__hlds_statistics__Goal_6 = hlds__hlds_statistics__Goal__tmp_copy_6;
#line 234 "hlds_statistics.m"
                                    }
#line 234 "hlds_statistics.m"
                                    continue;
#line 232 "hlds_statistics.m"
                                  }
#line 219 "hlds_statistics.m"
                            }
#line 155 "hlds_statistics.m"
                          else
#line 200 "hlds_statistics.m"
                            {
#line 200 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__SwitchVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 1)));
#line 200 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__Cases_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 3)));
#line 200 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147;
#line 200 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_149_149;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_150_150;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1040_1040;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1041_1041;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1042_1042;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1043_1043;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1044_1044;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1045_1045;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1046_1046;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1047_1047;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1048_1048;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1049_1049;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1050_1050;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1051_1051;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1052_1052;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1053_1053;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1054_1054;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1055_1055;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1056_1056;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1057_1057;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1058_1058;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1059_1059;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1060_1060;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1061_1061;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1062_1062;
#line 200 "hlds_statistics.m"
                              MR_Integer hlds__hlds_statistics__V_1063_1063;
#line 200 "hlds_statistics.m"
                              MR_Word hlds__hlds_statistics__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_statistics__GoalExpr_9, (MR_Integer) 2)));

#line 201 "hlds_statistics.m"
                              {
#line 201 "hlds_statistics.m"
                                mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_2[0], ((MR_Box) (hlds__hlds_statistics__SwitchVar_77)), hlds__hlds_statistics__STATE_VARIABLE_UsedVars_0_98, &hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147);
                              }
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1040_1040 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 0)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1041_1041 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 1)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1042_1042 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 2)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1043_1043 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 3)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1044_1044 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 4)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1045_1045 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 5)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1046_1046 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 6)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1047_1047 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 7)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1048_1048 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 8)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1049_1049 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 9)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1050_1050 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 10)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1051_1051 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 11)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1052_1052 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 12)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1053_1053 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 13)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1054_1054 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 14)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1055_1055 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 15)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1056_1056 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 16)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 17)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1057_1057 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 18)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1058_1058 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 19)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1059_1059 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 20)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1060_1060 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 21)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1061_1061 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 22)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1062_1062 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 23)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_1063_1063 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_0_100, (MR_Integer) 24)));
#line 202 "hlds_statistics.m"
                              hlds__hlds_statistics__V_149_149 = (hlds__hlds_statistics__V_150_150 + (MR_Integer) 1);
#line 202 "hlds_statistics.m"
                              {
#line 202 "hlds_statistics.m"
                                hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 25 * sizeof(MR_Word)), NULL, NULL);
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 0) = ((MR_Box) (hlds__hlds_statistics__V_1040_1040));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 1) = ((MR_Box) (hlds__hlds_statistics__V_1041_1041));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 2) = ((MR_Box) (hlds__hlds_statistics__V_1042_1042));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 3) = ((MR_Box) (hlds__hlds_statistics__V_1043_1043));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 4) = ((MR_Box) (hlds__hlds_statistics__V_1044_1044));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 5) = ((MR_Box) (hlds__hlds_statistics__V_1045_1045));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 6) = ((MR_Box) (hlds__hlds_statistics__V_1046_1046));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 7) = ((MR_Box) (hlds__hlds_statistics__V_1047_1047));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 8) = ((MR_Box) (hlds__hlds_statistics__V_1048_1048));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 9) = ((MR_Box) (hlds__hlds_statistics__V_1049_1049));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 10) = ((MR_Box) (hlds__hlds_statistics__V_1050_1050));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 11) = ((MR_Box) (hlds__hlds_statistics__V_1051_1051));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 12) = ((MR_Box) (hlds__hlds_statistics__V_1052_1052));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 13) = ((MR_Box) (hlds__hlds_statistics__V_1053_1053));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 14) = ((MR_Box) (hlds__hlds_statistics__V_1054_1054));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 15) = ((MR_Box) (hlds__hlds_statistics__V_1055_1055));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 16) = ((MR_Box) (hlds__hlds_statistics__V_1056_1056));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 17) = ((MR_Box) (hlds__hlds_statistics__V_149_149));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 18) = ((MR_Box) (hlds__hlds_statistics__V_1057_1057));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 19) = ((MR_Box) (hlds__hlds_statistics__V_1058_1058));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 20) = ((MR_Box) (hlds__hlds_statistics__V_1059_1059));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 21) = ((MR_Box) (hlds__hlds_statistics__V_1060_1060));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 22) = ((MR_Box) (hlds__hlds_statistics__V_1061_1061));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 23) = ((MR_Box) (hlds__hlds_statistics__V_1062_1062));
#line 202 "hlds_statistics.m"
                                MR_hl_field(MR_mktag(0), hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, 24) = ((MR_Box) (hlds__hlds_statistics__V_1063_1063));
#line 202 "hlds_statistics.m"
                              }
#line 203 "hlds_statistics.m"
                              {
#line 203 "hlds_statistics.m"
                                hlds__hlds_statistics__accumulate_proc_stats_in_switch_5_p_0(hlds__hlds_statistics__Cases_79, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_147_147, hlds__hlds_statistics__STATE_VARIABLE_UsedVars_99, hlds__hlds_statistics__STATE_VARIABLE_Stats_148_148, hlds__hlds_statistics__STATE_VARIABLE_Stats_101);
#line 203 "hlds_statistics.m"
                                return;
                              }
#line 200 "hlds_statistics.m"
                            }
#line 107 "hlds_statistics.m"
      }
#line 107 "hlds_statistics.m"
      break;
#line 107 "hlds_statistics.m"
    }
#line 103 "hlds_statistics.m"
}

#line 82 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_8,
#line 82 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Msg_9,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_10,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__PredId_11,
#line 82 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__5_5)
#line 82 "hlds_statistics.m"
{
#line 87 "hlds_statistics.m"
  {
#line 87 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;

#line 87 "hlds_statistics.m"
    {
#line 87 "hlds_statistics.m"
      hlds__hlds_statistics__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_99_95_115_116_97_116_115_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(hlds__hlds_statistics__OutStream_8, hlds__hlds_statistics__ModuleInfo_10, hlds__hlds_statistics__PredId_11, hlds__hlds_statistics__HeadVar__5_5);
#line 87 "hlds_statistics.m"
      return;
    }
#line 87 "hlds_statistics.m"
  }
#line 82 "hlds_statistics.m"
}

#line 78 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1(
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 78 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 78 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_3)
#line 78 "hlds_statistics.m"
{
#line 78 "hlds_statistics.m"
  {
#line 78 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;

#line 78 "hlds_statistics.m"
    {
#line 78 "hlds_statistics.m"
      hlds__hlds_statistics__write_proc_stats_for_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
#line 78 "hlds_statistics.m"
      return;
    }
#line 78 "hlds_statistics.m"
  }
#line 78 "hlds_statistics.m"
}

#line 63 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_7,
#line 63 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Msg_8,
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_9,
#line 63 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__HeadVar__4_4)
#line 63 "hlds_statistics.m"
{
#line 67 "hlds_statistics.m"
  {
#line 67 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 67 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__4_4, (MR_Integer) 0)));
#line 67 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__PredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__HeadVar__4_4, (MR_Integer) 1)));

#line 69 "hlds_statistics.m"
    {
#line 69 "hlds_statistics.m"
      hlds__hlds_statistics__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_statistics__PredInfo_11);
    }
#line 70 "hlds_statistics.m"
    if (!(hlds__hlds_statistics__succeeded))
#line 70 "hlds_statistics.m"
      {
#line 70 "hlds_statistics.m"
        hlds__hlds_statistics__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_statistics__PredInfo_11);
      }
#line 74 "hlds_statistics.m"
    if (hlds__hlds_statistics__succeeded)
#line 70 "hlds_statistics.m"
      {
#line 70 "hlds_statistics.m"
      }
#line 74 "hlds_statistics.m"
    else
#line 75 "hlds_statistics.m"
      {
#line 75 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__ProcTable_13;
#line 75 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__Procs_14;
#line 75 "hlds_statistics.m"
        MR_Word hlds__hlds_statistics__V_17_17;
#line 77 "hlds_statistics.m"
        MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16;

#line 75 "hlds_statistics.m"
        {
#line 75 "hlds_statistics.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(hlds__hlds_statistics__PredInfo_11, &hlds__hlds_statistics__ProcTable_13);
        }
#line 76 "hlds_statistics.m"
        {
#line 76 "hlds_statistics.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__hlds_statistics__ProcTable_13, &hlds__hlds_statistics__Procs_14);
        }
#line 78 "hlds_statistics.m"
        {
#line 78 "hlds_statistics.m"
          hlds__hlds_statistics__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_6[0]));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0_1));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_7));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_8));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_9));
#line 78 "hlds_statistics.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_17_17, 6) = ((MR_Box) (hlds__hlds_statistics__PredId_10));
#line 78 "hlds_statistics.m"
        }
#line 77 "hlds_statistics.m"
        {
#line 77 "hlds_statistics.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__V_17_17, hlds__hlds_statistics__Procs_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_16);
        }
#line 75 "hlds_statistics.m"
      }
#line 67 "hlds_statistics.m"
  }
#line 63 "hlds_statistics.m"
}

#line 60 "hlds_statistics.m"
static void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1(
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__closure_arg,
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_1,
#line 60 "hlds_statistics.m"
  MR_Box hlds__hlds_statistics__wrapper_arg_2,
#line 60 "hlds_statistics.m"
  MR_Box * hlds__hlds_statistics__wrapper_arg_3)
#line 60 "hlds_statistics.m"
{
#line 60 "hlds_statistics.m"
  {
#line 60 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__closure = hlds__hlds_statistics__closure_arg;

#line 60 "hlds_statistics.m"
    {
#line 60 "hlds_statistics.m"
      hlds__hlds_statistics__write_proc_stats_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_statistics__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_statistics__wrapper_arg_1));
#line 60 "hlds_statistics.m"
      return;
    }
#line 60 "hlds_statistics.m"
  }
#line 60 "hlds_statistics.m"
}

#line 27 "hlds_statistics.m"
void MR_CALL 
hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(
#line 27 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__OutStream_6,
#line 27 "hlds_statistics.m"
  MR_String hlds__hlds_statistics__Msg_7,
#line 27 "hlds_statistics.m"
  MR_Word hlds__hlds_statistics__ModuleInfo_8)
#line 27 "hlds_statistics.m"
{
#line 53 "hlds_statistics.m"
  {
#line 53 "hlds_statistics.m"
    MR_bool hlds__hlds_statistics__succeeded;
#line 53 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__ModuleSymName_10;
#line 53 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__ModuleName_11;
#line 53 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__PredTable_12;
#line 53 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__Preds_13;
#line 53 "hlds_statistics.m"
    MR_Word hlds__hlds_statistics__V_21_21;
#line 53 "hlds_statistics.m"
    MR_String hlds__hlds_statistics__V_33_33;
#line 60 "hlds_statistics.m"
    MR_Box hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15;

#line 54 "hlds_statistics.m"
    {
#line 54 "hlds_statistics.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__ModuleSymName_10);
    }
#line 55 "hlds_statistics.m"
    {
#line 55 "hlds_statistics.m"
      hlds__hlds_statistics__ModuleName_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_statistics__ModuleSymName_10);
    }
#line 56 "hlds_statistics.m"
    {
#line 56 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "MODULE ");
    }
#line 56 "hlds_statistics.m"
    {
#line 56 "hlds_statistics.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_statistics_scalar_common_4[0], hlds__hlds_statistics__ModuleName_11, &hlds__hlds_statistics__V_33_33);
    }
#line 56 "hlds_statistics.m"
    {
#line 56 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, hlds__hlds_statistics__V_33_33);
    }
#line 56 "hlds_statistics.m"
    {
#line 56 "hlds_statistics.m"
      mercury__io__write_string_4_p_0(hlds__hlds_statistics__OutStream_6, (MR_String) "\n");
    }
#line 58 "hlds_statistics.m"
    {
#line 58 "hlds_statistics.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_statistics__ModuleInfo_8, &hlds__hlds_statistics__PredTable_12);
    }
#line 59 "hlds_statistics.m"
    {
#line 59 "hlds_statistics.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_statistics__PredTable_12, &hlds__hlds_statistics__Preds_13);
    }
#line 60 "hlds_statistics.m"
    {
#line 60 "hlds_statistics.m"
      hlds__hlds_statistics__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 0) = ((MR_Box) (&hlds__hlds_statistics_scalar_common_5[0]));
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 1) = ((MR_Box) (hlds__hlds_statistics__write_proc_stats_for_module_5_p_0_1));
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 3) = ((MR_Box) (hlds__hlds_statistics__OutStream_6));
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 4) = ((MR_Box) (hlds__hlds_statistics__Msg_7));
#line 60 "hlds_statistics.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_statistics__V_21_21, 5) = ((MR_Box) (hlds__hlds_statistics__ModuleInfo_8));
#line 60 "hlds_statistics.m"
    }
#line 60 "hlds_statistics.m"
    {
#line 60 "hlds_statistics.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_statistics_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_statistics__V_21_21, hlds__hlds_statistics__Preds_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_statistics__conv0_STATE_VARIABLE_IO_15);
    }
#line 53 "hlds_statistics.m"
  }
#line 27 "hlds_statistics.m"
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
