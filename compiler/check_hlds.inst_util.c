/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2021-10-27
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


// :- module check_hlds.inst_util.
// :- implementation.

/*
INIT mercury__check_hlds__inst_util__init
ENDINIT
*/

#include "check_hlds.inst_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static MR_Word MR_CALL 
check_hlds__inst_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__2588__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_Word MR_CALL 
check_hlds__inst_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__2568__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_Box MR_CALL 
check_hlds__inst_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_higher_order_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_22);

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_29);

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InstA_7,
  MR_Word tscc_proc_2_input_2_InstB_8,
  MR_Word tscc_proc_2_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
  MR_Word UniqA_9,
  MR_Word InstResultsA_10,
  MR_Word BoundInstsA_11,
  MR_Word UniqB_12,
  MR_Word MaybeType_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26);

static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
  MR_Word BoundInstsA_7,
  MR_Word BoundInstsB_8,
  MR_Word MaybeType_9,
  MR_Word * BoundInsts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
  MR_Word InstA_7,
  MR_Word InstB_8,
  MR_Word MaybeType_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static MR_Box MR_CALL 
check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundInstsB_9,
  MR_Word * Uniq_10);

static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word * Uniq_11);

static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6);

static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6);

static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word * HOInstInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
  MR_Word UniqA_4,
  MR_Word UniqB_5,
  MR_Word * Merged_6);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word HeadVar__3_3,
  MR_Word Uniq_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22);

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word ArgInsts_8);

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsIdB_2,
  MR_Word ArgsB_3,
  MR_Word LivesB_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
  MR_Word Inst0_9,
  MR_Word Live_10,
  MR_Word Uniq1_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
  MR_Word Live_9,
  MR_Word Uniq1_10,
  MR_Word Real_11,
  MR_Word Inst0_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word Live_10,
  MR_Word InstVarsA_11,
  MR_Word SubInstA_12,
  MR_Word InstB_13,
  MR_Word Real_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word Live_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word Live_9,
  MR_Word BoundInstsA_10,
  MR_Word BoundInstsB_11,
  MR_Word Real_12,
  MR_Word * BoundInsts_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Live_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void);

static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
  MR_Word Live_7,
  MR_Word Real_8,
  MR_Word Detism_9,
  MR_Word UniqA_10,
  MR_Word UniqB_11,
  MR_Word * Uniq_12);


static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[2][5];

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[3][3];


/* sealed */ struct check_hlds__inst_util__vector_common_type_4_0_s {
  const MR_Word check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct check_hlds__inst_util__vector_common_type_4_0_s check_hlds__inst_util_vector_common_4[30];



static /* final */ const MR_Box check_hlds__inst_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_2[2][5] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_util_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__inst_util_scalar_common_2[1])),
    ((MR_Box) (check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__inst_util_scalar_common_2[1])),
    ((MR_Box) (check_hlds__inst_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__inst_util__vector_common_type_4_0_s check_hlds__inst_util_vector_common_4[30] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 3 },
  /* row 9 */   {     (MR_Integer) 4 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 4 },
  /* row 15 */   {     (MR_Integer) 0 },
  /* row 16 */   {     (MR_Integer) 2 },
  /* row 17 */   {     (MR_Integer) 2 },
  /* row 18 */   {     (MR_Integer) 3 },
  /* row 19 */   {     (MR_Integer) 4 },
  /* row 20 */   {     (MR_Integer) 0 },
  /* row 21 */   {     (MR_Integer) 2 },
  /* row 22 */   {     (MR_Integer) 2 },
  /* row 23 */   {     (MR_Integer) 3 },
  /* row 24 */   {     (MR_Integer) 4 },
  /* row 25 */   {     (MR_Integer) 0 },
  /* row 26 */   {     (MR_Integer) 2 },
  /* row 27 */   {     (MR_Integer) 2 },
  /* row 28 */   {     (MR_Integer) 3 },
  /* row 29 */   {     (MR_Integer) 4 },
};


#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static MR_Word MR_CALL 
check_hlds__inst_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__2588__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20;

    {
      LambdaHeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_20, 0) = ((MR_Box) (LambdaHeadVar__1_19));
    }
    return LambdaHeadVar__2_20;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__2568__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;

    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_15, 0) = ((MR_Box) (LambdaHeadVar__1_14));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_Box MR_CALL 
check_hlds__inst_util__maybe_get_higher_order_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_15;

    conv0_LambdaHeadVar__2_15 = check_hlds__inst_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__2568__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__inst_util__maybe_get_higher_order_arg_types_3_p_0(
  MR_Word MaybeType_4,
  MR_Integer Arity_5,
  MR_Word * MaybeTypes_6)
{
  {
    MR_bool succeeded = (MaybeType_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ArgTypes_11;
    MR_Word Type_7;
    MR_Word Var_8;
    MR_Word Var_9;

    if (succeeded)
    {
      Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_4, (MR_Integer) 0))));
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_7, &Var_8, &Var_9, &ArgTypes_11);
    }
    if (succeeded)
      *MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_util_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_util_scalar_common_3[2]), ArgTypes_11);
    else
      mercury__list__duplicate_3_p_0((MR_Word) (&check_hlds__inst_util_scalar_common_1[0]), Arity_5, ((MR_Box) ((MR_Unsigned) 0U)), MaybeTypes_6);
  }
}

