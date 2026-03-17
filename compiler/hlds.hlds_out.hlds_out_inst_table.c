/*
** Automatically generated from `hlds_out_inst_table.m'
** by the Mercury compiler,
** version rotd-2026-03-17
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0;

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0;

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
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__144__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_107,
  MR_Word HeadVar__6_108,
  MR_Word HeadVar__7_188,
  MR_Integer HeadVar__8_189,
  MR_Integer * HeadVar__9_190,
  MR_Word HeadVar__10_191,
  MR_Word * HeadVar__11_192);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__135__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_95,
  MR_Word HeadVar__6_96,
  MR_Word HeadVar__7_175,
  MR_Integer HeadVar__8_176,
  MR_Integer * HeadVar__9_177,
  MR_Word HeadVar__10_178,
  MR_Word * HeadVar__11_179);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__126__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_83,
  MR_Word HeadVar__6_84,
  MR_Word HeadVar__7_162,
  MR_Integer HeadVar__8_163,
  MR_Integer * HeadVar__9_164,
  MR_Word HeadVar__10_165,
  MR_Word * HeadVar__11_166);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__117__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_71,
  MR_Word HeadVar__6_72,
  MR_Word HeadVar__7_149,
  MR_Integer HeadVar__8_150,
  MR_Integer * HeadVar__9_151,
  MR_Word HeadVar__10_152,
  MR_Word * HeadVar__11_153);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__108__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_59,
  MR_Word HeadVar__6_60,
  MR_Word HeadVar__7_136,
  MR_Integer HeadVar__8_137,
  MR_Integer * HeadVar__9_138,
  MR_Word HeadVar__10_139,
  MR_Word * HeadVar__11_140);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_11_p_0(
  MR_Word MaybeUseErrorMsgInst_12,
  MR_Word Lang_13,
  MR_String Kind_14,
  MR_Integer InstNumLimit_15,
  MR_Integer InstSizeLimit_16,
  MR_Word WriteKey_17,
  MR_Word HeadVar__7_7,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__99__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_47,
  MR_Word HeadVar__6_48,
  MR_Word HeadVar__7_122,
  MR_Integer HeadVar__8_123,
  MR_Integer * HeadVar__9_124,
  MR_Word HeadVar__10_125,
  MR_Word * HeadVar__11_126);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_11_p_0(
  MR_Word MaybeUseErrorMsgInst_12,
  MR_Word Lang_13,
  MR_String Kind_14,
  MR_Integer InstNumLimit_15,
  MR_Integer InstSizeLimit_16,
  MR_Word WriteKey_17,
  MR_Word HeadVar__7_7,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_mode_table_entry_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word ModeDefn_6,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_any_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word AnyInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_ground_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word GroundInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word InstName_10,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_merge_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word MergeInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_unify_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word UnifyInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word Inst_10,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_user_inst_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_params_5_p_0(
  MR_Word InstVarSet_6,
  MR_Word InstVar_7,
  MR_Word InstVars_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_1(
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


static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[15][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[2][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[1][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_7[5][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_8[5][14];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_9[1][7];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_1[15][3] = {
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
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_7[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_9[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[6])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_5[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_7[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_8[5][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_inst_table_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_inst_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_maybe_inst_det_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 hlds__hlds_out__hlds_out_inst_table____vpti_pred_6__plain_hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0__plain_parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_string__builder__type_ctor_info_state_0__plain_string__builder__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_inst_table__hlds__hlds_out__hlds_out_inst_table__type_ctor_info_maybe_use_error_msg_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__string__builder__string__builder__type_ctor_info_state_0)
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
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__144__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_107,
  MR_Word HeadVar__6_108,
  MR_Word HeadVar__7_188,
  MR_Integer HeadVar__8_189,
  MR_Integer * HeadVar__9_190,
  MR_Word HeadVar__10_191,
  MR_Word * HeadVar__11_192)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_107, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_108, HeadVar__7_188, HeadVar__8_189, HeadVar__9_190, HeadVar__10_191, HeadVar__11_192);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__135__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_95,
  MR_Word HeadVar__6_96,
  MR_Word HeadVar__7_175,
  MR_Integer HeadVar__8_176,
  MR_Integer * HeadVar__9_177,
  MR_Word HeadVar__10_178,
  MR_Word * HeadVar__11_179)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_95, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_96, HeadVar__7_175, HeadVar__8_176, HeadVar__9_177, HeadVar__10_178, HeadVar__11_179);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__126__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_83,
  MR_Word HeadVar__6_84,
  MR_Word HeadVar__7_162,
  MR_Integer HeadVar__8_163,
  MR_Integer * HeadVar__9_164,
  MR_Word HeadVar__10_165,
  MR_Word * HeadVar__11_166)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_83, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_84, HeadVar__7_162, HeadVar__8_163, HeadVar__9_164, HeadVar__10_165, HeadVar__11_166);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__117__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_71,
  MR_Word HeadVar__6_72,
  MR_Word HeadVar__7_149,
  MR_Integer HeadVar__8_150,
  MR_Integer * HeadVar__9_151,
  MR_Word HeadVar__10_152,
  MR_Word * HeadVar__11_153)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_71, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_72, HeadVar__7_149, HeadVar__8_150, HeadVar__9_151, HeadVar__10_152, HeadVar__11_153);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__108__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_59,
  MR_Word HeadVar__6_60,
  MR_Word HeadVar__7_136,
  MR_Integer HeadVar__8_137,
  MR_Integer * HeadVar__9_138,
  MR_Word HeadVar__10_139,
  MR_Word * HeadVar__11_140)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_59, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_60, HeadVar__7_136, HeadVar__8_137, HeadVar__9_138, HeadVar__10_139, HeadVar__11_140);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_11_p_0(
  MR_Word MaybeUseErrorMsgInst_12,
  MR_Word Lang_13,
  MR_String Kind_14,
  MR_Integer InstNumLimit_15,
  MR_Integer InstSizeLimit_16,
  MR_Word WriteKey_17,
  MR_Word HeadVar__7_7,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24,
  MR_Word STATE_VARIABLE_State_0_25,
  MR_Word * STATE_VARIABLE_State_26)
{
  MR_bool succeeded;
  MR_Box Key_18 = (MR_hl_field(0, HeadVar__7_7, 0));
  MR_Word MaybeInst_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__7_7, 1))));

  *STATE_VARIABLE_N_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_23 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_24 <= InstNumLimit_15);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_1_31;
    MR_Word STATE_VARIABLE_State_2_36;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_String Var_58;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_State_2_36;

    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_0_25, &Var_52);
    mercury__string__builder__append_string_3_p_0(Kind_14, Var_52, &Var_54);
    mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_54, &Var_55);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_24, &Var_58);
    mercury__string__builder__append_string_3_p_0(Var_58, Var_55, &Var_57);
    mercury__string__builder__append_string_3_p_0((MR_String) " key\n", Var_57, &STATE_VARIABLE_State_1_31);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_17, 1))));
    func_0(((MR_Box) (WriteKey_17)), ((MR_Box) (MaybeUseErrorMsgInst_12)), ((MR_Box) (Lang_13)), ((MR_Box) (InstSizeLimit_16)), Key_18, ((MR_Box) (STATE_VARIABLE_State_1_31)), &conv1_STATE_VARIABLE_State_2_36);
    STATE_VARIABLE_State_2_36 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_36));
    if ((MaybeInst_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_String Var_70;

      mercury__string__builder__append_string_3_p_0(Kind_14, STATE_VARIABLE_State_2_36, &Var_66);
      mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_66, &Var_67);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_24, &Var_70);
      mercury__string__builder__append_string_3_p_0(Var_70, Var_67, &Var_69);
      mercury__string__builder__append_string_3_p_0((MR_String) " value UNKNOWN\n", Var_69, STATE_VARIABLE_State_26);
    }
    else
    {
      MR_Word Inst_22 = ((MR_Word) ((MR_hl_field(1, MaybeInst_19, 0))));
      MR_Word STATE_VARIABLE_State_4_46;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_String Var_82;

      mercury__string__builder__append_string_3_p_0(Kind_14, STATE_VARIABLE_State_2_36, &Var_78);
      mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_78, &Var_79);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_24, &Var_82);
      mercury__string__builder__append_string_3_p_0(Var_82, Var_79, &Var_81);
      mercury__string__builder__append_string_3_p_0((MR_String) " value:\n", Var_81, &STATE_VARIABLE_State_4_46);
      hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_12, Lang_13, InstSizeLimit_16, Inst_22, STATE_VARIABLE_State_4_46, STATE_VARIABLE_State_26);
    }
  }
  else
    *STATE_VARIABLE_State_26 = STATE_VARIABLE_State_0_25;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__99__1_11_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_String HeadVar__5_47,
  MR_Word HeadVar__6_48,
  MR_Word HeadVar__7_122,
  MR_Integer HeadVar__8_123,
  MR_Integer * HeadVar__9_124,
  MR_Word HeadVar__10_125,
  MR_Word * HeadVar__11_126)
{
  hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_11_p_0(MaybeUseErrorMsgInst_9, Lang_8, HeadVar__5_47, InstNumLimit_10, InstSizeLimit_11, HeadVar__6_48, HeadVar__7_122, HeadVar__8_123, HeadVar__9_124, HeadVar__10_125, HeadVar__11_126);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_11_p_0(
  MR_Word MaybeUseErrorMsgInst_12,
  MR_Word Lang_13,
  MR_String Kind_14,
  MR_Integer InstNumLimit_15,
  MR_Integer InstSizeLimit_16,
  MR_Word WriteKey_17,
  MR_Word HeadVar__7_7,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28)
{
  MR_bool succeeded;
  MR_Box Key_18 = (MR_hl_field(0, HeadVar__7_7, 0));
  MR_Word MaybeInstDet_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__7_7, 1))));

  *STATE_VARIABLE_N_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_25 + (MR_Unsigned) 1);
  succeeded = (*STATE_VARIABLE_N_26 <= InstNumLimit_15);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_1_33;
    MR_Word STATE_VARIABLE_State_2_38;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_String Var_62;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_State_2_38;

    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_0_27, &Var_56);
    mercury__string__builder__append_string_3_p_0(Kind_14, Var_56, &Var_58);
    mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_58, &Var_59);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_26, &Var_62);
    mercury__string__builder__append_string_3_p_0(Var_62, Var_59, &Var_61);
    mercury__string__builder__append_string_3_p_0((MR_String) " key\n", Var_61, &STATE_VARIABLE_State_1_33);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteKey_17, 1))));
    func_0(((MR_Box) (WriteKey_17)), ((MR_Box) (MaybeUseErrorMsgInst_12)), ((MR_Box) (Lang_13)), ((MR_Box) (InstSizeLimit_16)), Key_18, ((MR_Box) (STATE_VARIABLE_State_1_33)), &conv1_STATE_VARIABLE_State_2_38);
    STATE_VARIABLE_State_2_38 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_38));
    if ((MaybeInstDet_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_String Var_74;

      mercury__string__builder__append_string_3_p_0(Kind_14, STATE_VARIABLE_State_2_38, &Var_70);
      mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_70, &Var_71);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_26, &Var_74);
      mercury__string__builder__append_string_3_p_0(Var_74, Var_71, &Var_73);
      mercury__string__builder__append_string_3_p_0((MR_String) " value UNKNOWN\n", Var_73, STATE_VARIABLE_State_28);
    }
    else
    {
      MR_Word Inst_22 = ((MR_Word) ((MR_hl_field(1, MaybeInstDet_19, 0))));
      MR_Word Detism_23 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInstDet_19, 1))) & (MR_Integer) 7);
      MR_String DetismStr_24;
      MR_Word STATE_VARIABLE_State_4_48;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_String Var_86;
      MR_Word Var_93;
      MR_Word Var_95;

      DetismStr_24 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_23);
      mercury__string__builder__append_string_3_p_0(Kind_14, STATE_VARIABLE_State_2_38, &Var_82);
      mercury__string__builder__append_string_3_p_0((MR_String) " entry ", Var_82, &Var_83);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), *STATE_VARIABLE_N_26, &Var_86);
      mercury__string__builder__append_string_3_p_0(Var_86, Var_83, &Var_85);
      mercury__string__builder__append_string_3_p_0((MR_String) " value (", Var_85, &Var_93);
      mercury__string__builder__append_string_3_p_0(DetismStr_24, Var_93, &Var_95);
      mercury__string__builder__append_string_3_p_0((MR_String) "):\n", Var_95, &STATE_VARIABLE_State_4_48);
      hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_12, Lang_13, InstSizeLimit_16, Inst_22, STATE_VARIABLE_State_4_48, STATE_VARIABLE_State_28);
    }
  }
  else
    *STATE_VARIABLE_State_28 = STATE_VARIABLE_State_0_27;
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table____Compare____maybe_use_error_msg_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_mode_table_entry_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word ModeDefn_6,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_Word ModeName_8 = ((MR_Word) ((MR_hl_field(0, ModeCtor_5, 0))));
  MR_Word InstVarSet_10;
  MR_Word InstParams_11;
  MR_Word ModeBody_12;
  MR_Word Status_14;
  MR_Word EqvMode_17;
  MR_String StatusStr_18;
  MR_Word STATE_VARIABLE_State_1_23;
  MR_String Var_25;
  MR_Word STATE_VARIABLE_State_4_31;
  MR_Word STATE_VARIABLE_State_5_33;
  MR_Word STATE_VARIABLE_State_6_36;
  MR_Word STATE_VARIABLE_State_7_38;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_49;

  Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModeName_8);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n:- mode ", STATE_VARIABLE_State_0_19, &Var_45);
  mercury__string__builder__append_string_3_p_0(Var_25, Var_45, &STATE_VARIABLE_State_1_23);
  InstVarSet_10 = ((MR_Word) ((MR_hl_field(0, ModeDefn_6, 0))));
  InstParams_11 = ((MR_Word) ((MR_hl_field(0, ModeDefn_6, 1))));
  ModeBody_12 = ((MR_Word) ((MR_hl_field(0, ModeDefn_6, 2))));
  Status_14 = ((MR_Word) ((MR_hl_field(0, ModeDefn_6, 4))));
  if ((InstParams_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_4_31 = STATE_VARIABLE_State_1_23;
  else
  {
    MR_Word HeadInstParam_15 = ((MR_Word) ((MR_hl_field(1, InstParams_11, 0))));
    MR_Word TailInstParams_16 = ((MR_Word) ((MR_hl_field(1, InstParams_11, 1))));
    MR_Word STATE_VARIABLE_State_2_28;
    MR_Word STATE_VARIABLE_State_3_29;

    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_28);
    hlds__hlds_out__hlds_out_inst_table__format_inst_params_5_p_0(InstVarSet_10, HeadInstParam_15, TailInstParams_16, STATE_VARIABLE_State_2_28, &STATE_VARIABLE_State_3_29);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_3_29, &STATE_VARIABLE_State_4_31);
  }
  EqvMode_17 = (MR_Word) (ModeBody_12);
  mercury__string__builder__append_string_3_p_0((MR_String) ":\n", STATE_VARIABLE_State_4_31, &STATE_VARIABLE_State_5_33);
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1]), (MR_Integer) 1, InstVarSet_10, EqvMode_17, STATE_VARIABLE_State_5_33, &STATE_VARIABLE_State_6_36);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_6_36, &STATE_VARIABLE_State_7_38);
  StatusStr_18 = hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(Status_14);
  mercury__string__builder__append_string_3_p_0((MR_String) "% status ", STATE_VARIABLE_State_7_38, &Var_47);
  mercury__string__builder__append_string_3_p_0(StatusStr_18, Var_47, &Var_49);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_49, STATE_VARIABLE_State_20);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_any_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word AnyInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(0, AnyInstInfo_10, 0))));
  MR_Word Uniq_13 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_14 = ((((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_15 = ((MR_Unsigned) ((MR_hl_field(0, AnyInstInfo_10, 1))) & (MR_Integer) 1);
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Word STATE_VARIABLE_State_1_20;
  MR_Word STATE_VARIABLE_State_6_26;

  switch (Uniq_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__string__builder__append_string_3_p_0((MR_String) "clobbered", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 4:
      mercury__string__builder__append_string_3_p_0((MR_String) "mostly_clobbered", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 2:
      mercury__string__builder__append_string_3_p_0((MR_String) "mostly_unique ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "shared ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "unique ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
  }
  switch (Live_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "dead ", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_6_26);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "live ", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_6_26);
      break;
  }
  switch (Real_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "fake unify\n", STATE_VARIABLE_State_6_26, &STATE_VARIABLE_State_1_18);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "real unify\n", STATE_VARIABLE_State_6_26, &STATE_VARIABLE_State_1_18);
      break;
  }
  hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstName_12, STATE_VARIABLE_State_1_18, STATE_VARIABLE_State_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_ground_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word GroundInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(0, GroundInstInfo_10, 0))));
  MR_Word Uniq_13 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, 1))) >> 2)) & (MR_Integer) 7);
  MR_Word Live_14 = ((((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_15 = ((MR_Unsigned) ((MR_hl_field(0, GroundInstInfo_10, 1))) & (MR_Integer) 1);
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Word STATE_VARIABLE_State_1_20;
  MR_Word STATE_VARIABLE_State_6_26;

  switch (Uniq_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      mercury__string__builder__append_string_3_p_0((MR_String) "clobbered", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 4:
      mercury__string__builder__append_string_3_p_0((MR_String) "mostly_clobbered", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 2:
      mercury__string__builder__append_string_3_p_0((MR_String) "mostly_unique ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "shared ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "unique ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_20);
      break;
  }
  switch (Live_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "dead ", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_6_26);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "live ", STATE_VARIABLE_State_1_20, &STATE_VARIABLE_State_6_26);
      break;
  }
  switch (Real_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "fake unify\n", STATE_VARIABLE_State_6_26, &STATE_VARIABLE_State_1_18);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "real unify\n", STATE_VARIABLE_State_6_26, &STATE_VARIABLE_State_1_18);
      break;
  }
  hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstName_12, STATE_VARIABLE_State_1_18, STATE_VARIABLE_State_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word InstName_10,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25)
{
  MR_bool succeeded;

  if ((MaybeUseErrorMsgInst_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstNameTerm_49;
    MR_Word InstVarSet_50;
    MR_Word STATE_VARIABLE_State_1_53;

    InstNameTerm_49 = parse_tree__parse_tree_to_term__inst_name_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, InstName_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InstVarSet_50);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1]), InstVarSet_50, (MR_Integer) 0, InstNameTerm_49, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_1_53);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_1_53, STATE_VARIABLE_State_25);
  }
  else
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeUseErrorMsgInst_7, 0))));
    MR_Word TVarSet_13;
    MR_Word InstVarSet_14;
    MR_Word InstNamePieces_19;
    MR_Word InstNameLines_20;
    MR_Word Var_32;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_14);
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (TVarSet_13));
    }
    InstNamePieces_19 = hlds__error_msg_inst__error_msg_inst_name_10_f_0(ModuleInfo_12, InstVarSet_14, (MR_Integer) 1, Var_32, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0])), InstName_10);
    InstNameLines_20 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstNamePieces_19);
    succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 80, InstNameLines_20);
    if (succeeded)
    {
      MR_String ShortInstNameStr_21;
      MR_Word Var_47;

      ShortInstNameStr_21 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstNameLines_20);
      mercury__string__builder__append_string_3_p_0(ShortInstNameStr_21, STATE_VARIABLE_State_0_24, &Var_47);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_47, STATE_VARIABLE_State_25);
    }
    else
    {
      MR_String LongInstNameStr_23;

      LongInstNameStr_23 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0((MR_String) "", InstNameLines_20);
      mercury__string__builder__append_string_3_p_0(LongInstNameStr_23, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_merge_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word MergeInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word InstA_12 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_10, 0))));
  MR_Word InstB_13 = ((MR_Word) ((MR_hl_field(0, MergeInstInfo_10, 1))));
  MR_Word STATE_VARIABLE_State_1_17;
  MR_Word STATE_VARIABLE_State_2_18;
  MR_Word STATE_VARIABLE_State_3_20;

  mercury__string__builder__append_string_3_p_0((MR_String) "InstA: ", STATE_VARIABLE_State_0_14, &STATE_VARIABLE_State_1_17);
  hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstA_12, STATE_VARIABLE_State_1_17, &STATE_VARIABLE_State_2_18);
  mercury__string__builder__append_string_3_p_0((MR_String) "InstB: ", STATE_VARIABLE_State_2_18, &STATE_VARIABLE_State_3_20);
  hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstB_13, STATE_VARIABLE_State_3_20, STATE_VARIABLE_State_15);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_key_unify_inst_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word UnifyInstInfo_10,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  MR_Word Live_12 = ((((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_10, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Real_13 = ((MR_Unsigned) ((MR_hl_field(0, UnifyInstInfo_10, 0))) & (MR_Integer) 1);
  MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_10, 1))));
  MR_Word InstB_15 = ((MR_Word) ((MR_hl_field(0, UnifyInstInfo_10, 2))));
  MR_Word STATE_VARIABLE_State_1_19;
  MR_Word STATE_VARIABLE_State_3_23;
  MR_Word STATE_VARIABLE_State_5_27;
  MR_Word STATE_VARIABLE_State_6_28;
  MR_Word STATE_VARIABLE_State_7_30;

  switch (Live_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "dead ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_19);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "live ", STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_1_19);
      break;
  }
  switch (Real_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "fake unify\n", STATE_VARIABLE_State_1_19, &STATE_VARIABLE_State_3_23);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "real unify\n", STATE_VARIABLE_State_1_19, &STATE_VARIABLE_State_3_23);
      break;
  }
  mercury__string__builder__append_string_3_p_0((MR_String) "InstA: ", STATE_VARIABLE_State_3_23, &STATE_VARIABLE_State_5_27);
  hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstA_14, STATE_VARIABLE_State_5_27, &STATE_VARIABLE_State_6_28);
  mercury__string__builder__append_string_3_p_0((MR_String) "InstB: ", STATE_VARIABLE_State_6_28, &STATE_VARIABLE_State_7_30);
  hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(MaybeUseErrorMsgInst_7, Lang_8, InstSizeLimit_9, InstB_15, STATE_VARIABLE_State_7_30, STATE_VARIABLE_State_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_entry_6_p_0(
  MR_Word MaybeUseErrorMsgInst_7,
  MR_Word Lang_8,
  MR_Integer InstSizeLimit_9,
  MR_Word Inst_10,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25)
{
  MR_bool succeeded;

  if ((MaybeUseErrorMsgInst_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstTerm_49;
    MR_Word InstVarSet_50;
    MR_Word STATE_VARIABLE_State_1_53;

    InstTerm_49 = parse_tree__parse_tree_to_term__inst_to_limited_size_term_3_f_0(Lang_8, InstSizeLimit_9, Inst_10);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &InstVarSet_50);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1]), InstVarSet_50, (MR_Integer) 0, InstTerm_49, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_1_53);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_1_53, STATE_VARIABLE_State_25);
  }
  else
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeUseErrorMsgInst_7, 0))));
    MR_Word TVarSet_13;
    MR_Word InstVarSet_14;
    MR_Word InstPieces_19;
    MR_Word InstLines_20;
    MR_Word Var_32;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_14);
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (TVarSet_13));
    }
    InstPieces_19 = hlds__error_msg_inst__error_msg_inst_10_f_0(ModuleInfo_12, InstVarSet_14, (MR_Integer) 1, Var_32, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_inst_table_scalar_common_5[0])), Inst_10);
    InstLines_20 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstPieces_19);
    succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 80, InstLines_20);
    if (succeeded)
    {
      MR_String ShortInstStr_21;
      MR_Word Var_47;

      ShortInstStr_21 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstLines_20);
      mercury__string__builder__append_string_3_p_0(ShortInstStr_21, STATE_VARIABLE_State_0_24, &Var_47);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_47, STATE_VARIABLE_State_25);
    }
    else
    {
      MR_String LongInstStr_23;

      LongInstStr_23 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0((MR_String) "", InstLines_20);
      mercury__string__builder__append_string_3_p_0(LongInstStr_23, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_user_inst_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_Word InstCtor_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word InstDefn_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word InstName_7 = ((MR_Word) ((MR_hl_field(0, InstCtor_4, 0))));
  MR_Word InstVarSet_9;
  MR_Word InstParams_10;
  MR_Word InstBody_11;
  MR_Word Status_14;
  MR_Word EqvInst_17;
  MR_String StatusStr_18;
  MR_Word STATE_VARIABLE_State_1_23;
  MR_String Var_25;
  MR_Word STATE_VARIABLE_State_4_31;
  MR_Word STATE_VARIABLE_State_5_33;
  MR_Word STATE_VARIABLE_State_6_36;
  MR_Word STATE_VARIABLE_State_7_38;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_49;

  Var_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(InstName_7);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n:- inst ", STATE_VARIABLE_State_0_19, &Var_45);
  mercury__string__builder__append_string_3_p_0(Var_25, Var_45, &STATE_VARIABLE_State_1_23);
  InstVarSet_9 = ((MR_Word) ((MR_hl_field(0, InstDefn_5, 0))));
  InstParams_10 = ((MR_Word) ((MR_hl_field(0, InstDefn_5, 1))));
  InstBody_11 = ((MR_Word) ((MR_hl_field(0, InstDefn_5, 2))));
  Status_14 = ((MR_Word) ((MR_hl_field(0, InstDefn_5, 5))));
  if ((InstParams_10 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_4_31 = STATE_VARIABLE_State_1_23;
  else
  {
    MR_Word HeadInstParam_15 = ((MR_Word) ((MR_hl_field(1, InstParams_10, 0))));
    MR_Word TailInstParams_16 = ((MR_Word) ((MR_hl_field(1, InstParams_10, 1))));
    MR_Word STATE_VARIABLE_State_2_28;
    MR_Word STATE_VARIABLE_State_3_29;

    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_1_23, &STATE_VARIABLE_State_2_28);
    hlds__hlds_out__hlds_out_inst_table__format_inst_params_5_p_0(InstVarSet_9, HeadInstParam_15, TailInstParams_16, STATE_VARIABLE_State_2_28, &STATE_VARIABLE_State_3_29);
    mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_3_29, &STATE_VARIABLE_State_4_31);
  }
  EqvInst_17 = (MR_Word) (InstBody_11);
  mercury__string__builder__append_string_3_p_0((MR_String) ":\n", STATE_VARIABLE_State_4_31, &STATE_VARIABLE_State_5_33);
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_2[1]), (MR_Integer) 1, InstVarSet_9, EqvInst_17, STATE_VARIABLE_State_5_33, &STATE_VARIABLE_State_6_36);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_6_36, &STATE_VARIABLE_State_7_38);
  StatusStr_18 = hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(Status_14);
  mercury__string__builder__append_string_3_p_0((MR_String) "% status ", STATE_VARIABLE_State_7_38, &Var_47);
  mercury__string__builder__append_string_3_p_0(StatusStr_18, Var_47, &Var_49);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_49, STATE_VARIABLE_State_20);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_params_5_p_0(
  MR_Word InstVarSet_6,
  MR_Word InstVar_7,
  MR_Word InstVars_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  while (MR_TRUE)
  {
    MR_String InstVarName_10;
    MR_Word STATE_VARIABLE_State_1_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_6, InstVar_7, &InstVarName_10);
    mercury__string__builder__append_string_3_p_0(InstVarName_10, STATE_VARIABLE_State_0_13, &STATE_VARIABLE_State_1_15);
    if ((InstVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_14 = STATE_VARIABLE_State_1_15;
    else
    {
      MR_Word HeadInstVar_11 = ((MR_Word) ((MR_hl_field(1, InstVars_8, 0))));
      MR_Word TailInstVars_12 = ((MR_Word) ((MR_hl_field(1, InstVars_8, 1))));
      MR_Word STATE_VARIABLE_State_2_17;
      MR_Word next_value_of_InstVar_7;
      MR_Word next_value_of_InstVars_8;
      MR_Word next_value_of_STATE_VARIABLE_State_0_13;

      mercury__string__builder__append_string_3_p_0((MR_String) ", ", STATE_VARIABLE_State_1_15, &STATE_VARIABLE_State_2_17);
      // direct tailcall eliminated
      ;
      next_value_of_InstVar_7 = HeadInstVar_11;
      next_value_of_InstVars_8 = TailInstVars_12;
      next_value_of_STATE_VARIABLE_State_0_13 = STATE_VARIABLE_State_2_17;
      InstVar_7 = next_value_of_InstVar_7;
      InstVars_8 = next_value_of_InstVars_8;
      STATE_VARIABLE_State_0_13 = next_value_of_STATE_VARIABLE_State_0_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0(
  MR_Word Stream_5,
  MR_Word ModeTable_6)
{
  MR_Word State0_8;
  MR_Word State_9;
  MR_String Str_10;

  State0_8 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0(ModeTable_6, State0_8, &State_9);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_9);
  mercury__io__write_string_4_p_0(Stream_5, Str_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_20;

  hlds__hlds_out__hlds_out_inst_table__format_mode_table_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_20);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_20));
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0(
  MR_Word ModeTable_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  MR_Word ModeDefns_6;
  MR_Word STATE_VARIABLE_State_1_10;
  MR_Word STATE_VARIABLE_State_2_12;
  MR_Box conv1_STATE_VARIABLE_State_2_12;

  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_4, &ModeDefns_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Modes --------\n", STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_1_10);
  mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[14]), ModeDefns_6, ((MR_Box) (STATE_VARIABLE_State_1_10)), &conv1_STATE_VARIABLE_State_2_12);
  STATE_VARIABLE_State_2_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_2_12));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_2_12, STATE_VARIABLE_State_8);
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
  MR_Word State0_16;
  MR_Word State_17;
  MR_String Str_18;

  State0_16 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0(Lang_10, MaybeUseErrorMsgInst_11, InstNumLimit_12, InstSizeLimit_13, InstTable_14, State0_16, &State_17);
  Str_18 = mercury__string__builder__to_string_1_f_0(State_17);
  mercury__io__write_string_4_p_0(Stream_9, Str_18);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv29_HeadVar__9_190;
  MR_Word conv28_HeadVar__11_192;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__144__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv29_HeadVar__9_190, ((MR_Word) (wrapper_arg_4)), &conv28_HeadVar__11_192);
  *wrapper_arg_3 = ((MR_Box) (conv29_HeadVar__9_190));
  *wrapper_arg_5 = ((MR_Box) (conv28_HeadVar__11_192));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_STATE_VARIABLE_State_25;

  hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv27_STATE_VARIABLE_State_25);
  *wrapper_arg_6 = ((MR_Box) (conv27_STATE_VARIABLE_State_25));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv24_HeadVar__9_177;
  MR_Word conv23_HeadVar__11_179;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__135__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv24_HeadVar__9_177, ((MR_Word) (wrapper_arg_4)), &conv23_HeadVar__11_179);
  *wrapper_arg_3 = ((MR_Box) (conv24_HeadVar__9_177));
  *wrapper_arg_5 = ((MR_Box) (conv23_HeadVar__11_179));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_State_25;

  hlds__hlds_out__hlds_out_inst_table__format_inst_name_nl_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_State_25);
  *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_State_25));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv19_HeadVar__9_164;
  MR_Word conv18_HeadVar__11_166;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__126__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv19_HeadVar__9_164, ((MR_Word) (wrapper_arg_4)), &conv18_HeadVar__11_166);
  *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__9_164));
  *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__11_166));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_State_17;

  hlds__hlds_out__hlds_out_inst_table__format_key_any_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv17_STATE_VARIABLE_State_17);
  *wrapper_arg_6 = ((MR_Box) (conv17_STATE_VARIABLE_State_17));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv14_HeadVar__9_151;
  MR_Word conv13_HeadVar__11_153;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__117__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv14_HeadVar__9_151, ((MR_Word) (wrapper_arg_4)), &conv13_HeadVar__11_153);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__9_151));
  *wrapper_arg_5 = ((MR_Box) (conv13_HeadVar__11_153));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_State_17;

  hlds__hlds_out__hlds_out_inst_table__format_key_ground_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_State_17);
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_State_17));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv9_HeadVar__9_138;
  MR_Word conv8_HeadVar__11_140;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__108__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv9_HeadVar__9_138, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__11_140);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__9_138));
  *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__11_140));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_State_15;

  hlds__hlds_out__hlds_out_inst_table__format_key_merge_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv7_STATE_VARIABLE_State_15);
  *wrapper_arg_6 = ((MR_Box) (conv7_STATE_VARIABLE_State_15));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_HeadVar__9_124;
  MR_Word conv3_HeadVar__11_126;

  hlds__hlds_out__hlds_out_inst_table__IntroducedFrom__pred__format_inst_table__99__1_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv4_HeadVar__9_124, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__11_126);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__9_124));
  *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__11_126));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_17;

  hlds__hlds_out__hlds_out_inst_table__format_key_unify_inst_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_State_17);
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_State_17));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_20;

  hlds__hlds_out__hlds_out_inst_table__format_user_inst_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_20));
}

void MR_CALL 
hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0(
  MR_Word Lang_8,
  MR_Word MaybeUseErrorMsgInst_9,
  MR_Integer InstNumLimit_10,
  MR_Integer InstSizeLimit_11,
  MR_Word InstTable_12,
  MR_Word STATE_VARIABLE_State_0_34,
  MR_Word * STATE_VARIABLE_State_35)
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
  MR_Word STATE_VARIABLE_State_1_37;
  MR_Word STATE_VARIABLE_State_2_39;
  MR_Word STATE_VARIABLE_State_3_41;
  MR_Word STATE_VARIABLE_State_4_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_State_5_46;
  MR_Word STATE_VARIABLE_State_6_51;
  MR_Word STATE_VARIABLE_State_7_55;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_State_8_58;
  MR_Word STATE_VARIABLE_State_9_63;
  MR_Word STATE_VARIABLE_State_10_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_State_11_70;
  MR_Word STATE_VARIABLE_State_12_75;
  MR_Word STATE_VARIABLE_State_13_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_State_14_82;
  MR_Word STATE_VARIABLE_State_15_87;
  MR_Word STATE_VARIABLE_State_16_91;
  MR_Word Var_92;
  MR_Word STATE_VARIABLE_State_17_94;
  MR_Word STATE_VARIABLE_State_18_99;
  MR_Word STATE_VARIABLE_State_19_103;
  MR_Word Var_104;
  MR_Word STATE_VARIABLE_State_20_106;
  MR_Word STATE_VARIABLE_State_21_111;
  MR_Word Var_200;
  MR_Word Var_202;
  MR_String Var_203;
  MR_Word Var_211;
  MR_Word Var_213;
  MR_String Var_214;
  MR_Word Var_222;
  MR_Word Var_224;
  MR_String Var_225;
  MR_Word Var_233;
  MR_Word Var_235;
  MR_String Var_236;
  MR_Word Var_244;
  MR_Word Var_246;
  MR_String Var_247;
  MR_Word Var_255;
  MR_Word Var_257;
  MR_String Var_258;
  MR_Box conv1_STATE_VARIABLE_State_3_41;
  MR_Box conv6_NumUnifyInsts_28;
  MR_Box conv5_STATE_VARIABLE_State_5_46;
  MR_Box conv11_NumMergeInsts_29;
  MR_Box conv10_STATE_VARIABLE_State_8_58;
  MR_Box conv16_NumGroundInsts_30;
  MR_Box conv15_STATE_VARIABLE_State_11_70;
  MR_Box conv21_NumAnyInsts_31;
  MR_Box conv20_STATE_VARIABLE_State_14_82;
  MR_Box conv26_NumSharedInsts_32;
  MR_Box conv25_STATE_VARIABLE_State_17_94;
  MR_Box conv31_NumMostlyUniqInsts_33;
  MR_Box conv30_STATE_VARIABLE_State_20_106;

  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Insts --------\n", STATE_VARIABLE_State_0_34, &STATE_VARIABLE_State_1_37);
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
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- User defined insts --------\n", STATE_VARIABLE_State_1_37, &STATE_VARIABLE_State_2_39);
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[0]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[7]), UserInstPairs_21, ((MR_Box) (STATE_VARIABLE_State_2_39)), &conv1_STATE_VARIABLE_State_3_41);
  STATE_VARIABLE_State_3_41 = ((MR_Word) (conv1_STATE_VARIABLE_State_3_41));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- Unify insts --------\n", STATE_VARIABLE_State_3_41, &STATE_VARIABLE_State_4_43);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_3));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_44, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_44, 7) = ((MR_Box) ((MR_String) "Unify"));
    MR_hl_field(0, Var_44, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[8]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_44, UnifyInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &conv6_NumUnifyInsts_28, ((MR_Box) (STATE_VARIABLE_State_4_43)), &conv5_STATE_VARIABLE_State_5_46);
  NumUnifyInsts_28 = ((MR_Integer) (conv6_NumUnifyInsts_28));
  STATE_VARIABLE_State_5_46 = ((MR_Word) (conv5_STATE_VARIABLE_State_5_46));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of unify insts: ", STATE_VARIABLE_State_5_46, &Var_200);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumUnifyInsts_28, &Var_203);
  mercury__string__builder__append_string_3_p_0(Var_203, Var_200, &Var_202);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_202, &STATE_VARIABLE_State_6_51);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- Merge insts --------\n", STATE_VARIABLE_State_6_51, &STATE_VARIABLE_State_7_55);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[1]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_5));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_56, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_56, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_56, 7) = ((MR_Box) ((MR_String) "Merge"));
    MR_hl_field(0, Var_56, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[9]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_56, MergeInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &conv11_NumMergeInsts_29, ((MR_Box) (STATE_VARIABLE_State_7_55)), &conv10_STATE_VARIABLE_State_8_58);
  NumMergeInsts_29 = ((MR_Integer) (conv11_NumMergeInsts_29));
  STATE_VARIABLE_State_8_58 = ((MR_Word) (conv10_STATE_VARIABLE_State_8_58));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of merge insts: ", STATE_VARIABLE_State_8_58, &Var_211);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumMergeInsts_29, &Var_214);
  mercury__string__builder__append_string_3_p_0(Var_214, Var_211, &Var_213);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_213, &STATE_VARIABLE_State_9_63);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- Ground insts --------\n", STATE_VARIABLE_State_9_63, &STATE_VARIABLE_State_10_67);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[2]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_7));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_68, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_68, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_68, 7) = ((MR_Box) ((MR_String) "Ground"));
    MR_hl_field(0, Var_68, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[10]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_68, GroundInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &conv16_NumGroundInsts_30, ((MR_Box) (STATE_VARIABLE_State_10_67)), &conv15_STATE_VARIABLE_State_11_70);
  NumGroundInsts_30 = ((MR_Integer) (conv16_NumGroundInsts_30));
  STATE_VARIABLE_State_11_70 = ((MR_Word) (conv15_STATE_VARIABLE_State_11_70));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of ground insts: ", STATE_VARIABLE_State_11_70, &Var_222);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumGroundInsts_30, &Var_225);
  mercury__string__builder__append_string_3_p_0(Var_225, Var_222, &Var_224);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_224, &STATE_VARIABLE_State_12_75);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- Any insts --------\n", STATE_VARIABLE_State_12_75, &STATE_VARIABLE_State_13_79);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[3]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_9));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_80, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_80, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_80, 7) = ((MR_Box) ((MR_String) "Any"));
    MR_hl_field(0, Var_80, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[11]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_80, AnyInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &conv21_NumAnyInsts_31, ((MR_Box) (STATE_VARIABLE_State_13_79)), &conv20_STATE_VARIABLE_State_14_82);
  NumAnyInsts_31 = ((MR_Integer) (conv21_NumAnyInsts_31));
  STATE_VARIABLE_State_14_82 = ((MR_Word) (conv20_STATE_VARIABLE_State_14_82));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of any insts: ", STATE_VARIABLE_State_14_82, &Var_233);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumAnyInsts_31, &Var_236);
  mercury__string__builder__append_string_3_p_0(Var_236, Var_233, &Var_235);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_235, &STATE_VARIABLE_State_15_87);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- Shared insts --------\n", STATE_VARIABLE_State_15_87, &STATE_VARIABLE_State_16_91);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[4]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_11));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_92, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_92, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_92, 7) = ((MR_Box) ((MR_String) "Shared"));
    MR_hl_field(0, Var_92, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[12]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_92, SharedInstPairs_26, ((MR_Box) ((MR_Integer) 0)), &conv26_NumSharedInsts_32, ((MR_Box) (STATE_VARIABLE_State_16_91)), &conv25_STATE_VARIABLE_State_17_94);
  NumSharedInsts_32 = ((MR_Integer) (conv26_NumSharedInsts_32));
  STATE_VARIABLE_State_17_94 = ((MR_Word) (conv25_STATE_VARIABLE_State_17_94));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of shared insts: ", STATE_VARIABLE_State_17_94, &Var_244);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumSharedInsts_32, &Var_247);
  mercury__string__builder__append_string_3_p_0(Var_247, Var_244, &Var_246);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_246, &STATE_VARIABLE_State_18_99);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n%-------- MostlyUniq insts --------\n", STATE_VARIABLE_State_18_99, &STATE_VARIABLE_State_19_103);
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_8[4]));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0_13));
    MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_104, 3) = ((MR_Box) (Lang_8));
    MR_hl_field(0, Var_104, 4) = ((MR_Box) (MaybeUseErrorMsgInst_9));
    MR_hl_field(0, Var_104, 5) = ((MR_Box) (InstNumLimit_10));
    MR_hl_field(0, Var_104, 6) = ((MR_Box) (InstSizeLimit_11));
    MR_hl_field(0, Var_104, 7) = ((MR_Box) ((MR_String) "MostlyUniq"));
    MR_hl_field(0, Var_104, 8) = ((MR_Box) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[13]));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_104, MostlyUniqInstPairs_27, ((MR_Box) ((MR_Integer) 0)), &conv31_NumMostlyUniqInsts_33, ((MR_Box) (STATE_VARIABLE_State_19_103)), &conv30_STATE_VARIABLE_State_20_106);
  NumMostlyUniqInsts_33 = ((MR_Integer) (conv31_NumMostlyUniqInsts_33));
  STATE_VARIABLE_State_20_106 = ((MR_Word) (conv30_STATE_VARIABLE_State_20_106));
  mercury__string__builder__append_string_3_p_0((MR_String) "\nTotal number of mostly uniq insts: ", STATE_VARIABLE_State_20_106, &Var_255);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_inst_table_scalar_common_4[0]), NumMostlyUniqInsts_33, &Var_258);
  mercury__string__builder__append_string_3_p_0(Var_258, Var_255, &Var_257);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_257, &STATE_VARIABLE_State_21_111);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_21_111, STATE_VARIABLE_State_35);
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
