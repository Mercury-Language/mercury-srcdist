/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2023-08-30
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


// :- module hlds.error_msg_inst.
// :- implementation.

/*
INIT mercury__hlds__error_msg_inst__init
ENDINIT
*/

#include "hlds.error_msg_inst.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
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
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0[2];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0[1];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3];

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[3];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_inline_pieces_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_inline_pieces_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_inline_pieces_0[2];

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0;

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1;

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0[2];

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2];

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word tscc_proc_1_input_1_Info_8,
  MR_Word tscc_proc_1_input_2_Inst_10,
  MR_Word tscc_proc_1_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word tscc_proc_2_input_1_Info_8,
  MR_Word tscc_proc_2_input_2_InstName_10,
  MR_Word tscc_proc_2_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadBoundInst_11,
  MR_Word TailBoundInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadInst_11,
  MR_Word TailInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_21,
  MR_Word * STATE_VARIABLE_Expansions_22);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_String Name_11,
  MR_Word ArgInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word Info_8,
  MR_Word ModeName_10,
  MR_Word ArgInsts_11,
  MR_Word * Pieces_12,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_String AnyPrefix_11,
  MR_Word Uniq_12,
  MR_Word PredInstInfo_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_33,
  MR_Word * STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word tscc_proc_1_input_1_Info_8,
  MR_Word tscc_proc_1_input_2_Inst_10,
  MR_Word tscc_proc_1_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word tscc_proc_2_input_1_Info_8,
  MR_Word tscc_proc_2_input_2_InstName_10,
  MR_Word tscc_proc_2_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadBoundInst_11,
  MR_Word TailBoundInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadInst_11,
  MR_Word TailInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_21,
  MR_Word * STATE_VARIABLE_Expansions_22);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_String Name_11,
  MR_Word ArgInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word ModeName_10,
  MR_Word ArgInsts_11,
  MR_Word * Pieces_12,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_String AnyPrefix_11,
  MR_Word Uniq_12,
  MR_Word PredInstInfo_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_33,
  MR_Word * STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word InstName_6,
  MR_String InstNameStr_7,
  MR_Word * InstNumPieces_8,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17);

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word InstName_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12);

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6);

