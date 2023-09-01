/*
** Automatically generated from `hlds_out_inst_table.m'
** by the Mercury compiler,
** version rotd-2023-09-01
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_0;

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__field_types_maybe_use_error_msg_inst_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_1[1];

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_ptag_ordered_maybe_use_error_msg_inst_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_name_ordered_maybe_use_error_msg_inst_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__functor_number_map_maybe_use_error_msg_inst_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__123__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_109,
  MR_Word HeadVar__7_110,
  MR_Word HeadVar__8_194,
  MR_Integer HeadVar__9_195,
  MR_Integer * HeadVar__10_196);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__115__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_97,
  MR_Word HeadVar__7_98,
  MR_Word HeadVar__8_180,
  MR_Integer HeadVar__9_181,
  MR_Integer * HeadVar__10_182);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__107__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_85,
  MR_Word HeadVar__7_86,
  MR_Word HeadVar__8_166,
  MR_Integer HeadVar__9_167,
  MR_Integer * HeadVar__10_168);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__99__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_73,
  MR_Word HeadVar__7_74,
  MR_Word HeadVar__8_152,
  MR_Integer HeadVar__9_153,
  MR_Integer * HeadVar__10_154);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__91__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_61,
  MR_Word HeadVar__7_62,
  MR_Word HeadVar__8_138,
  MR_Integer HeadVar__9_139,
  MR_Integer * HeadVar__10_140);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_12_p_0(
  MR_Word MaybeUseErrorMsgInst_13,
  MR_Word Stream_14,
  MR_Word Lang_15,
  MR_String Kind_16,
  MR_Integer InstNumLimit_17,
  MR_Integer InstSizeLimit_18,
  MR_Word WriteKey_19,
  MR_Word HeadVar__8_8,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__83__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_49,
  MR_Word HeadVar__7_50,
  MR_Word HeadVar__8_123,
  MR_Integer HeadVar__9_124,
  MR_Integer * HeadVar__10_125);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_12_p_0(
  MR_Word MaybeUseErrorMsgInst_13,
  MR_Word Stream_14,
  MR_Word Lang_15,
  MR_String Kind_16,
  MR_Integer InstNumLimit_17,
  MR_Integer InstSizeLimit_18,
  MR_Word WriteKey_19,
  MR_Word HeadVar__8_8,
  MR_Integer STATE_VARIABLE_N_0_27,
  MR_Integer * STATE_VARIABLE_N_28);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModeCtor_7,
  MR_Word ModeDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word AnyInstInfo_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word GroundInstInfo_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word InstName_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word MergeInstInfo_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word UnifyInstInfo_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word Inst_12);

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
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Unify____maybe_use_error_msg_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[5][15];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_7[1][8];




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
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_5[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1][7] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[5][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_7[1][8] = {
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

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
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

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
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

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
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

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
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

static const MR_VA_PseudoTypeInfo_Struct7 hlds__hlds_out__hlds_out_inst_table____vpti_pred_7__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_io__type_ctor_info_text_output_stream_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
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

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_0 = {
  (MR_String) "do_not_use_error_msg_inst",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__field_types_maybe_use_error_msg_inst_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0) };

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_1 = {
  (MR_String) "use_error_msg_inst",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__field_types_maybe_use_error_msg_inst_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_0[1] = { &hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_0 };

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_1[1] = { &hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_1 };

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_ptag_ordered_maybe_use_error_msg_inst_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_stag_ordered_maybe_use_error_msg_inst_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_name_ordered_maybe_use_error_msg_inst_0[2] = {
  &hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_0,
  &hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_functor_desc_maybe_use_error_msg_inst_0_1
};

static const MR_Integer hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__functor_number_map_maybe_use_error_msg_inst_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_inst_table____Unify____maybe_use_error_msg_inst_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_inst_table",
  (MR_String) "maybe_use_error_msg_inst",
  { hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_name_ordered_maybe_use_error_msg_inst_0 },
  { hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__du_ptag_ordered_maybe_use_error_msg_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__functor_number_map_maybe_use_error_msg_inst_0,

};

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__123__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_109,
  MR_Word HeadVar__7_110,
  MR_Word HeadVar__8_194,
  MR_Integer HeadVar__9_195,
  MR_Integer * HeadVar__10_196)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_109, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_110, HeadVar__8_194, HeadVar__9_195, HeadVar__10_196);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__115__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_97,
  MR_Word HeadVar__7_98,
  MR_Word HeadVar__8_180,
  MR_Integer HeadVar__9_181,
  MR_Integer * HeadVar__10_182)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_97, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_98, HeadVar__8_180, HeadVar__9_181, HeadVar__10_182);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__107__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_85,
  MR_Word HeadVar__7_86,
  MR_Word HeadVar__8_166,
  MR_Integer HeadVar__9_167,
  MR_Integer * HeadVar__10_168)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_85, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_86, HeadVar__8_166, HeadVar__9_167, HeadVar__10_168);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__99__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_73,
  MR_Word HeadVar__7_74,
  MR_Word HeadVar__8_152,
  MR_Integer HeadVar__9_153,
  MR_Integer * HeadVar__10_154)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_73, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_74, HeadVar__8_152, HeadVar__9_153, HeadVar__10_154);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__91__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_61,
  MR_Word HeadVar__7_62,
  MR_Word HeadVar__8_138,
  MR_Integer HeadVar__9_139,
  MR_Integer * HeadVar__10_140)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_61, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_62, HeadVar__8_138, HeadVar__9_139, HeadVar__10_140);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_12_p_0(
  MR_Word MaybeUseErrorMsgInst_13,
  MR_Word Stream_14,
  MR_Word Lang_15,
  MR_String Kind_16,
  MR_Integer InstNumLimit_17,
  MR_Integer InstSizeLimit_18,
  MR_Word WriteKey_19,
  MR_Word HeadVar__8_8,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26)
{
  MR_bool succeeded;
  MR_Box Key_20 = (MR_hl_field(0, HeadVar__8_8, (MR_Integer) 0));
  MR_Word MaybeInst_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__8_8, (MR_Integer) 1))));

  *STATE_VARIABLE_N_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_25 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_26 <= InstNumLimit_17);
  if (succeeded)
  {
    MR_String Var_60;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_38_38;

    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_14, Kind_16);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_26, &Var_60);
    mercury__io__write_string_4_p_0(Stream_14, Var_60);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) " key\n");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_19, (MR_Integer) 1))));
    func_0(((MR_Box) (WriteKey_19)), ((MR_Box) (MaybeUseErrorMsgInst_13)), ((MR_Box) (Stream_14)), ((MR_Box) (Lang_15)), ((MR_Box) (InstSizeLimit_18)), Key_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
    if ((MaybeInst_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_72;

      mercury__io__write_string_4_p_0(Stream_14, Kind_16);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_26, &Var_72);
      mercury__io__write_string_4_p_0(Stream_14, Var_72);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " value UNKNOWN\n");
    }
    else
    {
      MR_Word Inst_24 = ((MR_Word) ((MR_hl_field(1, MaybeInst_21, (MR_Integer) 0))));
      MR_String Var_84;

      mercury__io__write_string_4_p_0(Stream_14, Kind_16);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_26, &Var_84);
      mercury__io__write_string_4_p_0(Stream_14, Var_84);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " value:\n");
      hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_13, Stream_14, Lang_15, InstSizeLimit_18, Inst_24);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__83__1_12_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_String HeadVar__6_49,
  MR_Word HeadVar__7_50,
  MR_Word HeadVar__8_123,
  MR_Integer HeadVar__9_124,
  MR_Integer * HeadVar__10_125)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_12_p_0(MaybeUseErrorMsgInst_11, Stream_9, Lang_10, HeadVar__6_49, InstNumLimit_12, InstSizeLimit_13, HeadVar__7_50, HeadVar__8_123, HeadVar__9_124, HeadVar__10_125);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_12_p_0(
  MR_Word MaybeUseErrorMsgInst_13,
  MR_Word Stream_14,
  MR_Word Lang_15,
  MR_String Kind_16,
  MR_Integer InstNumLimit_17,
  MR_Integer InstSizeLimit_18,
  MR_Word WriteKey_19,
  MR_Word HeadVar__8_8,
  MR_Integer STATE_VARIABLE_N_0_27,
  MR_Integer * STATE_VARIABLE_N_28)
{
  MR_bool succeeded;
  MR_Box Key_20 = (MR_hl_field(0, HeadVar__8_8, (MR_Integer) 0));
  MR_Word MaybeInstDet_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__8_8, (MR_Integer) 1))));

  *STATE_VARIABLE_N_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_27 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_28 <= InstNumLimit_17);
  if (succeeded)
  {
    MR_String Var_64;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_40_40;

    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_14, Kind_16);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_28, &Var_64);
    mercury__io__write_string_4_p_0(Stream_14, Var_64);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) " key\n");
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_19, (MR_Integer) 1))));
    func_0(((MR_Box) (WriteKey_19)), ((MR_Box) (MaybeUseErrorMsgInst_13)), ((MR_Box) (Stream_14)), ((MR_Box) (Lang_15)), ((MR_Box) (InstSizeLimit_18)), Key_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
    if ((MaybeInstDet_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_76;

      mercury__io__write_string_4_p_0(Stream_14, Kind_16);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_28, &Var_76);
      mercury__io__write_string_4_p_0(Stream_14, Var_76);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " value UNKNOWN\n");
    }
    else
    {
      MR_Word Inst_24 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_21, (MR_Integer) 0))));
      MR_Word Detism_25 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInstDet_21, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_String DetismStr_26;
      MR_String Var_88;

      DetismStr_26 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_25);
      mercury__io__write_string_4_p_0(Stream_14, Kind_16);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " entry ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), *STATE_VARIABLE_N_28, &Var_88);
      mercury__io__write_string_4_p_0(Stream_14, Var_88);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " value (");
      mercury__io__write_string_4_p_0(Stream_14, DetismStr_26);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "):\n");
      hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_13, Stream_14, Lang_15, InstSizeLimit_18, Inst_24);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Unify____maybe_use_error_msg_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
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
hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word AnyInstInfo_12)
{
  MR_Word InstName_14 = ((MR_Word) ((MR_hl_field(0, AnyInstInfo_12, (MR_Integer) 0))));
  MR_Word Uniq_15 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_12, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_16 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_12, (MR_Integer) 1))) & (MR_Integer) 1);

  switch (Uniq_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "clobbered");
      break;
    case (MR_Integer) 4:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "mostly_clobbered");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "mostly_unique ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "shared ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "unique ");
      break;
  }
  switch (Live_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "live ");
      break;
  }
  switch (Real_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "real unify\n");
      break;
  }
  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstName_14);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word GroundInstInfo_12)
{
  MR_Word InstName_14 = ((MR_Word) ((MR_hl_field(0, GroundInstInfo_12, (MR_Integer) 0))));
  MR_Word Uniq_15 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_12, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_16 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_12, (MR_Integer) 1))) & (MR_Integer) 1);

  switch (Uniq_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "clobbered");
      break;
    case (MR_Integer) 4:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "mostly_clobbered");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "mostly_unique ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "shared ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "unique ");
      break;
  }
  switch (Live_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "live ");
      break;
  }
  switch (Real_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "real unify\n");
      break;
  }
  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstName_14);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word InstName_12)
{
  MR_bool succeeded;

  if ((MaybeUseErrorMsgInst_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstNameTerm_50;
    MR_Word InstVarSet_51;

    InstNameTerm_50 = parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(Lang_10, InstSizeLimit_11, InstName_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InstVarSet_51);
    parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstVarSet_51, (MR_Integer) 0, InstNameTerm_50, Stream_9);
    mercury__io__nl_3_p_0(Stream_9);
  }
  else
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeUseErrorMsgInst_8, (MR_Integer) 0))));
    MR_Word TVarSet_15;
    MR_Word InstVarSet_16;
    MR_Word InstNamePieces_20;
    MR_Word InstNameLines_21;
    MR_Word Var_33;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_16);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (TVarSet_15));
    }
    InstNamePieces_20 = hlds__error_msg_inst__error_msg_inst_name_9_f_0(ModuleInfo_14, InstVarSet_16, (MR_Integer) 1, Var_33, (MR_Integer) 1, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0])), InstName_12);
    InstNameLines_21 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstNamePieces_20);
    succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 80, InstNameLines_21);
    if (succeeded)
    {
      MR_String ShortInstNameStr_22;

      ShortInstNameStr_22 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstNameLines_21);
      mercury__io__write_string_4_p_0(Stream_9, ShortInstNameStr_22);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    else
    {
      MR_String LongInstNameStr_24;

      LongInstNameStr_24 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0((MR_String) "", InstNameLines_21);
      mercury__io__write_string_4_p_0(Stream_9, LongInstNameStr_24);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word MergeInstInfo_12)
{
  MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_12, (MR_Integer) 0))));
  MR_Word InstB_15 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_12, (MR_Integer) 1))));

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "InstA: ");
  hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstA_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "InstB: ");
  hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstB_15);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word UnifyInstInfo_12)
{
  MR_Word Live_14 = ((((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_15 = ((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_12, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word InstA_16 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_12, (MR_Integer) 1))));
  MR_Word InstB_17 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_12, (MR_Integer) 2))));

  switch (Live_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "dead ");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "live ");
      break;
  }
  switch (Real_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "fake unify\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "real unify\n");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "InstA: ");
  hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstA_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "InstB: ");
  hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(MaybeUseErrorMsgInst_8, Stream_9, Lang_10, InstSizeLimit_11, InstB_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_entry_7_p_0(
  MR_Word MaybeUseErrorMsgInst_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Integer InstSizeLimit_11,
  MR_Word Inst_12)
{
  MR_bool succeeded;

  if ((MaybeUseErrorMsgInst_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstTerm_50;
    MR_Word InstVarSet_51;

    InstTerm_50 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_10, InstSizeLimit_11, Inst_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InstVarSet_51);
    parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstVarSet_51, (MR_Integer) 0, InstTerm_50, Stream_9);
    mercury__io__nl_3_p_0(Stream_9);
  }
  else
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeUseErrorMsgInst_8, (MR_Integer) 0))));
    MR_Word TVarSet_15;
    MR_Word InstVarSet_16;
    MR_Word InstPieces_20;
    MR_Word InstLines_21;
    MR_Word Var_33;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_16);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (TVarSet_15));
    }
    InstPieces_20 = hlds__error_msg_inst__error_msg_inst_9_f_0(ModuleInfo_14, InstVarSet_16, (MR_Integer) 1, Var_33, (MR_Integer) 1, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0])), Inst_12);
    InstLines_21 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstPieces_20);
    succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 80, InstLines_21);
    if (succeeded)
    {
      MR_String ShortInstStr_22;

      ShortInstStr_22 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstLines_21);
      mercury__io__write_string_4_p_0(Stream_9, ShortInstStr_22);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    else
    {
      MR_String LongInstStr_24;

      LongInstStr_24 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0((MR_String) "", InstLines_21);
      mercury__io__write_string_4_p_0(Stream_9, LongInstStr_24);
    }
  }
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
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_5));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, ModeDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
  mercury__io__nl_3_p_0(Stream_5);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv16_HeadVar__10_196;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__123__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv16_HeadVar__10_196);
  *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__10_196));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv13_HeadVar__10_182;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__115__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv13_HeadVar__10_182);
  *wrapper_arg_3 = ((MR_Box) (conv13_HeadVar__10_182));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_inst_name_nl_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv10_HeadVar__10_168;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__107__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv10_HeadVar__10_168);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__10_168));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_any_inst_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_HeadVar__10_154;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__99__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_HeadVar__10_154);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__10_154));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_ground_inst_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_HeadVar__10_140;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__91__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_HeadVar__10_140);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__10_140));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_merge_inst_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__10_125;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__write_inst_table__83__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__10_125);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__10_125));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_key_unify_inst_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Integer) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_inst_table__write_user_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word MaybeUseErrorMsgInst_11,
  MR_Integer InstNumLimit_12,
  MR_Integer InstSizeLimit_13,
  MR_Word InstTable_14)
{
  MR_Word UserInstTable_16;
  MR_Word UnifyInstTable_17;
  MR_Word MergeInstTable_18;
  MR_Word GroundInstTable_19;
  MR_Word AnyInstTable_20;
  MR_Word SharedInstTable_21;
  MR_Word MostlyUniqInstTable_22;
  MR_Word UserInstPairs_23;
  MR_Word UnifyInstPairs_24;
  MR_Word MergeInstPairs_25;
  MR_Word GroundInstPairs_26;
  MR_Word AnyInstPairs_27;
  MR_Word SharedInstPairs_28;
  MR_Word MostlyUniqInstPairs_29;
  MR_Integer NumUnifyInsts_30;
  MR_Integer NumMergeInsts_31;
  MR_Integer NumGroundInsts_32;
  MR_Integer NumAnyInsts_33;
  MR_Integer NumSharedInsts_34;
  MR_Integer NumMostlyUniqInsts_35;
  MR_Word Var_42;
  MR_Word Var_46;
  MR_Word Var_58;
  MR_Word Var_70;
  MR_Word Var_82;
  MR_Word Var_94;
  MR_Word Var_106;
  MR_String Var_210;
  MR_String Var_221;
  MR_String Var_232;
  MR_String Var_243;
  MR_String Var_254;
  MR_String Var_265;
  MR_Box conv0_STATE_VARIABLE_IO_43_43;
  MR_Box conv3_NumUnifyInsts_30;
  MR_Box conv2_STATE_VARIABLE_IO_48_48;
  MR_Box conv6_NumMergeInsts_31;
  MR_Box conv5_STATE_VARIABLE_IO_60_60;
  MR_Box conv9_NumGroundInsts_32;
  MR_Box conv8_STATE_VARIABLE_IO_72_72;
  MR_Box conv12_NumAnyInsts_33;
  MR_Box conv11_STATE_VARIABLE_IO_84_84;
  MR_Box conv15_NumSharedInsts_34;
  MR_Box conv14_STATE_VARIABLE_IO_96_96;
  MR_Box conv18_NumMostlyUniqInsts_35;
  MR_Box conv17_STATE_VARIABLE_IO_108_108;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%-------- Insts --------\n");
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_14, &UserInstTable_16);
  hlds__hlds_inst_mode__inst_table_get_unify_insts_2_p_0(InstTable_14, &UnifyInstTable_17);
  hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable_14, &MergeInstTable_18);
  hlds__hlds_inst_mode__inst_table_get_ground_insts_2_p_0(InstTable_14, &GroundInstTable_19);
  hlds__hlds_inst_mode__inst_table_get_any_insts_2_p_0(InstTable_14, &AnyInstTable_20);
  hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable_14, &SharedInstTable_21);
  hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable_14, &MostlyUniqInstTable_22);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_16, &UserInstPairs_23);
  hlds__hlds_inst_mode__unify_insts_to_sorted_pairs_2_p_0(UnifyInstTable_17, &UnifyInstPairs_24);
  hlds__hlds_inst_mode__merge_insts_to_sorted_pairs_2_p_0(MergeInstTable_18, &MergeInstPairs_25);
  hlds__hlds_inst_mode__ground_insts_to_sorted_pairs_2_p_0(GroundInstTable_19, &GroundInstPairs_26);
  hlds__hlds_inst_mode__any_insts_to_sorted_pairs_2_p_0(AnyInstTable_20, &AnyInstPairs_27);
  hlds__hlds_inst_mode__shared_insts_to_sorted_pairs_2_p_0(SharedInstTable_21, &SharedInstPairs_28);
  hlds__hlds_inst_mode__mostly_uniq_insts_to_sorted_pairs_2_p_0(MostlyUniqInstTable_22, &MostlyUniqInstPairs_29);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- User defined insts --------\n");
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_1));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, UserInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43_43);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- Unify insts --------\n");
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[0]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_3));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_46, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_46, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_46, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_46, 8) = ((MR_Box) ((MR_String) "Unify"));
    MR_hl_field(0, Var_46, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[6]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, UnifyInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv3_NumUnifyInsts_30, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_48_48);
  NumUnifyInsts_30 = ((MR_Integer) (conv3_NumUnifyInsts_30));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of unify insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumUnifyInsts_30, &Var_210);
  mercury__io__write_string_4_p_0(Stream_9, Var_210);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- Merge insts --------\n");
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[1]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_5));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_58, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_58, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_58, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_58, 8) = ((MR_Box) ((MR_String) "Merge"));
    MR_hl_field(0, Var_58, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[7]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, MergeInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv6_NumMergeInsts_31, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_60_60);
  NumMergeInsts_31 = ((MR_Integer) (conv6_NumMergeInsts_31));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of merge insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMergeInsts_31, &Var_221);
  mercury__io__write_string_4_p_0(Stream_9, Var_221);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- Ground insts --------\n");
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[2]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_7));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_70, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_70, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_70, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_70, 8) = ((MR_Box) ((MR_String) "Ground"));
    MR_hl_field(0, Var_70, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[8]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, GroundInstPairs_26, ((MR_Box) ((MR_Integer) 0)), &conv9_NumGroundInsts_32, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_72_72);
  NumGroundInsts_32 = ((MR_Integer) (conv9_NumGroundInsts_32));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of ground insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumGroundInsts_32, &Var_232);
  mercury__io__write_string_4_p_0(Stream_9, Var_232);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- Any insts --------\n");
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[3]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_9));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_82, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_82, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_82, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_82, 8) = ((MR_Box) ((MR_String) "Any"));
    MR_hl_field(0, Var_82, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[9]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_82, AnyInstPairs_27, ((MR_Box) ((MR_Integer) 0)), &conv12_NumAnyInsts_33, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_84_84);
  NumAnyInsts_33 = ((MR_Integer) (conv12_NumAnyInsts_33));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of any insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumAnyInsts_33, &Var_243);
  mercury__io__write_string_4_p_0(Stream_9, Var_243);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- Shared insts --------\n");
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[4]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_11));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_94, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_94, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_94, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_94, 8) = ((MR_Box) ((MR_String) "Shared"));
    MR_hl_field(0, Var_94, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[10]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_94, SharedInstPairs_28, ((MR_Box) ((MR_Integer) 0)), &conv15_NumSharedInsts_34, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_96_96);
  NumSharedInsts_34 = ((MR_Integer) (conv15_NumSharedInsts_34));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of shared insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumSharedInsts_34, &Var_254);
  mercury__io__write_string_4_p_0(Stream_9, Var_254);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n%-------- MostlyUniq insts --------\n");
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[4]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__write_inst_table_8_p_0_13));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_106, 4) = ((MR_Box) (Lang_10));
    MR_hl_field(0, Var_106, 5) = ((MR_Box) (MaybeUseErrorMsgInst_11));
    MR_hl_field(0, Var_106, 6) = ((MR_Box) (InstNumLimit_12));
    MR_hl_field(0, Var_106, 7) = ((MR_Box) (InstSizeLimit_13));
    MR_hl_field(0, Var_106, 8) = ((MR_Box) ((MR_String) "MostlyUniq"));
    MR_hl_field(0, Var_106, 9) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[11]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, MostlyUniqInstPairs_29, ((MR_Box) ((MR_Integer) 0)), &conv18_NumMostlyUniqInsts_35, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_108_108);
  NumMostlyUniqInsts_35 = ((MR_Integer) (conv18_NumMostlyUniqInsts_35));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nTotal number of mostly uniq insts: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0]), NumMostlyUniqInsts_35, &Var_265);
  mercury__io__write_string_4_p_0(Stream_9, Var_265);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__nl_3_p_0(Stream_9);
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Unify____maybe_use_error_msg_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_inst_table____Unify____maybe_use_error_msg_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_out__hlds_out_inst_table__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_inst_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0);
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
