/*
** Automatically generated from `hlds_out_inst_table.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-09
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


// :- module hlds.hlds_out.hlds_out_inst_table.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_inst_table__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_inst_table.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__108__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_100,
  MR_Word HeadVar__5_175,
  MR_Integer HeadVar__6_176,
  MR_Integer * HeadVar__7_177);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__101__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_89,
  MR_Word HeadVar__5_163,
  MR_Integer HeadVar__6_164,
  MR_Integer * HeadVar__7_165);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__94__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_78,
  MR_Word HeadVar__5_151,
  MR_Integer HeadVar__6_152,
  MR_Integer * HeadVar__7_153);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__87__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_67,
  MR_Word HeadVar__5_139,
  MR_Integer HeadVar__6_140,
  MR_Integer * HeadVar__7_141);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__80__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_56,
  MR_Word HeadVar__5_127,
  MR_Integer HeadVar__6_128,
  MR_Integer * HeadVar__7_129);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_45,
  MR_Word HeadVar__5_114,
  MR_Integer HeadVar__6_115,
  MR_Integer * HeadVar__7_116);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_5_p_0(
  MR_Word Lang_6,
  MR_Word InstName_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word AnyInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word GroundInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word MergeInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word UnifyInstInfo_7,
  MR_Word Stream_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_params_6_p_0(
  MR_Word Stream_7,
  MR_Word InstVar_8,
  MR_Word InstVars_9,
  MR_Word InstVarSet_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[6][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][12];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 hlds__hlds_out__hlds_out_inst_table____vpti_pred_5__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_output_stream_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__108__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_100,
  MR_Word HeadVar__5_175,
  MR_Integer HeadVar__6_176,
  MR_Integer * HeadVar__7_177)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_100, HeadVar__5_175, HeadVar__6_176, HeadVar__7_177);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__101__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_89,
  MR_Word HeadVar__5_163,
  MR_Integer HeadVar__6_164,
  MR_Integer * HeadVar__7_165)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_89, HeadVar__5_163, HeadVar__6_164, HeadVar__7_165);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__94__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_78,
  MR_Word HeadVar__5_151,
  MR_Integer HeadVar__6_152,
  MR_Integer * HeadVar__7_153)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_78, HeadVar__5_151, HeadVar__6_152, HeadVar__7_153);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__87__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_67,
  MR_Word HeadVar__5_139,
  MR_Integer HeadVar__6_140,
  MR_Integer * HeadVar__7_141)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_67, HeadVar__5_139, HeadVar__6_140, HeadVar__7_141);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__80__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_56,
  MR_Word HeadVar__5_127,
  MR_Integer HeadVar__6_128,
  MR_Integer * HeadVar__7_129)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_56, HeadVar__5_127, HeadVar__6_128, HeadVar__7_129);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_19,
  MR_Integer * STATE_VARIABLE_N_20)
{
  {
    MR_bool succeeded;
    MR_Box Key_14 = (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0));
    MR_Word MaybeInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    *STATE_VARIABLE_N_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_19 + (MR_Unsigned) 1);
    succeeded = (*STATE_VARIABLE_N_20 <= Limit_12);
    if (succeeded)
    {
      MR_String Var_47;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_30_30;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\nEntry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_20, &Var_47);
      mercury__io__write_string_4_p_0(Stream_10, Var_47);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteKey_13, (MR_Integer) 1))));
      func_0(((MR_Box) (WriteKey_13)), ((MR_Box) (Lang_11)), Key_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
      if ((MaybeInst_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_58;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_20, &Var_58);
        mercury__io__write_string_4_p_0(Stream_10, Var_58);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_15, (MR_Integer) 0))));
        MR_String Var_69;
        MR_Word InstTerm_83;
        MR_Word VarSet_84;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_20, &Var_69);
        mercury__io__write_string_4_p_0(Stream_10, Var_69);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value:\n");
        InstTerm_83 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_11, Inst_18);
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_84);
        parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_84, (MR_Integer) 0, InstTerm_83, Stream_10);
        mercury__io__nl_3_p_0(Stream_10);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_9_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word HeadVar__4_45,
  MR_Word HeadVar__5_114,
  MR_Integer HeadVar__6_115,
  MR_Integer * HeadVar__7_116)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(Stream_7, Lang_8, Limit_9, HeadVar__4_45, HeadVar__5_114, HeadVar__6_115, HeadVar__7_116);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Integer Limit_12,
  MR_Word WriteKey_13,
  MR_Word HeadVar__5_5,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22)
{
  {
    MR_bool succeeded;
    MR_Box Key_14 = (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0));
    MR_Word MaybeInstDet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    *STATE_VARIABLE_N_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_21 + (MR_Unsigned) 1);
    succeeded = (*STATE_VARIABLE_N_22 <= Limit_12);
    if (succeeded)
    {
      MR_String Var_51;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_IO_32_32;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\nEntry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_51);
      mercury__io__write_string_4_p_0(Stream_10, Var_51);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " key\n");
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteKey_13, (MR_Integer) 1))));
      func_0(((MR_Box) (WriteKey_13)), ((MR_Box) (Lang_11)), Key_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
      if ((MaybeInstDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_62;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_62);
        mercury__io__write_string_4_p_0(Stream_10, Var_62);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value UNKNOWN\n");
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstDet_15, (MR_Integer) 0))));
        MR_Word Detism_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeInstDet_15, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_String DetismStr_20;
        MR_String Var_73;
        MR_Word InstTerm_90;
        MR_Word VarSet_91;

        DetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_19);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "Entry ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_73);
        mercury__io__write_string_4_p_0(Stream_10, Var_73);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " value (");
        mercury__io__write_string_4_p_0(Stream_10, DetismStr_20);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "):\n");
        InstTerm_90 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_11, Inst_18);
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_91);
        parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_91, (MR_Integer) 0, InstTerm_90, Stream_10);
        mercury__io__nl_3_p_0(Stream_10);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8)
{
  {
    MR_Word ModeName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor_7, (MR_Integer) 0))));
    MR_Word InstVarSet_12;
    MR_Word InstParams_13;
    MR_Word ModeBody_14;
    MR_Word Status_16;
    MR_Word EqvMode_19;
    MR_String StatusStr_20;
    MR_String Var_27;

    Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModeName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n:- mode ");
    mercury__io__write_string_4_p_0(Stream_6, Var_27);
    InstVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 0))));
    InstParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 1))));
    ModeBody_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 2))));
    Status_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_8, (MR_Integer) 4))));
    if (!((InstParams_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstParam_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_13, (MR_Integer) 0))));
      MR_Word TailInstParams_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_13, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
      hlds__hlds_out__hlds_out_inst_table__write_inst_params_6_p_0(Stream_6, HeadInstParam_17, TailInstParams_18, InstVarSet_12);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    EqvMode_19 = (MR_Word) (ModeBody_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":\n");
    parse_tree__parse_tree_out_inst__mercury_output_mode_6_p_0(Stream_6, (MR_Integer) 1, InstVarSet_12, EqvMode_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    StatusStr_20 = hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(Status_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% status ");
    mercury__io__write_string_4_p_0(Stream_6, StatusStr_20);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_5_p_0(
  MR_Word Lang_6,
  MR_Word InstName_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstNameTerm_10;
    MR_Word VarSet_11;

    InstNameTerm_10 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_7);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_11);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, (MR_Integer) 0, InstNameTerm_10, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word AnyInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 0))));
    MR_Word Uniq_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
    MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnyInstInfo_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word InstNameTerm_49;
    MR_Word VarSet_50;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "clobbered");
        break;
      case (MR_Integer) 4:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_clobbered");
        break;
      case (MR_Integer) 2:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_unique ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "shared ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unique ");
        break;
    }
    switch (Live_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    InstNameTerm_49 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstNameTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word GroundInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 0))));
    MR_Word Uniq_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
    MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GroundInstInfo_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word InstNameTerm_49;
    MR_Word VarSet_50;

    switch (Uniq_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "clobbered");
        break;
      case (MR_Integer) 4:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_clobbered");
        break;
      case (MR_Integer) 2:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mostly_unique ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "shared ");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unique ");
        break;
    }
    switch (Live_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    InstNameTerm_49 = parse_tree__parse_tree_to_term__inst_name_to_term_2_f_0(Lang_6, InstName_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstNameTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word MergeInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word InstA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo_7, (MR_Integer) 0))));
    MR_Word InstB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeInstInfo_7, (MR_Integer) 1))));
    MR_Word InstTerm_28;
    MR_Word VarSet_29;
    MR_Word InstTerm_39;
    MR_Word VarSet_40;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstA: ");
    InstTerm_28 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstA_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_29);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_29, (MR_Integer) 0, InstTerm_28, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstB: ");
    InstTerm_39 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstB_11);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_40);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_40, (MR_Integer) 0, InstTerm_39, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word UnifyInstInfo_7,
  MR_Word Stream_8)
{
  {
    MR_Word Live_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Real_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word InstA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 1))));
    MR_Word InstB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyInstInfo_7, (MR_Integer) 2))));
    MR_Word InstTerm_38;
    MR_Word VarSet_39;
    MR_Word InstTerm_49;
    MR_Word VarSet_50;

    switch (Live_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dead ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "live ");
        break;
    }
    switch (Real_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "fake unify\n");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "real unify\n");
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstA: ");
    InstTerm_38 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstA_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_39);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_39, (MR_Integer) 0, InstTerm_38, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "InstB: ");
    InstTerm_49 = parse_tree__parse_tree_to_term__inst_to_term_2_f_0(Lang_6, InstB_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
    parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_50, (MR_Integer) 0, InstTerm_49, Stream_8);
    mercury__io__nl_3_p_0(Stream_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word InstCtor_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word InstDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_6, (MR_Integer) 0))));
    MR_Word InstVarSet_11;
    MR_Word InstParams_12;
    MR_Word InstBody_13;
    MR_Word Status_16;
    MR_Word EqvInst_19;
    MR_String StatusStr_20;
    MR_String Var_27;

    Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(InstName_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n:- inst ");
    mercury__io__write_string_4_p_0(Stream_5, Var_27);
    InstVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 0))));
    InstParams_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 1))));
    InstBody_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 2))));
    Status_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 5))));
    if (!((InstParams_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstParam_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_12, (MR_Integer) 0))));
      MR_Word TailInstParams_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstParams_12, (MR_Integer) 1))));

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(");
      hlds__hlds_out__hlds_out_inst_table__write_inst_params_6_p_0(Stream_5, HeadInstParam_17, TailInstParams_18, InstVarSet_11);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
    }
    EqvInst_19 = (MR_Word) (InstBody_13);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":\n");
    parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_5, (MR_Integer) 1, InstVarSet_11, EqvInst_19);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    StatusStr_20 = hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(Status_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% status ");
    mercury__io__write_string_4_p_0(Stream_5, StatusStr_20);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_params_6_p_0(
  MR_Word Stream_7,
  MR_Word InstVar_8,
  MR_Word InstVars_9,
  MR_Word InstVarSet_10)
{
  while (MR_TRUE)
  {
    MR_String InstVarName_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_10, InstVar_8, &InstVarName_12);
    mercury__io__write_string_4_p_0(Stream_7, InstVarName_12);
    if (!((InstVars_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadInstVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVars_9, (MR_Integer) 0))));
      MR_Word TailInstVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVars_9, (MR_Integer) 1))));
      MR_Word next_value_of_InstVar_8;
      MR_Word next_value_of_InstVars_9;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_InstVar_8 = HeadInstVar_13;
      next_value_of_InstVars_9 = TailInstVars_14;
      InstVar_8 = next_value_of_InstVar_8;
      InstVars_9 = next_value_of_InstVars_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0(
  MR_Word Stream_5,
  MR_Word ModeTable_6)
{
  {
    MR_Word ModeDefns_8;
    MR_Word Var_13;
    MR_Box conv0_STATE_VARIABLE_IO_14_14;

    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_6, &ModeDefns_8);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%-------- Modes --------\n");
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Stream_5));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModeDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
    mercury__io__nl_3_p_0(Stream_5);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv16_HeadVar__7_177;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__108__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv16_HeadVar__7_177);
    *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__7_177));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv13_HeadVar__7_165;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__101__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv13_HeadVar__7_165);
    *wrapper_arg_3 = ((MR_Box) (conv13_HeadVar__7_165));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv10_HeadVar__7_153;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__94__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv10_HeadVar__7_153);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__7_153));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv7_HeadVar__7_141;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__87__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_HeadVar__7_141);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__7_141));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv4_HeadVar__7_129;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__80__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_HeadVar__7_129);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__7_129));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__7_116;

    hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__7_116);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__7_116));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer Limit_9,
  MR_Word InstTable_10)
{
  {
    MR_Word UserInstTable_12;
    MR_Word UnifyInstTable_13;
    MR_Word MergeInstTable_14;
    MR_Word GroundInstTable_15;
    MR_Word AnyInstTable_16;
    MR_Word SharedInstTable_17;
    MR_Word MostlyUniqInstTable_18;
    MR_Word UserInstPairs_19;
    MR_Word UnifyInstPairs_20;
    MR_Word MergeInstPairs_21;
    MR_Word GroundInstPairs_22;
    MR_Word AnyInstPairs_23;
    MR_Word SharedInstPairs_24;
    MR_Word MostlyUniqInstPairs_25;
    MR_Integer NumUnifyInsts_26;
    MR_Integer NumMergeInsts_27;
    MR_Integer NumGroundInsts_28;
    MR_Integer NumAnyInsts_29;
    MR_Integer NumSharedInsts_30;
    MR_Integer NumMostlyUniqInsts_31;
    MR_Word Var_38;
    MR_Word Var_42;
    MR_Word Var_53;
    MR_Word Var_64;
    MR_Word Var_75;
    MR_Word Var_86;
    MR_Word Var_97;
    MR_String Var_189;
    MR_String Var_200;
    MR_String Var_211;
    MR_String Var_222;
    MR_String Var_233;
    MR_String Var_244;
    MR_Box conv0_STATE_VARIABLE_IO_39_39;
    MR_Box conv3_NumUnifyInsts_26;
    MR_Box conv2_STATE_VARIABLE_IO_44_44;
    MR_Box conv6_NumMergeInsts_27;
    MR_Box conv5_STATE_VARIABLE_IO_55_55;
    MR_Box conv9_NumGroundInsts_28;
    MR_Box conv8_STATE_VARIABLE_IO_66_66;
    MR_Box conv12_NumAnyInsts_29;
    MR_Box conv11_STATE_VARIABLE_IO_77_77;
    MR_Box conv15_NumSharedInsts_30;
    MR_Box conv14_STATE_VARIABLE_IO_88_88;
    MR_Box conv18_NumMostlyUniqInsts_31;
    MR_Box conv17_STATE_VARIABLE_IO_99_99;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Insts --------\n");
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_10, &UserInstTable_12);
    hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_10, &UnifyInstTable_13);
    hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_10, &MergeInstTable_14);
    hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_10, &GroundInstTable_15);
    hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_10, &AnyInstTable_16);
    hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_10, &SharedInstTable_17);
    hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_10, &MostlyUniqInstTable_18);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_12, &UserInstPairs_19);
    hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInstTable_13, &UnifyInstPairs_20);
    hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInstTable_14, &MergeInstPairs_21);
    hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInstTable_15, &GroundInstPairs_22);
    hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInstTable_16, &AnyInstPairs_23);
    hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInstTable_17, &SharedInstPairs_24);
    hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInstTable_18, &MostlyUniqInstPairs_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- User defined insts --------\n");
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, UserInstPairs_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_39_39);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Unify insts --------\n");
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_42, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[6]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, UnifyInstPairs_20, ((MR_Box) ((MR_Integer) 0)), &conv3_NumUnifyInsts_26, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_44_44);
    NumUnifyInsts_26 = ((MR_Integer) (conv3_NumUnifyInsts_26));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of unify insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumUnifyInsts_26, &Var_189);
    mercury__io__write_string_4_p_0(Stream_7, Var_189);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Merge insts --------\n");
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_5));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_53, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[7]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, MergeInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &conv6_NumMergeInsts_27, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_55_55);
    NumMergeInsts_27 = ((MR_Integer) (conv6_NumMergeInsts_27));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of merge insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMergeInsts_27, &Var_200);
    mercury__io__write_string_4_p_0(Stream_7, Var_200);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Ground insts --------\n");
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_7));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[8]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, GroundInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &conv9_NumGroundInsts_28, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_66_66);
    NumGroundInsts_28 = ((MR_Integer) (conv9_NumGroundInsts_28));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of ground insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumGroundInsts_28, &Var_211);
    mercury__io__write_string_4_p_0(Stream_7, Var_211);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Any insts --------\n");
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_9));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[9]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, AnyInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv12_NumAnyInsts_29, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_77_77);
    NumAnyInsts_29 = ((MR_Integer) (conv12_NumAnyInsts_29));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of any insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumAnyInsts_29, &Var_222);
    mercury__io__write_string_4_p_0(Stream_7, Var_222);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Shared insts --------\n");
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_11));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_86, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[10]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, SharedInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv15_NumSharedInsts_30, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_88_88);
    NumSharedInsts_30 = ((MR_Integer) (conv15_NumSharedInsts_30));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of shared insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumSharedInsts_30, &Var_233);
    mercury__io__write_string_4_p_0(Stream_7, Var_233);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- MostlyUniq insts --------\n");
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0_13));
      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (Lang_8));
      MR_hl_field(MR_mktag(0), Var_97, 5) = ((MR_Box) (Limit_9));
      MR_hl_field(MR_mktag(0), Var_97, 6) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[11]));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, MostlyUniqInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv18_NumMostlyUniqInsts_31, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_99_99);
    NumMostlyUniqInsts_31 = ((MR_Integer) (conv18_NumMostlyUniqInsts_31));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\nTotal number of mostly uniq insts: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMostlyUniqInsts_31, &Var_244);
    mercury__io__write_string_4_p_0(Stream_7, Var_244);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
    mercury__io__nl_3_p_0(Stream_7);
  }
}

void mercury__hlds__hlds_out__hlds_out_inst_table__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_inst_table__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_inst_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_inst_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_inst_table.