static void MR_CALL 
hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_String * SymNameStr_6);

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word Pieces_4,
  MR_Integer Left_5,
  MR_String * Summary_6);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[22][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[17][1];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[22][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__error_msg_inst_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[17][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ")")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "(")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "=<")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "free")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "not_reached")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ";")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "\044any_inst")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "\044ground_inst")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "\044merge_inst")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "\044mostly_uniq_inst")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "\044shared_inst")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "\044unify_inst")) },
  /* row  12 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "/*")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "*/")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) ") =")) },
  /* row  16 */
  { ((MR_Box) ((MR_String) ">>")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_TypeInfo) (&hlds__error_msg_inst__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_name_0list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0[2] = {
  (MR_String) "ei_seen_inst_names",
  (MR_String) "ei_inst_num_counter"
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 = {
  (MR_String) "expansions_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_expansions_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_expansions_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 };

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_expansions_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_expansions_info_0_0 };

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_expansions_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____expansions_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____expansions_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "expansions_info",
  { hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_expansions_info_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_expansions_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_expansions_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[3] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_named_insts"
};

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0,
  hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 };

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_inst_msg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 };

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "inst_msg_info",
  { hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_inst_msg_info_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_inst_msg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_inst_msg_info_0,

};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0 = {
  (MR_String) "dont_expand_named_insts",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1 = {
  (MR_String) "expand_named_insts",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_expand_named_insts_0_1
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_expand_named_insts",
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_expand_named_insts_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_expand_named_insts_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_expand_named_insts_0,

};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_0 = {
  (MR_String) "multi_line_pieces",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_1 = {
  (MR_String) "inline_pieces",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_inline_pieces_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_inline_pieces_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_maybe_inline_pieces_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_inline_pieces_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_inline_pieces_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "maybe_inline_pieces",
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_maybe_inline_pieces_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_maybe_inline_pieces_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_maybe_inline_pieces_0,

};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0 = {
  (MR_String) "quote_short_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1 = {
  (MR_String) "fixed_short_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1
};

static const MR_EnumFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__enum_functor_desc_short_inst_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__error_msg_inst____Unify____short_inst_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____short_inst_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "short_inst",
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_name_ordered_short_inst_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__enum_ordinal_ordered_short_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_short_inst_0,

};

void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_8_f_0(
  MR_Word ModuleInfo_10,
  MR_Word InstVarSet_11,
  MR_Word ExpandNamedInsts_12,
  MR_Word QuoteShortInst_13,
  MR_Word ShortInstSuffix_14,
  MR_Word LongInstPrefix_15,
  MR_Word LongInstSuffix_16,
  MR_Word Inst0_17)
{
  MR_bool succeeded;
  MR_Word Pieces_18;
  MR_Word Info_19;
  MR_Word Inst_20;
  MR_Word Expansions0_21;
  MR_Word InlinePieces_23;
  MR_String InlineStr_25;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word _InlineExpansions_24;
  MR_Integer Len_26;

  {
    Info_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_19, 0) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Info_19, 1) = ((MR_Box) (InstVarSet_11));
    MR_hl_field(0, Info_19, 2) = (MR_Box) ((MR_Unsigned) (ExpandNamedInsts_12));
  }
  parse_tree__prog_mode__strip_module_names_from_inst_3_p_0((MR_Integer) 0, Inst0_17, &Inst_20);
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]));
  Var_32 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    Expansions0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Expansions0_21, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, Expansions0_21, 1) = ((MR_Box) (Var_32));
  }
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_19, Inst_20, (MR_Word) ((MR_Unsigned) 0U), &InlinePieces_23, Expansions0_21, &_InlineExpansions_24);
  InlineStr_25 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(InlinePieces_23);
  mercury__string__length_2_p_0(InlineStr_25, &Len_26);
  succeeded = (Len_26 < (MR_Integer) 40);
  if (succeeded)
  {
    MR_Word InlinePiece_27;

    switch (QuoteShortInst_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InlinePiece_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, InlinePiece_27, 0) = ((MR_Box) (InlineStr_25));
        }
        break;
      case (MR_Integer) 0:
        {
          InlinePiece_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InlinePiece_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InlinePiece_27, 1) = ((MR_Box) (InlineStr_25));
        }
        break;
    }
    {
      Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (InlinePiece_27));
      MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (ShortInstSuffix_14));
    }
  }
  else
  {
    MR_Word MultiLinePieces_28;
    MR_Word _MultiLineExpansions_29;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_19, Inst_20, LongInstSuffix_16, &MultiLinePieces_28, Expansions0_21, &_MultiLineExpansions_29);
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LongInstPrefix_15, MultiLinePieces_28);
  }
  return Pieces_18;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word tscc_proc_1_input_1_Info_8,
  MR_Word tscc_proc_1_input_2_Inst_10,
  MR_Word tscc_proc_1_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34)
{
  MR_Word tscc_proc_2_input_1_Info_8;
  MR_Word tscc_proc_2_input_2_InstName_10;
  MR_Word tscc_proc_2_input_3_Suffix_11;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
  MR_Word tscc_output_1_Pieces_12;
  MR_Word tscc_output_2_STATE_VARIABLE_Expansions_34;

  // The code for TSCC PROC 1: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_1/7-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_1/7-1
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_1/7-1
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_8 = tscc_proc_1_input_1_Info_8;
    MR_Word Inst_10 = tscc_proc_1_input_2_Inst_10;
    MR_Word Suffix_11 = tscc_proc_1_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
    MR_Word STATE_VARIABLE_Expansions_34;

    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, (MR_Integer) 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_24;
            MR_Word Var_64;

            Str_24 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_88, (MR_String) "ground");
            {
              Var_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_64, 0) = ((MR_Box) (Str_24));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            MR_Word HOPieces_23;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, (MR_String) "", Uniq_88, PredInstInfo_22, &HOPieces_23, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_23, Suffix_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, (MR_Integer) 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_38, 0) = ((MR_Box) (BoundName_17));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 0))));
            MR_Word TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_String Var_56;
            MR_Word Var_58;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, HeadBoundInst_18, TailBoundInsts_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_56 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Suffix_11));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (Names_30));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (SubInstPieces_31));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (Suffix_11));
              }
              Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_82);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));

              if ((HOInstInfo_96 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_67;
                MR_String Str_91;

                Str_91 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_95);
                {
                  Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_67, 0) = ((MR_Box) (Str_91));
                }
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              else
              {
                MR_Word PredInstInfo_89 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_96), (MR_Integer) 1));
                MR_Word HOPieces_90;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, (MR_String) "any_", Uniq_95, PredInstInfo_89, &HOPieces_90, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_90, Suffix_11);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_String Name_27;
              MR_Word Var_69;

              Name_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_26, (MR_Integer) 0, Var_25);
              {
                Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_69, 0) = ((MR_Box) (Name_27));
              }
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
    }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_8 = tscc_proc_2_input_1_Info_8;
    MR_Word InstName_10 = tscc_proc_2_input_2_InstName_10;
    MR_Word Suffix_11 = tscc_proc_2_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_74 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
    MR_Word STATE_VARIABLE_Expansions_75;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_74, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_164;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_164));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_24);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word InstDefn_25;
              MR_Box conv0_InstDefn_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_21, ((MR_Box) (InstCtor_23)), &conv0_InstDefn_25);
              if (succeeded)
              {
                InstDefn_25 = ((MR_Word) (conv0_InstDefn_25));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_26;
                MR_Word NamedNamePieces_28;
                MR_Word ExpandInsts_29;
                MR_Word Var_27;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_74, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_80_80;
                      MR_Word Var_189;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_80_80);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_189 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_189);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_80_80;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_95;
                        MR_Word Var_96;
                        MR_Word Var_99;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_80_80, &STATE_VARIABLE_Expansions_75);
                        {
                          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(1, Var_99, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                          MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
                        }
                        Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[15])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_95);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_183_183;
                MR_Word TypeCtorInfo_184_184;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_106;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, (MR_Integer) 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_183_183 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_184_184 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_183_183, TypeCtorInfo_184_184, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_147;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_147, STATE_VARIABLE_Expansions_0_74, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_147, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_108;
                  MR_String Var_109;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(1, SymName_15, (MR_Integer) 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_109 = ((MR_String) ((MR_hl_field(0, Var_108, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_109, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_148;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_148, STATE_VARIABLE_Expansions_0_74, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_148, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_733;
                    MR_String Var_741;
                    MR_String Var_742;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_22, &Var_733);
                    Var_741 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_733);
                    Var_742 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_741);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_742);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_717 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_718;
            MR_Word EqvSymName_670;
            MR_Word EqvArgInsts_671;
            MR_Word EqvInstName_621;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_717, InstName_10, &EqvInst_718);
            succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_621 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_621)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_670 = ((MR_Word) ((MR_hl_field(0, EqvInstName_621, (MR_Integer) 0))));
                EqvArgInsts_671 = ((MR_Word) ((MR_hl_field(0, EqvInstName_621, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_621);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_630;
              MR_Word NameInfo_633;
              MR_Word Var_623 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_624 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_629;

              {
                NameInfo_633 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_633, 0) = ((MR_Box) (Var_623));
                MR_hl_field(0, NameInfo_633, 1) = ((MR_Box) (Var_624));
                MR_hl_field(0, NameInfo_633, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_670, &EqvSymNameStr_630);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_633, EqvSymNameStr_630, EqvArgInsts_671, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_629);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_637;

              succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_637 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_637);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_639;
                MR_Word STATE_VARIABLE_Expansions_123_640;
                MR_Word Var_641;
                MR_Word Var_642;
                MR_Word Var_645;
                MR_Word Var_648;
                MR_Word EqvPieces_651;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044unify_inst", &InstNumPieces_639, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_640);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_718, Suffix_11, &EqvPieces_651, STATE_VARIABLE_Expansions_123_640, &STATE_VARIABLE_Expansions_75);
                {
                  Var_645 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_645, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                  MR_hl_field(1, Var_645, 1) = ((MR_Box) (EqvPieces_651));
                }
                {
                  Var_642 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_642, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_642, 1) = ((MR_Box) (Var_645));
                }
                {
                  Var_648 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_648, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                  MR_hl_field(1, Var_648, 1) = ((MR_Box) (Suffix_11));
                }
                Var_641 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_642, Var_648);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_639, Var_641);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_396 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_397;
            MR_Word EqvSymName_349;
            MR_Word EqvArgInsts_350;
            MR_Word EqvInstName_300;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_396, InstName_10, &EqvInst_397);
            succeeded = ((((MR_tag((MR_Word) EqvInst_397)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_300 = ((MR_Word) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_300)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_349 = ((MR_Word) ((MR_hl_field(0, EqvInstName_300, (MR_Integer) 0))));
                EqvArgInsts_350 = ((MR_Word) ((MR_hl_field(0, EqvInstName_300, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_300);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_309;
              MR_Word NameInfo_312;
              MR_Word Var_302 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_303 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_308;

              {
                NameInfo_312 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_312, 0) = ((MR_Box) (Var_302));
                MR_hl_field(0, NameInfo_312, 1) = ((MR_Box) (Var_303));
                MR_hl_field(0, NameInfo_312, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_349, &EqvSymNameStr_309);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_312, EqvSymNameStr_309, EqvArgInsts_350, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_308);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_316;

              succeeded = ((((MR_tag((MR_Word) EqvInst_397)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_316 = ((MR_Word) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_316);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_318;
                MR_Word STATE_VARIABLE_Expansions_123_319;
                MR_Word Var_320;
                MR_Word Var_321;
                MR_Word Var_324;
                MR_Word Var_327;
                MR_Word EqvPieces_330;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044merge_inst", &InstNumPieces_318, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_319);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_397, Suffix_11, &EqvPieces_330, STATE_VARIABLE_Expansions_123_319, &STATE_VARIABLE_Expansions_75);
                {
                  Var_324 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_324, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                  MR_hl_field(1, Var_324, 1) = ((MR_Box) (EqvPieces_330));
                }
                {
                  Var_321 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_321, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_321, 1) = ((MR_Box) (Var_324));
                }
                {
                  Var_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_327, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                  MR_hl_field(1, Var_327, 1) = ((MR_Box) (Suffix_11));
                }
                Var_320 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_321, Var_327);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_318, Var_320);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_289 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_290;
                MR_Word EqvSymName_242;
                MR_Word EqvArgInsts_243;
                MR_Word EqvInstName_193;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_289, InstName_10, &EqvInst_290);
                succeeded = ((((MR_tag((MR_Word) EqvInst_290)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_193 = ((MR_Word) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_193)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_242 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 0))));
                    EqvArgInsts_243 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_193);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_202;
                  MR_Word NameInfo_205;
                  MR_Word Var_195 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_201;

                  {
                    NameInfo_205 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_205, 0) = ((MR_Box) (Var_195));
                    MR_hl_field(0, NameInfo_205, 1) = ((MR_Box) (Var_196));
                    MR_hl_field(0, NameInfo_205, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_242, &EqvSymNameStr_202);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_205, EqvSymNameStr_202, EqvArgInsts_243, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_201);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_209;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_290)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_209 = ((MR_Word) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_209);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_211;
                    MR_Word STATE_VARIABLE_Expansions_123_212;
                    MR_Word Var_213;
                    MR_Word Var_214;
                    MR_Word Var_217;
                    MR_Word Var_220;
                    MR_Word EqvPieces_223;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044ground_inst", &InstNumPieces_211, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_212);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_290, Suffix_11, &EqvPieces_223, STATE_VARIABLE_Expansions_123_212, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_217, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_217, 1) = ((MR_Box) (EqvPieces_223));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_214, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_217));
                    }
                    {
                      Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_220, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_220, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_214, Var_220);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_211, Var_213);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_161 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_162;
                MR_Word EqvSymName_69;
                MR_Word EqvArgInsts_70;
                MR_Word EqvInstName_68;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_161, InstName_10, &EqvInst_162);
                succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_68 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_69 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 0))));
                    EqvArgInsts_70 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_68);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_71;
                  MR_Word NameInfo_155;
                  MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_72;

                  {
                    NameInfo_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_155, 0) = ((MR_Box) (Var_172));
                    MR_hl_field(0, NameInfo_155, 1) = ((MR_Box) (Var_173));
                    MR_hl_field(0, NameInfo_155, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_69, &EqvSymNameStr_71);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_155, EqvSymNameStr_71, EqvArgInsts_70, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_72);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_190;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_190 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_190);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_73;
                    MR_Word STATE_VARIABLE_Expansions_123_123;
                    MR_Word Var_137;
                    MR_Word Var_138;
                    MR_Word Var_141;
                    MR_Word Var_144;
                    MR_Word EqvPieces_156;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044any_inst", &InstNumPieces_73, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_123);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_162, Suffix_11, &EqvPieces_156, STATE_VARIABLE_Expansions_123_123, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_141, 1) = ((MR_Box) (EqvPieces_156));
                    }
                    {
                      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
                    }
                    {
                      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_144, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_144, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_144);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_73, Var_137);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_610 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_611;
                MR_Word EqvSymName_563;
                MR_Word EqvArgInsts_564;
                MR_Word EqvInstName_514;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_610, InstName_10, &EqvInst_611);
                succeeded = ((((MR_tag((MR_Word) EqvInst_611)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_514 = ((MR_Word) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_514)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_563 = ((MR_Word) ((MR_hl_field(0, EqvInstName_514, (MR_Integer) 0))));
                    EqvArgInsts_564 = ((MR_Word) ((MR_hl_field(0, EqvInstName_514, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_514);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_523;
                  MR_Word NameInfo_526;
                  MR_Word Var_516 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_517 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_522;

                  {
                    NameInfo_526 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_526, 0) = ((MR_Box) (Var_516));
                    MR_hl_field(0, NameInfo_526, 1) = ((MR_Box) (Var_517));
                    MR_hl_field(0, NameInfo_526, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_563, &EqvSymNameStr_523);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_526, EqvSymNameStr_523, EqvArgInsts_564, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_522);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_530;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_611)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_530 = ((MR_Word) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_530);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_532;
                    MR_Word STATE_VARIABLE_Expansions_123_533;
                    MR_Word Var_534;
                    MR_Word Var_535;
                    MR_Word Var_538;
                    MR_Word Var_541;
                    MR_Word EqvPieces_544;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044shared_inst", &InstNumPieces_532, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_533);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_611, Suffix_11, &EqvPieces_544, STATE_VARIABLE_Expansions_123_533, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_538 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_538, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_538, 1) = ((MR_Box) (EqvPieces_544));
                    }
                    {
                      Var_535 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_535, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_535, 1) = ((MR_Box) (Var_538));
                    }
                    {
                      Var_541 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_541, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_541, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_534 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_535, Var_541);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_532, Var_534);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_503 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_504;
                MR_Word EqvSymName_456;
                MR_Word EqvArgInsts_457;
                MR_Word EqvInstName_407;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_503, InstName_10, &EqvInst_504);
                succeeded = ((((MR_tag((MR_Word) EqvInst_504)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_407 = ((MR_Word) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_407)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_456 = ((MR_Word) ((MR_hl_field(0, EqvInstName_407, (MR_Integer) 0))));
                    EqvArgInsts_457 = ((MR_Word) ((MR_hl_field(0, EqvInstName_407, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_407);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_416;
                  MR_Word NameInfo_419;
                  MR_Word Var_409 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_410 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_415;

                  {
                    NameInfo_419 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_419, 0) = ((MR_Box) (Var_409));
                    MR_hl_field(0, NameInfo_419, 1) = ((MR_Box) (Var_410));
                    MR_hl_field(0, NameInfo_419, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_456, &EqvSymNameStr_416);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_419, EqvSymNameStr_416, EqvArgInsts_457, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_415);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_423;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_504)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_423 = ((MR_Word) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_423);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_425;
                    MR_Word STATE_VARIABLE_Expansions_123_426;
                    MR_Word Var_427;
                    MR_Word Var_428;
                    MR_Word Var_431;
                    MR_Word Var_434;
                    MR_Word EqvPieces_437;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_425, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_426);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_504, Suffix_11, &EqvPieces_437, STATE_VARIABLE_Expansions_123_426, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_431 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_431, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_431, 1) = ((MR_Box) (EqvPieces_437));
                    }
                    {
                      Var_428 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_428, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_428, 1) = ((MR_Box) (Var_431));
                    }
                    {
                      Var_434 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_434, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_434, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_427 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_428, Var_434);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_425, Var_427);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_153;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                {
                  EqvInst_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_153, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
                  MR_hl_field(1, EqvInst_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_153;
                next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_74;
                tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_74;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_75;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word tscc_proc_2_input_1_Info_8,
  MR_Word tscc_proc_2_input_2_InstName_10,
  MR_Word tscc_proc_2_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34)
{
  MR_Word tscc_proc_1_input_1_Info_8;
  MR_Word tscc_proc_1_input_2_Inst_10;
  MR_Word tscc_proc_1_input_3_Suffix_11;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
  MR_Word tscc_output_1_Pieces_12;
  MR_Word tscc_output_2_STATE_VARIABLE_Expansions_34;

  // The code for TSCC PROC 2: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_1/7-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_1/7-1
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_1/7-1
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_8 = tscc_proc_1_input_1_Info_8;
    MR_Word Inst_10 = tscc_proc_1_input_2_Inst_10;
    MR_Word Suffix_11 = tscc_proc_1_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
    MR_Word STATE_VARIABLE_Expansions_34;

    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, (MR_Integer) 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_24;
            MR_Word Var_64;

            Str_24 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_88, (MR_String) "ground");
            {
              Var_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_64, 0) = ((MR_Box) (Str_24));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            MR_Word HOPieces_23;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, (MR_String) "", Uniq_88, PredInstInfo_22, &HOPieces_23, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_23, Suffix_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, (MR_Integer) 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_38, 0) = ((MR_Box) (BoundName_17));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 0))));
            MR_Word TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_String Var_56;
            MR_Word Var_58;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, HeadBoundInst_18, TailBoundInsts_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_56 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Suffix_11));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (Names_30));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (SubInstPieces_31));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (Suffix_11));
              }
              Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_82);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));

              if ((HOInstInfo_96 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_67;
                MR_String Str_91;

                Str_91 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_95);
                {
                  Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_67, 0) = ((MR_Box) (Str_91));
                }
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              else
              {
                MR_Word PredInstInfo_89 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_96), (MR_Integer) 1));
                MR_Word HOPieces_90;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, (MR_String) "any_", Uniq_95, PredInstInfo_89, &HOPieces_90, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_90, Suffix_11);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_String Name_27;
              MR_Word Var_69;

              Name_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_26, (MR_Integer) 0, Var_25);
              {
                Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_69, 0) = ((MR_Box) (Name_27));
              }
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
    }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_8 = tscc_proc_2_input_1_Info_8;
    MR_Word InstName_10 = tscc_proc_2_input_2_InstName_10;
    MR_Word Suffix_11 = tscc_proc_2_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_74 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
    MR_Word STATE_VARIABLE_Expansions_75;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_74, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_164;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_164));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_24);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word InstDefn_25;
              MR_Box conv0_InstDefn_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_21, ((MR_Box) (InstCtor_23)), &conv0_InstDefn_25);
              if (succeeded)
              {
                InstDefn_25 = ((MR_Word) (conv0_InstDefn_25));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_26;
                MR_Word NamedNamePieces_28;
                MR_Word ExpandInsts_29;
                MR_Word Var_27;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_74, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_80_80;
                      MR_Word Var_189;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_80_80);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_189 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_189);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_80_80;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_95;
                        MR_Word Var_96;
                        MR_Word Var_99;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_80_80, &STATE_VARIABLE_Expansions_75);
                        {
                          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                          MR_hl_field(1, Var_99, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                          MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
                        }
                        Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[15])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_95);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_183_183;
                MR_Word TypeCtorInfo_184_184;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_106;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, (MR_Integer) 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_183_183 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_184_184 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_183_183, TypeCtorInfo_184_184, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_147;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_147, STATE_VARIABLE_Expansions_0_74, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_147, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_108;
                  MR_String Var_109;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(1, SymName_15, (MR_Integer) 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_109 = ((MR_String) ((MR_hl_field(0, Var_108, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_109, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_148;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_148, STATE_VARIABLE_Expansions_0_74, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_148, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_733;
                    MR_String Var_741;
                    MR_String Var_742;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_22, &Var_733);
                    Var_741 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_733);
                    Var_742 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_741);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_742);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_717 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_718;
            MR_Word EqvSymName_670;
            MR_Word EqvArgInsts_671;
            MR_Word EqvInstName_621;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_717, InstName_10, &EqvInst_718);
            succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_621 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_621)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_670 = ((MR_Word) ((MR_hl_field(0, EqvInstName_621, (MR_Integer) 0))));
                EqvArgInsts_671 = ((MR_Word) ((MR_hl_field(0, EqvInstName_621, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_621);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_630;
              MR_Word NameInfo_633;
              MR_Word Var_623 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_624 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_629;

              {
                NameInfo_633 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_633, 0) = ((MR_Box) (Var_623));
                MR_hl_field(0, NameInfo_633, 1) = ((MR_Box) (Var_624));
                MR_hl_field(0, NameInfo_633, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_670, &EqvSymNameStr_630);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_633, EqvSymNameStr_630, EqvArgInsts_671, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_629);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_637;

              succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_637 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_637);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_639;
                MR_Word STATE_VARIABLE_Expansions_123_640;
                MR_Word Var_641;
                MR_Word Var_642;
                MR_Word Var_645;
                MR_Word Var_648;
                MR_Word EqvPieces_651;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044unify_inst", &InstNumPieces_639, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_640);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_718, Suffix_11, &EqvPieces_651, STATE_VARIABLE_Expansions_123_640, &STATE_VARIABLE_Expansions_75);
                {
                  Var_645 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_645, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                  MR_hl_field(1, Var_645, 1) = ((MR_Box) (EqvPieces_651));
                }
                {
                  Var_642 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_642, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_642, 1) = ((MR_Box) (Var_645));
                }
                {
                  Var_648 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_648, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                  MR_hl_field(1, Var_648, 1) = ((MR_Box) (Suffix_11));
                }
                Var_641 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_642, Var_648);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_639, Var_641);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_396 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_397;
            MR_Word EqvSymName_349;
            MR_Word EqvArgInsts_350;
            MR_Word EqvInstName_300;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_396, InstName_10, &EqvInst_397);
            succeeded = ((((MR_tag((MR_Word) EqvInst_397)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_300 = ((MR_Word) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_300)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_349 = ((MR_Word) ((MR_hl_field(0, EqvInstName_300, (MR_Integer) 0))));
                EqvArgInsts_350 = ((MR_Word) ((MR_hl_field(0, EqvInstName_300, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_300);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_309;
              MR_Word NameInfo_312;
              MR_Word Var_302 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_303 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_308;

              {
                NameInfo_312 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_312, 0) = ((MR_Box) (Var_302));
                MR_hl_field(0, NameInfo_312, 1) = ((MR_Box) (Var_303));
                MR_hl_field(0, NameInfo_312, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_349, &EqvSymNameStr_309);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_312, EqvSymNameStr_309, EqvArgInsts_350, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_308);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_316;

              succeeded = ((((MR_tag((MR_Word) EqvInst_397)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_316 = ((MR_Word) ((MR_hl_field(3, EqvInst_397, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_316);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_318;
                MR_Word STATE_VARIABLE_Expansions_123_319;
                MR_Word Var_320;
                MR_Word Var_321;
                MR_Word Var_324;
                MR_Word Var_327;
                MR_Word EqvPieces_330;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044merge_inst", &InstNumPieces_318, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_319);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_397, Suffix_11, &EqvPieces_330, STATE_VARIABLE_Expansions_123_319, &STATE_VARIABLE_Expansions_75);
                {
                  Var_324 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_324, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                  MR_hl_field(1, Var_324, 1) = ((MR_Box) (EqvPieces_330));
                }
                {
                  Var_321 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_321, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_321, 1) = ((MR_Box) (Var_324));
                }
                {
                  Var_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_327, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                  MR_hl_field(1, Var_327, 1) = ((MR_Box) (Suffix_11));
                }
                Var_320 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_321, Var_327);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_318, Var_320);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_289 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_290;
                MR_Word EqvSymName_242;
                MR_Word EqvArgInsts_243;
                MR_Word EqvInstName_193;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_289, InstName_10, &EqvInst_290);
                succeeded = ((((MR_tag((MR_Word) EqvInst_290)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_193 = ((MR_Word) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_193)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_242 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 0))));
                    EqvArgInsts_243 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_193);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_202;
                  MR_Word NameInfo_205;
                  MR_Word Var_195 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_201;

                  {
                    NameInfo_205 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_205, 0) = ((MR_Box) (Var_195));
                    MR_hl_field(0, NameInfo_205, 1) = ((MR_Box) (Var_196));
                    MR_hl_field(0, NameInfo_205, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_242, &EqvSymNameStr_202);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_205, EqvSymNameStr_202, EqvArgInsts_243, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_201);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_209;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_290)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_209 = ((MR_Word) ((MR_hl_field(3, EqvInst_290, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_209);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_211;
                    MR_Word STATE_VARIABLE_Expansions_123_212;
                    MR_Word Var_213;
                    MR_Word Var_214;
                    MR_Word Var_217;
                    MR_Word Var_220;
                    MR_Word EqvPieces_223;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044ground_inst", &InstNumPieces_211, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_212);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_290, Suffix_11, &EqvPieces_223, STATE_VARIABLE_Expansions_123_212, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_217, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_217, 1) = ((MR_Box) (EqvPieces_223));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_214, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_217));
                    }
                    {
                      Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_220, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_220, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_214, Var_220);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_211, Var_213);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_161 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_162;
                MR_Word EqvSymName_69;
                MR_Word EqvArgInsts_70;
                MR_Word EqvInstName_68;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_161, InstName_10, &EqvInst_162);
                succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_68 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_69 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 0))));
                    EqvArgInsts_70 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_68);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_71;
                  MR_Word NameInfo_155;
                  MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_72;

                  {
                    NameInfo_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_155, 0) = ((MR_Box) (Var_172));
                    MR_hl_field(0, NameInfo_155, 1) = ((MR_Box) (Var_173));
                    MR_hl_field(0, NameInfo_155, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_69, &EqvSymNameStr_71);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_155, EqvSymNameStr_71, EqvArgInsts_70, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_72);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_190;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_190 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_190);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_73;
                    MR_Word STATE_VARIABLE_Expansions_123_123;
                    MR_Word Var_137;
                    MR_Word Var_138;
                    MR_Word Var_141;
                    MR_Word Var_144;
                    MR_Word EqvPieces_156;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044any_inst", &InstNumPieces_73, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_123);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_162, Suffix_11, &EqvPieces_156, STATE_VARIABLE_Expansions_123_123, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_141, 1) = ((MR_Box) (EqvPieces_156));
                    }
                    {
                      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
                    }
                    {
                      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_144, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_144, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_144);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_73, Var_137);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_610 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_611;
                MR_Word EqvSymName_563;
                MR_Word EqvArgInsts_564;
                MR_Word EqvInstName_514;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_610, InstName_10, &EqvInst_611);
                succeeded = ((((MR_tag((MR_Word) EqvInst_611)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_514 = ((MR_Word) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_514)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_563 = ((MR_Word) ((MR_hl_field(0, EqvInstName_514, (MR_Integer) 0))));
                    EqvArgInsts_564 = ((MR_Word) ((MR_hl_field(0, EqvInstName_514, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_514);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_523;
                  MR_Word NameInfo_526;
                  MR_Word Var_516 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_517 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_522;

                  {
                    NameInfo_526 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_526, 0) = ((MR_Box) (Var_516));
                    MR_hl_field(0, NameInfo_526, 1) = ((MR_Box) (Var_517));
                    MR_hl_field(0, NameInfo_526, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_563, &EqvSymNameStr_523);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_526, EqvSymNameStr_523, EqvArgInsts_564, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_522);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_530;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_611)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_530 = ((MR_Word) ((MR_hl_field(3, EqvInst_611, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_530);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_532;
                    MR_Word STATE_VARIABLE_Expansions_123_533;
                    MR_Word Var_534;
                    MR_Word Var_535;
                    MR_Word Var_538;
                    MR_Word Var_541;
                    MR_Word EqvPieces_544;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044shared_inst", &InstNumPieces_532, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_533);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_611, Suffix_11, &EqvPieces_544, STATE_VARIABLE_Expansions_123_533, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_538 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_538, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_538, 1) = ((MR_Box) (EqvPieces_544));
                    }
                    {
                      Var_535 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_535, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_535, 1) = ((MR_Box) (Var_538));
                    }
                    {
                      Var_541 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_541, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_541, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_534 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_535, Var_541);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_532, Var_534);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_503 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_504;
                MR_Word EqvSymName_456;
                MR_Word EqvArgInsts_457;
                MR_Word EqvInstName_407;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_503, InstName_10, &EqvInst_504);
                succeeded = ((((MR_tag((MR_Word) EqvInst_504)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_407 = ((MR_Word) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_407)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_456 = ((MR_Word) ((MR_hl_field(0, EqvInstName_407, (MR_Integer) 0))));
                    EqvArgInsts_457 = ((MR_Word) ((MR_hl_field(0, EqvInstName_407, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_407);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_416;
                  MR_Word NameInfo_419;
                  MR_Word Var_409 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_410 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_415;

                  {
                    NameInfo_419 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_419, 0) = ((MR_Box) (Var_409));
                    MR_hl_field(0, NameInfo_419, 1) = ((MR_Box) (Var_410));
                    MR_hl_field(0, NameInfo_419, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_456, &EqvSymNameStr_416);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_419, EqvSymNameStr_416, EqvArgInsts_457, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_415);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_423;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_504)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_423 = ((MR_Word) ((MR_hl_field(3, EqvInst_504, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_423);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_425;
                    MR_Word STATE_VARIABLE_Expansions_123_426;
                    MR_Word Var_427;
                    MR_Word Var_428;
                    MR_Word Var_431;
                    MR_Word Var_434;
                    MR_Word EqvPieces_437;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_425, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_426);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_504, Suffix_11, &EqvPieces_437, STATE_VARIABLE_Expansions_123_426, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_431 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_431, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[13])));
                      MR_hl_field(1, Var_431, 1) = ((MR_Box) (EqvPieces_437));
                    }
                    {
                      Var_428 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_428, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_428, 1) = ((MR_Box) (Var_431));
                    }
                    {
                      Var_434 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_434, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                      MR_hl_field(1, Var_434, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_427 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_428, Var_434);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_425, Var_427);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_153;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                {
                  EqvInst_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_153, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
                  MR_hl_field(1, EqvInst_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_153;
                next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_74;
                tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_74;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_75;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadBoundInst_11,
  MR_Word TailBoundInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30)
{
  MR_bool succeeded;
  MR_Word HeadSuffix_16;
  MR_Word ConsId0_20;
  MR_Word ArgInsts_21;
  MR_Word ConsId_27;
  MR_String ConsIdStr_28;
  MR_Word STATE_VARIABLE_Expansions_31_31;
  MR_Integer Arity_23;
  MR_Word TypeCtor_24;
  MR_String BaseName_26;
  MR_Word SymName_22;

  if ((TailBoundInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_16 = Suffix_13;
    STATE_VARIABLE_Expansions_31_31 = STATE_VARIABLE_Expansions_0_29;
  }
  else
  {
    MR_Word HeadTailBoundInst_17 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_12, (MR_Integer) 0))));
    MR_Word TailTailBoundInsts_18 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_12, (MR_Integer) 1))));
    MR_Word TailPieces_19;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, HeadTailBoundInst_17, TailTailBoundInsts_18, Suffix_13, &TailPieces_19, STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_31_31);
    {
      HeadSuffix_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_16, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, HeadSuffix_16, 1) = ((MR_Box) (TailPieces_19));
    }
  }
  ConsId0_20 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_11, (MR_Integer) 0))));
  ArgInsts_21 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_11, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) ConsId0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_22 = ((MR_Word) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 1))));
    Arity_23 = ((MR_Integer) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 2))));
    TypeCtor_24 = ((MR_Word) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_26 = ((MR_String) ((MR_hl_field(1, SymName_22, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (BaseName_26));
    }
    {
      ConsId_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConsId_27, 1) = ((MR_Box) (Var_42));
      MR_hl_field(3, ConsId_27, 2) = ((MR_Box) (Arity_23));
      MR_hl_field(3, ConsId_27, 3) = ((MR_Box) (TypeCtor_24));
    }
  }
  else
    ConsId_27 = ConsId0_20;
  ConsIdStr_28 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_27);
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, ConsIdStr_28, ArgInsts_21, HeadSuffix_16, Pieces_14, STATE_VARIABLE_Expansions_31_31, STATE_VARIABLE_Expansions_30);
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadInst_11,
  MR_Word TailInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_21,
  MR_Word * STATE_VARIABLE_Expansions_22)
{
  if ((TailInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_9, HeadInst_11, Suffix_13, Pieces_14, STATE_VARIABLE_Expansions_0_21, STATE_VARIABLE_Expansions_22);
  else
  {
    MR_Word HeadTailInst_17 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, (MR_Integer) 0))));
    MR_Word TailTailInsts_18 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, (MR_Integer) 1))));
    MR_Word HeadPieces_19;
    MR_Word TailPieces_20;
    MR_Word STATE_VARIABLE_Expansions_32_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_9, HeadInst_11, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), &HeadPieces_19, STATE_VARIABLE_Expansions_0_21, &STATE_VARIABLE_Expansions_32_32);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, HeadTailInst_17, TailTailInsts_18, Suffix_13, &TailPieces_20, STATE_VARIABLE_Expansions_32_32, STATE_VARIABLE_Expansions_22);
    *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_19, TailPieces_20);
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_String Name_11,
  MR_Word ArgInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21)
{
  MR_bool succeeded;

  if ((ArgInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (Name_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_13));
    }
    *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
  }
  else
  {
    MR_Word HeadArgInst_16 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, (MR_Integer) 0))));
    MR_Word TailArgInsts_17 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, (MR_Integer) 1))));
    MR_Word ArgPieces_18;
    MR_String ArgSummary_19;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, HeadArgInst_16, TailArgInsts_17, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_18, STATE_VARIABLE_Expansions_0_20, STATE_VARIABLE_Expansions_21);
    succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_18, (MR_Integer) 4, &ArgSummary_19);
    if (succeeded)
    {
      MR_Word Var_26;
      MR_String Var_27;
      MR_String Var_28;
      MR_String Var_30;

      Var_30 = mercury__string__f_43_43_2_f_0(ArgSummary_19, (MR_String) ")");
      Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_30);
      Var_27 = mercury__string__f_43_43_2_f_0(Name_11, Var_28);
      {
        Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_26, 0) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_13));
      }
    }
    else
    {
      MR_Word Var_48;
      MR_Word Var_49;
      MR_String Var_50;
      MR_Word Var_52;

      Var_50 = mercury__string__f_43_43_2_f_0(Name_11, (MR_String) "(");
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (ArgPieces_18));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Suffix_13));
      }
      *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_52);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
  }
  else
  {
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_22_22;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, HeadArgInst_14, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_22_22);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(HeadVar__1_1, TailArgInsts_15, &TailPieces_17, STATE_VARIABLE_Expansions_22_22, STATE_VARIABLE_Expansions_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_17));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(
  MR_Word Info_8,
  MR_Word ModeName_10,
  MR_Word ArgInsts_11,
  MR_Word * Pieces_12,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19)
{
  MR_String BaseModeName_14;

  BaseModeName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_10);
  if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_20, 0) = ((MR_Box) (BaseModeName_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
  }
  else
  {
    MR_Word ArgInstPieces_17;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_27;
    MR_Word HeadArgInst_39 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 0))));
    MR_Word TailArgInsts_40 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_41;
    MR_Word TailPieces_42;
    MR_Word STATE_VARIABLE_Expansions_22_46;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, HeadArgInst_39, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_41, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_22_46);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(Info_8, TailArgInsts_40, &TailPieces_42, STATE_VARIABLE_Expansions_22_46, STATE_VARIABLE_Expansions_19);
    {
      ArgInstPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_17, 0) = ((MR_Box) (HeadPieces_41));
      MR_hl_field(1, ArgInstPieces_17, 1) = ((MR_Box) (TailPieces_42));
    }
    Var_25 = mercury__string__f_43_43_2_f_0(BaseModeName_14, (MR_String) "(");
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    Var_27 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_17);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_27));
    }
    *Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
  }
  else
  {
    MR_Word HeadMode_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailModes_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_21_21;
    MR_Word Mode1_22;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_14, &Mode1_22);
    if (((MR_tag((MR_Word) Mode1_22)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_23 = ((MR_Word) ((MR_hl_field(0, Mode1_22, (MR_Integer) 0))));
      MR_Word ToInst1_24 = ((MR_Word) ((MR_hl_field(0, Mode1_22, (MR_Integer) 1))));
      MR_Word Mode_25;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_23, ToInst1_24, &Mode_25);
      if (((MR_tag((MR_Word) Mode_25)) == (MR_Integer) 0))
      {
        MR_Word FromInst_26 = ((MR_Word) ((MR_hl_field(0, Mode_25, (MR_Integer) 0))));
        MR_Word ToInst_27 = ((MR_Word) ((MR_hl_field(0, Mode_25, (MR_Integer) 1))));
        MR_Word FromPieces_28;
        MR_Word ToPieces_29;
        MR_Word STATE_VARIABLE_Expansions_25_33;
        MR_Word Var_35;

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, FromInst_26, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_28, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_25_33);
        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ToInst_27, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_29, STATE_VARIABLE_Expansions_25_33, &STATE_VARIABLE_Expansions_21_21);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[16])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (ToPieces_29));
        }
        HeadPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_28, Var_35);
      }
      else
      {
        MR_Word ModeName_30 = ((MR_Word) ((MR_hl_field(1, Mode_25, (MR_Integer) 0))));
        MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(1, Mode_25, (MR_Integer) 1))));

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ModeName_30, ArgInsts_31, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
      }
    }
    else
    {
      MR_Word ModeName_38 = ((MR_Word) ((MR_hl_field(1, Mode1_22, (MR_Integer) 0))));
      MR_Word ArgInsts_39 = ((MR_Word) ((MR_hl_field(1, Mode1_22, (MR_Integer) 1))));

      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ModeName_38, ArgInsts_39, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
    }
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(HeadVar__1_1, TailModes_15, &TailPieces_17, STATE_VARIABLE_Expansions_21_21, STATE_VARIABLE_Expansions_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_17));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_String AnyPrefix_11,
  MR_Word Uniq_12,
  MR_Word PredInstInfo_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_33,
  MR_Word * STATE_VARIABLE_Expansions_34)
{
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 1))));
  MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word UniqPieces_20;
  MR_Word ArgModesPieces_22;
  MR_String IsDetStr_23;
  MR_Word ModesDetPieces_24;
  MR_String Var_46;

  switch (Uniq_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String BoundName_21;
        MR_Word Var_38;
        MR_Word Var_39;

        BoundName_21 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "ground");
        {
          Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_39, 0) = ((MR_Box) (BoundName_21));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[16])));
        }
        {
          UniqPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_20, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[13])));
          MR_hl_field(1, UniqPieces_20, 1) = ((MR_Box) (Var_38));
        }
      }
      break;
    case (MR_Integer) 0:
      UniqPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(Info_9, ArgModes_17, &ArgModesPieces_22, STATE_VARIABLE_Expansions_0_33, STATE_VARIABLE_Expansions_34);
  Var_46 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_19);
  IsDetStr_23 = mercury__string__f_43_43_2_f_0((MR_String) "is ", Var_46);
  switch (PredOrFunc_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word RealArgModePieces_28;
        MR_Word RetModePieces_29;
        MR_Box conv0_RetModePieces_29;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_22, &RealArgModePieces_28, &conv0_RetModePieces_29);
        RetModePieces_29 = ((MR_Word) (conv0_RetModePieces_29));
        if ((RealArgModePieces_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_73;
          MR_Word Var_74;
          MR_String Var_75;
          MR_String Var_77;
          MR_Word Var_79;
          MR_Word Var_80;

          Var_77 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func =");
          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_77);
          {
            Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_74, 0) = ((MR_Box) (Var_75));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (RetModePieces_29));
          }
          {
            Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_80, 0) = ((MR_Box) (IsDetStr_23));
          }
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
          }
          ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_79);
        }
        else
        {
          MR_Word JoinedRealArgModePieces_32;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_String Var_108;
          MR_String Var_110;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_String Var_118;

          JoinedRealArgModePieces_32 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(RealArgModePieces_28);
          Var_110 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func(");
          Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_110);
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (JoinedRealArgModePieces_32));
          }
          {
            Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
            MR_hl_field(1, Var_113, 1) = ((MR_Box) (RetModePieces_29));
          }
          Var_118 = mercury__string__f_43_43_2_f_0(IsDetStr_23, (MR_String) ")");
          {
            Var_117 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_117, 0) = ((MR_Box) (Var_118));
          }
          {
            Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, Var_116);
          ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_112);
        }
      }
      break;
    case (MR_Integer) 0:
      if ((ArgModes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_47;
        MR_String Var_48;
        MR_String Var_50;
        MR_Word Var_52;
        MR_Word Var_53;

        Var_50 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred");
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
        {
          Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_47, 0) = ((MR_Box) (Var_48));
        }
        {
          Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_53, 0) = ((MR_Box) (IsDetStr_23));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          ModesDetPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModesDetPieces_24, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, ModesDetPieces_24, 1) = ((MR_Box) (Var_52));
        }
      }
      else
      {
        MR_Word JoinedArgModePieces_27;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_String Var_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;

        JoinedArgModePieces_27 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_22);
        Var_62 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred(");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (JoinedArgModePieces_27));
        }
        {
          Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_68, 0) = ((MR_Box) (IsDetStr_23));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_64);
      }
      break;
  }
  *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UniqPieces_20, ModesDetPieces_24);
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word tscc_proc_1_input_1_Info_8,
  MR_Word tscc_proc_1_input_2_Inst_10,
  MR_Word tscc_proc_1_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34)
{
  MR_Word tscc_proc_2_input_1_Info_8;
  MR_Word tscc_proc_2_input_2_InstName_10;
  MR_Word tscc_proc_2_input_3_Suffix_11;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
  MR_Word tscc_output_1_Pieces_12;
  MR_Word tscc_output_2_STATE_VARIABLE_Expansions_34;

  // The code for TSCC PROC 1: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_0/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_0/7-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_0/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_8 = tscc_proc_1_input_1_Info_8;
    MR_Word Inst_10 = tscc_proc_1_input_2_Inst_10;
    MR_Word Suffix_11 = tscc_proc_1_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
    MR_Word STATE_VARIABLE_Expansions_34;

    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, (MR_Integer) 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_24;
            MR_Word Var_64;

            Str_24 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_88, (MR_String) "ground");
            {
              Var_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_64, 0) = ((MR_Box) (Str_24));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            MR_Word HOPieces_23;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, (MR_String) "", Uniq_88, PredInstInfo_22, &HOPieces_23, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_23, Suffix_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, (MR_Integer) 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_38, 0) = ((MR_Box) (BoundName_17));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 0))));
            MR_Word TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_String Var_43;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_51;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, HeadBoundInst_18, TailBoundInsts_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_43 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) (Suffix_11));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_48);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (Names_30));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (SubInstPieces_31));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (Suffix_11));
              }
              Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_82);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));

              if ((HOInstInfo_96 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_67;
                MR_String Str_91;

                Str_91 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_95);
                {
                  Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_67, 0) = ((MR_Box) (Str_91));
                }
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              else
              {
                MR_Word PredInstInfo_89 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_96), (MR_Integer) 1));
                MR_Word HOPieces_90;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, (MR_String) "any_", Uniq_95, PredInstInfo_89, &HOPieces_90, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_90, Suffix_11);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_String Name_27;
              MR_Word Var_69;

              Name_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_26, (MR_Integer) 0, Var_25);
              {
                Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_69, 0) = ((MR_Box) (Name_27));
              }
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
    }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_8 = tscc_proc_2_input_1_Info_8;
    MR_Word InstName_10 = tscc_proc_2_input_2_InstName_10;
    MR_Word Suffix_11 = tscc_proc_2_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_74 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
    MR_Word STATE_VARIABLE_Expansions_75;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_74, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_164;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_164));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_24);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word InstDefn_25;
              MR_Box conv0_InstDefn_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_21, ((MR_Box) (InstCtor_23)), &conv0_InstDefn_25);
              if (succeeded)
              {
                InstDefn_25 = ((MR_Word) (conv0_InstDefn_25));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_26;
                MR_Word NamedNamePieces_28;
                MR_Word ExpandInsts_29;
                MR_Word Var_27;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_74, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_80_80;
                      MR_Word Var_189;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_80_80);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_189 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_189);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_80_80;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_82;
                        MR_Word Var_83;
                        MR_Word Var_85;
                        MR_Word Var_88;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_80_80, &STATE_VARIABLE_Expansions_75);
                        {
                          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                          MR_hl_field(1, Var_88, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
                        }
                        {
                          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
                        }
                        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_82);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_183_183;
                MR_Word TypeCtorInfo_184_184;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_106;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, (MR_Integer) 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_183_183 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_184_184 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_183_183, TypeCtorInfo_184_184, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_147;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_147, STATE_VARIABLE_Expansions_0_74, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_147, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_108;
                  MR_String Var_109;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(1, SymName_15, (MR_Integer) 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_109 = ((MR_String) ((MR_hl_field(0, Var_108, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_109, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_148;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_148, STATE_VARIABLE_Expansions_0_74, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_148, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_766;
                    MR_String Var_774;
                    MR_String Var_775;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_22, &Var_766);
                    Var_774 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_766);
                    Var_775 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_774);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_775);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_757 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_758;
            MR_Word EqvSymName_706;
            MR_Word EqvArgInsts_707;
            MR_Word EqvInstName_653;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_757, InstName_10, &EqvInst_758);
            succeeded = ((((MR_tag((MR_Word) EqvInst_758)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_653 = ((MR_Word) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_653)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_706 = ((MR_Word) ((MR_hl_field(0, EqvInstName_653, (MR_Integer) 0))));
                EqvArgInsts_707 = ((MR_Word) ((MR_hl_field(0, EqvInstName_653, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_653);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_662;
              MR_Word NameInfo_665;
              MR_Word Var_655 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_656 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_661;

              {
                NameInfo_665 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_665, 0) = ((MR_Box) (Var_655));
                MR_hl_field(0, NameInfo_665, 1) = ((MR_Box) (Var_656));
                MR_hl_field(0, NameInfo_665, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_706, &EqvSymNameStr_662);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_665, EqvSymNameStr_662, EqvArgInsts_707, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_661);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_669;

              succeeded = ((((MR_tag((MR_Word) EqvInst_758)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_669 = ((MR_Word) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_669);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_671;
                MR_Word STATE_VARIABLE_Expansions_123_672;
                MR_Word Var_673;
                MR_Word Var_674;
                MR_Word Var_676;
                MR_Word Var_679;
                MR_Word Var_682;
                MR_Word EqvPieces_685;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044unify_inst", &InstNumPieces_671, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_672);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_758, Suffix_11, &EqvPieces_685, STATE_VARIABLE_Expansions_123_672, &STATE_VARIABLE_Expansions_75);
                {
                  Var_679 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_679, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                  MR_hl_field(1, Var_679, 1) = ((MR_Box) (EqvPieces_685));
                }
                {
                  Var_676 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_676, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_676, 1) = ((MR_Box) (Var_679));
                }
                {
                  Var_674 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_674, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(1, Var_674, 1) = ((MR_Box) (Var_676));
                }
                {
                  Var_682 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_682, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(1, Var_682, 1) = ((MR_Box) (Suffix_11));
                }
                Var_673 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_674, Var_682);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_671, Var_673);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_412 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_413;
            MR_Word EqvSymName_361;
            MR_Word EqvArgInsts_362;
            MR_Word EqvInstName_308;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_412, InstName_10, &EqvInst_413);
            succeeded = ((((MR_tag((MR_Word) EqvInst_413)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_308 = ((MR_Word) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_308)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_361 = ((MR_Word) ((MR_hl_field(0, EqvInstName_308, (MR_Integer) 0))));
                EqvArgInsts_362 = ((MR_Word) ((MR_hl_field(0, EqvInstName_308, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_308);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_317;
              MR_Word NameInfo_320;
              MR_Word Var_310 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_311 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_316;

              {
                NameInfo_320 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_320, 0) = ((MR_Box) (Var_310));
                MR_hl_field(0, NameInfo_320, 1) = ((MR_Box) (Var_311));
                MR_hl_field(0, NameInfo_320, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_361, &EqvSymNameStr_317);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_320, EqvSymNameStr_317, EqvArgInsts_362, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_316);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_324;

              succeeded = ((((MR_tag((MR_Word) EqvInst_413)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_324 = ((MR_Word) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_324);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_326;
                MR_Word STATE_VARIABLE_Expansions_123_327;
                MR_Word Var_328;
                MR_Word Var_329;
                MR_Word Var_331;
                MR_Word Var_334;
                MR_Word Var_337;
                MR_Word EqvPieces_340;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044merge_inst", &InstNumPieces_326, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_327);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_413, Suffix_11, &EqvPieces_340, STATE_VARIABLE_Expansions_123_327, &STATE_VARIABLE_Expansions_75);
                {
                  Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_334, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                  MR_hl_field(1, Var_334, 1) = ((MR_Box) (EqvPieces_340));
                }
                {
                  Var_331 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_331, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_331, 1) = ((MR_Box) (Var_334));
                }
                {
                  Var_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_329, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(1, Var_329, 1) = ((MR_Box) (Var_331));
                }
                {
                  Var_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_337, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(1, Var_337, 1) = ((MR_Box) (Suffix_11));
                }
                Var_328 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_329, Var_337);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_326, Var_328);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_297 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_298;
                MR_Word EqvSymName_246;
                MR_Word EqvArgInsts_247;
                MR_Word EqvInstName_193;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_297, InstName_10, &EqvInst_298);
                succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_193 = ((MR_Word) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_193)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_246 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 0))));
                    EqvArgInsts_247 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_193);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_202;
                  MR_Word NameInfo_205;
                  MR_Word Var_195 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_201;

                  {
                    NameInfo_205 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_205, 0) = ((MR_Box) (Var_195));
                    MR_hl_field(0, NameInfo_205, 1) = ((MR_Box) (Var_196));
                    MR_hl_field(0, NameInfo_205, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_246, &EqvSymNameStr_202);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_205, EqvSymNameStr_202, EqvArgInsts_247, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_201);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_209;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_209 = ((MR_Word) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_209);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_211;
                    MR_Word STATE_VARIABLE_Expansions_123_212;
                    MR_Word Var_213;
                    MR_Word Var_214;
                    MR_Word Var_216;
                    MR_Word Var_219;
                    MR_Word Var_222;
                    MR_Word EqvPieces_225;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044ground_inst", &InstNumPieces_211, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_212);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_298, Suffix_11, &EqvPieces_225, STATE_VARIABLE_Expansions_123_212, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_219, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_219, 1) = ((MR_Box) (EqvPieces_225));
                    }
                    {
                      Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_216, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_214, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_216));
                    }
                    {
                      Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_222, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_222, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_214, Var_222);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_211, Var_213);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_161 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_162;
                MR_Word EqvSymName_69;
                MR_Word EqvArgInsts_70;
                MR_Word EqvInstName_68;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_161, InstName_10, &EqvInst_162);
                succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_68 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_69 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 0))));
                    EqvArgInsts_70 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_68);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_71;
                  MR_Word NameInfo_155;
                  MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_72;

                  {
                    NameInfo_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_155, 0) = ((MR_Box) (Var_172));
                    MR_hl_field(0, NameInfo_155, 1) = ((MR_Box) (Var_173));
                    MR_hl_field(0, NameInfo_155, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_69, &EqvSymNameStr_71);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_155, EqvSymNameStr_71, EqvArgInsts_70, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_72);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_190;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_190 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_190);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_73;
                    MR_Word STATE_VARIABLE_Expansions_123_123;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_128;
                    MR_Word Var_131;
                    MR_Word Var_134;
                    MR_Word EqvPieces_156;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044any_inst", &InstNumPieces_73, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_123);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_162, Suffix_11, &EqvPieces_156, STATE_VARIABLE_Expansions_123_123, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_131, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_131, 1) = ((MR_Box) (EqvPieces_156));
                    }
                    {
                      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_128));
                    }
                    {
                      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_134, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, Var_134);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_73, Var_125);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_642 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_643;
                MR_Word EqvSymName_591;
                MR_Word EqvArgInsts_592;
                MR_Word EqvInstName_538;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_642, InstName_10, &EqvInst_643);
                succeeded = ((((MR_tag((MR_Word) EqvInst_643)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_538 = ((MR_Word) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_538)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_591 = ((MR_Word) ((MR_hl_field(0, EqvInstName_538, (MR_Integer) 0))));
                    EqvArgInsts_592 = ((MR_Word) ((MR_hl_field(0, EqvInstName_538, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_538);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_547;
                  MR_Word NameInfo_550;
                  MR_Word Var_540 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_541 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_546;

                  {
                    NameInfo_550 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_550, 0) = ((MR_Box) (Var_540));
                    MR_hl_field(0, NameInfo_550, 1) = ((MR_Box) (Var_541));
                    MR_hl_field(0, NameInfo_550, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_591, &EqvSymNameStr_547);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_550, EqvSymNameStr_547, EqvArgInsts_592, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_546);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_554;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_643)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_554 = ((MR_Word) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_554);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_556;
                    MR_Word STATE_VARIABLE_Expansions_123_557;
                    MR_Word Var_558;
                    MR_Word Var_559;
                    MR_Word Var_561;
                    MR_Word Var_564;
                    MR_Word Var_567;
                    MR_Word EqvPieces_570;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044shared_inst", &InstNumPieces_556, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_557);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_643, Suffix_11, &EqvPieces_570, STATE_VARIABLE_Expansions_123_557, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_564 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_564, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_564, 1) = ((MR_Box) (EqvPieces_570));
                    }
                    {
                      Var_561 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_561, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_561, 1) = ((MR_Box) (Var_564));
                    }
                    {
                      Var_559 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_559, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_559, 1) = ((MR_Box) (Var_561));
                    }
                    {
                      Var_567 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_567, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_567, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_558 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_559, Var_567);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_556, Var_558);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_527 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_528;
                MR_Word EqvSymName_476;
                MR_Word EqvArgInsts_477;
                MR_Word EqvInstName_423;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_527, InstName_10, &EqvInst_528);
                succeeded = ((((MR_tag((MR_Word) EqvInst_528)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_423 = ((MR_Word) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_423)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_476 = ((MR_Word) ((MR_hl_field(0, EqvInstName_423, (MR_Integer) 0))));
                    EqvArgInsts_477 = ((MR_Word) ((MR_hl_field(0, EqvInstName_423, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_423);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_432;
                  MR_Word NameInfo_435;
                  MR_Word Var_425 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_426 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_431;

                  {
                    NameInfo_435 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_435, 0) = ((MR_Box) (Var_425));
                    MR_hl_field(0, NameInfo_435, 1) = ((MR_Box) (Var_426));
                    MR_hl_field(0, NameInfo_435, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_476, &EqvSymNameStr_432);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_435, EqvSymNameStr_432, EqvArgInsts_477, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_431);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_439;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_528)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_439 = ((MR_Word) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_439);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_441;
                    MR_Word STATE_VARIABLE_Expansions_123_442;
                    MR_Word Var_443;
                    MR_Word Var_444;
                    MR_Word Var_446;
                    MR_Word Var_449;
                    MR_Word Var_452;
                    MR_Word EqvPieces_455;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_441, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_442);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_528, Suffix_11, &EqvPieces_455, STATE_VARIABLE_Expansions_123_442, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_449 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_449, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_449, 1) = ((MR_Box) (EqvPieces_455));
                    }
                    {
                      Var_446 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_446, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_446, 1) = ((MR_Box) (Var_449));
                    }
                    {
                      Var_444 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_444, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_444, 1) = ((MR_Box) (Var_446));
                    }
                    {
                      Var_452 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_452, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_452, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_443 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_444, Var_452);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_441, Var_443);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_153;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                {
                  EqvInst_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_153, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
                  MR_hl_field(1, EqvInst_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_153;
                next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_74;
                tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_74;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_75;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word tscc_proc_2_input_1_Info_8,
  MR_Word tscc_proc_2_input_2_InstName_10,
  MR_Word tscc_proc_2_input_3_Suffix_11,
  MR_Word * tscc_output_ptr_1_Pieces_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34)
{
  MR_Word tscc_proc_1_input_1_Info_8;
  MR_Word tscc_proc_1_input_2_Inst_10;
  MR_Word tscc_proc_1_input_3_Suffix_11;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
  MR_Word tscc_output_1_Pieces_12;
  MR_Word tscc_output_2_STATE_VARIABLE_Expansions_34;

  // The code for TSCC PROC 2: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_0/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_to_pieces__[2]_0/7-0
  ;
  // proc 2 in TSCC: pred hlds.error_msg_inst.UnusedArgs__pred__inst_name_to_pieces__[2]_0/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_8 = tscc_proc_1_input_1_Info_8;
    MR_Word Inst_10 = tscc_proc_1_input_2_Inst_10;
    MR_Word Suffix_11 = tscc_proc_1_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_33 = tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
    MR_Word STATE_VARIABLE_Expansions_34;

    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[3])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[4])));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, (MR_Integer) 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Str_24;
            MR_Word Var_64;

            Str_24 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_88, (MR_String) "ground");
            {
              Var_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_64, 0) = ((MR_Box) (Str_24));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));
            MR_Word HOPieces_23;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, (MR_String) "", Uniq_88, PredInstInfo_22, &HOPieces_23, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_23, Suffix_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, (MR_Integer) 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_38, 0) = ((MR_Box) (BoundName_17));
            }
            {
              Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
            }
            STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
          }
          else
          {
            MR_Word HeadBoundInst_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 0))));
            MR_Word TailBoundInsts_19 = ((MR_Word) ((MR_hl_field(1, BoundInsts_16, (MR_Integer) 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_String Var_43;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_51;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, HeadBoundInst_18, TailBoundInsts_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_43 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) (Suffix_11));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_48);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (Names_30));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[2])));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (SubInstPieces_31));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[1])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (Suffix_11));
              }
              Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_82);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 2))));

              if ((HOInstInfo_96 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_67;
                MR_String Str_91;

                Str_91 = parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(Uniq_95);
                {
                  Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_67, 0) = ((MR_Box) (Str_91));
                }
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_67));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
              }
              else
              {
                MR_Word PredInstInfo_89 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_96), (MR_Integer) 1));
                MR_Word HOPieces_90;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, (MR_String) "any_", Uniq_95, PredInstInfo_89, &HOPieces_90, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HOPieces_90, Suffix_11);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, (MR_Integer) 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_String Name_27;
              MR_Word Var_69;

              Name_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_26, (MR_Integer) 0, Var_25);
              {
                Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_69, 0) = ((MR_Box) (Name_27));
              }
              {
                Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
              }
              STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_0_33;
            }
            break;
        }
        break;
    }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_34;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_8 = tscc_proc_2_input_1_Info_8;
    MR_Word InstName_10 = tscc_proc_2_input_2_InstName_10;
    MR_Word Suffix_11 = tscc_proc_2_input_3_Suffix_11;
    MR_Word Pieces_12;
    MR_Word STATE_VARIABLE_Expansions_0_74 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
    MR_Word STATE_VARIABLE_Expansions_75;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_74, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, (MR_Integer) 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_164;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_164));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_24);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word InstDefn_25;
              MR_Box conv0_InstDefn_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_21, ((MR_Box) (InstCtor_23)), &conv0_InstDefn_25);
              if (succeeded)
              {
                InstDefn_25 = ((MR_Word) (conv0_InstDefn_25));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NamePieces_26;
                MR_Word NamedNamePieces_28;
                MR_Word ExpandInsts_29;
                MR_Word Var_27;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_74, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[11])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_80_80;
                      MR_Word Var_189;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_80_80);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, (MR_Integer) 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_189 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, (MR_Integer) 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_189);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_80_80;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_82;
                        MR_Word Var_83;
                        MR_Word Var_85;
                        MR_Word Var_88;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_80_80, &STATE_VARIABLE_Expansions_75);
                        {
                          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                          MR_hl_field(1, Var_88, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
                        }
                        {
                          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
                        }
                        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_82);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_183_183;
                MR_Word TypeCtorInfo_184_184;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_106;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, (MR_Integer) 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_183_183 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_184_184 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_106, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_106));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_183_183, TypeCtorInfo_184_184, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_147;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_147, STATE_VARIABLE_Expansions_0_74, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_147, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_108;
                  MR_String Var_109;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_108 = ((MR_Word) ((MR_hl_field(1, SymName_15, (MR_Integer) 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_109 = ((MR_String) ((MR_hl_field(0, Var_108, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_109, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_148;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_148, STATE_VARIABLE_Expansions_0_74, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_148, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_766;
                    MR_String Var_774;
                    MR_String Var_775;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), Arity_22, &Var_766);
                    Var_774 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_766);
                    Var_775 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_774);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_775);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_757 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_758;
            MR_Word EqvSymName_706;
            MR_Word EqvArgInsts_707;
            MR_Word EqvInstName_653;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_757, InstName_10, &EqvInst_758);
            succeeded = ((((MR_tag((MR_Word) EqvInst_758)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_653 = ((MR_Word) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_653)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_706 = ((MR_Word) ((MR_hl_field(0, EqvInstName_653, (MR_Integer) 0))));
                EqvArgInsts_707 = ((MR_Word) ((MR_hl_field(0, EqvInstName_653, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_653);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_662;
              MR_Word NameInfo_665;
              MR_Word Var_655 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_656 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_661;

              {
                NameInfo_665 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_665, 0) = ((MR_Box) (Var_655));
                MR_hl_field(0, NameInfo_665, 1) = ((MR_Box) (Var_656));
                MR_hl_field(0, NameInfo_665, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_706, &EqvSymNameStr_662);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_665, EqvSymNameStr_662, EqvArgInsts_707, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_661);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_669;

              succeeded = ((((MR_tag((MR_Word) EqvInst_758)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_669 = ((MR_Word) ((MR_hl_field(3, EqvInst_758, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_669);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_671;
                MR_Word STATE_VARIABLE_Expansions_123_672;
                MR_Word Var_673;
                MR_Word Var_674;
                MR_Word Var_676;
                MR_Word Var_679;
                MR_Word Var_682;
                MR_Word EqvPieces_685;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044unify_inst", &InstNumPieces_671, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_672);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_758, Suffix_11, &EqvPieces_685, STATE_VARIABLE_Expansions_123_672, &STATE_VARIABLE_Expansions_75);
                {
                  Var_679 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_679, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                  MR_hl_field(1, Var_679, 1) = ((MR_Box) (EqvPieces_685));
                }
                {
                  Var_676 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_676, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_676, 1) = ((MR_Box) (Var_679));
                }
                {
                  Var_674 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_674, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(1, Var_674, 1) = ((MR_Box) (Var_676));
                }
                {
                  Var_682 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_682, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(1, Var_682, 1) = ((MR_Box) (Suffix_11));
                }
                Var_673 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_674, Var_682);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_671, Var_673);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_412 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
            MR_Word EqvInst_413;
            MR_Word EqvSymName_361;
            MR_Word EqvArgInsts_362;
            MR_Word EqvInstName_308;

            check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_412, InstName_10, &EqvInst_413);
            succeeded = ((((MR_tag((MR_Word) EqvInst_413)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_308 = ((MR_Word) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_308)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_361 = ((MR_Word) ((MR_hl_field(0, EqvInstName_308, (MR_Integer) 0))));
                EqvArgInsts_362 = ((MR_Word) ((MR_hl_field(0, EqvInstName_308, (MR_Integer) 1))));
                succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_308);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_317;
              MR_Word NameInfo_320;
              MR_Word Var_310 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
              MR_Word Var_311 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
              MR_Word Var_316;

              {
                NameInfo_320 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_320, 0) = ((MR_Box) (Var_310));
                MR_hl_field(0, NameInfo_320, 1) = ((MR_Box) (Var_311));
                MR_hl_field(0, NameInfo_320, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_361, &EqvSymNameStr_317);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_320, EqvSymNameStr_317, EqvArgInsts_362, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_316);
              STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
            }
            else
            {
              MR_Word Var_324;

              succeeded = ((((MR_tag((MR_Word) EqvInst_413)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_324 = ((MR_Word) ((MR_hl_field(3, EqvInst_413, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_324);
              }
              if (succeeded)
              {
                {
                  Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
                  MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                }
                STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
              }
              else
              {
                MR_Word InstNumPieces_326;
                MR_Word STATE_VARIABLE_Expansions_123_327;
                MR_Word Var_328;
                MR_Word Var_329;
                MR_Word Var_331;
                MR_Word Var_334;
                MR_Word Var_337;
                MR_Word EqvPieces_340;

                hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044merge_inst", &InstNumPieces_326, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_327);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_413, Suffix_11, &EqvPieces_340, STATE_VARIABLE_Expansions_123_327, &STATE_VARIABLE_Expansions_75);
                {
                  Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_334, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                  MR_hl_field(1, Var_334, 1) = ((MR_Box) (EqvPieces_340));
                }
                {
                  Var_331 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_331, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                  MR_hl_field(1, Var_331, 1) = ((MR_Box) (Var_334));
                }
                {
                  Var_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_329, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(1, Var_329, 1) = ((MR_Box) (Var_331));
                }
                {
                  Var_337 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_337, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                  MR_hl_field(1, Var_337, 1) = ((MR_Box) (Suffix_11));
                }
                Var_328 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_329, Var_337);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_326, Var_328);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_297 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_298;
                MR_Word EqvSymName_246;
                MR_Word EqvArgInsts_247;
                MR_Word EqvInstName_193;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_297, InstName_10, &EqvInst_298);
                succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_193 = ((MR_Word) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_193)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_246 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 0))));
                    EqvArgInsts_247 = ((MR_Word) ((MR_hl_field(0, EqvInstName_193, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_193);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_202;
                  MR_Word NameInfo_205;
                  MR_Word Var_195 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_196 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_201;

                  {
                    NameInfo_205 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_205, 0) = ((MR_Box) (Var_195));
                    MR_hl_field(0, NameInfo_205, 1) = ((MR_Box) (Var_196));
                    MR_hl_field(0, NameInfo_205, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_246, &EqvSymNameStr_202);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_205, EqvSymNameStr_202, EqvArgInsts_247, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_201);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_209;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_298)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_209 = ((MR_Word) ((MR_hl_field(3, EqvInst_298, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_209);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[7])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_211;
                    MR_Word STATE_VARIABLE_Expansions_123_212;
                    MR_Word Var_213;
                    MR_Word Var_214;
                    MR_Word Var_216;
                    MR_Word Var_219;
                    MR_Word Var_222;
                    MR_Word EqvPieces_225;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044ground_inst", &InstNumPieces_211, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_212);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_298, Suffix_11, &EqvPieces_225, STATE_VARIABLE_Expansions_123_212, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_219, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_219, 1) = ((MR_Box) (EqvPieces_225));
                    }
                    {
                      Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_216, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_214, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_216));
                    }
                    {
                      Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_222, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_222, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_214, Var_222);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_211, Var_213);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_161 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_162;
                MR_Word EqvSymName_69;
                MR_Word EqvArgInsts_70;
                MR_Word EqvInstName_68;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_161, InstName_10, &EqvInst_162);
                succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_68 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_68)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_69 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 0))));
                    EqvArgInsts_70 = ((MR_Word) ((MR_hl_field(0, EqvInstName_68, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_68);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_71;
                  MR_Word NameInfo_155;
                  MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_72;

                  {
                    NameInfo_155 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_155, 0) = ((MR_Box) (Var_172));
                    MR_hl_field(0, NameInfo_155, 1) = ((MR_Box) (Var_173));
                    MR_hl_field(0, NameInfo_155, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_69, &EqvSymNameStr_71);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_155, EqvSymNameStr_71, EqvArgInsts_70, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_72);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_190;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_190 = ((MR_Word) ((MR_hl_field(3, EqvInst_162, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_190);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_73;
                    MR_Word STATE_VARIABLE_Expansions_123_123;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_128;
                    MR_Word Var_131;
                    MR_Word Var_134;
                    MR_Word EqvPieces_156;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044any_inst", &InstNumPieces_73, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_123);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_162, Suffix_11, &EqvPieces_156, STATE_VARIABLE_Expansions_123_123, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_131, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_131, 1) = ((MR_Box) (EqvPieces_156));
                    }
                    {
                      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_128));
                    }
                    {
                      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_134, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, Var_134);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_73, Var_125);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_642 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_643;
                MR_Word EqvSymName_591;
                MR_Word EqvArgInsts_592;
                MR_Word EqvInstName_538;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_642, InstName_10, &EqvInst_643);
                succeeded = ((((MR_tag((MR_Word) EqvInst_643)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_538 = ((MR_Word) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_538)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_591 = ((MR_Word) ((MR_hl_field(0, EqvInstName_538, (MR_Integer) 0))));
                    EqvArgInsts_592 = ((MR_Word) ((MR_hl_field(0, EqvInstName_538, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_538);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_547;
                  MR_Word NameInfo_550;
                  MR_Word Var_540 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_541 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_546;

                  {
                    NameInfo_550 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_550, 0) = ((MR_Box) (Var_540));
                    MR_hl_field(0, NameInfo_550, 1) = ((MR_Box) (Var_541));
                    MR_hl_field(0, NameInfo_550, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_591, &EqvSymNameStr_547);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_550, EqvSymNameStr_547, EqvArgInsts_592, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_546);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_554;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_643)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_554 = ((MR_Word) ((MR_hl_field(3, EqvInst_643, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_554);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_556;
                    MR_Word STATE_VARIABLE_Expansions_123_557;
                    MR_Word Var_558;
                    MR_Word Var_559;
                    MR_Word Var_561;
                    MR_Word Var_564;
                    MR_Word Var_567;
                    MR_Word EqvPieces_570;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044shared_inst", &InstNumPieces_556, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_557);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_643, Suffix_11, &EqvPieces_570, STATE_VARIABLE_Expansions_123_557, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_564 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_564, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_564, 1) = ((MR_Box) (EqvPieces_570));
                    }
                    {
                      Var_561 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_561, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_561, 1) = ((MR_Box) (Var_564));
                    }
                    {
                      Var_559 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_559, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_559, 1) = ((MR_Box) (Var_561));
                    }
                    {
                      Var_567 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_567, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_567, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_558 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_559, Var_567);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_556, Var_558);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_527 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                MR_Word EqvInst_528;
                MR_Word EqvSymName_476;
                MR_Word EqvArgInsts_477;
                MR_Word EqvInstName_423;

                check_hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_527, InstName_10, &EqvInst_528);
                succeeded = ((((MR_tag((MR_Word) EqvInst_528)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_423 = ((MR_Word) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_423)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_476 = ((MR_Word) ((MR_hl_field(0, EqvInstName_423, (MR_Integer) 0))));
                    EqvArgInsts_477 = ((MR_Word) ((MR_hl_field(0, EqvInstName_423, (MR_Integer) 1))));
                    succeeded = check_hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_423);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_432;
                  MR_Word NameInfo_435;
                  MR_Word Var_425 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
                  MR_Word Var_426 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
                  MR_Word Var_431;

                  {
                    NameInfo_435 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_435, 0) = ((MR_Box) (Var_425));
                    MR_hl_field(0, NameInfo_435, 1) = ((MR_Box) (Var_426));
                    MR_hl_field(0, NameInfo_435, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_476, &EqvSymNameStr_432);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_435, EqvSymNameStr_432, EqvArgInsts_477, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_74, &Var_431);
                  STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                }
                else
                {
                  MR_Word Var_439;

                  succeeded = ((((MR_tag((MR_Word) EqvInst_528)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_439 = ((MR_Word) ((MR_hl_field(3, EqvInst_528, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_439);
                  }
                  if (succeeded)
                  {
                    {
                      Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9])));
                      MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                    }
                    STATE_VARIABLE_Expansions_75 = STATE_VARIABLE_Expansions_0_74;
                  }
                  else
                  {
                    MR_Word InstNumPieces_441;
                    MR_Word STATE_VARIABLE_Expansions_123_442;
                    MR_Word Var_443;
                    MR_Word Var_444;
                    MR_Word Var_446;
                    MR_Word Var_449;
                    MR_Word Var_452;
                    MR_Word EqvPieces_455;

                    hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, (MR_String) "\044mostly_uniq_inst", &InstNumPieces_441, STATE_VARIABLE_Expansions_0_74, &STATE_VARIABLE_Expansions_123_442);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_528, Suffix_11, &EqvPieces_455, STATE_VARIABLE_Expansions_123_442, &STATE_VARIABLE_Expansions_75);
                    {
                      Var_449 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_449, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
                      MR_hl_field(1, Var_449, 1) = ((MR_Box) (EqvPieces_455));
                    }
                    {
                      Var_446 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_446, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[10])));
                      MR_hl_field(1, Var_446, 1) = ((MR_Box) (Var_449));
                    }
                    {
                      Var_444 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_444, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(1, Var_444, 1) = ((MR_Box) (Var_446));
                    }
                    {
                      Var_452 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_452, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                      MR_hl_field(1, Var_452, 1) = ((MR_Box) (Suffix_11));
                    }
                    Var_443 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_444, Var_452);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_441, Var_443);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word EqvInst_153;
                MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                {
                  EqvInst_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, EqvInst_153, 0) = (MR_Box) ((MR_Unsigned) (Uniq_50));
                  MR_hl_field(1, EqvInst_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_153;
                next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_74;
                tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = STATE_VARIABLE_Expansions_0_74;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_74;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_75;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadBoundInst_11,
  MR_Word TailBoundInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30)
{
  MR_bool succeeded;
  MR_Word HeadSuffix_16;
  MR_Word ConsId0_20;
  MR_Word ArgInsts_21;
  MR_Word ConsId_27;
  MR_String ConsIdStr_28;
  MR_Word STATE_VARIABLE_Expansions_31_31;
  MR_Integer Arity_23;
  MR_Word TypeCtor_24;
  MR_String BaseName_26;
  MR_Word SymName_22;

  if ((TailBoundInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_16 = Suffix_13;
    STATE_VARIABLE_Expansions_31_31 = STATE_VARIABLE_Expansions_0_29;
  }
  else
  {
    MR_Word HeadTailBoundInst_17 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_12, (MR_Integer) 0))));
    MR_Word TailTailBoundInsts_18 = ((MR_Word) ((MR_hl_field(1, TailBoundInsts_12, (MR_Integer) 1))));
    MR_Word TailPieces_19;
    MR_Word Var_34;
    MR_Word Var_37;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, HeadTailBoundInst_17, TailTailBoundInsts_18, Suffix_13, &TailPieces_19, STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_31_31);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (TailPieces_19));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      HeadSuffix_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
      MR_hl_field(1, HeadSuffix_16, 1) = ((MR_Box) (Var_34));
    }
  }
  ConsId0_20 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_11, (MR_Integer) 0))));
  ArgInsts_21 = ((MR_Word) ((MR_hl_field(0, HeadBoundInst_11, (MR_Integer) 1))));
  succeeded = ((((MR_tag((MR_Word) ConsId0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_22 = ((MR_Word) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 1))));
    Arity_23 = ((MR_Integer) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 2))));
    TypeCtor_24 = ((MR_Word) ((MR_hl_field(3, ConsId0_20, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_26 = ((MR_String) ((MR_hl_field(1, SymName_22, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (BaseName_26));
    }
    {
      ConsId_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ConsId_27, 1) = ((MR_Box) (Var_42));
      MR_hl_field(3, ConsId_27, 2) = ((MR_Box) (Arity_23));
      MR_hl_field(3, ConsId_27, 3) = ((MR_Box) (TypeCtor_24));
    }
  }
  else
    ConsId_27 = ConsId0_20;
  ConsIdStr_28 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_27);
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, ConsIdStr_28, ArgInsts_21, HeadSuffix_16, Pieces_14, STATE_VARIABLE_Expansions_31_31, STATE_VARIABLE_Expansions_30);
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadInst_11,
  MR_Word TailInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_21,
  MR_Word * STATE_VARIABLE_Expansions_22)
{
  if ((TailInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_9, HeadInst_11, Suffix_13, Pieces_14, STATE_VARIABLE_Expansions_0_21, STATE_VARIABLE_Expansions_22);
  else
  {
    MR_Word HeadTailInst_17 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, (MR_Integer) 0))));
    MR_Word TailTailInsts_18 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, (MR_Integer) 1))));
    MR_Word HeadPieces_19;
    MR_Word TailPieces_20;
    MR_Word STATE_VARIABLE_Expansions_32_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_9, HeadInst_11, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[8])), &HeadPieces_19, STATE_VARIABLE_Expansions_0_21, &STATE_VARIABLE_Expansions_32_32);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, HeadTailInst_17, TailTailInsts_18, Suffix_13, &TailPieces_20, STATE_VARIABLE_Expansions_32_32, STATE_VARIABLE_Expansions_22);
    *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_19, TailPieces_20);
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_String Name_11,
  MR_Word ArgInsts_12,
  MR_Word Suffix_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21)
{
  MR_bool succeeded;

  if ((ArgInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (Name_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_13));
    }
    *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
  }
  else
  {
    MR_Word HeadArgInst_16 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, (MR_Integer) 0))));
    MR_Word TailArgInsts_17 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, (MR_Integer) 1))));
    MR_Word ArgPieces_18;
    MR_String ArgSummary_19;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, HeadArgInst_16, TailArgInsts_17, (MR_Word) ((MR_Unsigned) 0U), &ArgPieces_18, STATE_VARIABLE_Expansions_0_20, STATE_VARIABLE_Expansions_21);
    succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(ArgPieces_18, (MR_Integer) 4, &ArgSummary_19);
    if (succeeded)
    {
      MR_Word Var_26;
      MR_String Var_27;
      MR_String Var_28;
      MR_String Var_30;

      Var_30 = mercury__string__f_43_43_2_f_0(ArgSummary_19, (MR_String) ")");
      Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_30);
      Var_27 = mercury__string__f_43_43_2_f_0(Name_11, Var_28);
      {
        Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_26, 0) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (Suffix_13));
      }
    }
    else
    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_45;

      {
        Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_33, 0) = ((MR_Box) (Name_11));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[21])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Suffix_13));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_18, Var_42);
      *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_41);
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
  }
  else
  {
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_22_22;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, HeadArgInst_14, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_22_22);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(HeadVar__1_1, TailArgInsts_15, &TailPieces_17, STATE_VARIABLE_Expansions_22_22, STATE_VARIABLE_Expansions_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_17));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Word ModeName_10,
  MR_Word ArgInsts_11,
  MR_Word * Pieces_12,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19)
{
  MR_String BaseModeName_14;

  BaseModeName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(ModeName_10);
  if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_20, 0) = ((MR_Box) (BaseModeName_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
  }
  else
  {
    MR_Word ArgInstPieces_17;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_27;
    MR_Word HeadArgInst_39 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 0))));
    MR_Word TailArgInsts_40 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, (MR_Integer) 1))));
    MR_Word HeadPieces_41;
    MR_Word TailPieces_42;
    MR_Word STATE_VARIABLE_Expansions_22_46;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, HeadArgInst_39, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_41, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_22_46);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(Info_8, TailArgInsts_40, &TailPieces_42, STATE_VARIABLE_Expansions_22_46, STATE_VARIABLE_Expansions_19);
    {
      ArgInstPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_17, 0) = ((MR_Box) (HeadPieces_41));
      MR_hl_field(1, ArgInstPieces_17, 1) = ((MR_Box) (TailPieces_42));
    }
    Var_25 = mercury__string__f_43_43_2_f_0(BaseModeName_14, (MR_String) "(");
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    Var_27 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgInstPieces_17);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_27));
    }
    *Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
  }
  else
  {
    MR_Word HeadMode_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailModes_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_21_21;
    MR_Word Mode1_22;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_14, &Mode1_22);
    if (((MR_tag((MR_Word) Mode1_22)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_23 = ((MR_Word) ((MR_hl_field(0, Mode1_22, (MR_Integer) 0))));
      MR_Word ToInst1_24 = ((MR_Word) ((MR_hl_field(0, Mode1_22, (MR_Integer) 1))));
      MR_Word Mode_25;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_23, ToInst1_24, &Mode_25);
      if (((MR_tag((MR_Word) Mode_25)) == (MR_Integer) 0))
      {
        MR_Word FromInst_26 = ((MR_Word) ((MR_hl_field(0, Mode_25, (MR_Integer) 0))));
        MR_Word ToInst_27 = ((MR_Word) ((MR_hl_field(0, Mode_25, (MR_Integer) 1))));
        MR_Word FromPieces_28;
        MR_Word ToPieces_29;
        MR_Word STATE_VARIABLE_Expansions_25_33;
        MR_Word Var_35;

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, FromInst_26, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_28, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_25_33);
        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ToInst_27, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_29, STATE_VARIABLE_Expansions_25_33, &STATE_VARIABLE_Expansions_21_21);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[16])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (ToPieces_29));
        }
        HeadPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_28, Var_35);
      }
      else
      {
        MR_Word ModeName_30 = ((MR_Word) ((MR_hl_field(1, Mode_25, (MR_Integer) 0))));
        MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(1, Mode_25, (MR_Integer) 1))));

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ModeName_30, ArgInsts_31, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
      }
    }
    else
    {
      MR_Word ModeName_38 = ((MR_Word) ((MR_hl_field(1, Mode1_22, (MR_Integer) 0))));
      MR_Word ArgInsts_39 = ((MR_Word) ((MR_hl_field(1, Mode1_22, (MR_Integer) 1))));

      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ModeName_38, ArgInsts_39, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
    }
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(HeadVar__1_1, TailModes_15, &TailPieces_17, STATE_VARIABLE_Expansions_21_21, STATE_VARIABLE_Expansions_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadPieces_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailPieces_17));
    }
  }
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_String AnyPrefix_11,
  MR_Word Uniq_12,
  MR_Word PredInstInfo_13,
  MR_Word * Pieces_14,
  MR_Word STATE_VARIABLE_Expansions_0_33,
  MR_Word * STATE_VARIABLE_Expansions_34)
{
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 1))));
  MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Word UniqPieces_20;
  MR_Word ArgModesPieces_22;
  MR_String IsDetStr_23;
  MR_Word ModesDetPieces_24;
  MR_String Var_46;

  switch (Uniq_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_String BoundName_21;
        MR_Word Var_38;
        MR_Word Var_39;

        BoundName_21 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_12, (MR_String) "ground");
        {
          Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_39, 0) = ((MR_Box) (BoundName_21));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[16])));
        }
        {
          UniqPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_20, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[13])));
          MR_hl_field(1, UniqPieces_20, 1) = ((MR_Box) (Var_38));
        }
      }
      break;
    case (MR_Integer) 0:
      UniqPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(Info_9, ArgModes_17, &ArgModesPieces_22, STATE_VARIABLE_Expansions_0_33, STATE_VARIABLE_Expansions_34);
  Var_46 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_19);
  IsDetStr_23 = mercury__string__f_43_43_2_f_0((MR_String) "is ", Var_46);
  switch (PredOrFunc_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word RealArgModePieces_28;
        MR_Word RetModePieces_29;
        MR_Box conv0_RetModePieces_29;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ArgModesPieces_22, &RealArgModePieces_28, &conv0_RetModePieces_29);
        RetModePieces_29 = ((MR_Word) (conv0_RetModePieces_29));
        if ((RealArgModePieces_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_73;
          MR_Word Var_74;
          MR_String Var_75;
          MR_String Var_77;
          MR_Word Var_79;
          MR_Word Var_80;

          Var_77 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func =");
          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_77);
          {
            Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_74, 0) = ((MR_Box) (Var_75));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) (RetModePieces_29));
          }
          {
            Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_80, 0) = ((MR_Box) (IsDetStr_23));
          }
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
          }
          ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_79);
        }
        else
        {
          MR_Word JoinedRealArgModePieces_32;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_String Var_87;
          MR_String Var_89;
          MR_Word Var_91;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_98;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_String Var_103;

          JoinedRealArgModePieces_32 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(RealArgModePieces_28);
          Var_89 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func(");
          Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_89);
          {
            Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_86, 0) = ((MR_Box) (Var_87));
          }
          {
            Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[3])));
            MR_hl_field(1, Var_91, 1) = ((MR_Box) (JoinedRealArgModePieces_32));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[15])));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) (RetModePieces_29));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
            MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
          }
          Var_103 = mercury__string__f_43_43_2_f_0(IsDetStr_23, (MR_String) ")");
          {
            Var_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_102, 0) = ((MR_Box) (Var_103));
          }
          {
            Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_101);
          ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_94);
        }
      }
      break;
    case (MR_Integer) 0:
      if ((ArgModes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_47;
        MR_String Var_48;
        MR_String Var_50;
        MR_Word Var_52;
        MR_Word Var_53;

        Var_50 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred");
        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
        {
          Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_47, 0) = ((MR_Box) (Var_48));
        }
        {
          Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_53, 0) = ((MR_Box) (IsDetStr_23));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          ModesDetPieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModesDetPieces_24, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, ModesDetPieces_24, 1) = ((MR_Box) (Var_52));
        }
      }
      else
      {
        MR_Word JoinedArgModePieces_27;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;
        MR_String Var_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;

        JoinedArgModePieces_27 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(ArgModesPieces_22);
        Var_62 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred(");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (JoinedArgModePieces_27));
        }
        {
          Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_68, 0) = ((MR_Box) (IsDetStr_23));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        ModesDetPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_64);
      }
      break;
  }
  *Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UniqPieces_20, ModesDetPieces_24);
}