MR_Word MR_CALL 
check_hlds__inst_util__inst_may_restrict_cons_ids_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5)
{
  while (MR_TRUE)
  {
    MR_Word MayRestrict_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayRestrict_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MayRestrict_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        MayRestrict_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            MayRestrict_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            MayRestrict_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 1))));
              MR_Word NewInst_21;
              MR_Word next_value_of_Inst_5;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_20, &NewInst_21);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = NewInst_21;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
        }
        break;
    }
    return MayRestrict_6;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(
  MR_Integer Arity_3)
{
  {
    MR_Word PredInstInfo_4;
    MR_Word InMode_5;
    MR_Word OutMode_6;
    MR_Word ArgModes_7;
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Word Var_11;

    parse_tree__prog_mode__in_mode_1_p_0(&InMode_5);
    parse_tree__prog_mode__out_mode_1_p_0(&OutMode_6);
    Var_9 = (MR_Integer) ((MR_Unsigned) Arity_3 - (MR_Unsigned) 1);
    Var_8 = mercury__list__duplicate_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_9, ((MR_Box) (InMode_5)));
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (OutMode_6));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ArgModes_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_8, Var_11);
    {
      PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredInstInfo_4, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PredInstInfo_4, 1) = ((MR_Box) (ArgModes_7));
      MR_hl_field(MR_mktag(0), PredInstInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredInstInfo_4, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    return PredInstInfo_4;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_higher_order_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions_5;
    MR_Word Var_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_5);
    Var_6 = check_hlds__inst_util__inst_contains_higher_order_2_3_f_0(ModuleInfo_3, Inst_4, Expansions_5);
    succeeded = (Var_6 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_higher_order_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ContainsHO_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContainsHO_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ContainsHO_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 1))));

          if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
            ContainsHO_8 = (MR_Integer) 0;
          else
            ContainsHO_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              ContainsHO_8 = check_hlds__inst_util__bound_inst_list_contains_higher_order_3_f_0(ModuleInfo_5, BoundInsts_14, STATE_VARIABLE_Expansions_0_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));

              if ((HOInstInfo_29 == (MR_Word) ((MR_Unsigned) 0U)))
                ContainsHO_8 = (MR_Integer) 0;
              else
                ContainsHO_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.inst_util.inst_contains_higher_order_2\'/3", (MR_String) "uninstantiated inst parameter");
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_26;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_16)), STATE_VARIABLE_Expansions_0_22);
              if (succeeded)
                ContainsHO_8 = (MR_Integer) 0;
              else
              {
                MR_Word SubInst_17;
                MR_Word STATE_VARIABLE_Expansions_23_23;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_22;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_16)), STATE_VARIABLE_Expansions_0_22, &STATE_VARIABLE_Expansions_23_23);
                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_16, &SubInst_17);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = SubInst_17;
                next_value_of_STATE_VARIABLE_Expansions_0_22 = STATE_VARIABLE_Expansions_23_23;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_22 = next_value_of_STATE_VARIABLE_Expansions_0_22;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));

              ContainsHO_8 = check_hlds__inst_util__inst_list_contains_higher_order_3_f_0(ModuleInfo_5, ArgInsts_20, STATE_VARIABLE_Expansions_0_22);
            }
            break;
        }
        break;
    }
    return ContainsHO_8;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word BoundInst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));
      MR_Word HeadContainsHO_14;

      HeadContainsHO_14 = check_hlds__inst_util__inst_list_contains_higher_order_3_f_0(HeadVar__1_1, ArgInsts_13, HeadVar__3_3);
      switch (HeadContainsHO_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = BoundInsts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadContainsHO_12;

      HeadContainsHO_12 = check_hlds__inst_util__inst_contains_higher_order_2_3_f_0(HeadVar__1_1, Inst_8, HeadVar__3_3);
      switch (HeadContainsHO_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Insts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__var_inst_contains_any_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Instmap_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Inst_7;
    MR_Word Expansions_10;
    MR_Word Var_11;

    hlds__instmap__instmap_lookup_var_3_p_0(Instmap_5, Var_6, &Inst_7);
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_10);
    Var_11 = check_hlds__inst_util__inst_contains_any_2_3_f_0(ModuleInfo_4, Inst_7, Expansions_10);
    succeeded = (Var_11 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__inst_contains_any_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions_5;
    MR_Word Var_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_5);
    Var_6 = check_hlds__inst_util__inst_contains_any_2_3_f_0(ModuleInfo_3, Inst_4, Expansions_5);
    succeeded = (Var_6 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_contains_any_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ContainsAny_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContainsAny_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ContainsAny_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        ContainsAny_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(ModuleInfo_5, BoundInsts_13, STATE_VARIABLE_Expansions_0_29);
                      break;
                    case (MR_Integer) 1:
                      ContainsAny_8 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AnyResults_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_12, (MR_Integer) 0))) & (MR_Integer) 3);

                    switch (AnyResults_15) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        ContainsAny_8 = check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(ModuleInfo_5, BoundInsts_13, STATE_VARIABLE_Expansions_0_29);
                        break;
                      case (MR_Integer) 1:
                        ContainsAny_8 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 0:
                        ContainsAny_8 = (MR_Integer) 0;
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 5:
            ContainsAny_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.inst_util.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_33;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_29);
              if (succeeded)
                ContainsAny_8 = (MR_Integer) 0;
              else
              {
                MR_Word SubInst_22;
                MR_Word STATE_VARIABLE_Expansions_30_30;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_29;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_30_30);
                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_21, &SubInst_22);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = SubInst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_29 = STATE_VARIABLE_Expansions_30_30;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_29 = next_value_of_STATE_VARIABLE_Expansions_0_29;
                continue;
              }
            }
            break;
        }
        break;
    }
    return ContainsAny_8;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__bound_inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word BoundInst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));
      MR_Word HeadContainsAny_14;

      HeadContainsAny_14 = check_hlds__inst_util__inst_list_contains_any_3_f_0(HeadVar__1_1, ArgInsts_13, HeadVar__3_3);
      switch (HeadContainsAny_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = BoundInsts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_util__inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadContainsAny_12;

      HeadContainsAny_12 = check_hlds__inst_util__inst_contains_any_2_3_f_0(HeadVar__1_1, Inst_8, HeadVar__3_3);
      switch (HeadContainsAny_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Insts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_6_p_0(
  MR_Word tscc_proc_1_input_1_InstA_7,
  MR_Word tscc_proc_1_input_2_InstB_8,
  MR_Word tscc_proc_1_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_Word tscc_proc_2_input_1_InstA_7;
    MR_Word tscc_proc_2_input_2_InstB_8;
    MR_Word tscc_proc_2_input_3_MaybeType_9;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_Inst_10;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_32;

    // The code for TSCC PROC 1: pred check_hlds.inst_util.inst_merge/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_util.inst_merge/6-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_util.inst_merge_3/6-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word InstA_7 = tscc_proc_1_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_1_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_1_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ExpandedInstA_45;
        MR_Word ExpandedInstB_46;

        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_7, &ExpandedInstA_45);
        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_8, &ExpandedInstB_46);
        succeeded = (ExpandedInstB_46 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          Inst_10 = ExpandedInstA_45;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_45 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst_10 = ExpandedInstB_46;
            STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_InstA_7 = ExpandedInstA_45;
            MR_Word next_value_of_tscc_proc_2_input_2_InstB_8 = ExpandedInstB_46;
            MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_InstA_7 = next_value_of_tscc_proc_2_input_1_InstA_7;
            tscc_proc_2_input_2_InstB_8 = next_value_of_tscc_proc_2_input_2_InstB_8;
            tscc_proc_2_input_3_MaybeType_9 = next_value_of_tscc_proc_2_input_3_MaybeType_9;
            tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
            goto top_of_proc_2;
          }
        }
      }
      else
      {
        MR_Word InstTable0_18;
        MR_Word MergeInstTable0_19;
        MR_Word MergeInstInfo_20;
        MR_Word MergeInstName_21;
        MR_Word MaybeMaybeMergedInst_22;
        MR_Word MergeInstTable1_23;
        MR_Word Inst0_25;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
        {
          MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_8));
        }
        {
          MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_8));
        }
        hlds__hlds_inst_mode__search_insert_merge_inst_4_p_0(MergeInstInfo_20, &MaybeMaybeMergedInst_22, MergeInstTable0_19, &MergeInstTable1_23);
        if ((MaybeMaybeMergedInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word InstTable1_26;
          MR_Word InstTable2_27;
          MR_Word MergeInstTable2_28;
          MR_Word MergeInstTable3_29;
          MR_Word InstTable3_30;
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word Var_36;
          MR_Word ExpandedInstA_55;
          MR_Word ExpandedInstB_56;

          hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
          hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
          check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_7, &ExpandedInstA_55);
          check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_8, &ExpandedInstB_56);
          succeeded = (ExpandedInstB_56 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst0_25 = ExpandedInstA_55;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ExpandedInstA_55 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              Inst0_25 = ExpandedInstB_56;
              STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(ExpandedInstA_55, ExpandedInstB_56, MaybeType_9, &Inst0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
          }
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
            hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Inst0_25));
            }
            hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(MergeInstInfo_20, Var_36, MergeInstTable2_28, &MergeInstTable3_29);
            hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable3_29, InstTable2_27, &InstTable3_30);
            hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable3_30, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_32);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word MaybeMergedInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeMergedInst_22, (MR_Integer) 0))));

          if ((MaybeMergedInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst0_25, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, Inst0_25);
          if (succeeded)
            {
              Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst_10 = Inst0_25;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_7 = tscc_proc_2_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_2_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_2_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
      MR_Word STATE_VARIABLE_ModuleInfo_20;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsA_12;
      MR_Word SubInstA_13;

      if (succeeded)
      {
        InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));
        SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
        {
          MR_Word InstVarsB_14;
          MR_Word SubInstB_15;

          succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));
            SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
            {
              MR_Word TypeInfo_26_26;
              MR_Word Inst0_16;
              MR_Word InstVars_17;

              succeeded = check_hlds__inst_util__inst_merge_6_p_0(SubInstA_13, SubInstB_15, MaybeType_9, &Inst0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__inst_util_scalar_common_1[1]);
                mercury__set__intersect_3_p_0(TypeInfo_26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
                succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_26_26, InstVars_17);
                if (succeeded)
                  {
                    Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (InstVars_17));
                    MR_hl_field(MR_mktag(3), Inst_10, 2) = ((MR_Box) (Inst0_16));
                  }
                else
                  Inst_10 = Inst0_16;
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = SubInstA_13;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = InstB_8;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        MR_Word SubInstB_25;

        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = InstA_7;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = SubInstB_25;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
        else
          succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(InstA_7, InstB_8, MaybeType_9, &Inst_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Inst_10 = tscc_output_1_Inst_10;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InstA_7,
  MR_Word tscc_proc_2_input_2_InstB_8,
  MR_Word tscc_proc_2_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_7;
    MR_Word tscc_proc_1_input_2_InstB_8;
    MR_Word tscc_proc_1_input_3_MaybeType_9;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_Inst_10;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_32;

    // The code for TSCC PROC 2: pred check_hlds.inst_util.inst_merge_3/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_util.inst_merge/6-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_util.inst_merge_3/6-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word InstA_7 = tscc_proc_1_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_1_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_1_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ExpandedInstA_45;
        MR_Word ExpandedInstB_46;

        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_7, &ExpandedInstA_45);
        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_8, &ExpandedInstB_46);
        succeeded = (ExpandedInstB_46 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          Inst_10 = ExpandedInstA_45;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_45 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst_10 = ExpandedInstB_46;
            STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_InstA_7 = ExpandedInstA_45;
            MR_Word next_value_of_tscc_proc_2_input_2_InstB_8 = ExpandedInstB_46;
            MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_InstA_7 = next_value_of_tscc_proc_2_input_1_InstA_7;
            tscc_proc_2_input_2_InstB_8 = next_value_of_tscc_proc_2_input_2_InstB_8;
            tscc_proc_2_input_3_MaybeType_9 = next_value_of_tscc_proc_2_input_3_MaybeType_9;
            tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
            goto top_of_proc_2;
          }
        }
      }
      else
      {
        MR_Word InstTable0_18;
        MR_Word MergeInstTable0_19;
        MR_Word MergeInstInfo_20;
        MR_Word MergeInstName_21;
        MR_Word MaybeMaybeMergedInst_22;
        MR_Word MergeInstTable1_23;
        MR_Word Inst0_25;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
        {
          MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_8));
        }
        {
          MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_8));
        }
        hlds__hlds_inst_mode__search_insert_merge_inst_4_p_0(MergeInstInfo_20, &MaybeMaybeMergedInst_22, MergeInstTable0_19, &MergeInstTable1_23);
        if ((MaybeMaybeMergedInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word InstTable1_26;
          MR_Word InstTable2_27;
          MR_Word MergeInstTable2_28;
          MR_Word MergeInstTable3_29;
          MR_Word InstTable3_30;
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word Var_36;
          MR_Word ExpandedInstA_55;
          MR_Word ExpandedInstB_56;

          hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
          hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
          check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_7, &ExpandedInstA_55);
          check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_8, &ExpandedInstB_56);
          succeeded = (ExpandedInstB_56 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst0_25 = ExpandedInstA_55;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ExpandedInstA_55 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              Inst0_25 = ExpandedInstB_56;
              STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__inst_util__inst_merge_3_6_p_0(ExpandedInstA_55, ExpandedInstB_56, MaybeType_9, &Inst0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
          }
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
            hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Inst0_25));
            }
            hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(MergeInstInfo_20, Var_36, MergeInstTable2_28, &MergeInstTable3_29);
            hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable3_29, InstTable2_27, &InstTable3_30);
            hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable3_30, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_32);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word MaybeMergedInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeMergedInst_22, (MR_Integer) 0))));

          if ((MaybeMergedInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst0_25, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, Inst0_25);
          if (succeeded)
            {
              Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst_10 = Inst0_25;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_7 = tscc_proc_2_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_2_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_2_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
      MR_Word STATE_VARIABLE_ModuleInfo_20;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsA_12;
      MR_Word SubInstA_13;

      if (succeeded)
      {
        InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));
        SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
        {
          MR_Word InstVarsB_14;
          MR_Word SubInstB_15;

          succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));
            SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
            {
              MR_Word TypeInfo_26_26;
              MR_Word Inst0_16;
              MR_Word InstVars_17;

              succeeded = check_hlds__inst_util__inst_merge_6_p_0(SubInstA_13, SubInstB_15, MaybeType_9, &Inst0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__inst_util_scalar_common_1[1]);
                mercury__set__intersect_3_p_0(TypeInfo_26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
                succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_26_26, InstVars_17);
                if (succeeded)
                  {
                    Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (InstVars_17));
                    MR_hl_field(MR_mktag(3), Inst_10, 2) = ((MR_Box) (Inst0_16));
                  }
                else
                  Inst_10 = Inst0_16;
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = SubInstA_13;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = InstB_8;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        MR_Word SubInstB_25;

        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = InstA_7;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = SubInstB_25;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
        else
          succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(InstA_7, InstB_8, MaybeType_9, &Inst_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Inst_10 = tscc_output_1_Inst_10;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_bound_ground_8_p_0(
  MR_Word UniqA_9,
  MR_Word InstResultsA_10,
  MR_Word BoundInstsA_11,
  MR_Word UniqB_12,
  MR_Word MaybeType_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, InstResultsA_10, BoundInstsA_11);
    if (succeeded)
    {
      MR_Word Uniq_16;
      MR_Word Uniq0_51;
      MR_Word Expansions0_52;
      MR_Word _Expansions_53;

      succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_12, UniqA_9);
      if (succeeded)
        Uniq0_51 = UniqA_9;
      else
        Uniq0_51 = UniqB_12;
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_52);
      check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_25, BoundInstsA_11, Uniq0_51, Expansions0_52, &_Expansions_53, &Uniq_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_14 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_16));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, InstResultsA_10, BoundInstsA_11);
      if (succeeded)
      {
        if ((MaybeType_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Uniq_39;
          MR_Word Uniq0_63;
          MR_Word Expansions0_64;
          MR_Word _Expansions_65;

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_12, UniqA_9);
          if (succeeded)
            Uniq0_63 = UniqA_9;
          else
            Uniq0_63 = UniqB_12;
          mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_64);
          check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_25, BoundInstsA_11, Uniq0_63, Expansions0_64, &_Expansions_65, &Uniq_39);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_42_42;
          MR_Word TypeCtorInfo_43_43;
          MR_Word TypeInfo_44_44;
          MR_Word TypeCtorInfo_45_45;
          MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_13, (MR_Integer) 0))));
          MR_Word Constructors_18;
          MR_Word TypeCtor_19;
          MR_Word BoundInstsB0_20;
          MR_Word BoundInstsB_21;
          MR_Word InstResultsB_22;
          MR_Word InstA_23;
          MR_Word InstB_24;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;

          succeeded = check_hlds__type_util__type_constructors_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, Type_17, &Constructors_18);
          if (succeeded)
          {
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_17, &TypeCtor_19);
            check_hlds__mode_util__constructors_to_bound_insts_5_p_0(STATE_VARIABLE_ModuleInfo_0_25, UniqB_12, TypeCtor_19, Constructors_18, &BoundInstsB0_20);
            TypeCtorInfo_42_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
            mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_42_42, BoundInstsB0_20, &BoundInstsB_21);
            Var_29 = (MR_Integer) 1;
            Var_30 = (MR_Integer) 0;
            TypeCtorInfo_43_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
            Var_32 = mercury__set__init_0_f_0(TypeCtorInfo_43_43);
            TypeInfo_44_44 = (MR_Word) (&check_hlds__inst_util_scalar_common_1[1]);
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
            }
            Var_34 = mercury__set__init_0_f_0(TypeInfo_44_44);
            TypeCtorInfo_45_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            }
            Var_36 = mercury__set__init_0_f_0(TypeCtorInfo_45_45);
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            }
            Var_37 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_19)));
            {
              InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 0) = (MR_Box) (((((MR_Unsigned) (Var_29) << 2)) | (MR_Unsigned) (Var_30)));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 2) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 3) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 4) = ((MR_Box) (Var_37));
            }
            {
              InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InstA_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), InstA_23, 1) = (MR_Box) ((MR_Unsigned) (UniqA_9));
              MR_hl_field(MR_mktag(3), InstA_23, 2) = ((MR_Box) (InstResultsA_10));
              MR_hl_field(MR_mktag(3), InstA_23, 3) = ((MR_Box) (BoundInstsA_11));
            }
            {
              InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InstB_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), InstB_24, 1) = (MR_Box) ((MR_Unsigned) (UniqB_12));
              MR_hl_field(MR_mktag(3), InstB_24, 2) = ((MR_Box) (InstResultsB_22));
              MR_hl_field(MR_mktag(3), InstB_24, 3) = ((MR_Box) (BoundInstsB_21));
            }
            succeeded = check_hlds__inst_util__inst_merge_4_6_p_0(InstA_23, InstB_24, MaybeType_13, Result_14, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__bound_inst_list_merge_6_p_0(
  MR_Word BoundInstsA_7,
  MR_Word BoundInstsB_8,
  MR_Word MaybeType_9,
  MR_Word * BoundInsts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool succeeded;

    if ((BoundInstsA_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *BoundInsts_10 = BoundInstsB_8;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_7, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_7, (MR_Integer) 0))));

      if ((BoundInstsB_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *BoundInsts_10 = BoundInstsA_7;
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word BoundInstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_8, (MR_Integer) 0))));
        MR_Word BoundInstsTailB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_8, (MR_Integer) 1))));
        MR_Word ConsIdA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        MR_Word ArgsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        MR_Word ConsIdB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 0))));
        MR_Word ArgsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 1))));

        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_18, ConsIdB_20);
        if (succeeded)
        {
          MR_Word MaybeTypes_22;
          MR_Word Args_23;
          MR_Word BoundInst_24;
          MR_Word BoundInstsTail_25;
          MR_Integer Var_28;
          MR_Word STATE_VARIABLE_ModuleInfo_29_29;

          Var_28 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsA_19);
          check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0(STATE_VARIABLE_ModuleInfo_0_26, MaybeType_9, ConsIdA_18, Var_28, &MaybeTypes_22);
          succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(ArgsA_19, ArgsB_21, MaybeTypes_22, &Args_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_29_29);
          if (succeeded)
          {
            {
              BoundInst_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BoundInst_24, 0) = ((MR_Box) (ConsIdA_18));
              MR_hl_field(MR_mktag(0), BoundInst_24, 1) = ((MR_Box) (Args_23));
            }
            succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(Var_40, BoundInstsTailB_17, MaybeType_9, &BoundInstsTail_25, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_24));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_25));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word Var_39;

          parse_tree__prog_data____Compare____cons_id_0_0(&Var_39, ConsIdA_18, ConsIdB_20);
          succeeded = ((MR_Integer) 1 == Var_39);
          if (succeeded)
          {
            MR_Word BoundInstsTail_34;

            succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(Var_40, BoundInstsB_8, MaybeType_9, &BoundInstsTail_34, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_34));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word BoundInstsTail_35;

            succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(BoundInstsA_7, BoundInstsTailB_17, MaybeType_9, &BoundInstsTail_35, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInstB_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_35));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_list_merge_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgB_13;
      MR_Word ArgsB_14;
      MR_Word MaybeType_15;
      MR_Word MaybeTypes_16;
      MR_Word Arg_17;
      MR_Word Args_18;
      MR_Word STATE_VARIABLE_ModuleInfo_22_22;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = check_hlds__inst_util__inst_merge_6_p_0(ArgA_11, ArgB_13, MaybeType_15, &Arg_17, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_22_22);
          if (succeeded)
          {
            succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(ArgsA_12, ArgsB_14, MaybeTypes_16, &Args_18, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_6);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_18));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__inst_merge_4_6_p_0(
  MR_Word InstA_7,
  MR_Word InstB_8,
  MR_Word MaybeType_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstA_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_7)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            if ((InstB_8 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Inst_10 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 2))
            {
              MR_Word Uniq_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);

              switch (Uniq_73) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
              {
                *Inst_10 = InstB_8;
                *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_7, (MR_Integer) 1))));
          MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_7, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_8)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    switch (Var_110) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      *Inst_10 = InstA_7;
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniqB_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 1))));
                MR_Word HOInstInfo_16;
                MR_Word Uniq_17;

                succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_15, &HOInstInfo_16, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                if (succeeded)
                {
                  check_hlds__inst_util__merge_uniq_3_p_0(Var_110, UniqB_14, &Uniq_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_16));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word InstResultsB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                    MR_Word BoundInstsB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));
                    MR_Word Var_57;
                    MR_Word UniqB_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word Uniq_63;

                    check_hlds__inst_util__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Var_110, UniqB_62, BoundInstsB_20, &Uniq_63);
                    switch (Uniq_63) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, InstResultsB_19, BoundInstsB_20);
                    if (succeeded)
                    {
                      Var_57 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_63));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_57));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word UniqB_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                    MR_Word HOInstInfo_68;
                    MR_Word Uniq_69;

                    succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_67, &HOInstInfo_68, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                    if (succeeded)
                    {
                      check_hlds__inst_util__merge_uniq_3_p_0(Var_110, UniqB_66, &Uniq_69);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_69));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_68));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Var_55;
                    MR_Word Uniq_71;

                    check_hlds__inst_util__merge_uniq_3_p_0(Var_110, (MR_Integer) 0, &Uniq_71);
                    switch (Uniq_71) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_71));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_55));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 3))));
              MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_53;
                    MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word Uniq_76;

                    check_hlds__inst_util__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, UniqB_75, Var_113, Var_111, &Uniq_76);
                    switch (Uniq_76) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, Var_112, Var_111);
                    if (succeeded)
                    {
                      Var_53 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_76));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_53));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word BoundInsts_32;
                        MR_Word Var_49;
                        MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Uniq_87;
                        MR_Word BoundInstsB_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));

                        check_hlds__inst_util__merge_uniq_3_p_0(Var_113, UniqB_86, &Uniq_87);
                        succeeded = check_hlds__inst_util__bound_inst_list_merge_6_p_0(Var_111, BoundInstsB_88, MaybeType_9, &BoundInsts_32, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          Var_49 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_87));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_49));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_32));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word UniqB_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);

                        succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(Var_113, Var_112, Var_111, UniqB_91, MaybeType_9, Inst_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstA_7);
                          succeeded = !(succeeded);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 1))));
                    MR_Word HOInstInfo_81;
                    MR_Word Uniq_82;

                    succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_80, &HOInstInfo_81, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                    if (succeeded)
                    {
                      check_hlds__inst_util__merge_uniq_3_p_0(Var_115, UniqB_79, &Uniq_82);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_82));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_81));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word UniqB_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word InstResultsB_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                        MR_Word BoundInstsB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));

                        succeeded = check_hlds__inst_util__inst_merge_bound_ground_8_p_0(UniqB_95, InstResultsB_96, BoundInstsB_97, Var_115, MaybeType_9, Inst_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstB_8);
                          succeeded = !(succeeded);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word UniqB_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                        MR_Word HOInstInfo_102;
                        MR_Word Uniq_103;

                        succeeded = check_hlds__inst_util__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_101, &HOInstInfo_102, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          check_hlds__inst_util__merge_uniq_3_p_0(Var_115, UniqB_100, &Uniq_103);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_103));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_102));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));

              if (((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 2))
              {
                MR_Word Var_51;
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word Uniq_84;

                check_hlds__inst_util__merge_uniq_3_p_0((MR_Integer) 0, UniqB_83, &Uniq_84);
                switch (Uniq_84) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_84));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_51));
                  }
                  succeeded = MR_TRUE;
                }
              }
              else
              if (((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
              {
                MR_Word TypeInfo_104_104;
                MR_Word TypeCtorInfo_105_105;
                MR_Word ArgsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                MR_Word MaybeTypes_38;
                MR_Word Args_39;
                MR_Integer Var_42;
                MR_Word Var_43;
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));

                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_108, Var_106);
                if (succeeded)
                {
                  TypeInfo_104_104 = (MR_Word) (&check_hlds__inst_util_scalar_common_1[0]);
                  TypeCtorInfo_105_105 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                  Var_42 = mercury__list__length_1_f_0(TypeCtorInfo_105_105, Var_107);
                  Var_43 = (MR_Word) ((MR_Unsigned) 0U);
                  MaybeTypes_38 = mercury__list__duplicate_2_f_0(TypeInfo_104_104, Var_42, ((MR_Box) (Var_43)));
                  succeeded = check_hlds__inst_util__inst_list_merge_6_p_0(Var_107, ArgsB_37, MaybeTypes_38, &Args_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_10 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_108));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_39));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
                succeeded = MR_FALSE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__inst_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__2588__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeType_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word * MaybeTypes_10)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word Types_16;
      MR_Word TypeCtorInfo_23_23;
      MR_Word Type_15;
      MR_Integer Var_27;

      succeeded = (MaybeType_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_7, (MR_Integer) 0))));
        succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_15, ConsId_8, &Types_16);
        if (succeeded)
        {
          TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          mercury__list__length_2_p_0(TypeCtorInfo_23_23, Types_16, &Var_27);
          succeeded = (Arity_9 == Var_27);
        }
      }
      if (succeeded)
        *MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_util_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_util_scalar_common_3[1]), Types_16);
      else
        mercury__list__duplicate_3_p_0((MR_Word) (&check_hlds__inst_util_scalar_common_1[0]), Arity_9, ((MR_Box) ((MR_Unsigned) 0U)), MaybeTypes_10);
    }
    else
      *MaybeTypes_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundInstsB_9,
  MR_Word * Uniq_10)
{
  {
    MR_bool succeeded;
    MR_Word Uniq0_11;
    MR_Word Expansions0_12;
    MR_Word _Expansions_13;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_7, UniqB_8);
    if (succeeded)
      Uniq0_11 = UniqB_8;
    else
      Uniq0_11 = UniqA_7;
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_12);
    check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(ModuleInfo_6, BoundInstsB_9, Uniq0_11, Expansions0_12, &_Expansions_13, Uniq_10);
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word * Uniq_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstA_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Uniq_11 = UniqB_9;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          *Uniq_11 = UniqB_9;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqA_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_8, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_13, UniqB_9);
          if (succeeded)
            *Uniq_11 = UniqB_9;
          else
            *Uniq_11 = UniqA_13;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInstsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 3))));
              MR_Word Uniq0_20;
              MR_Word UniqA_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_35, UniqB_9);
              if (succeeded)
                Uniq0_20 = UniqB_9;
              else
                Uniq0_20 = UniqA_35;
              check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(ModuleInfo_7, BoundInstsA_19, Uniq0_20, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27, Uniq_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniqA_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_38, UniqB_9);
              if (succeeded)
                *Uniq_11 = UniqB_9;
              else
                *Uniq_11 = UniqA_38;
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.merge_inst_uniq\'/6", (MR_String) "inst_var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
              MR_Word next_value_of_InstA_8 = SubInstA_25;

              // direct tailcall eliminated
              ;
              InstA_8 = next_value_of_InstA_8;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26);
              if (succeeded)
              {
                *Uniq_11 = UniqB_9;
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
              }
              else
              {
                MR_Word Inst_22;
                MR_Word STATE_VARIABLE_Expansions_31_31;
                MR_Word next_value_of_InstA_8;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_26;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_31_31);
                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_7, InstName_21, &Inst_22);
                // direct tailcall eliminated
                ;
                next_value_of_InstA_8 = Inst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_26 = STATE_VARIABLE_Expansions_31_31;
                InstA_8 = next_value_of_InstA_8;
                STATE_VARIABLE_Expansions_0_26 = next_value_of_STATE_VARIABLE_Expansions_0_26;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, UniqB_9);
              if (succeeded)
                *Uniq_11 = UniqB_9;
              else
                *Uniq_11 = (MR_Integer) 0;
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Uniq_6 = HeadVar__3_3;
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
    }
    else
    {
      MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uniq1_18;
      MR_Word STATE_VARIABLE_Expansions_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_util__merge_inst_uniq_6_p_0(ModuleInfo_1, Inst_13, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_21_21, &Uniq1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Insts_14;
      next_value_of_HeadVar__3_3 = Uniq1_18;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_bound_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Uniq_6 = HeadVar__3_3;
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
    }
    else
    {
      MR_Word BoundInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_13, (MR_Integer) 1))));
      MR_Word Uniq1_20;
      MR_Word STATE_VARIABLE_Expansions_23_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_util__merge_inst_list_uniq_6_p_0(ModuleInfo_1, ArgInsts_19, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_23_23, &Uniq1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundInsts_14;
      next_value_of_HeadVar__3_3 = Uniq1_20;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_23_23;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__merge_ho_inst_info_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word * HOInstInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_bool succeeded = (HOInstInfoA_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PredA_10;
    MR_Word PredB_11;

    if (succeeded)
    {
      PredA_10 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));
      succeeded = (HOInstInfoB_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        PredB_11 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_7), (MR_Integer) 1));
    }
    if (succeeded)
    {
      succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredA_10, PredB_11);
      if (succeeded)
      {
        *HOInstInfo_8 = HOInstInfoB_7;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredB_11, PredA_10);
        if (succeeded)
        {
          *HOInstInfo_8 = HOInstInfoA_6;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredA_10);
          if (succeeded)
          {
            succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredB_11);
            if (succeeded)
            {
              *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, HOInstInfoA_6);
      if (succeeded)
      {
        succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, HOInstInfoB_7);
        if (succeeded)
        {
          *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__merge_uniq_3_p_0(
  MR_Word UniqA_4,
  MR_Word UniqB_5,
  MR_Word * Merged_6)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_4, UniqB_5);
    if (succeeded)
      *Merged_6 = UniqB_5;
    else
      *Merged_6 = UniqA_4;
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(MR_mktag(0), Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Inst_6 = Inst0_5;
          *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          *Inst_6 = Inst0_5;
          *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq0_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
          MR_Word Uniq_11 = ((&check_hlds__inst_util_vector_common_4[15 + Uniq0_9]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_11));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_10));
          }
          *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));
              MR_Word BoundInsts_14;
              MR_Word Uniq0_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_49 = ((&check_hlds__inst_util_vector_common_4[20 + Uniq0_48]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

              check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(BoundInsts0_13, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word Uniq0_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_51 = ((&check_hlds__inst_util_vector_common_4[25 + Uniq0_50]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_15));
              }
              *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInst_19;

              check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst0_18, &SubInst_19, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
              succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_36, SubInst_19, SubInst0_18);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_19));
                }
              else
                *Inst_6 = SubInst_19;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word InstTable0_23;
              MR_Word MostlyUniqInstTable0_24;
              MR_Word MaybeMaybeInst_25;
              MR_Word MostlyUniqInstTable1_26;
              MR_Word MostlyUniqInst_28;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &InstTable0_23);
              hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable0_23, &MostlyUniqInstTable0_24);
              hlds__hlds_inst_mode__search_insert_mostly_uniq_inst_4_p_0(InstName_22, &MaybeMaybeInst_25, MostlyUniqInstTable0_24, &MostlyUniqInstTable1_26);
              if ((MaybeMaybeInst_25 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstTable1_29;
                MR_Word SubInst1_30;
                MR_Word InstTable2_31;
                MR_Word MostlyUniqInstTable2_32;
                MR_Word MostlyUniqInstTable_33;
                MR_Word InstTable_34;
                MR_Word STATE_VARIABLE_ModuleInfo_37_37;
                MR_Word STATE_VARIABLE_ModuleInfo_38_38;
                MR_Word Var_39;
                MR_Word SubInst0_52;

                hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable1_26, InstTable0_23, &InstTable1_29);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_29, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_37_37);
                check_hlds__mode_util__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, InstName_22, &SubInst0_52);
                check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, SubInst0_52, &SubInst1_30);
                check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst1_30, &MostlyUniqInst_28, STATE_VARIABLE_ModuleInfo_37_37, &STATE_VARIABLE_ModuleInfo_38_38);
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_38_38, &InstTable2_31);
                hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable2_31, &MostlyUniqInstTable2_32);
                {
                  Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MostlyUniqInst_28));
                }
                hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(InstName_22, Var_39, MostlyUniqInstTable2_32, &MostlyUniqInstTable_33);
                hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable_33, InstTable2_31, &InstTable_34);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_34, STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_ModuleInfo_36);
              }
              else
              {
                MR_Word MaybeInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_25, (MR_Integer) 0))));

                if ((MaybeInst_27 == (MR_Word) ((MR_Unsigned) 0U)))
                  MostlyUniqInst_28 = Inst0_5;
                else
                  MostlyUniqInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_27, (MR_Integer) 0))));
                *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
              }
              succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_36, InstName_22, MostlyUniqInst_28);
              if (succeeded)
                *Inst_6 = Inst0_5;
              else
                *Inst_6 = MostlyUniqInst_28;
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
              return;
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(
  MR_Word Live_12,
  MR_Word InstA0_13,
  MR_Word ConsIdB_14,
  MR_Word ArgInstsB_15,
  MR_Word ArgLives_16,
  MR_Word Real_17,
  MR_Word Type_18,
  MR_Word * Inst_19,
  MR_Word * Detism_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word InstA_22;

    check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, InstA0_13, &InstA_22);
    switch (MR_tag((MR_Word) InstA_22)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgInsts_38;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;

              switch (Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ArgInsts_38 = ArgInstsB_15;
                    *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, ArgLives_16, ArgInstsB_15);
                    if (succeeded)
                    {
                      check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(ArgInstsB_15, ArgLives_16, &ArgInsts_38, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_18, ConsIdB_14, ArgInsts_38);
                if (succeeded)
                {
                  Var_76 = (MR_Integer) 1;
                  Var_77 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_80 = (MR_Word) ((MR_Unsigned) 0U);
                  *Detism_20 = (MR_Integer) 0;
                  {
                    Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (ConsIdB_14));
                    MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ArgInsts_38));
                  }
                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_19 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_76));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_77));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_78));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_19 = (MR_Word) ((MR_Unsigned) 4U);
              *Detism_20 = (MR_Integer) 6;
              *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_22, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word ArgInsts_81;

          succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, Type_18);
          succeeded = !(succeeded);
          if (succeeded)
          {
            switch (Live_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(ArgInstsB_15, Live_12, Uniq_39, Real_17, &ArgInsts_81, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                break;
              case (MR_Integer) 0:
                succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(ArgInstsB_15, Live_12, ArgLives_16, Uniq_39, Real_17, &ArgInsts_81, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                break;
            }
            if (succeeded)
            {
              Var_71 = (MR_Word) ((MR_Unsigned) 0U);
              Var_74 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (ConsIdB_14));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ArgInsts_81));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_19 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_39));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_72));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word UniqA_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word BoundInstsA_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 3))));
              MR_Word BoundInsts_44;
              MR_Word Var_68;

              switch (Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word BoundInstsB_45;
                    MR_Word Var_63;

                    {
                      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (ConsIdB_14));
                      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ArgInstsB_15));
                    }
                    {
                      BoundInstsB_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), BoundInstsB_45, 0) = ((MR_Box) (Var_63));
                      MR_hl_field(MR_mktag(1), BoundInstsB_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0((MR_Integer) 1, BoundInstsA_43, BoundInstsB_45, Real_17, &BoundInsts_44, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  }
                  break;
                case (MR_Integer) 0:
                  succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(BoundInstsA_43, ConsIdB_14, ArgInstsB_15, ArgLives_16, Real_17, &BoundInsts_44, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  break;
              }
              if (succeeded)
              {
                Var_68 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqA_41));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_68));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_44));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgInsts0_47;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word ArgInsts_82;
              MR_Word UniqA_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Live_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(Live_12, UniqA_83, Real_17, ArgInstsB_15, &ArgInsts0_47, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  break;
                case (MR_Integer) 0:
                  succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(Live_12, UniqA_83, Real_17, ArgLives_16, ArgInstsB_15, &ArgInsts0_47, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
                  break;
              }
              if (succeeded)
              {
                check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(*STATE_VARIABLE_ModuleInfo_24, Type_18, ConsIdB_14, ArgInsts0_47, &ArgInsts_82);
                Var_59 = (MR_Word) ((MR_Unsigned) 0U);
                Var_62 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ConsIdB_14));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ArgInsts_82));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqA_83));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_59));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_60));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 1))));
              MR_Word SubInstA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_22, (MR_Integer) 2))));
              MR_Word Inst0_50;

              succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(Live_12, SubInstA_49, ConsIdB_14, ArgInstsB_15, ArgLives_16, Real_17, Type_18, &Inst0_50, Detism_20, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_24, Inst0_50, SubInstA_49);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_19 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_48));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_50));
                  }
                else
                  *Inst_19 = Inst0_50;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.maybe_make_shared_inst_list\'/5", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Live_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Lives_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_27;
      MR_Word Insts_28;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;

      switch (Live_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Inst_27 = Var_35;
            STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_0_4;
          }
          break;
        case (MR_Integer) 0:
          check_hlds__inst_util__make_shared_inst_4_p_0(Var_35, &Inst_27, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_32_32);
          break;
      }
      check_hlds__inst_util__maybe_make_shared_inst_list_5_p_0(Var_34, Lives_26, &Insts_28, STATE_VARIABLE_ModuleInfo_32_32, STATE_VARIABLE_ModuleInfo_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_28));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word HeadVar__3_3,
  MR_Word Uniq_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgLive_20;
      MR_Word ArgLives_21;
      MR_Word Inst_24;
      MR_Word Insts_25;
      MR_Word BothLive_28;
      MR_Word Detism1_29;
      MR_Word Detism2_30;
      MR_Word STATE_VARIABLE_ModuleInfo_33_33;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgLive_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        ArgLives_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (Live_2 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ArgLive_20 == (MR_Integer) 0);
        if (succeeded)
          BothLive_28 = (MR_Integer) 0;
        else
          BothLive_28 = (MR_Integer) 1;
        succeeded = check_hlds__inst_util__make_any_inst_8_p_0(Inst0_17, BothLive_28, Uniq_4, Real_5, &Inst_24, &Detism1_29, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_33_33);
        if (succeeded)
        {
          succeeded = check_hlds__inst_util__make_any_inst_list_lives_9_p_0(Insts0_18, Live_2, ArgLives_21, Uniq_4, Real_5, &Insts_25, &Detism2_30, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_25));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_29, Detism2_30, HeadVar__7_7);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ArgLive_20;
      MR_Word ArgLives_21;
      MR_Word Inst0_22;
      MR_Word Insts0_23;
      MR_Word Inst_24;
      MR_Word Insts_25;
      MR_Word BothLive_28;
      MR_Word Detism1_29;
      MR_Word Detism2_30;
      MR_Word STATE_VARIABLE_ModuleInfo_33_33;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgLive_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        ArgLives_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        Inst0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        Insts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        succeeded = (Live_1 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (ArgLive_20 == (MR_Integer) 0);
        if (succeeded)
          BothLive_28 = (MR_Integer) 0;
        else
          BothLive_28 = (MR_Integer) 1;
        succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(BothLive_28, Uniq_2, Real_3, Inst0_22, &Inst_24, &Detism1_29, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_33_33);
        if (succeeded)
        {
          succeeded = check_hlds__inst_util__make_ground_inst_list_lives_9_p_0(Live_1, Uniq_2, Real_3, ArgLives_21, Insts0_23, &Insts_25, &Detism2_30, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_25));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_29, Detism2_30, HeadVar__7_7);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ArgInsts_0_21,
  MR_Word * STATE_VARIABLE_ArgInsts_22)
{
  {
    MR_bool succeeded;
    MR_Word ConsArgs_17;
    MR_Word TypeCtor_10;
    MR_Word ConsDefn_11;
    MR_Word MaybeExistConstraints_16;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_7, &TypeCtor_10);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_6, TypeCtor_10, ConsId_8, &ConsDefn_11);
      if (succeeded)
      {
        MaybeExistConstraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 4))));
        ConsArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_11, (MR_Integer) 5))));
        succeeded = (ConsArgs_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeExistConstraints_16 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(ConsArgs_17, STATE_VARIABLE_ArgInsts_0_21, STATE_VARIABLE_ArgInsts_22);
    else
      *STATE_VARIABLE_ArgInsts_22 = STATE_VARIABLE_ArgInsts_0_21;
  }
}

