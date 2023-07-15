/*
** Automatically generated from `hlds_out_inst_table.m'
** by the Mercury compiler,
** version rotd-2023-07-15
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
#include "cord.mih"
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
#include "term_context.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__113__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_102,
  MR_Word HeadVar__6_181,
  MR_Integer HeadVar__7_182,
  MR_Integer * HeadVar__8_183);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__105__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_91,
  MR_Word HeadVar__6_168,
  MR_Integer HeadVar__7_169,
  MR_Integer * HeadVar__8_170);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__97__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_80,
  MR_Word HeadVar__6_155,
  MR_Integer HeadVar__7_156,
  MR_Integer * HeadVar__8_157);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__89__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_69,
  MR_Word HeadVar__6_142,
  MR_Integer HeadVar__7_143,
  MR_Integer * HeadVar__8_144);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__81__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_58,
  MR_Word HeadVar__6_129,
  MR_Integer HeadVar__7_130,
  MR_Integer * HeadVar__8_131);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_10_p_0(
  MR_Word Stream_11,
  MR_Word Lang_12,
  MR_Integer InstNumLimit_13,
  MR_Integer InstSizeLimit_14,
  MR_Word WriteKey_15,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_47,
  MR_Word HeadVar__6_115,
  MR_Integer HeadVar__7_116,
  MR_Integer * HeadVar__8_117);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_10_p_0(
  MR_Word Stream_11,
  MR_Word Lang_12,
  MR_Integer InstNumLimit_13,
  MR_Integer InstSizeLimit_14,
  MR_Word WriteKey_15,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word InstName_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word AnyInstInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word GroundInstInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word MergeInstInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word UnifyInstInfo_10);

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
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[5][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][13];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[1][8];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
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

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
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

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
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

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
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

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
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
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__113__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_102,
  MR_Word HeadVar__6_181,
  MR_Integer HeadVar__7_182,
  MR_Integer * HeadVar__8_183)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_102, HeadVar__6_181, HeadVar__7_182, HeadVar__8_183);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__105__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_91,
  MR_Word HeadVar__6_168,
  MR_Integer HeadVar__7_169,
  MR_Integer * HeadVar__8_170)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_91, HeadVar__6_168, HeadVar__7_169, HeadVar__8_170);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__97__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_80,
  MR_Word HeadVar__6_155,
  MR_Integer HeadVar__7_156,
  MR_Integer * HeadVar__8_157)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_80, HeadVar__6_155, HeadVar__7_156, HeadVar__8_157);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__89__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_69,
  MR_Word HeadVar__6_142,
  MR_Integer HeadVar__7_143,
  MR_Integer * HeadVar__8_144)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_69, HeadVar__6_142, HeadVar__7_143, HeadVar__8_144);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__81__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_58,
  MR_Word HeadVar__6_129,
  MR_Integer HeadVar__7_130,
  MR_Integer * HeadVar__8_131)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_58, HeadVar__6_129, HeadVar__7_130, HeadVar__8_131);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_10_p_0(
  MR_Word Stream_11,
  MR_Word Lang_12,
  MR_Integer InstNumLimit_13,
  MR_Integer InstSizeLimit_14,
  MR_Word WriteKey_15,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_N_0_21,
  MR_Integer * STATE_VARIABLE_N_22)
{
  MR_bool succeeded;
  MR_Box Key_16 = (MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0));
  MR_Word MaybeInst_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))));

  *STATE_VARIABLE_N_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_21 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_22 <= InstNumLimit_13);
  if (succeeded)
  {
    MR_String Var_48;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_32_32;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\nEntry ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_48);
    mercury__io__write_string_4_p_0(Stream_11, Var_48);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " key\n");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_15, (MR_Integer) 1))));
    func_0(((MR_Box) (WriteKey_15)), ((MR_Box) (Stream_11)), ((MR_Box) (Lang_12)), ((MR_Box) (InstSizeLimit_14)), Key_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
    if ((MaybeInst_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_59;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_59);
      mercury__io__write_string_4_p_0(Stream_11, Var_59);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " value UNKNOWN\n");
    }
    else
    {
      MR_Word Inst_20 = ((MR_Word) ((MR_hl_field(1, MaybeInst_17, (MR_Integer) 0))));
      MR_String Var_70;
      MR_Word InstTerm_78;
      MR_Word VarSet_79;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_22, &Var_70);
      mercury__io__write_string_4_p_0(Stream_11, Var_70);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " value:\n");
      InstTerm_78 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_12, InstSizeLimit_14, Inst_20);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_79);
      parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_79, (MR_Integer) 0, InstTerm_78, Stream_11);
      mercury__io__nl_3_p_0(Stream_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_10_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word HeadVar__5_47,
  MR_Word HeadVar__6_115,
  MR_Integer HeadVar__7_116,
  MR_Integer * HeadVar__8_117)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_10_p_0(Stream_8, Lang_9, InstNumLimit_10, InstSizeLimit_11, HeadVar__5_47, HeadVar__6_115, HeadVar__7_116, HeadVar__8_117);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_10_p_0(
  MR_Word Stream_11,
  MR_Word Lang_12,
  MR_Integer InstNumLimit_13,
  MR_Integer InstSizeLimit_14,
  MR_Word WriteKey_15,
  MR_Word HeadVar__6_6,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24)
{
  MR_bool succeeded;
  MR_Box Key_16 = (MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0));
  MR_Word MaybeInstDet_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))));

  *STATE_VARIABLE_N_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_23 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_24 <= InstNumLimit_13);
  if (succeeded)
  {
    MR_String Var_52;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_34_34;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\nEntry ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_24, &Var_52);
    mercury__io__write_string_4_p_0(Stream_11, Var_52);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " key\n");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_15, (MR_Integer) 1))));
    func_0(((MR_Box) (WriteKey_15)), ((MR_Box) (Stream_11)), ((MR_Box) (Lang_12)), ((MR_Box) (InstSizeLimit_14)), Key_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    if ((MaybeInstDet_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_63;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_24, &Var_63);
      mercury__io__write_string_4_p_0(Stream_11, Var_63);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " value UNKNOWN\n");
    }
    else
    {
      MR_Word Inst_20 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_17, (MR_Integer) 0))));
      MR_Word Detism_21 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInstDet_17, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_String DetismStr_22;
      MR_String Var_74;
      MR_Word InstTerm_85;
      MR_Word VarSet_86;

      DetismStr_22 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_21);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "Entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_24, &Var_74);
      mercury__io__write_string_4_p_0(Stream_11, Var_74);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " value (");
      mercury__io__write_string_4_p_0(Stream_11, DetismStr_22);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "):\n");
      InstTerm_85 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_12, InstSizeLimit_14, Inst_20);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_86);
      parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_86, (MR_Integer) 0, InstTerm_85, Stream_11);
      mercury__io__nl_3_p_0(Stream_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8)
{
  MR_Word ModeName_10 = ((MR_Word) ((MR_hl_field(0, ModeCtor_7, (MR_Integer) 0))));
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
  InstVarSet_12 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 0))));
  InstParams_13 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 1))));
  ModeBody_14 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 2))));
  Status_16 = ((MR_Word) ((MR_hl_field(0, ModeDefn_8, (MR_Integer) 4))));
  if (!((InstParams_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word HeadInstParam_17 = ((MR_Word) ((MR_hl_field(1, InstParams_13, (MR_Integer) 0))));
    MR_Word TailInstParams_18 = ((MR_Word) ((MR_hl_field(1, InstParams_13, (MR_Integer) 1))));

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

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word InstName_10)
{
  MR_Word InstNameTerm_12;
  MR_Word VarSet_13;

  InstNameTerm_12 = parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstName_10);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_13);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, InstNameTerm_12, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word AnyInstInfo_10)
{
  MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(0, AnyInstInfo_10, (MR_Integer) 0))));
  MR_Word Uniq_13 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_14 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_15 = ((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word InstNameTerm_30;
  MR_Word VarSet_31;

  switch (Uniq_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "clobbered");
      break;
    case (MR_Integer) 4:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "mostly_clobbered");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "mostly_unique ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "shared ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "unique ");
      break;
  }
  switch (Live_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "live ");
      break;
  }
  switch (Real_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "real unify\n");
      break;
  }
  InstNameTerm_30 = parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstName_12);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_31);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_31, (MR_Integer) 0, InstNameTerm_30, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word GroundInstInfo_10)
{
  MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(0, GroundInstInfo_10, (MR_Integer) 0))));
  MR_Word Uniq_13 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_14 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_15 = ((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word InstNameTerm_30;
  MR_Word VarSet_31;

  switch (Uniq_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "clobbered");
      break;
    case (MR_Integer) 4:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "mostly_clobbered");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "mostly_unique ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "shared ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "unique ");
      break;
  }
  switch (Live_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "live ");
      break;
  }
  switch (Real_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "real unify\n");
      break;
  }
  InstNameTerm_30 = parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstName_12);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_31);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_31, (MR_Integer) 0, InstNameTerm_30, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word MergeInstInfo_10)
{
  MR_Word InstA_12 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_10, (MR_Integer) 0))));
  MR_Word InstB_13 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_10, (MR_Integer) 1))));
  MR_Word InstTerm_23;
  MR_Word VarSet_24;
  MR_Word InstTerm_27;
  MR_Word VarSet_28;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "InstA: ");
  InstTerm_23 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstA_12);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_24);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_24, (MR_Integer) 0, InstTerm_23, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "InstB: ");
  InstTerm_27 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstB_13);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_28);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_28, (MR_Integer) 0, InstTerm_27, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word UnifyInstInfo_10)
{
  MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_10, (MR_Integer) 1))));
  MR_Word InstB_15 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_10, (MR_Integer) 2))));
  MR_Word InstTerm_33;
  MR_Word VarSet_34;
  MR_Word InstTerm_37;
  MR_Word VarSet_38;

  switch (Live_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "live ");
      break;
  }
  switch (Real_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "real unify\n");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "InstA: ");
  InstTerm_33 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstA_14);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_34);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_34, (MR_Integer) 0, InstTerm_33, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "InstB: ");
  InstTerm_37 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstB_15);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_38);
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_38, (MR_Integer) 0, InstTerm_37, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word InstCtor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word InstDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(0, InstCtor_6, (MR_Integer) 0))));
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
  InstVarSet_11 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 0))));
  InstParams_12 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 1))));
  InstBody_13 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 2))));
  Status_16 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 5))));
  if (!((InstParams_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word HeadInstParam_17 = ((MR_Word) ((MR_hl_field(1, InstParams_12, (MR_Integer) 0))));
    MR_Word TailInstParams_18 = ((MR_Word) ((MR_hl_field(1, InstParams_12, (MR_Integer) 1))));

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
      MR_Word HeadInstVar_13 = ((MR_Word) ((MR_hl_field(1, InstVars_9, (MR_Integer) 0))));
      MR_Word TailInstVars_14 = ((MR_Word) ((MR_hl_field(1, InstVars_9, (MR_Integer) 1))));
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
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0(
  MR_Word Stream_5,
  MR_Word ModeTable_6)
{
  MR_Word ModeDefns_8;
  MR_Word Var_13;
  MR_Box conv0_STATE_VARIABLE_IO_14_14;

  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_6, &ModeDefns_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%-------- Modes --------\n");
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_5));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModeDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
  mercury__io__nl_3_p_0(Stream_5);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv16_HeadVar__8_183;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__113__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv16_HeadVar__8_183);
  *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__8_183));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv13_HeadVar__8_170;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__105__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv13_HeadVar__8_170);
  *wrapper_arg_3 = ((MR_Box) (conv13_HeadVar__8_170));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv10_HeadVar__8_157;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__97__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv10_HeadVar__8_157);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__8_157));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_HeadVar__8_144;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__89__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_HeadVar__8_144);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__8_144));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_HeadVar__8_131;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__81__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_HeadVar__8_131);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__8_131));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__8_117;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__73__1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__8_117);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__8_117));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0(
  MR_Word Stream_8,
  MR_Word Lang_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word InstTable_12)
{
  MR_Word UserInstTable_14;
  MR_Word UnifyInstTable_15;
  MR_Word MergeInstTable_16;
  MR_Word GroundInstTable_17;
  MR_Word AnyInstTable_18;
  MR_Word SharedInstTable_19;
  MR_Word MostlyUniqInstTable_20;
  MR_Word UserInstPairs_21;
  MR_Word UnifyInstPairs_22;
  MR_Word MergeInstPairs_23;
  MR_Word GroundInstPairs_24;
  MR_Word AnyInstPairs_25;
  MR_Word SharedInstPairs_26;
  MR_Word MostlyUniqInstPairs_27;
  MR_Integer NumUnifyInsts_28;
  MR_Integer NumMergeInsts_29;
  MR_Integer NumGroundInsts_30;
  MR_Integer NumAnyInsts_31;
  MR_Integer NumSharedInsts_32;
  MR_Integer NumMostlyUniqInsts_33;
  MR_Word Var_40;
  MR_Word Var_44;
  MR_Word Var_55;
  MR_Word Var_66;
  MR_Word Var_77;
  MR_Word Var_88;
  MR_Word Var_99;
  MR_String Var_196;
  MR_String Var_207;
  MR_String Var_218;
  MR_String Var_229;
  MR_String Var_240;
  MR_String Var_251;
  MR_Box conv0_STATE_VARIABLE_IO_41_41;
  MR_Box conv3_NumUnifyInsts_28;
  MR_Box conv2_STATE_VARIABLE_IO_46_46;
  MR_Box conv6_NumMergeInsts_29;
  MR_Box conv5_STATE_VARIABLE_IO_57_57;
  MR_Box conv9_NumGroundInsts_30;
  MR_Box conv8_STATE_VARIABLE_IO_68_68;
  MR_Box conv12_NumAnyInsts_31;
  MR_Box conv11_STATE_VARIABLE_IO_79_79;
  MR_Box conv15_NumSharedInsts_32;
  MR_Box conv14_STATE_VARIABLE_IO_90_90;
  MR_Box conv18_NumMostlyUniqInsts_33;
  MR_Box conv17_STATE_VARIABLE_IO_101_101;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Insts --------\n");
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_12, &UserInstTable_14);
  hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_12, &UnifyInstTable_15);
  hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_12, &MergeInstTable_16);
  hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_12, &GroundInstTable_17);
  hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_12, &AnyInstTable_18);
  hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_12, &SharedInstTable_19);
  hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_12, &MostlyUniqInstTable_20);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_14, &UserInstPairs_21);
  hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInstTable_15, &UnifyInstPairs_22);
  hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInstTable_16, &MergeInstPairs_23);
  hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInstTable_17, &GroundInstPairs_24);
  hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInstTable_18, &AnyInstPairs_25);
  hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInstTable_19, &SharedInstPairs_26);
  hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInstTable_20, &MostlyUniqInstPairs_27);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- User defined insts --------\n");
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_1));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (Stream_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, UserInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41_41);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Unify insts --------\n");
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_3));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_44, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_44, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[6]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, UnifyInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &conv3_NumUnifyInsts_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_46_46);
  NumUnifyInsts_28 = ((MR_Integer) (conv3_NumUnifyInsts_28));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of unify insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumUnifyInsts_28, &Var_196);
  mercury__io__write_string_4_p_0(Stream_8, Var_196);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Merge insts --------\n");
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[1]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_5));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_55, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_55, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[7]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, MergeInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv6_NumMergeInsts_29, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_57_57);
  NumMergeInsts_29 = ((MR_Integer) (conv6_NumMergeInsts_29));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of merge insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMergeInsts_29, &Var_207);
  mercury__io__write_string_4_p_0(Stream_8, Var_207);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Ground insts --------\n");
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[2]));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_7));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_66, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_66, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_66, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_66, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_66, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[8]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, GroundInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv9_NumGroundInsts_30, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_68_68);
  NumGroundInsts_30 = ((MR_Integer) (conv9_NumGroundInsts_30));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of ground insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumGroundInsts_30, &Var_218);
  mercury__io__write_string_4_p_0(Stream_8, Var_218);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Any insts --------\n");
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[3]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_9));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_77, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[9]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, AnyInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv12_NumAnyInsts_31, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_79_79);
  NumAnyInsts_31 = ((MR_Integer) (conv12_NumAnyInsts_31));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of any insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumAnyInsts_31, &Var_229);
  mercury__io__write_string_4_p_0(Stream_8, Var_229);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- Shared insts --------\n");
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4]));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_11));
    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_88, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_88, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_88, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_88, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_88, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[10]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_88, SharedInstPairs_26, ((MR_Box) ((MR_Integer) 0)), &conv15_NumSharedInsts_32, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_90_90);
  NumSharedInsts_32 = ((MR_Integer) (conv15_NumSharedInsts_32));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of shared insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumSharedInsts_32, &Var_240);
  mercury__io__write_string_4_p_0(Stream_8, Var_240);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%-------- MostlyUniq insts --------\n");
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_7_p_0_13));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_99, 4) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_99, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_99, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_99, 7) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[11]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_99, MostlyUniqInstPairs_27, ((MR_Box) ((MR_Integer) 0)), &conv18_NumMostlyUniqInsts_33, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_101_101);
  NumMostlyUniqInsts_33 = ((MR_Integer) (conv18_NumMostlyUniqInsts_33));
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\nTotal number of mostly uniq insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMostlyUniqInsts_33, &Var_251);
  mercury__io__write_string_4_p_0(Stream_8, Var_251);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__nl_3_p_0(Stream_8);
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