static void MR_CALL 
hlds__error_msg_inst__record_internal_inst_name_5_p_0(
  MR_Word InstName_6,
  MR_String InstNameStr_7,
  MR_Word * InstNumPieces_8,
  MR_Word STATE_VARIABLE_Expansions_0_16,
  MR_Word * STATE_VARIABLE_Expansions_17)
{
  MR_Word ExpansionsMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, (MR_Integer) 0))));
  MR_Word ExpansionsCounter0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, (MR_Integer) 1))));
  MR_Integer InstNum_12;
  MR_Word ExpansionsCounter_13;
  MR_String InstNameNumStr_14;
  MR_Word ExpansionsMap_15;
  MR_Word Var_24;
  MR_String Var_28;
  MR_String Var_36;
  MR_String Var_37;

  mercury__counter__allocate_3_p_0(&InstNum_12, ExpansionsCounter0_11, &ExpansionsCounter_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[12]), InstNum_12, &Var_28);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " #", Var_28);
  Var_37 = mercury__string__f_43_43_2_f_0(InstNameStr_7, Var_36);
  InstNameNumStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "internal ", Var_37);
  {
    Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_24, 0) = ((MR_Box) (InstNameNumStr_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *InstNumPieces_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_6)), ((MR_Box) (*InstNumPieces_8)), ExpansionsMap0_10, &ExpansionsMap_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Expansions_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionsMap_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionsCounter_13));
  }
}