static void MR_CALL 
check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.propagate_ctor_subtypes_into_arg_insts_2\'/3", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Inst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Insts0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Inst_18;
        MR_Word Insts_19;
        MR_Word Inst1_28;
        MR_Word TypeHOInstInfo_22;
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));

        succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          TypeHOInstInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 3))));
          succeeded = (TypeHOInstInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if (((MR_tag((MR_Word) Inst0_16)) == (MR_Integer) 2))
            {
              MR_Word Uniq_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_16, (MR_Integer) 0))) & (MR_Integer) 7);

              {
                Inst1_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Inst1_28, 0) = (MR_Box) ((MR_Unsigned) (Uniq_31));
                MR_hl_field(MR_mktag(2), Inst1_28, 1) = ((MR_Box) (TypeHOInstInfo_22));
              }
              succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) Inst0_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Word Uniq_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_16, (MR_Integer) 1))) & (MR_Integer) 7);

              {
                Inst1_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst1_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Inst1_28, 1) = (MR_Box) ((MR_Unsigned) (Uniq_26));
                MR_hl_field(MR_mktag(3), Inst1_28, 2) = ((MR_Box) (TypeHOInstInfo_22));
              }
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
          }
        }
        if (succeeded)
          Inst_18 = Inst1_28;
        else
          Inst_18 = Inst0_16;
        check_hlds__inst_util__propagate_ctor_subtypes_into_arg_insts_2_3_p_0(Var_34, Insts0_17, &Insts_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_19));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word ArgInsts_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsArgs_16;
    MR_Word TypeCtor_9;
    MR_Word ConsDefn_10;
    MR_Word MaybeExistConstraints_15;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_9);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_5, TypeCtor_9, ConsId_7, &ConsDefn_10);
      if (succeeded)
      {
        MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 4))));
        ConsArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 5))));
        succeeded = (ConsArgs_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      succeeded = check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(ModuleInfo_5, ConsArgs_16, ArgInsts_8);
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__arg_insts_match_ctor_subtypes_2_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.arg_insts_match_ctor_subtypes_2\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word HOInstInfo_21;
        MR_Word TypePredInst_28;
        MR_Word TypeHOInstInfo_25;
        MR_Word Var_30;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        if (((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 2))
        {
          HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_18, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        if (((((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
        {
          HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_18, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            TypeHOInstInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 3))));
            succeeded = (TypeHOInstInfo_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TypePredInst_28 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_25), (MR_Integer) 1));
          }
        }
        if (succeeded)
        {
          MR_Word PredInst_29;

          succeeded = (HOInstInfo_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PredInst_29 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(ModuleInfo_1, PredInst_29, TypePredInst_28);
          }
        }
        else
          succeeded = MR_TRUE;
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_33;
          next_value_of_HeadVar__3_3 = Insts_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_lives_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsIdB_2,
  MR_Word ArgsB_3,
  MR_Word LivesB_4,
  MR_Word Real_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 7;
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInstA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInstsA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsIdA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstA_17, (MR_Integer) 0))));
      MR_Word ArgsA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstA_17, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_26, ConsIdB_2);
      if (succeeded)
      {
        MR_Word Args_28;
        MR_Word Var_32;
        MR_Word Var_33;

        succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(ArgsA_27, ArgsB_3, LivesB_4, Real_5, &Args_28, HeadVar__7_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
        if (succeeded)
        {
          Var_33 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (ConsIdA_26));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Args_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundInstsA_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__6_6 = (MR_Integer) 0;
          *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word InstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstsA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstB_15;
      MR_Word InstsB_16;
      MR_Word Live_17;
      MR_Word Lives_18;
      MR_Word Inst_20;
      MR_Word Insts_21;
      MR_Word Detism1_24;
      MR_Word Detism2_25;
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        InstsB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Live_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          Lives_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(Live_17, InstA_13, InstB_15, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
          if (succeeded)
          {
            succeeded = check_hlds__inst_util__abstractly_unify_inst_list_lives_8_p_0(InstsA_14, InstsB_16, Lives_18, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
              }
              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstA_10)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (Live_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Inst_13 = InstB_11;
                  *Detism_14 = (MR_Integer) 0;
                  *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) InstB_11)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_11)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        {
                          *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                          *Detism_14 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word HOInstInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 1))));
                      MR_Word UniqB_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Uniq_127;

                      succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_126, &Uniq_127);
                      if (succeeded)
                      {
                        *Detism_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_127));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_22));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word UniqB_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word InstResultsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                          MR_Word BoundInstsB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                          MR_Word Uniq_19;
                          MR_Word BoundInsts_20;

                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_16, &Uniq_19);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, InstResultsB_17, BoundInstsB_18);
                            if (succeeded)
                            {
                              switch (UniqB_16) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 2:
                                  succeeded = MR_TRUE;
                                  break;
                                case (MR_Integer) 1:
                                  succeeded = MR_TRUE;
                                  break;
                              }
                              if (succeeded)
                                check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInstsB_18, &BoundInsts_20, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                              else
                              {
                                BoundInsts_20 = BoundInstsB_18;
                                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                              }
                              *Detism_14 = (MR_Integer) 0;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                *Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsB_17));
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_20));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word HOInstInfoB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                          MR_Word UniqB_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Uniq_125;

                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0((MR_Integer) 0, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqB_124, &Uniq_125);
                          if (succeeded)
                          {
                            *Detism_14 = (MR_Integer) 0;
                            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_125));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoB_21));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word InstVarsB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                          MR_Word SubInstB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_23, SubInstB_24, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
              *Detism_14 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqA_310 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_315 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_10, (MR_Integer) 1))));

          if ((HOInstInfoA_315 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = check_hlds__inst_util__make_any_inst_8_p_0(InstB_11, Live_9, UniqA_310, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
          else
            switch (MR_tag((MR_Word) InstB_11)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstB_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Uniq_236;

                      switch (Live_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            Uniq_236 = UniqA_310;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 0:
                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_310, &Uniq_236);
                          break;
                      }
                      if (succeeded)
                      {
                        *Detism_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_236));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfoA_315));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                      *Detism_14 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_68;
                  MR_Word UniqB_249;
                  MR_Word Uniq_250;

                  switch (Live_9) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = (Real_12 == (MR_Integer) 1);
                      break;
                  }
                  if (succeeded)
                  {
                    UniqB_249 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                    Var_68 = (MR_Integer) 1;
                    succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, Var_68, UniqA_310, UniqB_249, &Uniq_250);
                    if (succeeded)
                    {
                      *Detism_14 = (MR_Integer) 1;
                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_13 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_250));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfoA_315));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_72;
                      MR_Word Var_73;
                      MR_Word UniqB_238 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word BoundInstsB_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                      MR_Word Uniq_240;
                      MR_Word BoundInsts_241;
                      MR_Word Detism1_243;

                      succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_310, UniqB_238, &Uniq_240);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(BoundInstsB_239, Live_9, UniqA_310, Real_12, &BoundInsts_241, &Detism1_243, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                        if (succeeded)
                        {
                          Var_72 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_73 = (MR_Integer) 1;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_240));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_72));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_241));
                          }
                          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_243, Var_73, Detism_14);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_69;
                      MR_Word UniqB_245;
                      MR_Word Uniq_246;

                      succeeded = (Real_12 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        UniqB_245 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        Var_69 = (MR_Integer) 1;
                        succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, Var_69, UniqA_310, UniqB_245, &Uniq_246);
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 1;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_246));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_315));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word InstVarsB_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                      MR_Word SubInstB_253 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                      succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_252, SubInstB_253, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                    }
                    break;
                }
                break;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word UniqA_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word InstResultsA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
              MR_Word BoundInstsA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstB_11)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Uniq_128;
                        MR_Word BoundInsts_129;

                        switch (Live_9) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, UniqA_30, (MR_Integer) 1, &Uniq_128);
                              if (succeeded)
                              {
                                BoundInsts_129 = BoundInstsA_32;
                                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                                succeeded = MR_TRUE;
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_30, &Uniq_128);
                              if (succeeded)
                              {
                                succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_64, InstResultsA_31, BoundInstsA_32);
                                if (succeeded)
                                {
                                  check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInstsA_32, &BoundInsts_129, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            break;
                        }
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 0;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_128));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsA_31));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_129));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                        *Detism_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_88;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word UniqB_143 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word Uniq_144;
                    MR_Word BoundInsts_145;
                    MR_Word Detism1_146;

                    check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                    succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_30, UniqB_143, &Uniq_144);
                    if (succeeded)
                    {
                      Var_88 = (MR_Integer) 0;
                      succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(BoundInstsA_32, Var_88, UniqB_143, Real_12, &BoundInsts_145, &Detism1_146, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      if (succeeded)
                      {
                        Var_90 = (MR_Word) ((MR_Unsigned) 0U);
                        Var_91 = (MR_Integer) 1;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Inst_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_144));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_90));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_145));
                        }
                        parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_146, Var_91, Detism_14);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_107;
                        MR_Word UniqB_130 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word BoundInstsB_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                        MR_Word Uniq_132;
                        MR_Word BoundInsts_133;

                        succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(Live_9, BoundInstsA_32, BoundInstsB_131, Real_12, &BoundInsts_133, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, *Detism_14, UniqA_30, UniqB_130, &Uniq_132);
                          if (succeeded)
                          {
                            Var_107 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_132));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_107));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_133));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Detism1_35;
                        MR_Word Var_105;
                        MR_Word UniqB_140 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Uniq_141;

                        succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_30, UniqB_140, &Uniq_141);
                        if (succeeded)
                        {
                          switch (MR_tag((MR_Word) InstResultsA_31)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(InstResultsA_31)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word BoundInsts_137;
                                    MR_Word InstResults_138;

                                    succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(Live_9, UniqB_140, Real_12, BoundInstsA_32, &BoundInsts_137, &Detism1_35, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                    if (succeeded)
                                    {
                                      InstResults_138 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_util_scalar_common_2[0]));
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                        *Inst_13 = base;
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_138));
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_137));
                                      }
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    *Inst_13 = InstA_10;
                                    Detism1_35 = (MR_Integer) 1;
                                    *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word GroundnessResultA_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
                                MR_Word ContainsTypes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 3))));
                                MR_Word MaybeTypeCtorPropagated_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResultsA_31, (MR_Integer) 4))));

                                switch (GroundnessResultA_36) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 2:
                                  case (MR_Integer) 0:
                                    {
                                      MR_Word InstResults_42;
                                      MR_Word Var_101;
                                      MR_Word Var_102;
                                      MR_Word Var_103;
                                      MR_Word Var_104;
                                      MR_Word BoundInsts_134;

                                      succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(Live_9, UniqB_140, Real_12, BoundInstsA_32, &BoundInsts_134, &Detism1_35, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                                      if (succeeded)
                                      {
                                        Var_101 = (MR_Integer) 1;
                                        Var_102 = (MR_Integer) 0;
                                        Var_103 = (MR_Word) ((MR_Unsigned) 0U);
                                        Var_104 = (MR_Word) ((MR_Unsigned) 0U);
                                        {
                                          InstResults_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), InstResults_42, 0) = (MR_Box) (((((MR_Unsigned) (Var_101) << 2)) | (MR_Unsigned) (Var_102)));
                                          MR_hl_field(MR_mktag(1), InstResults_42, 1) = ((MR_Box) (Var_103));
                                          MR_hl_field(MR_mktag(1), InstResults_42, 2) = ((MR_Box) (Var_104));
                                          MR_hl_field(MR_mktag(1), InstResults_42, 3) = ((MR_Box) (ContainsTypes_40));
                                          MR_hl_field(MR_mktag(1), InstResults_42, 4) = ((MR_Box) (MaybeTypeCtorPropagated_41));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                          *Inst_13 = base;
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_42));
                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_134));
                                        }
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      *Inst_13 = InstA_10;
                                      Detism1_35 = (MR_Integer) 1;
                                      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                                      succeeded = MR_TRUE;
                                    }
                                    break;
                                }
                              }
                              break;
                          }
                          if (succeeded)
                          {
                            Var_105 = (MR_Integer) 1;
                            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_35, Var_105, Detism_14);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word InstVarsB_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                        MR_Word SubInstB_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                        succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_147, SubInstB_148, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfoA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
              MR_Word UniqA_231 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((HOInstInfoA_49 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(Live_9, UniqA_231, Real_12, InstB_11, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
              else
                switch (MR_tag((MR_Word) InstB_11)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Uniq_167;

                          switch (Live_9) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                Uniq_167 = UniqA_231;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 0:
                              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 0, (MR_Integer) 1, UniqA_231, &Uniq_167);
                              break;
                          }
                          if (succeeded)
                          {
                            *Detism_14 = (MR_Integer) 0;
                            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_167));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
                          *Detism_14 = (MR_Integer) 0;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_78;
                      MR_Word UniqB_176 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_11, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Uniq_177;

                      switch (Live_9) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0();
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 0:
                          succeeded = (Real_12 == (MR_Integer) 1);
                          break;
                      }
                      if (succeeded)
                      {
                        Var_78 = (MR_Integer) 1;
                        succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, Var_78, UniqA_231, UniqB_176, &Uniq_177);
                        if (succeeded)
                        {
                          *Detism_14 = (MR_Integer) 1;
                          *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_13 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_177));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_82;
                          MR_Word UniqB_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word InstResultsB_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
                          MR_Word BoundInstsB_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 3))));
                          MR_Word Uniq_171;
                          MR_Word BoundInsts_172;
                          MR_Word Detism1_173;

                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_231, UniqB_168, &Uniq_171);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(Live_9, UniqA_231, Real_12, BoundInstsB_170, &BoundInsts_172, &Detism1_173, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                            if (succeeded)
                            {
                              Var_82 = (MR_Integer) 1;
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                *Inst_13 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_171));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResultsB_169));
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_172));
                              }
                              parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_173, Var_82, Detism_14);
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word UniqB_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Uniq_175;

                          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_12, (MR_Integer) 1, UniqA_231, UniqB_174, &Uniq_175);
                          if (succeeded)
                          {
                            *Detism_14 = (MR_Integer) 1;
                            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *Inst_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_175));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfoA_49));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word InstVarsB_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
                          MR_Word SubInstB_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsB_178, SubInstB_179, InstA_10, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
                        }
                        break;
                    }
                    break;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVarsA_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1))));
              MR_Word SubInstA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));

              succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVarsA_59, SubInstA_60, InstB_11, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_8_p_0(
  MR_Word Inst0_9,
  MR_Word Live_10,
  MR_Word Uniq1_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_70;
              MR_Word Uniq_72;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 0, (MR_Integer) 1, Uniq1_11, &Uniq_72);
              if (succeeded)
              {
                Var_70 = (MR_Word) ((MR_Unsigned) 0U);
                *Detism_14 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_72));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_70));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
              *Detism_14 = (MR_Integer) 6;
              *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word T_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst0_9, (MR_Integer) 0))));
          MR_Word Any_20;
          MR_Word TypedAny_21;
          MR_Word Var_66;

          {
            Any_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Any_20, 0) = (MR_Box) ((MR_Unsigned) (Uniq1_11));
            MR_hl_field(MR_mktag(2), Any_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = (MR_Box) (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_66, 2) = ((MR_Box) (Any_20));
          }
          {
            TypedAny_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypedAny_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), TypedAny_21, 1) = ((MR_Box) (T_19));
            MR_hl_field(MR_mktag(3), TypedAny_21, 2) = ((MR_Box) (Var_66));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypedAny_21));
          }
          *Detism_14 = (MR_Integer) 0;
          *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq0_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));
          MR_Word Uniq_18;

          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_16, Uniq1_11, &Uniq_18);
          if (succeeded)
          {
            *Detism_14 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_13 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_18));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_17));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 3))));
              MR_Word BoundInsts_24;
              MR_Word Detism1_25;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Uniq0_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_74;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_73, Uniq1_11, &Uniq_74);
              if (succeeded)
              {
                succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(BoundInsts0_23, Live_10, Uniq1_11, Real_12, &BoundInsts_24, &Detism1_25, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48);
                if (succeeded)
                {
                  Var_63 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_64 = (MR_Integer) 1;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_74));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_63));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_24));
                  }
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_25, Var_64, Detism_14);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word Uniq0_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_76;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_10, Real_12, (MR_Integer) 1, Uniq0_75, Uniq1_11, &Uniq_76);
              if (succeeded)
              {
                *Detism_14 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_76));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_26));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_any_inst\'/8", (MR_String) "free inst var");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word SubInst0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_55, 0) = (MR_Box) ((MR_Unsigned) (Uniq1_11));
                MR_hl_field(MR_mktag(2), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_10, InstVars_28, SubInst0_29, Var_55, Real_12, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word InstTable0_33;
              MR_Word AnyInstTable0_34;
              MR_Word AnyInstInfo_35;
              MR_Word AnyInstName_36;
              MR_Word MaybeMaybeInst_37;
              MR_Word AnyInstTable1_38;
              MR_Word AnyInst_40;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &InstTable0_33);
              hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable0_33, &AnyInstTable0_34);
              {
                AnyInstInfo_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), AnyInstInfo_35, 0) = ((MR_Box) (InstName_32));
                MR_hl_field(MR_mktag(0), AnyInstInfo_35, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_11) << 2)) | (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)))));
              }
              {
                AnyInstName_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AnyInstName_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), AnyInstName_36, 1) = ((MR_Box) (InstName_32));
                MR_hl_field(MR_mktag(3), AnyInstName_36, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_11) << 2)) | (((((MR_Unsigned) (Live_10) << 1)) | (MR_Unsigned) (Real_12)))));
              }
              hlds__hlds_inst_mode__search_insert_any_inst_4_p_0(AnyInstInfo_35, &MaybeMaybeInst_37, AnyInstTable0_34, &AnyInstTable1_38);
              if ((MaybeMaybeInst_37 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstTable1_41;
                MR_Word SubInst1_42;
                MR_Word InstTable2_43;
                MR_Word AnyInstTable2_44;
                MR_Word AnyInstTable_45;
                MR_Word InstTable_46;
                MR_Word STATE_VARIABLE_ModuleInfo_49_49;
                MR_Word STATE_VARIABLE_ModuleInfo_50_50;
                MR_Word Var_51;
                MR_Word SubInst0_77;

                hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable1_38, InstTable0_33, &InstTable1_41);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_41, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_49_49);
                check_hlds__mode_util__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_49_49, InstName_32, &SubInst0_77);
                check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_49_49, SubInst0_77, &SubInst1_42);
                succeeded = check_hlds__inst_util__make_any_inst_8_p_0(SubInst1_42, Live_10, Uniq1_11, Real_12, &AnyInst_40, Detism_14, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_50_50);
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_50_50, &InstTable2_43);
                  hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable2_43, &AnyInstTable2_44);
                  {
                    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (AnyInst_40));
                    MR_hl_field(MR_mktag(1), Var_51, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
                  }
                  hlds__hlds_inst_mode__det_update_any_inst_4_p_0(AnyInstInfo_35, Var_51, AnyInstTable2_44, &AnyInstTable_45);
                  hlds__hlds_inst_mode__inst_table_set_any_insts_3_p_0(AnyInstTable_45, InstTable2_43, &InstTable_46);
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_46, STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_ModuleInfo_48);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word MaybeInst_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_37, (MR_Integer) 0))));

                if ((MaybeInst_39 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    AnyInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), AnyInst_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), AnyInst_40, 1) = ((MR_Box) (AnyInstName_36));
                  }
                  *Detism_14 = (MR_Integer) 0;
                }
                else
                {
                  AnyInst_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_39, (MR_Integer) 0))));
                  *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_39, (MR_Integer) 1))) & (MR_Integer) 7);
                }
                *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_48, AnyInstName_36, AnyInst_40);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AnyInstName_36));
                  }
                else
                  *Inst_13 = AnyInst_40;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *Inst_13 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__inst_util_scalar_common_1[2]));
              *Detism_14 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_8_p_0(
  MR_Word Live_9,
  MR_Word Uniq1_10,
  MR_Word Real_11,
  MR_Word Inst0_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_66;
              MR_Word Uniq_68;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 0, (MR_Integer) 1, Uniq1_10, &Uniq_68);
              if (succeeded)
              {
                Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                *Detism_14 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_68));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_66));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
              *Detism_14 = (MR_Integer) 6;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word T_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst0_12, (MR_Integer) 0))));
          MR_Word Var_63;
          MR_Word Uniq_69;

          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 0, (MR_Integer) 1, Uniq1_10, &Uniq_69);
          if (succeeded)
          {
            *Detism_14 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_63, 1) = (MR_Box) ((MR_Unsigned) (Uniq_69));
              MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (T_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_63));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq0_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_12, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_12, (MR_Integer) 1))));
          MR_Word Uniq_18;

          succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_16, Uniq1_10, &Uniq_18);
          if (succeeded)
          {
            *Detism_14 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_17));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
              MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 3))));
              MR_Word BoundInsts_22;
              MR_Word Detism1_23;
              MR_Word Var_60;
              MR_Word Uniq0_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_71;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_70, Uniq1_10, &Uniq_71);
              if (succeeded)
              {
                succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(Live_9, Uniq1_10, Real_11, BoundInsts0_21, &BoundInsts_22, &Detism1_23, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
                if (succeeded)
                {
                  Var_60 = (MR_Integer) 1;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_71));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_20));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_22));
                  }
                  parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_23, Var_60, Detism_14);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq0_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
              MR_Word Uniq_74;

              succeeded = check_hlds__inst_util__unify_uniq_6_p_0(Live_9, Real_11, (MR_Integer) 1, Uniq0_72, Uniq1_10, &Uniq_74);
              if (succeeded)
              {
                *Detism_14 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_13 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_74));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_73));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_ground_inst\'/8", (MR_String) "free inst var");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))));
              MR_Word SubInst0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 2))));
              MR_Word Var_52;

              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_52, 1) = (MR_Box) ((MR_Unsigned) (Uniq1_10));
                MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(Live_9, InstVars_25, SubInst0_26, Var_52, Real_11, Inst_13, Detism_14, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_12, (MR_Integer) 1))));
              MR_Word InstTable0_30;
              MR_Word GroundInstTable0_31;
              MR_Word GroundInstInfo_32;
              MR_Word GroundInstName_33;
              MR_Word MaybeMaybeInst_34;
              MR_Word GroundInstTable1_35;
              MR_Word GroundInst_37;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &InstTable0_30);
              hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable0_30, &GroundInstTable0_31);
              {
                GroundInstInfo_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundInstInfo_32, 0) = ((MR_Box) (InstName_29));
                MR_hl_field(MR_mktag(0), GroundInstInfo_32, 1) = (MR_Box) (((((MR_Unsigned) (Uniq1_10) << 2)) | (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_11)))));
              }
              {
                GroundInstName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GroundInstName_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GroundInstName_33, 1) = ((MR_Box) (InstName_29));
                MR_hl_field(MR_mktag(3), GroundInstName_33, 2) = (MR_Box) (((((MR_Unsigned) (Uniq1_10) << 2)) | (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_11)))));
              }
              hlds__hlds_inst_mode__search_insert_ground_inst_4_p_0(GroundInstInfo_32, &MaybeMaybeInst_34, GroundInstTable0_31, &GroundInstTable1_35);
              if ((MaybeMaybeInst_34 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstTable1_38;
                MR_Word SubInst1_39;
                MR_Word InstTable2_40;
                MR_Word GroundInstTable2_41;
                MR_Word GroundInstTable_42;
                MR_Word InstTable_43;
                MR_Word STATE_VARIABLE_ModuleInfo_46_46;
                MR_Word STATE_VARIABLE_ModuleInfo_47_47;
                MR_Word Var_48;
                MR_Word SubInst0_75;

                hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable1_35, InstTable0_30, &InstTable1_38);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_38, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_46_46);
                check_hlds__mode_util__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_46_46, InstName_29, &SubInst0_75);
                check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_46_46, SubInst0_75, &SubInst1_39);
                succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(Live_9, Uniq1_10, Real_11, SubInst1_39, &GroundInst_37, Detism_14, STATE_VARIABLE_ModuleInfo_46_46, &STATE_VARIABLE_ModuleInfo_47_47);
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_47_47, &InstTable2_40);
                  hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable2_40, &GroundInstTable2_41);
                  {
                    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (GroundInst_37));
                    MR_hl_field(MR_mktag(1), Var_48, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
                  }
                  hlds__hlds_inst_mode__det_update_ground_inst_4_p_0(GroundInstInfo_32, Var_48, GroundInstTable2_41, &GroundInstTable_42);
                  hlds__hlds_inst_mode__inst_table_set_ground_insts_3_p_0(GroundInstTable_42, InstTable2_40, &InstTable_43);
                  hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_43, STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_ModuleInfo_45);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word MaybeInst_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_34, (MR_Integer) 0))));

                if ((MaybeInst_36 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    GroundInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GroundInst_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), GroundInst_37, 1) = ((MR_Box) (GroundInstName_33));
                  }
                  *Detism_14 = (MR_Integer) 0;
                }
                else
                {
                  GroundInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 0))));
                  *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_36, (MR_Integer) 1))) & (MR_Integer) 7);
                }
                *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_45, GroundInstName_33, GroundInst_37);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_13 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GroundInstName_33));
                  }
                else
                  *Inst_13 = GroundInst_37;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *Inst_13 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__inst_util_scalar_common_3[0]));
              *Detism_14 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Inst_20;
      MR_Word Insts_21;
      MR_Word Detism1_24;
      MR_Word Detism2_25;
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;

      succeeded = check_hlds__inst_util__make_any_inst_8_p_0(Inst0_15, Live_2, Uniq_3, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
      if (succeeded)
      {
        succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(Insts0_16, Live_2, Uniq_3, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_any_bound_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Live_2,
  MR_Word Uniq_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Bound0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Bounds0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Bound_20;
      MR_Word Bounds_21;
      MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_15, (MR_Integer) 0))));
      MR_Word ArgInsts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_15, (MR_Integer) 1))));
      MR_Word ArgInsts_26;
      MR_Word Detism1_27;
      MR_Word Detism2_28;
      MR_Word STATE_VARIABLE_ModuleInfo_31_31;

      succeeded = check_hlds__inst_util__make_any_inst_list_8_p_0(ArgInsts0_25, Live_2, Uniq_3, Real_4, &ArgInsts_26, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_31_31);
      if (succeeded)
      {
        {
          Bound_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Bound_20, 0) = ((MR_Box) (ConsId_24));
          MR_hl_field(MR_mktag(0), Bound_20, 1) = ((MR_Box) (ArgInsts_26));
        }
        succeeded = check_hlds__inst_util__make_any_bound_inst_list_8_p_0(Bounds0_16, Live_2, Uniq_3, Real_4, &Bounds_21, &Detism2_28, STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_21));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word BoundInsts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word BoundInst_20;
      MR_Word BoundInsts_21;
      MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 0))));
      MR_Word ArgInsts0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_18, (MR_Integer) 1))));
      MR_Word ArgInsts_26;
      MR_Word Detism1_27;
      MR_Word Detism2_28;
      MR_Word STATE_VARIABLE_ModuleInfo_31_31;

      succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(Live_1, Uniq_2, Real_3, ArgInsts0_25, &ArgInsts_26, &Detism1_27, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_31_31);
      if (succeeded)
      {
        {
          BoundInst_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BoundInst_20, 0) = ((MR_Box) (ConsId_24));
          MR_hl_field(MR_mktag(0), BoundInst_20, 1) = ((MR_Box) (ArgInsts_26));
        }
        succeeded = check_hlds__inst_util__make_ground_bound_inst_list_8_p_0(Live_1, Uniq_2, Real_3, BoundInsts0_19, &BoundInsts_21, &Detism2_28, STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_21));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_27, Detism2_28, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__make_ground_inst_list_8_p_0(
  MR_Word Live_1,
  MR_Word Uniq_2,
  MR_Word Real_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Insts0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Inst_20;
      MR_Word Insts_21;
      MR_Word Detism1_24;
      MR_Word Detism2_25;
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;

      succeeded = check_hlds__inst_util__make_ground_inst_8_p_0(Live_1, Uniq_2, Real_3, Inst0_18, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
      if (succeeded)
      {
        succeeded = check_hlds__inst_util__make_ground_inst_list_8_p_0(Live_1, Uniq_2, Real_3, Insts0_19, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
          }
          parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_constrained_inst_vars_9_p_0(
  MR_Word Live_10,
  MR_Word InstVarsA_11,
  MR_Word SubInstA_12,
  MR_Word InstB_13,
  MR_Word Real_14,
  MR_Word * Inst_15,
  MR_Word * Detism_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  {
    MR_bool succeeded;
    MR_Word Inst0_18;

    succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(Live_10, SubInstA_12, InstB_13, Real_14, &Inst0_18, Detism_16, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
    if (succeeded)
    {
      succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_22, Inst0_18, SubInstA_12);
      succeeded = !(succeeded);
      if (succeeded)
        *Inst_15 = Inst0_18;
      else
      {
        MR_Word InstVars0_19;
        MR_Word SubInst0_20;

        succeeded = ((((MR_tag((MR_Word) Inst0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          InstVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 1))));
          SubInst0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_18, (MR_Integer) 2))));
          {
            MR_Word Var_24;

            Var_24 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__inst_util_scalar_common_1[1]), InstVars0_19, InstVarsA_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_15 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst0_20));
            }
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_15 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVarsA_11));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Inst0_18));
          }
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(
  MR_Word Live_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Integer) 6;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      }
      else
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Integer) 7;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Integer) 7;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word BoundInstB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word BoundInstsB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ConsIdA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
        MR_Word ArgsA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 1))));
        MR_Word ConsIdB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_31, (MR_Integer) 0))));
        MR_Word ArgsB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_31, (MR_Integer) 1))));

        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_37, ConsIdB_39);
        if (succeeded)
        {
          MR_Word Args_41;
          MR_Word Detism1_42;
          MR_Word BoundInstsTail_43;
          MR_Word Detism2_44;
          MR_Word STATE_VARIABLE_ModuleInfo_48_48;
          MR_Word Var_50;
          MR_Word Var_60;
          MR_Word Var_45;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(ArgsA_38, ArgsB_40, Live_1, Real_4, &Args_41, &Detism1_42, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_48_48);
          if (succeeded)
          {
            succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, Var_62, BoundInstsB_32, Real_4, &BoundInstsTail_43, &Detism2_44, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_8);
            if (succeeded)
            {
              Var_50 = (MR_Integer) 0;
              parse_tree__prog_data__determinism_components_3_p_0(Detism1_42, &Var_45, &Var_60);
              succeeded = (Var_50 == Var_60);
              if (succeeded)
                *HeadVar__5_5 = BoundInstsTail_43;
              else
              {
                MR_Word Var_51;

                {
                  Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (ConsIdA_37));
                  MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Args_41));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_43));
                }
              }
              parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_42, Detism2_44, HeadVar__6_6);
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word Var_57;
          MR_Word Detism1_58;
          MR_Word Var_61;

          parse_tree__prog_data____Compare____cons_id_0_0(&Var_61, ConsIdA_37, ConsIdB_39);
          succeeded = ((MR_Integer) 1 == Var_61);
          if (succeeded)
            succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, Var_62, HeadVar__3_3, Real_4, HeadVar__5_5, &Detism1_58, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
          else
            succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(Live_1, HeadVar__2_2, BoundInstsB_32, Real_4, HeadVar__5_5, &Detism1_58, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
          if (succeeded)
          {
            Var_57 = (MR_Integer) 7;
            parse_tree__prog_detism__det_switch_detism_3_p_0(Detism1_58, Var_57, HeadVar__6_6);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_bound_inst_list_8_p_0(
  MR_Word Live_9,
  MR_Word BoundInstsA_10,
  MR_Word BoundInstsB_11,
  MR_Word Real_12,
  MR_Word * BoundInsts_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool succeeded = (BoundInstsA_10 == (MR_Word) ((MR_Unsigned) 0U));

    if (!(succeeded))
      succeeded = (BoundInstsB_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *BoundInsts_13 = (MR_Word) ((MR_Unsigned) 0U);
      *Detism_14 = (MR_Integer) 6;
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Detism0_16;
      MR_Word ConsIdA_17;
      MR_Word ConsIdB_19;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = check_hlds__inst_util__abstractly_unify_bound_inst_list_2_8_p_0(Live_9, BoundInstsA_10, BoundInstsB_11, Real_12, BoundInsts_13, &Detism0_16, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
      if (succeeded)
      {
        succeeded = (BoundInstsA_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_10, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_10, (MR_Integer) 1))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConsIdA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
            succeeded = (BoundInstsB_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_11, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_11, (MR_Integer) 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ConsIdB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_17, ConsIdB_19);
              }
            }
          }
        }
        if (succeeded)
          *Detism_14 = Detism0_16;
        else
        {
          MR_Word MaxSoln_22;
          MR_Word Var_21;

          parse_tree__prog_data__determinism_components_3_p_0(Detism0_16, &Var_21, &MaxSoln_22);
          parse_tree__prog_data__determinism_components_3_p_1(Detism_14, (MR_Integer) 0, MaxSoln_22);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Live_3,
  MR_Word Real_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstsA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstB_16;
      MR_Word InstsB_17;
      MR_Word Inst_20;
      MR_Word Insts_21;
      MR_Word Detism1_24;
      MR_Word Detism2_25;
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        InstsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(Live_3, InstA_14, InstB_16, Real_4, &Inst_20, &Detism1_24, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_28_28);
        if (succeeded)
        {
          succeeded = check_hlds__inst_util__abstractly_unify_inst_list_8_p_0(InstsA_15, InstsB_17, Live_3, Real_4, &Insts_21, &Detism2_25, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_8);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
            }
            parse_tree__prog_detism__det_par_conjunction_detism_3_p_0(Detism1_24, Detism2_25, HeadVar__6_6);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_util__abstractly_unify_inst_8_p_0(
  MR_Word Live_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Real_12,
  MR_Word * Inst_13,
  MR_Word * Detism_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  {
    MR_bool succeeded = (InstA_10 == (MR_Word) ((MR_Unsigned) 0U));

    if (!(succeeded))
      succeeded = (InstB_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word ExpandedInstA_45;
      MR_Word ExpandedInstB_46;
      MR_Word Inst0_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_48;

      check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, InstA_10, &ExpandedInstA_45);
      check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, InstB_11, &ExpandedInstB_46);
      succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(Live_9, ExpandedInstA_45, ExpandedInstB_46, Real_12, &Inst0_47, Detism_14, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
      if (succeeded)
      {
        Var_50 = (MR_Integer) 0;
        parse_tree__prog_data__determinism_components_3_p_0(*Detism_14, &Var_48, &Var_51);
        succeeded = (Var_50 == Var_51);
        if (succeeded)
          *Inst_13 = (MR_Word) ((MR_Unsigned) 4U);
        else
          *Inst_13 = Inst0_47;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word InstTable0_16;
      MR_Word UnifyInstTable0_17;
      MR_Word UnifyInstInfo_18;
      MR_Word UnifyInstName_19;
      MR_Word MaybeMaybeInst_20;
      MR_Word UnifyInstTable1_21;
      MR_Word Inst0_23;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &InstTable0_16);
      hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable0_16, &UnifyInstTable0_17);
      {
        UnifyInstInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 0) = (MR_Box) (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_12)));
        MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 1) = ((MR_Box) (InstA_10));
        MR_hl_field(MR_mktag(0), UnifyInstInfo_18, 2) = ((MR_Box) (InstB_11));
      }
      {
        UnifyInstName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UnifyInstName_19, 0) = (MR_Box) (((((MR_Unsigned) (Live_9) << 1)) | (MR_Unsigned) (Real_12)));
        MR_hl_field(MR_mktag(1), UnifyInstName_19, 1) = ((MR_Box) (InstA_10));
        MR_hl_field(MR_mktag(1), UnifyInstName_19, 2) = ((MR_Box) (InstB_11));
      }
      hlds__hlds_inst_mode__search_insert_unify_inst_4_p_0(UnifyInstInfo_18, &MaybeMaybeInst_20, UnifyInstTable0_17, &UnifyInstTable1_21);
      if ((MaybeMaybeInst_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word InstTable1_24;
        MR_Word InstTable2_25;
        MR_Word UnifyInstTable2_26;
        MR_Word UnifyInstTable_27;
        MR_Word InstTable_28;
        MR_Word STATE_VARIABLE_ModuleInfo_32_32;
        MR_Word STATE_VARIABLE_ModuleInfo_33_33;
        MR_Word Var_34;
        MR_Word ExpandedInstA_61;
        MR_Word ExpandedInstB_62;
        MR_Word Inst0_63;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_64;

        hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable1_21, InstTable0_16, &InstTable1_24);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_24, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_32_32);
        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, InstA_10, &ExpandedInstA_61);
        check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, InstB_11, &ExpandedInstB_62);
        succeeded = check_hlds__inst_util__abstractly_unify_inst_3_8_p_0(Live_9, ExpandedInstA_61, ExpandedInstB_62, Real_12, &Inst0_63, Detism_14, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_33_33);
        if (succeeded)
        {
          Var_66 = (MR_Integer) 0;
          parse_tree__prog_data__determinism_components_3_p_0(*Detism_14, &Var_64, &Var_67);
          succeeded = (Var_66 == Var_67);
          if (succeeded)
            Inst0_23 = (MR_Word) ((MR_Unsigned) 4U);
          else
            Inst0_23 = Inst0_63;
          hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_33_33, &InstTable2_25);
          hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable2_25, &UnifyInstTable2_26);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Inst0_23));
            MR_hl_field(MR_mktag(1), Var_34, 1) = (MR_Box) ((MR_Unsigned) (*Detism_14));
          }
          hlds__hlds_inst_mode__det_update_unify_inst_4_p_0(UnifyInstInfo_18, Var_34, UnifyInstTable2_26, &UnifyInstTable_27);
          hlds__hlds_inst_mode__inst_table_set_unify_insts_3_p_0(UnifyInstTable_27, InstTable2_25, &InstTable_28);
          hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_28, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_30);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word MaybeInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_20, (MR_Integer) 0))));

        if ((MaybeInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            Inst0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Inst0_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Inst0_23, 1) = ((MR_Box) (UnifyInstName_19));
          }
          *Detism_14 = (MR_Integer) 0;
        }
        else
        {
          Inst0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_22, (MR_Integer) 0))));
          *Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInst_22, (MR_Integer) 1))) & (MR_Integer) 7);
        }
        *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_30, UnifyInstName_19, Inst0_23);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnifyInstName_19));
          }
        else
          *Inst_13 = Inst0_23;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_119_95_117_110_105_102_121_95_98_111_117_110_100_95_97_110_121_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