static void MR_CALL 
hlds__error_msg_inst__record_user_inst_name_4_p_0(
  MR_Word InstName_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Expansions_0_11,
  MR_Word * STATE_VARIABLE_Expansions_12)
{
  MR_bool succeeded;
  MR_Word ExpansionsMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, (MR_Integer) 0))));
  MR_Word ExpansionsCounter0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, (MR_Integer) 1))));
  MR_Word ExpansionsMap_10;

  succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ((MR_Box) (InstName_5)), ((MR_Box) (Pieces_6)), ExpansionsMap0_8, &ExpansionsMap_10);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Expansions_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ExpansionsMap_10));
      MR_hl_field(0, base, 1) = ((MR_Box) (ExpansionsCounter0_9));
    }
  else
    *STATE_VARIABLE_Expansions_12 = STATE_VARIABLE_Expansions_0_11;
}

static MR_bool MR_CALL 
hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(
  MR_Word Expansions_4,
  MR_Word InstName_5,
  MR_Word * PastPieces_6)
{
  MR_bool succeeded;
  MR_Word ExpansionsMap_7 = ((MR_Word) ((MR_hl_field(0, Expansions_4, (MR_Integer) 0))));
  MR_Box conv0_PastPieces_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]), ExpansionsMap_7, ((MR_Box) (InstName_5)), &conv0_PastPieces_6);
  if (succeeded)
  {
    *PastPieces_6 = ((MR_Word) (conv0_PastPieces_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(
  MR_Word Info_4,
  MR_Word SymName_5,
  MR_String * SymNameStr_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(1, SymName_5, (MR_Integer) 0))));
    MR_String BaseName_8 = ((MR_String) ((MR_hl_field(1, SymName_5, (MR_Integer) 1))));
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
    MR_Word CurModuleName_10;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &CurModuleName_10);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, CurModuleName_10);
    if (succeeded)
      *SymNameStr_6 = BaseName_8;
    else
      *SymNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
  }
  else
    *SymNameStr_6 = ((MR_String) ((MR_hl_field(0, SymName_5, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(
  MR_Word Pieces_4,
  MR_Integer Left_5,
  MR_String * Summary_6)
{
  MR_bool succeeded = (Left_5 > (MR_Integer) 0);
  MR_String FirstFixed_7;
  MR_Word AfterFirstFixed_8;
  MR_Word Var_12;

  if (succeeded)
  {
    succeeded = (Pieces_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(1, Pieces_4, (MR_Integer) 0))));
      AfterFirstFixed_8 = ((MR_Word) ((MR_hl_field(1, Pieces_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 2);
      if (succeeded)
      {
        FirstFixed_7 = ((MR_String) ((MR_hl_field(2, Var_12, (MR_Integer) 0))));
        if ((AfterFirstFixed_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Summary_6 = FirstFixed_7;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TailPieces_9;
          MR_String TailSummary_10;
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, (MR_Integer) 0))));
          MR_String Var_14;
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, (MR_Integer) 1))));
          MR_Word Var_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_String Var_19;
          MR_String Var_20;

          succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Var_14 = ((MR_String) ((MR_hl_field(3, Var_13, (MR_Integer) 1))));
            succeeded = (strcmp(Var_14, (MR_String) ",") == 0);
            if (succeeded)
            {
              succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
                TailPieces_9 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  Var_18 = (MR_Integer) 1;
                  Var_17 = (MR_Integer) ((MR_Unsigned) Left_5 - (MR_Unsigned) Var_18);
                  succeeded = hlds__error_msg_inst__summarize_a_few_arg_insts_3_p_0(TailPieces_9, Var_17, &TailSummary_10);
                  if (succeeded)
                  {
                    Var_20 = (MR_String) ", ";
                    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, TailSummary_10);
                    *Summary_6 = mercury__string__f_43_43_2_f_0(FirstFixed_7, Var_19);
                    succeeded = MR_TRUE;
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

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____expansions_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____expansions_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____expansions_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____expansions_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____inst_msg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____inst_msg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____inst_msg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____maybe_expand_named_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____maybe_expand_named_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____maybe_inline_pieces_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____maybe_inline_pieces_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____short_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____short_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____short_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____short_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__error_msg_inst__init(void)
{
}

void mercury__hlds__error_msg_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_expansions_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_inst_msg_info_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_inline_pieces_0);
	MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_short_inst_0);
}

void mercury__hlds__error_msg_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__error_msg_inst__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.error_msg_inst.