static void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_shared_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(MR_mktag(0), Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_6 = Inst0_5;
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq0_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
          MR_Word Uniq_11 = ((&check_hlds__inst_util_vector_common_4[0 + Uniq0_9]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_11));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_10));
          }
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));
              MR_Word BoundInsts_14;
              MR_Word Uniq0_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_51 = ((&check_hlds__inst_util_vector_common_4[5 + Uniq0_50]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

              check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInsts0_13, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_12));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word Uniq0_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Uniq_53 = ((&check_hlds__inst_util_vector_common_4[10 + Uniq0_52]))->check_hlds__inst_util__vector_common_type_4_0__vct_4_f_0;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_53));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_15));
              }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
              MR_Word SubInst1_19;

              check_hlds__inst_util__make_shared_inst_4_p_0(SubInst0_18, &SubInst1_19, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
              succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_35, SubInst1_19, SubInst0_18);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst1_19));
                }
              else
                *Inst_6 = SubInst1_19;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
              MR_Word InstTable0_23;
              MR_Word SharedInstTable0_24;
              MR_Word MaybeMaybeInst_25;
              MR_Word SharedInstTable1_26;
              MR_Word SharedInst_28;

              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &InstTable0_23);
              hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable0_23, &SharedInstTable0_24);
              hlds__hlds_inst_mode__search_insert_shared_inst_4_p_0(InstName_22, &MaybeMaybeInst_25, SharedInstTable0_24, &SharedInstTable1_26);
              if ((MaybeMaybeInst_25 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstTable1_29;
                MR_Word InstTable2_30;
                MR_Word SharedInstTable2_31;
                MR_Word SharedInstTable_32;
                MR_Word InstTable_33;
                MR_Word STATE_VARIABLE_ModuleInfo_36_36;
                MR_Word STATE_VARIABLE_ModuleInfo_37_37;
                MR_Word Var_38;
                MR_Word SubInst0_54;
                MR_Word SubInst1_55;

                hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable1_26, InstTable0_23, &InstTable1_29);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_29, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_36_36);
                check_hlds__mode_util__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_36_36, InstName_22, &SubInst0_54);
                check_hlds__inst_util__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_36_36, SubInst0_54, &SubInst1_55);
                check_hlds__inst_util__make_shared_inst_4_p_0(SubInst1_55, &SharedInst_28, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_37_37);
                hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &InstTable2_30);
                hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable2_30, &SharedInstTable2_31);
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (SharedInst_28));
                }
                hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(InstName_22, Var_38, SharedInstTable2_31, &SharedInstTable_32);
                hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable_32, InstTable2_30, &InstTable_33);
                hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_33, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_35);
              }
              else
              {
                MR_Word MaybeInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_25, (MR_Integer) 0))));

                if ((MaybeInst_27 == (MR_Word) ((MR_Unsigned) 0U)))
                  SharedInst_28 = Inst0_5;
                else
                  SharedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_27, (MR_Integer) 0))));
                *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
              }
              succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_35, InstName_22, SharedInst_28);
              if (succeeded)
                *Inst_6 = Inst0_5;
              else
                *Inst_6 = SharedInst_28;
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
              return;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_shared_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_shared_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_util__unify_uniq_6_p_0(
  MR_Word Live_7,
  MR_Word Real_8,
  MR_Word Detism_9,
  MR_Word UniqA_10,
  MR_Word UniqB_11,
  MR_Word * Uniq_12)
{
  {
    MR_bool succeeded;

    switch (UniqA_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          switch (Live_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = (Real_8 == (MR_Integer) 1);
                if (!(succeeded))
                  succeeded = (Detism_9 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                succeeded = MR_TRUE;
              }
              break;
          }
          if (succeeded)
          {
            *Uniq_12 = (MR_Integer) 3;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 4:
        {
          switch (Live_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = (Real_8 == (MR_Integer) 1);
                if (!(succeeded))
                  succeeded = (Detism_9 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                succeeded = MR_TRUE;
              }
              break;
          }
          if (succeeded)
          {
            succeeded = (UniqB_11 == (MR_Integer) 3);
            if (succeeded)
              *Uniq_12 = (MR_Integer) 3;
            else
              *Uniq_12 = (MR_Integer) 4;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        switch (UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 3;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 4;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *Uniq_12 = (MR_Integer) 0;
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            {
              *Uniq_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *Uniq_12 = (MR_Integer) 0;
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 3;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 4;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Uniq_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (UniqB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 3;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = (Real_8 == (MR_Integer) 1);
                    if (!(succeeded))
                      succeeded = (Detism_9 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.allow_unify_with_clobbered\'/3", (MR_String) "clobbered value is is_live\?");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                *Uniq_12 = (MR_Integer) 4;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Uniq_12 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 0:
                  *Uniq_12 = (MR_Integer) 0;
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            {
              *Uniq_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (Live_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *Uniq_12 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  *Uniq_12 = (MR_Integer) 0;
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Inst_0_8,
  MR_Word * STATE_VARIABLE_Inst_9)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InstName_6;

    if (succeeded)
    {
      InstName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_8, (MR_Integer) 1))));
      {
        MR_Word STATE_VARIABLE_Inst_10_10;

        check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_6, &STATE_VARIABLE_Inst_10_10);
        check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_4, STATE_VARIABLE_Inst_10_10, STATE_VARIABLE_Inst_9);
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_Inst_12_12;

      succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        STATE_VARIABLE_Inst_12_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_8, (MR_Integer) 2))));
        check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_4, STATE_VARIABLE_Inst_12_12, STATE_VARIABLE_Inst_9);
      }
      else
        *STATE_VARIABLE_Inst_9 = STATE_VARIABLE_Inst_0_8;
    }
  }
}

void MR_CALL 
check_hlds__inst_util__inst_expand_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Inst_0_7,
  MR_Word * STATE_VARIABLE_Inst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) STATE_VARIABLE_Inst_0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InstName_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      InstName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Inst_0_7, (MR_Integer) 1))));
      {
        MR_Word STATE_VARIABLE_Inst_9_9;
        MR_Word next_value_of_STATE_VARIABLE_Inst_0_7;

        check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_6, &STATE_VARIABLE_Inst_9_9);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Inst_0_7 = STATE_VARIABLE_Inst_9_9;
        STATE_VARIABLE_Inst_0_7 = next_value_of_STATE_VARIABLE_Inst_0_7;
        continue;
      }
    }
    else
      *STATE_VARIABLE_Inst_8 = STATE_VARIABLE_Inst_0_7;
    break;
  }
}

void mercury__check_hlds__inst_util__init(void)
{
}

void mercury__check_hlds__inst_util__init_type_tables(void)
{
}

void mercury__check_hlds__inst_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_util.
