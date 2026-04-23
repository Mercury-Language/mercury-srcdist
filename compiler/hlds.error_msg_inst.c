/*
** Automatically generated from `error_msg_inst.m'
** by the Mercury compiler,
** version rotd-2026-04-23
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.inst_lookup.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




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

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[4];

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[4];

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[4];

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

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_user_or_developer_0_1[1];

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_1;

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_0[1];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_1[1];

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_user_or_developer_0[2];

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_user_or_developer_0[2];

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_user_or_developer_0[2];

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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadBoundFunctor_11,
  MR_Word TailBoundFunctors_12,
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Expansions_34);

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadBoundFunctor_11,
  MR_Word TailBoundFunctors_12,
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

static void MR_CALL 
hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(
  MR_Word InstName_3,
  MR_String * InstNameStr_4);

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

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____user_or_developer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__error_msg_inst____Compare____user_or_developer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[16][1];




static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_1[31][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which expands to"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "named inst"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "<"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ") ="))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
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

static /* final */ const MR_Box hlds__error_msg_inst_scalar_common_3[16][1] = {
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
  { ((MR_Box) ((MR_String) "typed_inst(")) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "/*")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "*/")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) ") =")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) ">>")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "merge(")) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "mostly_uniq(")) },
  /* row  14 */
  { ((MR_Box) ((MR_String) "shared(")) },
  /* row  15 */
  { ((MR_Box) ((MR_String) "unify(")) },
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

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_inst_msg_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_maybe_expand_named_insts_0),
  (MR_PseudoTypeInfo) (&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_user_or_developer_0)
};

static const MR_ConstString hlds__error_msg_inst__hlds__error_msg_inst__field_names_inst_msg_info_0_0[4] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_inst_varset",
  (MR_String) "imi_named_insts",
  (MR_String) "imi_audience"
};

static const MR_DuArgLocn hlds__error_msg_inst__hlds__error_msg_inst__field_locns_inst_msg_info_0_0[4] = {
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_inst_msg_info_0_0 = {
  (MR_String) "inst_msg_info",
  INT16_C(4),
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
  (MR_String) "do_not_expand_named_insts",
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

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_0 = {
  (MR_String) "uod_user",
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

static const MR_FA_TypeInfo_Struct1 hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo hlds__error_msg_inst__hlds__error_msg_inst__field_types_user_or_developer_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__error_msg_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0) };

static const MR_DuFunctorDesc hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_1 = {
  (MR_String) "uod_developer",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__error_msg_inst__hlds__error_msg_inst__field_types_user_or_developer_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_0[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_0 };

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_1[1] = { &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_1 };

static const MR_DuPtagLayout hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_user_or_developer_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__error_msg_inst__hlds__error_msg_inst__du_stag_ordered_user_or_developer_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_user_or_developer_0[2] = {
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_1,
  &hlds__error_msg_inst__hlds__error_msg_inst__du_functor_desc_user_or_developer_0_0
};

static const MR_Integer hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_user_or_developer_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_user_or_developer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__error_msg_inst____Unify____user_or_developer_0_0_10001)),
  ((MR_Box) (hlds__error_msg_inst____Compare____user_or_developer_0_0_10001)),
  (MR_String) "hlds.error_msg_inst",
  (MR_String) "user_or_developer",
  { hlds__error_msg_inst__hlds__error_msg_inst__du_name_ordered_user_or_developer_0 },
  { hlds__error_msg_inst__hlds__error_msg_inst__du_ptag_ordered_user_or_developer_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__error_msg_inst__hlds__error_msg_inst__functor_number_map_user_or_developer_0,

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
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__error_msg_inst____Compare____user_or_developer_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
hlds__error_msg_inst____Compare____user_or_developer_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____inst_msg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = hlds__error_msg_inst____Unify____user_or_developer_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__error_msg_inst____Unify____user_or_developer_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&hlds__error_msg_inst_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_name_10_f_0(
  MR_Word ModuleInfo_12,
  MR_Word InstVarSet_13,
  MR_Word ExpandNamedInsts_14,
  MR_Word UserOrDeveloper_15,
  MR_Word QuoteShortInst_16,
  MR_Word ShortInstPrefix_17,
  MR_Word ShortInstSuffix_18,
  MR_Word LongInstPrefix_19,
  MR_Word LongInstSuffix_20,
  MR_Word InstName_21)
{
  MR_bool succeeded;
  MR_Word Pieces_22;
  MR_Word Info_23;
  MR_Word Expansions0_24;
  MR_Word InlinePieces_26;
  MR_String InlineStr_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word _InlineExpansions_27;
  MR_Integer Len_29;

  {
    Info_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_23, 0) = ((MR_Box) (ModuleInfo_12));
    MR_hl_field(0, Info_23, 1) = ((MR_Box) (InstVarSet_13));
    MR_hl_field(0, Info_23, 2) = (MR_Box) ((MR_Unsigned) (ExpandNamedInsts_14));
    MR_hl_field(0, Info_23, 3) = ((MR_Box) (UserOrDeveloper_15));
  }
  Var_33 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]));
  Var_34 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    Expansions0_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Expansions0_24, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, Expansions0_24, 1) = ((MR_Box) (Var_34));
  }
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_23, InstName_21, (MR_Word) ((MR_Unsigned) 0U), &InlinePieces_26, Expansions0_24, &_InlineExpansions_27);
  InlineStr_28 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(InlinePieces_26);
  mercury__string__length_2_p_0(InlineStr_28, &Len_29);
  succeeded = (Len_29 < (MR_Integer) 40);
  if (succeeded)
  {
    MR_Word InlinePiece_30;
    MR_Word Var_38;

    switch (QuoteShortInst_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InlinePiece_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, InlinePiece_30, 0) = ((MR_Box) (InlineStr_28));
        }
        break;
      case (MR_Integer) 0:
        {
          InlinePiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InlinePiece_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InlinePiece_30, 1) = ((MR_Box) (InlineStr_28));
        }
        break;
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (InlinePiece_30));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (ShortInstSuffix_18));
    }
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ShortInstPrefix_17, Var_38);
  }
  else
  {
    MR_Word MultiLinePieces_31;
    MR_Word _MultiLineExpansions_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_23, InstName_21, LongInstSuffix_20, &MultiLinePieces_31, Expansions0_24, &_MultiLineExpansions_32);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LongInstPrefix_19, MultiLinePieces_31);
  }
  return Pieces_22;
}

MR_Word MR_CALL 
hlds__error_msg_inst__error_msg_inst_10_f_0(
  MR_Word ModuleInfo_12,
  MR_Word InstVarSet_13,
  MR_Word ExpandNamedInsts_14,
  MR_Word UserOrDeveloper_15,
  MR_Word QuoteShortInst_16,
  MR_Word ShortInstPrefix_17,
  MR_Word ShortInstSuffix_18,
  MR_Word LongInstPrefix_19,
  MR_Word LongInstSuffix_20,
  MR_Word Inst_21)
{
  MR_bool succeeded;
  MR_Word Pieces_22;
  MR_Word Info_23;
  MR_Word Expansions0_24;
  MR_Word InlinePieces_26;
  MR_String InlineStr_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word _InlineExpansions_27;
  MR_Integer Len_29;

  {
    Info_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_23, 0) = ((MR_Box) (ModuleInfo_12));
    MR_hl_field(0, Info_23, 1) = ((MR_Box) (InstVarSet_13));
    MR_hl_field(0, Info_23, 2) = (MR_Box) ((MR_Unsigned) (ExpandNamedInsts_14));
    MR_hl_field(0, Info_23, 3) = ((MR_Box) (UserOrDeveloper_15));
  }
  Var_33 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (MR_Word) (&hlds__error_msg_inst_scalar_common_1[0]));
  Var_34 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    Expansions0_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Expansions0_24, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, Expansions0_24, 1) = ((MR_Box) (Var_34));
  }
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_23, Inst_21, (MR_Word) ((MR_Unsigned) 0U), &InlinePieces_26, Expansions0_24, &_InlineExpansions_27);
  InlineStr_28 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(InlinePieces_26);
  mercury__string__length_2_p_0(InlineStr_28, &Len_29);
  succeeded = (Len_29 < (MR_Integer) 40);
  if (succeeded)
  {
    MR_Word InlinePiece_30;
    MR_Word Var_38;

    switch (QuoteShortInst_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InlinePiece_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, InlinePiece_30, 0) = ((MR_Box) (InlineStr_28));
        }
        break;
      case (MR_Integer) 0:
        {
          InlinePiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InlinePiece_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InlinePiece_30, 1) = ((MR_Box) (InlineStr_28));
        }
        break;
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (InlinePiece_30));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (ShortInstSuffix_18));
    }
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ShortInstPrefix_17, Var_38);
  }
  else
  {
    MR_Word MultiLinePieces_31;
    MR_Word _MultiLineExpansions_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_23, Inst_21, LongInstSuffix_20, &MultiLinePieces_31, Expansions0_24, &_MultiLineExpansions_32);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LongInstPrefix_19, MultiLinePieces_31);
  }
  return Pieces_22;
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
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
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, 0))) & (MR_Integer) 7);

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
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, 0))) & (MR_Integer) 7);
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
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
            MR_Word HeadBoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 0))));
            MR_Word TailBoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_String Var_56;
            MR_Word Var_58;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, HeadBoundFunctor_18, TailBoundFunctors_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_56 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Suffix_11));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));

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
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
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
    MR_Word STATE_VARIABLE_Expansions_0_95 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
    MR_Word STATE_VARIABLE_Expansions_96;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_95, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_395;
            MR_Word Var_397;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_395 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_397 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_395));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, NameInfo_18, 3) = ((MR_Box) (Var_397));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_24);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
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

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_95, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_1_101;
                      MR_Word Var_447;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_1_101);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_447 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_447);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_1_101;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_116;
                        MR_Word Var_117;
                        MR_Word Var_120;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_1_101, &STATE_VARIABLE_Expansions_96);
                        {
                          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(1, Var_120, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
                        }
                        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[21])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_116);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_434_434;
                MR_Word TypeCtorInfo_435_435;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_127;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_434_434 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_435_435 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_127, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_434_434, TypeCtorInfo_435_435, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_330;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_330, STATE_VARIABLE_Expansions_0_95, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_330, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_129;
                  MR_String Var_130;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_129 = ((MR_Word) ((MR_hl_field(1, SymName_15, 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_130 = ((MR_String) ((MR_hl_field(0, Var_129, 0))));
                      succeeded = (strcmp(Var_130, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_331;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_331, STATE_VARIABLE_Expansions_0_95, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_331, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_1325;
                    MR_String Var_1333;
                    MR_String Var_1334;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[7]), Arity_22, &Var_1325);
                    Var_1333 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_1325);
                    Var_1334 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_1333);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_1334);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_1312 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_1313;
            MR_Word Var_1320;
            MR_Word Var_1322;
            MR_Word Var_1323;
            MR_Word EqvSymName_1227;
            MR_Word EqvArgInsts_1228;
            MR_Word EqvInstName_1094;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1312, InstName_10, &EqvInst_1313);
            Var_1323 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_1322 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_1320 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_1313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1313, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_1094 = ((MR_Word) ((MR_hl_field(3, EqvInst_1313, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_1094)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_1227 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1094, 0))));
                EqvArgInsts_1228 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1094, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1094);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_1096;
              MR_Word NameInfo_1099;
              MR_Word Var_1095;

              {
                NameInfo_1099 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_1099, 0) = ((MR_Box) (Var_1323));
                MR_hl_field(0, NameInfo_1099, 1) = ((MR_Box) (Var_1322));
                MR_hl_field(0, NameInfo_1099, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_1099, 3) = ((MR_Box) (Var_1320));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1227, &EqvSymNameStr_1096);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_1099, EqvSymNameStr_1096, EqvArgInsts_1228, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1095);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_1188;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1188);
              if ((Var_1320 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_1123;

                succeeded = ((((MR_tag((MR_Word) EqvInst_1313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1313, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_1123 = ((MR_Word) ((MR_hl_field(3, EqvInst_1313, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1123);
                }
                if (succeeded)
                {
                  MR_Word Var_1125;

                  {
                    Var_1125 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_1125, 0) = ((MR_Box) (InstNameStr_1188));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1125));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_1126;
                  MR_Word STATE_VARIABLE_Expansions_6_1127;
                  MR_Word Var_1128;
                  MR_Word Var_1129;
                  MR_Word Var_1131;
                  MR_Word Var_1133;
                  MR_Word EqvPieces_1135;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1188, &InstNumPieces_1126, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1127);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_1313, Suffix_11, &EqvPieces_1135, STATE_VARIABLE_Expansions_6_1127, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_1131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1131, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                    MR_hl_field(1, Var_1131, 1) = ((MR_Box) (EqvPieces_1135));
                  }
                  {
                    Var_1129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1129, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_1129, 1) = ((MR_Box) (Var_1131));
                  }
                  {
                    Var_1133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1133, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                    MR_hl_field(1, Var_1133, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_1128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1129, Var_1133);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1126, Var_1128);
                }
              }
              else
              {
                MR_Word Live_81 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) >> 1)) & (MR_Integer) 1);
                MR_Word Real_82 = ((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) & (MR_Integer) 1);
                MR_Word Var_243;
                MR_String Var_244;
                MR_String Var_245;
                MR_Word Var_247;
                MR_Word Var_248;
                MR_String Var_249;
                MR_String Var_250;
                MR_Word SubInstA_1100 = ((MR_Word) ((MR_hl_field(1, InstName_10, 1))));
                MR_Word SubInstB_1101 = ((MR_Word) ((MR_hl_field(1, InstName_10, 2))));
                MR_Word InitialArgs_1103;
                MR_Word SubInstPiecesA_1106;
                MR_Word SubInstPiecesB_1107;
                MR_Word STATE_VARIABLE_Expansions_8_1108;
                MR_Word Var_1114;
                MR_Word Var_1115;
                MR_Word Var_1117;
                MR_Word Var_1118;
                MR_Word Var_1120;

                Var_245 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_81);
                Var_244 = mercury__string__f_43_43_2_f_0(Var_245, (MR_String) ",");
                {
                  Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_243, 1) = ((MR_Box) (Var_244));
                }
                Var_250 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_82);
                Var_249 = mercury__string__f_43_43_2_f_0(Var_250, (MR_String) ",");
                {
                  Var_248 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_248, 0) = ((MR_Box) (Var_249));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) (Var_248));
                  MR_hl_field(1, Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitialArgs_1103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitialArgs_1103, 0) = ((MR_Box) (Var_243));
                  MR_hl_field(1, InitialArgs_1103, 1) = ((MR_Box) (Var_247));
                }
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstA_1100, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_1106, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_1108);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstB_1101, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_1107, STATE_VARIABLE_Expansions_8_1108, &STATE_VARIABLE_Expansions_96);
                Var_1120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_1107, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_1118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_1120);
                Var_1117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_1106, Var_1118);
                Var_1115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_1117);
                Var_1114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitialArgs_1103, Var_1115);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[30])), Var_1114);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_838 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_839;
            MR_Word Var_845;
            MR_Word Var_847;
            MR_Word Var_848;
            MR_Word EqvSymName_798;
            MR_Word EqvArgInsts_799;
            MR_Word EqvInstName_734;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_838, InstName_10, &EqvInst_839);
            Var_848 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_847 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_845 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_839)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_839, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_734 = ((MR_Word) ((MR_hl_field(3, EqvInst_839, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_734)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_798 = ((MR_Word) ((MR_hl_field(0, EqvInstName_734, 0))));
                EqvArgInsts_799 = ((MR_Word) ((MR_hl_field(0, EqvInstName_734, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_734);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_736;
              MR_Word NameInfo_739;
              MR_Word Var_735;

              {
                NameInfo_739 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_739, 0) = ((MR_Box) (Var_848));
                MR_hl_field(0, NameInfo_739, 1) = ((MR_Box) (Var_847));
                MR_hl_field(0, NameInfo_739, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_739, 3) = ((MR_Box) (Var_845));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_798, &EqvSymNameStr_736);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_739, EqvSymNameStr_736, EqvArgInsts_799, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_735);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_782;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_782);
              if ((Var_845 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_740;

                succeeded = ((((MR_tag((MR_Word) EqvInst_839)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_839, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_740 = ((MR_Word) ((MR_hl_field(3, EqvInst_839, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_740);
                }
                if (succeeded)
                {
                  MR_Word Var_742;

                  {
                    Var_742 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_742, 0) = ((MR_Box) (InstNameStr_782));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_742));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_743;
                  MR_Word STATE_VARIABLE_Expansions_6_744;
                  MR_Word Var_745;
                  MR_Word Var_746;
                  MR_Word Var_748;
                  MR_Word Var_750;
                  MR_Word EqvPieces_752;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_782, &InstNumPieces_743, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_744);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_839, Suffix_11, &EqvPieces_752, STATE_VARIABLE_Expansions_6_744, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_748 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_748, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                    MR_hl_field(1, Var_748, 1) = ((MR_Box) (EqvPieces_752));
                  }
                  {
                    Var_746 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_746, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_746, 1) = ((MR_Box) (Var_748));
                  }
                  {
                    Var_750 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_750, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                    MR_hl_field(1, Var_750, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_745 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_746, Var_750);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_743, Var_745);
                }
              }
              else
              {
                MR_Word SubInstA_83 = ((MR_Word) ((MR_hl_field(2, InstName_10, 0))));
                MR_Word SubInstB_84 = ((MR_Word) ((MR_hl_field(2, InstName_10, 1))));
                MR_Word SubInstPiecesA_89;
                MR_Word SubInstPiecesB_90;
                MR_Word STATE_VARIABLE_Expansions_8_253;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word Var_266;
                MR_Word Var_267;
                MR_Word Var_274;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstA_83, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_89, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_253);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstB_84, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_90, STATE_VARIABLE_Expansions_8_253, &STATE_VARIABLE_Expansions_96);
                Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_90, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_274);
                Var_266 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_89, Var_267);
                Var_261 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_266);
                Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_261);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[27])), Var_260);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_717 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_718;
                MR_Word Var_725;
                MR_Word Var_727;
                MR_Word Var_728;
                MR_Word EqvSymName_622;
                MR_Word EqvArgInsts_623;
                MR_Word EqvInstName_474;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_717, InstName_10, &EqvInst_718);
                Var_728 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_727 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_725 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_474 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_474)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_622 = ((MR_Word) ((MR_hl_field(0, EqvInstName_474, 0))));
                    EqvArgInsts_623 = ((MR_Word) ((MR_hl_field(0, EqvInstName_474, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_474);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_476;
                  MR_Word NameInfo_479;
                  MR_Word Var_475;

                  {
                    NameInfo_479 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_479, 0) = ((MR_Box) (Var_728));
                    MR_hl_field(0, NameInfo_479, 1) = ((MR_Box) (Var_727));
                    MR_hl_field(0, NameInfo_479, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_479, 3) = ((MR_Box) (Var_725));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_622, &EqvSymNameStr_476);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_479, EqvSymNameStr_476, EqvArgInsts_623, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_475);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_578;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_578);
                  if ((Var_725 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_508;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_508 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_508);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_510;

                      {
                        Var_510 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_510, 0) = ((MR_Box) (InstNameStr_578));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_510));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_511;
                      MR_Word STATE_VARIABLE_Expansions_6_512;
                      MR_Word Var_513;
                      MR_Word Var_514;
                      MR_Word Var_516;
                      MR_Word Var_518;
                      MR_Word EqvPieces_520;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_578, &InstNumPieces_511, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_512);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_718, Suffix_11, &EqvPieces_520, STATE_VARIABLE_Expansions_6_512, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_516 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_516, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_516, 1) = ((MR_Box) (EqvPieces_520));
                      }
                      {
                        Var_514 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_514, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_514, 1) = ((MR_Box) (Var_516));
                      }
                      {
                        Var_518 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_518, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_518, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_513 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_514, Var_518);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_511, Var_513);
                    }
                  }
                  else
                  {
                    MR_Word Uniq_353 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word Var_482;
                    MR_Word Var_483;
                    MR_String Var_484;
                    MR_String Var_485;
                    MR_String Var_487;
                    MR_Word Var_489;
                    MR_Word Var_490;
                    MR_String Var_491;
                    MR_String Var_492;
                    MR_Word Var_494;
                    MR_Word Var_495;
                    MR_String Var_496;
                    MR_String Var_497;
                    MR_Word Var_500;
                    MR_Word SubInstName_502 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_503;
                    MR_String UniqStr_504;
                    MR_Word Live_505 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_506 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_504 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_353, (MR_String) "shared");
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_502, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_503, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_487 = mercury__string__f_43_43_2_f_0(UniqStr_504, (MR_String) ",");
                    Var_485 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_487);
                    Var_484 = mercury__string__f_43_43_2_f_0((MR_String) "ground", Var_485);
                    {
                      Var_483 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_483, 0) = ((MR_Box) (Var_484));
                    }
                    Var_492 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_505);
                    Var_491 = mercury__string__f_43_43_2_f_0(Var_492, (MR_String) ",");
                    {
                      Var_490 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_490, 0) = ((MR_Box) (Var_491));
                    }
                    Var_497 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_506);
                    Var_496 = mercury__string__f_43_43_2_f_0(Var_497, (MR_String) ",");
                    {
                      Var_495 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_495, 0) = ((MR_Box) (Var_496));
                    }
                    {
                      Var_494 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_494, 0) = ((MR_Box) (Var_495));
                      MR_hl_field(1, Var_494, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_489 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_489, 0) = ((MR_Box) (Var_490));
                      MR_hl_field(1, Var_489, 1) = ((MR_Box) (Var_494));
                    }
                    {
                      Var_482 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_482, 0) = ((MR_Box) (Var_483));
                      MR_hl_field(1, Var_482, 1) = ((MR_Box) (Var_489));
                    }
                    Var_500 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_503, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_482, Var_500);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_392 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_393;
                MR_Word Var_464;
                MR_Word Var_466;
                MR_Word Var_467;
                MR_Word EqvSymName_74;
                MR_Word EqvArgInsts_75;
                MR_Word EqvInstName_73;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_392, InstName_10, &EqvInst_393);
                Var_467 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_466 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_464 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_73 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_73)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_74 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 0))));
                    EqvArgInsts_75 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_73);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_76;
                  MR_Word NameInfo_349;
                  MR_Word Var_77;

                  {
                    NameInfo_349 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_349, 0) = ((MR_Box) (Var_467));
                    MR_hl_field(0, NameInfo_349, 1) = ((MR_Box) (Var_466));
                    MR_hl_field(0, NameInfo_349, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_349, 3) = ((MR_Box) (Var_464));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_74, &EqvSymNameStr_76);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_349, EqvSymNameStr_76, EqvArgInsts_75, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_77);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_78;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_78);
                  if ((Var_464 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_448;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_448 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_448);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_218;

                      {
                        Var_218 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_218, 0) = ((MR_Box) (InstNameStr_78));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_218));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_79;
                      MR_Word STATE_VARIABLE_Expansions_6_219;
                      MR_Word Var_233;
                      MR_Word Var_234;
                      MR_Word Var_237;
                      MR_Word Var_240;
                      MR_Word EqvPieces_350;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_78, &InstNumPieces_79, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_219);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_393, Suffix_11, &EqvPieces_350, STATE_VARIABLE_Expansions_6_219, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_237, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_237, 1) = ((MR_Box) (EqvPieces_350));
                      }
                      {
                        Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_234, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_234, 1) = ((MR_Box) (Var_237));
                      }
                      {
                        Var_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_240, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_240, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_234, Var_240);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_79, Var_233);
                    }
                  }
                  else
                  {
                    MR_Word Var_284;
                    MR_Word Var_285;
                    MR_String Var_286;
                    MR_String Var_287;
                    MR_String Var_289;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_String Var_293;
                    MR_String Var_294;
                    MR_Word Var_296;
                    MR_Word Var_297;
                    MR_String Var_298;
                    MR_String Var_299;
                    MR_Word Var_305;
                    MR_Word Uniq_354 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word SubInstName_356 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_357;
                    MR_String UniqStr_359;
                    MR_Word Live_360 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_361 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_359 = parse_tree__parse_tree_to_term__any_inst_uniqueness_1_f_0(Uniq_354);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_356, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_357, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_289 = mercury__string__f_43_43_2_f_0(UniqStr_359, (MR_String) ",");
                    Var_287 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_289);
                    Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "any", Var_287);
                    {
                      Var_285 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_285, 0) = ((MR_Box) (Var_286));
                    }
                    Var_294 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_360);
                    Var_293 = mercury__string__f_43_43_2_f_0(Var_294, (MR_String) ",");
                    {
                      Var_292 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_292, 0) = ((MR_Box) (Var_293));
                    }
                    Var_299 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_361);
                    Var_298 = mercury__string__f_43_43_2_f_0(Var_299, (MR_String) ",");
                    {
                      Var_297 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_297, 0) = ((MR_Box) (Var_298));
                    }
                    {
                      Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                      MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_291, 0) = ((MR_Box) (Var_292));
                      MR_hl_field(1, Var_291, 1) = ((MR_Box) (Var_296));
                    }
                    {
                      Var_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_284, 0) = ((MR_Box) (Var_285));
                      MR_hl_field(1, Var_284, 1) = ((MR_Box) (Var_291));
                    }
                    Var_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_357, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_284, Var_305);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_1078 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1079;
                MR_Word Var_1085;
                MR_Word Var_1087;
                MR_Word Var_1088;
                MR_Word EqvSymName_1038;
                MR_Word EqvArgInsts_1039;
                MR_Word EqvInstName_974;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1078, InstName_10, &EqvInst_1079);
                Var_1088 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1087 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1085 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1079)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1079, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_974 = ((MR_Word) ((MR_hl_field(3, EqvInst_1079, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_974)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_1038 = ((MR_Word) ((MR_hl_field(0, EqvInstName_974, 0))));
                    EqvArgInsts_1039 = ((MR_Word) ((MR_hl_field(0, EqvInstName_974, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_974);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_976;
                  MR_Word NameInfo_979;
                  MR_Word Var_975;

                  {
                    NameInfo_979 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_979, 0) = ((MR_Box) (Var_1088));
                    MR_hl_field(0, NameInfo_979, 1) = ((MR_Box) (Var_1087));
                    MR_hl_field(0, NameInfo_979, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_979, 3) = ((MR_Box) (Var_1085));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1038, &EqvSymNameStr_976);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_979, EqvSymNameStr_976, EqvArgInsts_1039, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_975);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_1022;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1022);
                  if ((Var_1085 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_980;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1079)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1079, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_980 = ((MR_Word) ((MR_hl_field(3, EqvInst_1079, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_980);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_982;

                      {
                        Var_982 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_982, 0) = ((MR_Box) (InstNameStr_1022));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_982));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_983;
                      MR_Word STATE_VARIABLE_Expansions_6_984;
                      MR_Word Var_985;
                      MR_Word Var_986;
                      MR_Word Var_988;
                      MR_Word Var_990;
                      MR_Word EqvPieces_992;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1022, &InstNumPieces_983, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_984);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_1079, Suffix_11, &EqvPieces_992, STATE_VARIABLE_Expansions_6_984, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_988 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_988, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_988, 1) = ((MR_Box) (EqvPieces_992));
                      }
                      {
                        Var_986 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_986, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_986, 1) = ((MR_Box) (Var_988));
                      }
                      {
                        Var_990 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_990, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_990, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_985 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_986, Var_990);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_983, Var_985);
                    }
                  }
                  else
                  {
                    MR_Word Var_458;
                    MR_Word SubInstName_460 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_461;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_460, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_461, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_458 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_461, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[29])), Var_458);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_958 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_959;
                MR_Word Var_965;
                MR_Word Var_967;
                MR_Word Var_968;
                MR_Word EqvSymName_918;
                MR_Word EqvArgInsts_919;
                MR_Word EqvInstName_854;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_958, InstName_10, &EqvInst_959);
                Var_968 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_967 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_965 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_959)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_959, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_854 = ((MR_Word) ((MR_hl_field(3, EqvInst_959, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_854)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_918 = ((MR_Word) ((MR_hl_field(0, EqvInstName_854, 0))));
                    EqvArgInsts_919 = ((MR_Word) ((MR_hl_field(0, EqvInstName_854, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_854);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_856;
                  MR_Word NameInfo_859;
                  MR_Word Var_855;

                  {
                    NameInfo_859 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_859, 0) = ((MR_Box) (Var_968));
                    MR_hl_field(0, NameInfo_859, 1) = ((MR_Box) (Var_967));
                    MR_hl_field(0, NameInfo_859, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_859, 3) = ((MR_Box) (Var_965));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_918, &EqvSymNameStr_856);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_859, EqvSymNameStr_856, EqvArgInsts_919, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_855);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_902;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_902);
                  if ((Var_965 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_860;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_959)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_959, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_860 = ((MR_Word) ((MR_hl_field(3, EqvInst_959, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_860);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_862;

                      {
                        Var_862 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_862, 0) = ((MR_Box) (InstNameStr_902));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_862));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_863;
                      MR_Word STATE_VARIABLE_Expansions_6_864;
                      MR_Word Var_865;
                      MR_Word Var_866;
                      MR_Word Var_868;
                      MR_Word Var_870;
                      MR_Word EqvPieces_872;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_902, &InstNumPieces_863, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_864);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_959, Suffix_11, &EqvPieces_872, STATE_VARIABLE_Expansions_6_864, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_868 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_868, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_868, 1) = ((MR_Box) (EqvPieces_872));
                      }
                      {
                        Var_866 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_866, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_866, 1) = ((MR_Box) (Var_868));
                      }
                      {
                        Var_870 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_870, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_870, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_865 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_866, Var_870);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_863, Var_865);
                    }
                  }
                  else
                  {
                    MR_Word Var_322;
                    MR_Word SubInstName_362 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_363;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_362, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_363, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_322 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_363, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[28])), Var_322);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_55 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 1))) & (MR_Integer) 7);
                MR_Word Type_344 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_345 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_411 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_345 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word EqvInst_335;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                  MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                  MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                  {
                    EqvInst_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, EqvInst_335, 0) = (MR_Box) ((MR_Unsigned) (Uniq_55));
                    MR_hl_field(1, EqvInst_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                  next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_335;
                  next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_95;
                  tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                  tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                  tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                  tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_String UniqStr_56;
                  MR_Word Var_206;
                  MR_Word Var_207;
                  MR_String Var_208;
                  MR_String Var_210;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word TVarSet_336 = ((MR_Word) ((MR_hl_field(1, Audience_345, 0))));
                  MR_Word TypePieces_338;

                  TypePieces_338 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_336, Var_411, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_344);
                  UniqStr_56 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_55, (MR_String) "shared");
                  Var_210 = mercury__string__f_43_43_2_f_0(UniqStr_56, (MR_String) ",");
                  Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "typed_ground(", Var_210);
                  {
                    Var_207 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_207, 0) = ((MR_Box) (Var_208));
                  }
                  {
                    Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_206, 0) = ((MR_Box) (Var_207));
                    MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_214, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(1, Var_214, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_338, Var_214);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_206, Var_213);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Type_48 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_50 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_405 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_50 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                  MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                  MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_95;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                  tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                  tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                  tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word TVarSet_51 = ((MR_Word) ((MR_hl_field(1, Audience_50, 0))));
                  MR_Word TypePieces_53;
                  MR_Word SubInstNamePieces_54;
                  MR_Word Var_171;
                  MR_Word Var_172;
                  MR_Word Var_177;
                  MR_Word Var_178;

                  TypePieces_53 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_51, Var_405, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_48);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_49, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_54, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_178, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(1, Var_178, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_54, Var_178);
                  Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[10])), Var_177);
                  Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_53, Var_172);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[20])), Var_171);
                }
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_96;
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95,
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
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, 0))) & (MR_Integer) 7);

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
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, 0))) & (MR_Integer) 7);
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
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
            MR_Word HeadBoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 0))));
            MR_Word TailBoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_String Var_56;
            MR_Word Var_58;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_8, HeadBoundFunctor_18, TailBoundFunctors_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_56 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (BoundPieces_20));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Suffix_11));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));

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
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
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
    MR_Word STATE_VARIABLE_Expansions_0_95 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
    MR_Word STATE_VARIABLE_Expansions_96;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_95, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_395;
            MR_Word Var_397;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_395 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_397 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_395));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, NameInfo_18, 3) = ((MR_Box) (Var_397));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_24);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
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

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_95, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_1_101;
                      MR_Word Var_447;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_1_101);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_447 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_447);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_1_101;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_116;
                        MR_Word Var_117;
                        MR_Word Var_120;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_1_101, &STATE_VARIABLE_Expansions_96);
                        {
                          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                          MR_hl_field(1, Var_120, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
                        }
                        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[21])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_116);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_434_434;
                MR_Word TypeCtorInfo_435_435;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_127;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_434_434 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_435_435 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_127, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_434_434, TypeCtorInfo_435_435, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_330;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_330, STATE_VARIABLE_Expansions_0_95, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_330, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_129;
                  MR_String Var_130;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_129 = ((MR_Word) ((MR_hl_field(1, SymName_15, 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_130 = ((MR_String) ((MR_hl_field(0, Var_129, 0))));
                      succeeded = (strcmp(Var_130, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_331;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_331, STATE_VARIABLE_Expansions_0_95, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_331, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_1325;
                    MR_String Var_1333;
                    MR_String Var_1334;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[7]), Arity_22, &Var_1325);
                    Var_1333 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_1325);
                    Var_1334 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_1333);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_1334);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_1312 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_1313;
            MR_Word Var_1320;
            MR_Word Var_1322;
            MR_Word Var_1323;
            MR_Word EqvSymName_1227;
            MR_Word EqvArgInsts_1228;
            MR_Word EqvInstName_1094;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1312, InstName_10, &EqvInst_1313);
            Var_1323 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_1322 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_1320 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_1313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1313, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_1094 = ((MR_Word) ((MR_hl_field(3, EqvInst_1313, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_1094)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_1227 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1094, 0))));
                EqvArgInsts_1228 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1094, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1094);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_1096;
              MR_Word NameInfo_1099;
              MR_Word Var_1095;

              {
                NameInfo_1099 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_1099, 0) = ((MR_Box) (Var_1323));
                MR_hl_field(0, NameInfo_1099, 1) = ((MR_Box) (Var_1322));
                MR_hl_field(0, NameInfo_1099, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_1099, 3) = ((MR_Box) (Var_1320));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1227, &EqvSymNameStr_1096);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_1099, EqvSymNameStr_1096, EqvArgInsts_1228, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1095);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_1188;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1188);
              if ((Var_1320 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_1123;

                succeeded = ((((MR_tag((MR_Word) EqvInst_1313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1313, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_1123 = ((MR_Word) ((MR_hl_field(3, EqvInst_1313, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1123);
                }
                if (succeeded)
                {
                  MR_Word Var_1125;

                  {
                    Var_1125 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_1125, 0) = ((MR_Box) (InstNameStr_1188));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1125));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_1126;
                  MR_Word STATE_VARIABLE_Expansions_6_1127;
                  MR_Word Var_1128;
                  MR_Word Var_1129;
                  MR_Word Var_1131;
                  MR_Word Var_1133;
                  MR_Word EqvPieces_1135;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1188, &InstNumPieces_1126, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1127);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_1313, Suffix_11, &EqvPieces_1135, STATE_VARIABLE_Expansions_6_1127, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_1131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1131, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                    MR_hl_field(1, Var_1131, 1) = ((MR_Box) (EqvPieces_1135));
                  }
                  {
                    Var_1129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1129, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_1129, 1) = ((MR_Box) (Var_1131));
                  }
                  {
                    Var_1133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1133, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                    MR_hl_field(1, Var_1133, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_1128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1129, Var_1133);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1126, Var_1128);
                }
              }
              else
              {
                MR_Word Live_81 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) >> 1)) & (MR_Integer) 1);
                MR_Word Real_82 = ((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) & (MR_Integer) 1);
                MR_Word Var_243;
                MR_String Var_244;
                MR_String Var_245;
                MR_Word Var_247;
                MR_Word Var_248;
                MR_String Var_249;
                MR_String Var_250;
                MR_Word SubInstA_1100 = ((MR_Word) ((MR_hl_field(1, InstName_10, 1))));
                MR_Word SubInstB_1101 = ((MR_Word) ((MR_hl_field(1, InstName_10, 2))));
                MR_Word InitialArgs_1103;
                MR_Word SubInstPiecesA_1106;
                MR_Word SubInstPiecesB_1107;
                MR_Word STATE_VARIABLE_Expansions_8_1108;
                MR_Word Var_1114;
                MR_Word Var_1115;
                MR_Word Var_1117;
                MR_Word Var_1118;
                MR_Word Var_1120;

                Var_245 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_81);
                Var_244 = mercury__string__f_43_43_2_f_0(Var_245, (MR_String) ",");
                {
                  Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_243, 1) = ((MR_Box) (Var_244));
                }
                Var_250 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_82);
                Var_249 = mercury__string__f_43_43_2_f_0(Var_250, (MR_String) ",");
                {
                  Var_248 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_248, 0) = ((MR_Box) (Var_249));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) (Var_248));
                  MR_hl_field(1, Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitialArgs_1103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitialArgs_1103, 0) = ((MR_Box) (Var_243));
                  MR_hl_field(1, InitialArgs_1103, 1) = ((MR_Box) (Var_247));
                }
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstA_1100, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_1106, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_1108);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstB_1101, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_1107, STATE_VARIABLE_Expansions_8_1108, &STATE_VARIABLE_Expansions_96);
                Var_1120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_1107, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_1118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_1120);
                Var_1117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_1106, Var_1118);
                Var_1115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_1117);
                Var_1114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitialArgs_1103, Var_1115);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[30])), Var_1114);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_838 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_839;
            MR_Word Var_845;
            MR_Word Var_847;
            MR_Word Var_848;
            MR_Word EqvSymName_798;
            MR_Word EqvArgInsts_799;
            MR_Word EqvInstName_734;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_838, InstName_10, &EqvInst_839);
            Var_848 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_847 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_845 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_839)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_839, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_734 = ((MR_Word) ((MR_hl_field(3, EqvInst_839, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_734)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_798 = ((MR_Word) ((MR_hl_field(0, EqvInstName_734, 0))));
                EqvArgInsts_799 = ((MR_Word) ((MR_hl_field(0, EqvInstName_734, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_734);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_736;
              MR_Word NameInfo_739;
              MR_Word Var_735;

              {
                NameInfo_739 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_739, 0) = ((MR_Box) (Var_848));
                MR_hl_field(0, NameInfo_739, 1) = ((MR_Box) (Var_847));
                MR_hl_field(0, NameInfo_739, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_739, 3) = ((MR_Box) (Var_845));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_798, &EqvSymNameStr_736);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_739, EqvSymNameStr_736, EqvArgInsts_799, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_735);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_782;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_782);
              if ((Var_845 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_740;

                succeeded = ((((MR_tag((MR_Word) EqvInst_839)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_839, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_740 = ((MR_Word) ((MR_hl_field(3, EqvInst_839, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_740);
                }
                if (succeeded)
                {
                  MR_Word Var_742;

                  {
                    Var_742 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_742, 0) = ((MR_Box) (InstNameStr_782));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_742));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_743;
                  MR_Word STATE_VARIABLE_Expansions_6_744;
                  MR_Word Var_745;
                  MR_Word Var_746;
                  MR_Word Var_748;
                  MR_Word Var_750;
                  MR_Word EqvPieces_752;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_782, &InstNumPieces_743, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_744);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_839, Suffix_11, &EqvPieces_752, STATE_VARIABLE_Expansions_6_744, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_748 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_748, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                    MR_hl_field(1, Var_748, 1) = ((MR_Box) (EqvPieces_752));
                  }
                  {
                    Var_746 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_746, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_746, 1) = ((MR_Box) (Var_748));
                  }
                  {
                    Var_750 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_750, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                    MR_hl_field(1, Var_750, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_745 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_746, Var_750);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_743, Var_745);
                }
              }
              else
              {
                MR_Word SubInstA_83 = ((MR_Word) ((MR_hl_field(2, InstName_10, 0))));
                MR_Word SubInstB_84 = ((MR_Word) ((MR_hl_field(2, InstName_10, 1))));
                MR_Word SubInstPiecesA_89;
                MR_Word SubInstPiecesB_90;
                MR_Word STATE_VARIABLE_Expansions_8_253;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word Var_266;
                MR_Word Var_267;
                MR_Word Var_274;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstA_83, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_89, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_253);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstB_84, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_90, STATE_VARIABLE_Expansions_8_253, &STATE_VARIABLE_Expansions_96);
                Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_90, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_274);
                Var_266 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_89, Var_267);
                Var_261 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_266);
                Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_261);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[27])), Var_260);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_717 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_718;
                MR_Word Var_725;
                MR_Word Var_727;
                MR_Word Var_728;
                MR_Word EqvSymName_622;
                MR_Word EqvArgInsts_623;
                MR_Word EqvInstName_474;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_717, InstName_10, &EqvInst_718);
                Var_728 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_727 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_725 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_474 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_474)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_622 = ((MR_Word) ((MR_hl_field(0, EqvInstName_474, 0))));
                    EqvArgInsts_623 = ((MR_Word) ((MR_hl_field(0, EqvInstName_474, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_474);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_476;
                  MR_Word NameInfo_479;
                  MR_Word Var_475;

                  {
                    NameInfo_479 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_479, 0) = ((MR_Box) (Var_728));
                    MR_hl_field(0, NameInfo_479, 1) = ((MR_Box) (Var_727));
                    MR_hl_field(0, NameInfo_479, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_479, 3) = ((MR_Box) (Var_725));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_622, &EqvSymNameStr_476);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_479, EqvSymNameStr_476, EqvArgInsts_623, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_475);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_578;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_578);
                  if ((Var_725 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_508;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_718)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_718, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_508 = ((MR_Word) ((MR_hl_field(3, EqvInst_718, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_508);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_510;

                      {
                        Var_510 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_510, 0) = ((MR_Box) (InstNameStr_578));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_510));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_511;
                      MR_Word STATE_VARIABLE_Expansions_6_512;
                      MR_Word Var_513;
                      MR_Word Var_514;
                      MR_Word Var_516;
                      MR_Word Var_518;
                      MR_Word EqvPieces_520;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_578, &InstNumPieces_511, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_512);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_718, Suffix_11, &EqvPieces_520, STATE_VARIABLE_Expansions_6_512, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_516 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_516, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_516, 1) = ((MR_Box) (EqvPieces_520));
                      }
                      {
                        Var_514 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_514, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_514, 1) = ((MR_Box) (Var_516));
                      }
                      {
                        Var_518 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_518, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_518, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_513 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_514, Var_518);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_511, Var_513);
                    }
                  }
                  else
                  {
                    MR_Word Uniq_353 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word Var_482;
                    MR_Word Var_483;
                    MR_String Var_484;
                    MR_String Var_485;
                    MR_String Var_487;
                    MR_Word Var_489;
                    MR_Word Var_490;
                    MR_String Var_491;
                    MR_String Var_492;
                    MR_Word Var_494;
                    MR_Word Var_495;
                    MR_String Var_496;
                    MR_String Var_497;
                    MR_Word Var_500;
                    MR_Word SubInstName_502 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_503;
                    MR_String UniqStr_504;
                    MR_Word Live_505 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_506 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_504 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_353, (MR_String) "shared");
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_502, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_503, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_487 = mercury__string__f_43_43_2_f_0(UniqStr_504, (MR_String) ",");
                    Var_485 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_487);
                    Var_484 = mercury__string__f_43_43_2_f_0((MR_String) "ground", Var_485);
                    {
                      Var_483 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_483, 0) = ((MR_Box) (Var_484));
                    }
                    Var_492 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_505);
                    Var_491 = mercury__string__f_43_43_2_f_0(Var_492, (MR_String) ",");
                    {
                      Var_490 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_490, 0) = ((MR_Box) (Var_491));
                    }
                    Var_497 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_506);
                    Var_496 = mercury__string__f_43_43_2_f_0(Var_497, (MR_String) ",");
                    {
                      Var_495 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_495, 0) = ((MR_Box) (Var_496));
                    }
                    {
                      Var_494 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_494, 0) = ((MR_Box) (Var_495));
                      MR_hl_field(1, Var_494, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_489 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_489, 0) = ((MR_Box) (Var_490));
                      MR_hl_field(1, Var_489, 1) = ((MR_Box) (Var_494));
                    }
                    {
                      Var_482 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_482, 0) = ((MR_Box) (Var_483));
                      MR_hl_field(1, Var_482, 1) = ((MR_Box) (Var_489));
                    }
                    Var_500 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_503, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_482, Var_500);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_392 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_393;
                MR_Word Var_464;
                MR_Word Var_466;
                MR_Word Var_467;
                MR_Word EqvSymName_74;
                MR_Word EqvArgInsts_75;
                MR_Word EqvInstName_73;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_392, InstName_10, &EqvInst_393);
                Var_467 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_466 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_464 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_73 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_73)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_74 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 0))));
                    EqvArgInsts_75 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_73);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_76;
                  MR_Word NameInfo_349;
                  MR_Word Var_77;

                  {
                    NameInfo_349 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_349, 0) = ((MR_Box) (Var_467));
                    MR_hl_field(0, NameInfo_349, 1) = ((MR_Box) (Var_466));
                    MR_hl_field(0, NameInfo_349, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_349, 3) = ((MR_Box) (Var_464));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_74, &EqvSymNameStr_76);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_349, EqvSymNameStr_76, EqvArgInsts_75, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_77);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_78;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_78);
                  if ((Var_464 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_448;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_448 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_448);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_218;

                      {
                        Var_218 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_218, 0) = ((MR_Box) (InstNameStr_78));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_218));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_79;
                      MR_Word STATE_VARIABLE_Expansions_6_219;
                      MR_Word Var_233;
                      MR_Word Var_234;
                      MR_Word Var_237;
                      MR_Word Var_240;
                      MR_Word EqvPieces_350;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_78, &InstNumPieces_79, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_219);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_393, Suffix_11, &EqvPieces_350, STATE_VARIABLE_Expansions_6_219, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_237, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_237, 1) = ((MR_Box) (EqvPieces_350));
                      }
                      {
                        Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_234, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_234, 1) = ((MR_Box) (Var_237));
                      }
                      {
                        Var_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_240, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_240, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_234, Var_240);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_79, Var_233);
                    }
                  }
                  else
                  {
                    MR_Word Var_284;
                    MR_Word Var_285;
                    MR_String Var_286;
                    MR_String Var_287;
                    MR_String Var_289;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_String Var_293;
                    MR_String Var_294;
                    MR_Word Var_296;
                    MR_Word Var_297;
                    MR_String Var_298;
                    MR_String Var_299;
                    MR_Word Var_305;
                    MR_Word Uniq_354 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word SubInstName_356 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_357;
                    MR_String UniqStr_359;
                    MR_Word Live_360 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_361 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_359 = parse_tree__parse_tree_to_term__any_inst_uniqueness_1_f_0(Uniq_354);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_356, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_357, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_289 = mercury__string__f_43_43_2_f_0(UniqStr_359, (MR_String) ",");
                    Var_287 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_289);
                    Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "any", Var_287);
                    {
                      Var_285 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_285, 0) = ((MR_Box) (Var_286));
                    }
                    Var_294 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_360);
                    Var_293 = mercury__string__f_43_43_2_f_0(Var_294, (MR_String) ",");
                    {
                      Var_292 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_292, 0) = ((MR_Box) (Var_293));
                    }
                    Var_299 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_361);
                    Var_298 = mercury__string__f_43_43_2_f_0(Var_299, (MR_String) ",");
                    {
                      Var_297 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_297, 0) = ((MR_Box) (Var_298));
                    }
                    {
                      Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                      MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_291, 0) = ((MR_Box) (Var_292));
                      MR_hl_field(1, Var_291, 1) = ((MR_Box) (Var_296));
                    }
                    {
                      Var_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_284, 0) = ((MR_Box) (Var_285));
                      MR_hl_field(1, Var_284, 1) = ((MR_Box) (Var_291));
                    }
                    Var_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_357, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_284, Var_305);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_1078 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1079;
                MR_Word Var_1085;
                MR_Word Var_1087;
                MR_Word Var_1088;
                MR_Word EqvSymName_1038;
                MR_Word EqvArgInsts_1039;
                MR_Word EqvInstName_974;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1078, InstName_10, &EqvInst_1079);
                Var_1088 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1087 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1085 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1079)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1079, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_974 = ((MR_Word) ((MR_hl_field(3, EqvInst_1079, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_974)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_1038 = ((MR_Word) ((MR_hl_field(0, EqvInstName_974, 0))));
                    EqvArgInsts_1039 = ((MR_Word) ((MR_hl_field(0, EqvInstName_974, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_974);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_976;
                  MR_Word NameInfo_979;
                  MR_Word Var_975;

                  {
                    NameInfo_979 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_979, 0) = ((MR_Box) (Var_1088));
                    MR_hl_field(0, NameInfo_979, 1) = ((MR_Box) (Var_1087));
                    MR_hl_field(0, NameInfo_979, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_979, 3) = ((MR_Box) (Var_1085));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1038, &EqvSymNameStr_976);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_979, EqvSymNameStr_976, EqvArgInsts_1039, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_975);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_1022;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1022);
                  if ((Var_1085 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_980;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1079)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1079, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_980 = ((MR_Word) ((MR_hl_field(3, EqvInst_1079, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_980);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_982;

                      {
                        Var_982 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_982, 0) = ((MR_Box) (InstNameStr_1022));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_982));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_983;
                      MR_Word STATE_VARIABLE_Expansions_6_984;
                      MR_Word Var_985;
                      MR_Word Var_986;
                      MR_Word Var_988;
                      MR_Word Var_990;
                      MR_Word EqvPieces_992;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1022, &InstNumPieces_983, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_984);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_1079, Suffix_11, &EqvPieces_992, STATE_VARIABLE_Expansions_6_984, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_988 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_988, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_988, 1) = ((MR_Box) (EqvPieces_992));
                      }
                      {
                        Var_986 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_986, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_986, 1) = ((MR_Box) (Var_988));
                      }
                      {
                        Var_990 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_990, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_990, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_985 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_986, Var_990);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_983, Var_985);
                    }
                  }
                  else
                  {
                    MR_Word Var_458;
                    MR_Word SubInstName_460 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_461;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_460, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_461, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_458 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_461, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[29])), Var_458);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_958 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_959;
                MR_Word Var_965;
                MR_Word Var_967;
                MR_Word Var_968;
                MR_Word EqvSymName_918;
                MR_Word EqvArgInsts_919;
                MR_Word EqvInstName_854;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_958, InstName_10, &EqvInst_959);
                Var_968 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_967 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_965 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_959)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_959, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_854 = ((MR_Word) ((MR_hl_field(3, EqvInst_959, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_854)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_918 = ((MR_Word) ((MR_hl_field(0, EqvInstName_854, 0))));
                    EqvArgInsts_919 = ((MR_Word) ((MR_hl_field(0, EqvInstName_854, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_854);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_856;
                  MR_Word NameInfo_859;
                  MR_Word Var_855;

                  {
                    NameInfo_859 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_859, 0) = ((MR_Box) (Var_968));
                    MR_hl_field(0, NameInfo_859, 1) = ((MR_Box) (Var_967));
                    MR_hl_field(0, NameInfo_859, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_859, 3) = ((MR_Box) (Var_965));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_918, &EqvSymNameStr_856);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(NameInfo_859, EqvSymNameStr_856, EqvArgInsts_919, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_855);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_902;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_902);
                  if ((Var_965 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_860;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_959)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_959, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_860 = ((MR_Word) ((MR_hl_field(3, EqvInst_959, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_860);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_862;

                      {
                        Var_862 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_862, 0) = ((MR_Box) (InstNameStr_902));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_862));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_863;
                      MR_Word STATE_VARIABLE_Expansions_6_864;
                      MR_Word Var_865;
                      MR_Word Var_866;
                      MR_Word Var_868;
                      MR_Word Var_870;
                      MR_Word EqvPieces_872;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_902, &InstNumPieces_863, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_864);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, EqvInst_959, Suffix_11, &EqvPieces_872, STATE_VARIABLE_Expansions_6_864, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_868 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_868, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[18])));
                        MR_hl_field(1, Var_868, 1) = ((MR_Box) (EqvPieces_872));
                      }
                      {
                        Var_866 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_866, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_866, 1) = ((MR_Box) (Var_868));
                      }
                      {
                        Var_870 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_870, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[19])));
                        MR_hl_field(1, Var_870, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_865 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_866, Var_870);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_863, Var_865);
                    }
                  }
                  else
                  {
                    MR_Word Var_322;
                    MR_Word SubInstName_362 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_363;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_362, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_363, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_322 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_363, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[28])), Var_322);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_55 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 1))) & (MR_Integer) 7);
                MR_Word Type_344 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_345 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_411 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_345 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word EqvInst_335;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                  MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                  MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                  {
                    EqvInst_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, EqvInst_335, 0) = (MR_Box) ((MR_Unsigned) (Uniq_55));
                    MR_hl_field(1, EqvInst_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                  next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_335;
                  next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_95;
                  tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                  tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                  tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                  tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_String UniqStr_56;
                  MR_Word Var_206;
                  MR_Word Var_207;
                  MR_String Var_208;
                  MR_String Var_210;
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word TVarSet_336 = ((MR_Word) ((MR_hl_field(1, Audience_345, 0))));
                  MR_Word TypePieces_338;

                  TypePieces_338 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_336, Var_411, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_344);
                  UniqStr_56 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_55, (MR_String) "shared");
                  Var_210 = mercury__string__f_43_43_2_f_0(UniqStr_56, (MR_String) ",");
                  Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "typed_ground(", Var_210);
                  {
                    Var_207 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_207, 0) = ((MR_Box) (Var_208));
                  }
                  {
                    Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_206, 0) = ((MR_Box) (Var_207));
                    MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_214, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(1, Var_214, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_338, Var_214);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_206, Var_213);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Type_48 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_50 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_405 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_50 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                  MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                  MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_95;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                  tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                  tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                  tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word TVarSet_51 = ((MR_Word) ((MR_hl_field(1, Audience_50, 0))));
                  MR_Word TypePieces_53;
                  MR_Word SubInstNamePieces_54;
                  MR_Word Var_171;
                  MR_Word Var_172;
                  MR_Word Var_177;
                  MR_Word Var_178;

                  TypePieces_53 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_51, Var_405, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_48);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, SubInstName_49, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_54, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_178, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
                    MR_hl_field(1, Var_178, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_54, Var_178);
                  Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[10])), Var_177);
                  Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_53, Var_172);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[20])), Var_171);
                }
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_96;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(
  MR_Word Info_9,
  MR_Word HeadBoundFunctor_11,
  MR_Word TailBoundFunctors_12,
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
  MR_Word STATE_VARIABLE_Expansions_1_31;
  MR_Integer Arity_23;
  MR_Word TypeCtor_24;
  MR_String BaseName_26;
  MR_Word SymName_22;
  MR_Word Var_42;

  if ((TailBoundFunctors_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_16 = Suffix_13;
    STATE_VARIABLE_Expansions_1_31 = STATE_VARIABLE_Expansions_0_29;
  }
  else
  {
    MR_Word HeadTailBoundFunctor_17 = ((MR_Word) ((MR_hl_field(1, TailBoundFunctors_12, 0))));
    MR_Word TailTailBoundFunctors_18 = ((MR_Word) ((MR_hl_field(1, TailBoundFunctors_12, 1))));
    MR_Word TailPieces_19;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, HeadTailBoundFunctor_17, TailTailBoundFunctors_18, Suffix_13, &TailPieces_19, STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_1_31);
    {
      HeadSuffix_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_16, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, HeadSuffix_16, 1) = ((MR_Box) (TailPieces_19));
    }
  }
  ConsId0_20 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctor_11, 0))));
  ArgInsts_21 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctor_11, 1))));
  succeeded = ((MR_tag((MR_Word) ConsId0_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_42 = (MR_Word) (MR_body((MR_Word) (ConsId0_20), (MR_Integer) 1));
    SymName_22 = ((MR_Word) ((MR_hl_field(0, Var_42, 0))));
    Arity_23 = ((MR_Integer) ((MR_hl_field(0, Var_42, 1))));
    TypeCtor_24 = ((MR_Word) ((MR_hl_field(0, Var_42, 2))));
    succeeded = ((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_26 = ((MR_String) ((MR_hl_field(1, SymName_22, 1))));
  }
  if (succeeded)
  {
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (BaseName_26));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (Arity_23));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) (TypeCtor_24));
    }
    ConsId_27 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_43)));
  }
  else
    ConsId_27 = ConsId0_20;
  ConsIdStr_28 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_27);
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, ConsIdStr_28, ArgInsts_21, HeadSuffix_16, Pieces_14, STATE_VARIABLE_Expansions_1_31, STATE_VARIABLE_Expansions_30);
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
    MR_Word HeadTailInst_17 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, 0))));
    MR_Word TailTailInsts_18 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, 1))));
    MR_Word HeadPieces_19;
    MR_Word TailPieces_20;
    MR_Word STATE_VARIABLE_Expansions_2_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_9, HeadInst_11, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[10])), &HeadPieces_19, STATE_VARIABLE_Expansions_0_21, &STATE_VARIABLE_Expansions_2_32);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_8_p_1(Info_9, HeadTailInst_17, TailTailInsts_18, Suffix_13, &TailPieces_20, STATE_VARIABLE_Expansions_2_32, STATE_VARIABLE_Expansions_22);
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
    MR_Word HeadArgInst_16 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, 0))));
    MR_Word TailArgInsts_17 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, 1))));
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
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (ArgPieces_18));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
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
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_1_22;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, HeadArgInst_14, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_22);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(HeadVar__1_1, TailArgInsts_15, &TailPieces_17, STATE_VARIABLE_Expansions_1_22, STATE_VARIABLE_Expansions_6);
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
    MR_Word HeadArgInst_39 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
    MR_Word TailArgInsts_40 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
    MR_Word HeadPieces_41;
    MR_Word TailPieces_42;
    MR_Word STATE_VARIABLE_Expansions_1_46;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(Info_8, HeadArgInst_39, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_41, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_1_46);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(Info_8, TailArgInsts_40, &TailPieces_42, STATE_VARIABLE_Expansions_1_46, STATE_VARIABLE_Expansions_19);
    {
      ArgInstPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_17, 0) = ((MR_Box) (HeadPieces_41));
      MR_hl_field(1, ArgInstPieces_17, 1) = ((MR_Box) (TailPieces_42));
    }
    Var_25 = mercury__string__f_43_43_2_f_0(BaseModeName_14, (MR_String) "(");
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    Var_27 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(ArgInstPieces_17);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_27));
    }
    *Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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
    MR_Word HeadMode_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailModes_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_1_21;
    MR_Word Mode1_22;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_14, &Mode1_22);
    if (((MR_tag((MR_Word) Mode1_22)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_23 = ((MR_Word) ((MR_hl_field(0, Mode1_22, 0))));
      MR_Word ToInst1_24 = ((MR_Word) ((MR_hl_field(0, Mode1_22, 1))));
      MR_Word Mode_25;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_23, ToInst1_24, &Mode_25);
      if (((MR_tag((MR_Word) Mode_25)) == (MR_Integer) 0))
      {
        MR_Word FromInst_26 = ((MR_Word) ((MR_hl_field(0, Mode_25, 0))));
        MR_Word ToInst_27 = ((MR_Word) ((MR_hl_field(0, Mode_25, 1))));
        MR_Word FromPieces_28;
        MR_Word ToPieces_29;
        MR_Word STATE_VARIABLE_Expansions_1_33;
        MR_Word Var_35;

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, FromInst_26, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_28, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_33);
        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ToInst_27, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_29, STATE_VARIABLE_Expansions_1_33, &STATE_VARIABLE_Expansions_1_21);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (ToPieces_29));
        }
        HeadPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_28, Var_35);
      }
      else
      {
        MR_Word ModeName_30 = ((MR_Word) ((MR_hl_field(1, Mode_25, 0))));
        MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(1, Mode_25, 1))));

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ModeName_30, ArgInsts_31, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_21);
      }
    }
    else
    {
      MR_Word ModeName_38 = ((MR_Word) ((MR_hl_field(1, Mode1_22, 0))));
      MR_Word ArgInsts_39 = ((MR_Word) ((MR_hl_field(1, Mode1_22, 1))));

      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_7_p_1(HeadVar__1_1, ModeName_38, ArgInsts_39, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_21);
    }
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_49_6_p_1(HeadVar__1_1, TailModes_15, &TailPieces_17, STATE_VARIABLE_Expansions_1_21, STATE_VARIABLE_Expansions_6);
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
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, 0))) & (MR_Integer) 1);
  MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_13, 1))));
  MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, 3))) & (MR_Integer) 7);
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
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[22])));
        }
        {
          UniqPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_20, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
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
            MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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

          JoinedRealArgModePieces_32 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(RealArgModePieces_28);
          Var_110 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func(");
          Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_110);
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (JoinedRealArgModePieces_32));
          }
          {
            Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[24])));
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
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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

        JoinedArgModePieces_27 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(ArgModesPieces_22);
        Var_62 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred(");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 7U));
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
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
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
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, 0))) & (MR_Integer) 7);

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
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, 0))) & (MR_Integer) 7);
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
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
            MR_Word HeadBoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 0))));
            MR_Word TailBoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_String Var_43;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_51;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, HeadBoundFunctor_18, TailBoundFunctors_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_43 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
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
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_48);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));

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
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
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
    MR_Word STATE_VARIABLE_Expansions_0_95 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
    MR_Word STATE_VARIABLE_Expansions_96;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_95, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_395;
            MR_Word Var_397;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_395 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_397 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_395));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, NameInfo_18, 3) = ((MR_Box) (Var_397));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_24);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
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

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_95, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_1_101;
                      MR_Word Var_447;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_1_101);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_447 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_447);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_1_101;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_103;
                        MR_Word Var_104;
                        MR_Word Var_106;
                        MR_Word Var_109;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_1_101, &STATE_VARIABLE_Expansions_96);
                        {
                          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                          MR_hl_field(1, Var_109, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
                        }
                        {
                          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
                        }
                        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_103);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_434_434;
                MR_Word TypeCtorInfo_435_435;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_127;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_434_434 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_435_435 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_127, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_434_434, TypeCtorInfo_435_435, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_330;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_330, STATE_VARIABLE_Expansions_0_95, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_330, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_129;
                  MR_String Var_130;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_129 = ((MR_Word) ((MR_hl_field(1, SymName_15, 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_130 = ((MR_String) ((MR_hl_field(0, Var_129, 0))));
                      succeeded = (strcmp(Var_130, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_331;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_331, STATE_VARIABLE_Expansions_0_95, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_331, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_468;
                    MR_String Var_476;
                    MR_String Var_477;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[7]), Arity_22, &Var_468);
                    Var_476 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_468);
                    Var_477 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_476);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_477);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_1383 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_1384;
            MR_Word Var_1391;
            MR_Word Var_1393;
            MR_Word Var_1394;
            MR_Word EqvSymName_1294;
            MR_Word EqvArgInsts_1295;
            MR_Word EqvInstName_1153;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1383, InstName_10, &EqvInst_1384);
            Var_1394 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_1393 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_1391 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_1384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1384, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_1153 = ((MR_Word) ((MR_hl_field(3, EqvInst_1384, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_1153)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_1294 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1153, 0))));
                EqvArgInsts_1295 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1153, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1153);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_1155;
              MR_Word NameInfo_1158;
              MR_Word Var_1154;

              {
                NameInfo_1158 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_1158, 0) = ((MR_Box) (Var_1394));
                MR_hl_field(0, NameInfo_1158, 1) = ((MR_Box) (Var_1393));
                MR_hl_field(0, NameInfo_1158, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_1158, 3) = ((MR_Box) (Var_1391));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1294, &EqvSymNameStr_1155);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_1158, EqvSymNameStr_1155, EqvArgInsts_1295, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1154);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_1253;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1253);
              if ((Var_1391 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_1182;

                succeeded = ((((MR_tag((MR_Word) EqvInst_1384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1384, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_1182 = ((MR_Word) ((MR_hl_field(3, EqvInst_1384, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1182);
                }
                if (succeeded)
                {
                  MR_Word Var_1184;

                  {
                    Var_1184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_1184, 0) = ((MR_Box) (InstNameStr_1253));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1184));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_1185;
                  MR_Word STATE_VARIABLE_Expansions_6_1186;
                  MR_Word Var_1187;
                  MR_Word Var_1188;
                  MR_Word Var_1190;
                  MR_Word Var_1192;
                  MR_Word Var_1194;
                  MR_Word EqvPieces_1196;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1253, &InstNumPieces_1185, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1186);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1384, Suffix_11, &EqvPieces_1196, STATE_VARIABLE_Expansions_6_1186, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_1192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1192, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_1192, 1) = ((MR_Box) (EqvPieces_1196));
                  }
                  {
                    Var_1190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1190, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_1190, 1) = ((MR_Box) (Var_1192));
                  }
                  {
                    Var_1188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1188, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(1, Var_1188, 1) = ((MR_Box) (Var_1190));
                  }
                  {
                    Var_1194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1194, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_1194, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_1187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1188, Var_1194);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1185, Var_1187);
                }
              }
              else
              {
                MR_Word Live_81 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) >> 1)) & (MR_Integer) 1);
                MR_Word Real_82 = ((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) & (MR_Integer) 1);
                MR_Word Var_243;
                MR_String Var_244;
                MR_String Var_245;
                MR_Word Var_247;
                MR_Word Var_248;
                MR_String Var_249;
                MR_String Var_250;
                MR_Word SubInstA_1159 = ((MR_Word) ((MR_hl_field(1, InstName_10, 1))));
                MR_Word SubInstB_1160 = ((MR_Word) ((MR_hl_field(1, InstName_10, 2))));
                MR_Word InitialArgs_1162;
                MR_Word SubInstPiecesA_1165;
                MR_Word SubInstPiecesB_1166;
                MR_Word STATE_VARIABLE_Expansions_8_1167;
                MR_Word Var_1173;
                MR_Word Var_1174;
                MR_Word Var_1176;
                MR_Word Var_1177;
                MR_Word Var_1179;

                Var_245 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_81);
                Var_244 = mercury__string__f_43_43_2_f_0(Var_245, (MR_String) ",");
                {
                  Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_243, 1) = ((MR_Box) (Var_244));
                }
                Var_250 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_82);
                Var_249 = mercury__string__f_43_43_2_f_0(Var_250, (MR_String) ",");
                {
                  Var_248 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_248, 0) = ((MR_Box) (Var_249));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) (Var_248));
                  MR_hl_field(1, Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitialArgs_1162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitialArgs_1162, 0) = ((MR_Box) (Var_243));
                  MR_hl_field(1, InitialArgs_1162, 1) = ((MR_Box) (Var_247));
                }
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstA_1159, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_1165, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_1167);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstB_1160, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_1166, STATE_VARIABLE_Expansions_8_1167, &STATE_VARIABLE_Expansions_96);
                Var_1179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_1166, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_1177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_1179);
                Var_1176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_1165, Var_1177);
                Var_1174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_1176);
                Var_1173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitialArgs_1162, Var_1174);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[30])), Var_1173);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_873 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_874;
            MR_Word Var_880;
            MR_Word Var_882;
            MR_Word Var_883;
            MR_Word EqvSymName_829;
            MR_Word EqvArgInsts_830;
            MR_Word EqvInstName_757;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_873, InstName_10, &EqvInst_874);
            Var_883 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_882 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_880 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_874)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_874, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_757 = ((MR_Word) ((MR_hl_field(3, EqvInst_874, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_757)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_829 = ((MR_Word) ((MR_hl_field(0, EqvInstName_757, 0))));
                EqvArgInsts_830 = ((MR_Word) ((MR_hl_field(0, EqvInstName_757, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_757);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_759;
              MR_Word NameInfo_762;
              MR_Word Var_758;

              {
                NameInfo_762 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_762, 0) = ((MR_Box) (Var_883));
                MR_hl_field(0, NameInfo_762, 1) = ((MR_Box) (Var_882));
                MR_hl_field(0, NameInfo_762, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_762, 3) = ((MR_Box) (Var_880));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_829, &EqvSymNameStr_759);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_762, EqvSymNameStr_759, EqvArgInsts_830, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_758);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_811;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_811);
              if ((Var_880 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_763;

                succeeded = ((((MR_tag((MR_Word) EqvInst_874)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_874, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_763 = ((MR_Word) ((MR_hl_field(3, EqvInst_874, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_763);
                }
                if (succeeded)
                {
                  MR_Word Var_765;

                  {
                    Var_765 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_765, 0) = ((MR_Box) (InstNameStr_811));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_765));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_766;
                  MR_Word STATE_VARIABLE_Expansions_6_767;
                  MR_Word Var_768;
                  MR_Word Var_769;
                  MR_Word Var_771;
                  MR_Word Var_773;
                  MR_Word Var_775;
                  MR_Word EqvPieces_777;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_811, &InstNumPieces_766, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_767);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_874, Suffix_11, &EqvPieces_777, STATE_VARIABLE_Expansions_6_767, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_773 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_773, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_773, 1) = ((MR_Box) (EqvPieces_777));
                  }
                  {
                    Var_771 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_771, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_771, 1) = ((MR_Box) (Var_773));
                  }
                  {
                    Var_769 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_769, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(1, Var_769, 1) = ((MR_Box) (Var_771));
                  }
                  {
                    Var_775 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_775, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_775, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_768 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_769, Var_775);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_766, Var_768);
                }
              }
              else
              {
                MR_Word SubInstA_83 = ((MR_Word) ((MR_hl_field(2, InstName_10, 0))));
                MR_Word SubInstB_84 = ((MR_Word) ((MR_hl_field(2, InstName_10, 1))));
                MR_Word SubInstPiecesA_89;
                MR_Word SubInstPiecesB_90;
                MR_Word STATE_VARIABLE_Expansions_8_253;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word Var_266;
                MR_Word Var_267;
                MR_Word Var_274;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstA_83, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_89, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_253);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstB_84, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_90, STATE_VARIABLE_Expansions_8_253, &STATE_VARIABLE_Expansions_96);
                Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_90, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_274);
                Var_266 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_89, Var_267);
                Var_261 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_266);
                Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_261);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[27])), Var_260);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_740 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_741;
                MR_Word Var_748;
                MR_Word Var_750;
                MR_Word Var_751;
                MR_Word EqvSymName_641;
                MR_Word EqvArgInsts_642;
                MR_Word EqvInstName_485;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_740, InstName_10, &EqvInst_741);
                Var_751 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_750 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_748 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_741)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_741, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_485 = ((MR_Word) ((MR_hl_field(3, EqvInst_741, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_485)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_641 = ((MR_Word) ((MR_hl_field(0, EqvInstName_485, 0))));
                    EqvArgInsts_642 = ((MR_Word) ((MR_hl_field(0, EqvInstName_485, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_485);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_487;
                  MR_Word NameInfo_490;
                  MR_Word Var_486;

                  {
                    NameInfo_490 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_490, 0) = ((MR_Box) (Var_751));
                    MR_hl_field(0, NameInfo_490, 1) = ((MR_Box) (Var_750));
                    MR_hl_field(0, NameInfo_490, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_490, 3) = ((MR_Box) (Var_748));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_641, &EqvSymNameStr_487);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_490, EqvSymNameStr_487, EqvArgInsts_642, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_486);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_595;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_595);
                  if ((Var_748 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_519;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_741)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_741, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_519 = ((MR_Word) ((MR_hl_field(3, EqvInst_741, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_519);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_521;

                      {
                        Var_521 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_521, 0) = ((MR_Box) (InstNameStr_595));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_521));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_522;
                      MR_Word STATE_VARIABLE_Expansions_6_523;
                      MR_Word Var_524;
                      MR_Word Var_525;
                      MR_Word Var_527;
                      MR_Word Var_529;
                      MR_Word Var_531;
                      MR_Word EqvPieces_533;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_595, &InstNumPieces_522, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_523);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_741, Suffix_11, &EqvPieces_533, STATE_VARIABLE_Expansions_6_523, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_529 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_529, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_529, 1) = ((MR_Box) (EqvPieces_533));
                      }
                      {
                        Var_527 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_527, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_527, 1) = ((MR_Box) (Var_529));
                      }
                      {
                        Var_525 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_525, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_525, 1) = ((MR_Box) (Var_527));
                      }
                      {
                        Var_531 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_531, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_531, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_524 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_525, Var_531);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_522, Var_524);
                    }
                  }
                  else
                  {
                    MR_Word Uniq_353 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word Var_493;
                    MR_Word Var_494;
                    MR_String Var_495;
                    MR_String Var_496;
                    MR_String Var_498;
                    MR_Word Var_500;
                    MR_Word Var_501;
                    MR_String Var_502;
                    MR_String Var_503;
                    MR_Word Var_505;
                    MR_Word Var_506;
                    MR_String Var_507;
                    MR_String Var_508;
                    MR_Word Var_511;
                    MR_Word SubInstName_513 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_514;
                    MR_String UniqStr_515;
                    MR_Word Live_516 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_517 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_515 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_353, (MR_String) "shared");
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_513, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_514, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_498 = mercury__string__f_43_43_2_f_0(UniqStr_515, (MR_String) ",");
                    Var_496 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_498);
                    Var_495 = mercury__string__f_43_43_2_f_0((MR_String) "ground", Var_496);
                    {
                      Var_494 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_494, 0) = ((MR_Box) (Var_495));
                    }
                    Var_503 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_516);
                    Var_502 = mercury__string__f_43_43_2_f_0(Var_503, (MR_String) ",");
                    {
                      Var_501 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_501, 0) = ((MR_Box) (Var_502));
                    }
                    Var_508 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_517);
                    Var_507 = mercury__string__f_43_43_2_f_0(Var_508, (MR_String) ",");
                    {
                      Var_506 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_506, 0) = ((MR_Box) (Var_507));
                    }
                    {
                      Var_505 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_505, 0) = ((MR_Box) (Var_506));
                      MR_hl_field(1, Var_505, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_500 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_500, 0) = ((MR_Box) (Var_501));
                      MR_hl_field(1, Var_500, 1) = ((MR_Box) (Var_505));
                    }
                    {
                      Var_493 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_493, 0) = ((MR_Box) (Var_494));
                      MR_hl_field(1, Var_493, 1) = ((MR_Box) (Var_500));
                    }
                    Var_511 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_514, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_493, Var_511);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_392 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_393;
                MR_Word Var_464;
                MR_Word Var_466;
                MR_Word Var_467;
                MR_Word EqvSymName_74;
                MR_Word EqvArgInsts_75;
                MR_Word EqvInstName_73;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_392, InstName_10, &EqvInst_393);
                Var_467 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_466 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_464 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_73 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_73)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_74 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 0))));
                    EqvArgInsts_75 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_73);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_76;
                  MR_Word NameInfo_349;
                  MR_Word Var_77;

                  {
                    NameInfo_349 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_349, 0) = ((MR_Box) (Var_467));
                    MR_hl_field(0, NameInfo_349, 1) = ((MR_Box) (Var_466));
                    MR_hl_field(0, NameInfo_349, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_349, 3) = ((MR_Box) (Var_464));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_74, &EqvSymNameStr_76);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_349, EqvSymNameStr_76, EqvArgInsts_75, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_77);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_78;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_78);
                  if ((Var_464 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_448;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_448 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_448);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_218;

                      {
                        Var_218 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_218, 0) = ((MR_Box) (InstNameStr_78));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_218));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_79;
                      MR_Word STATE_VARIABLE_Expansions_6_219;
                      MR_Word Var_221;
                      MR_Word Var_222;
                      MR_Word Var_224;
                      MR_Word Var_227;
                      MR_Word Var_230;
                      MR_Word EqvPieces_350;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_78, &InstNumPieces_79, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_219);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_393, Suffix_11, &EqvPieces_350, STATE_VARIABLE_Expansions_6_219, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_227, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_227, 1) = ((MR_Box) (EqvPieces_350));
                      }
                      {
                        Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_224, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_227));
                      }
                      {
                        Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_222, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_224));
                      }
                      {
                        Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_230, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_230, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, Var_230);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_79, Var_221);
                    }
                  }
                  else
                  {
                    MR_Word Var_284;
                    MR_Word Var_285;
                    MR_String Var_286;
                    MR_String Var_287;
                    MR_String Var_289;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_String Var_293;
                    MR_String Var_294;
                    MR_Word Var_296;
                    MR_Word Var_297;
                    MR_String Var_298;
                    MR_String Var_299;
                    MR_Word Var_305;
                    MR_Word Uniq_354 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word SubInstName_356 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_357;
                    MR_String UniqStr_359;
                    MR_Word Live_360 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_361 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_359 = parse_tree__parse_tree_to_term__any_inst_uniqueness_1_f_0(Uniq_354);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_356, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_357, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_289 = mercury__string__f_43_43_2_f_0(UniqStr_359, (MR_String) ",");
                    Var_287 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_289);
                    Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "any", Var_287);
                    {
                      Var_285 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_285, 0) = ((MR_Box) (Var_286));
                    }
                    Var_294 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_360);
                    Var_293 = mercury__string__f_43_43_2_f_0(Var_294, (MR_String) ",");
                    {
                      Var_292 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_292, 0) = ((MR_Box) (Var_293));
                    }
                    Var_299 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_361);
                    Var_298 = mercury__string__f_43_43_2_f_0(Var_299, (MR_String) ",");
                    {
                      Var_297 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_297, 0) = ((MR_Box) (Var_298));
                    }
                    {
                      Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                      MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_291, 0) = ((MR_Box) (Var_292));
                      MR_hl_field(1, Var_291, 1) = ((MR_Box) (Var_296));
                    }
                    {
                      Var_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_284, 0) = ((MR_Box) (Var_285));
                      MR_hl_field(1, Var_284, 1) = ((MR_Box) (Var_291));
                    }
                    Var_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_357, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_284, Var_305);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_1137 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1138;
                MR_Word Var_1144;
                MR_Word Var_1146;
                MR_Word Var_1147;
                MR_Word EqvSymName_1093;
                MR_Word EqvArgInsts_1094;
                MR_Word EqvInstName_1021;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1137, InstName_10, &EqvInst_1138);
                Var_1147 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1146 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1144 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1138, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_1021 = ((MR_Word) ((MR_hl_field(3, EqvInst_1138, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_1021)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_1093 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1021, 0))));
                    EqvArgInsts_1094 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1021, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1021);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_1023;
                  MR_Word NameInfo_1026;
                  MR_Word Var_1022;

                  {
                    NameInfo_1026 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_1026, 0) = ((MR_Box) (Var_1147));
                    MR_hl_field(0, NameInfo_1026, 1) = ((MR_Box) (Var_1146));
                    MR_hl_field(0, NameInfo_1026, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_1026, 3) = ((MR_Box) (Var_1144));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1093, &EqvSymNameStr_1023);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_1026, EqvSymNameStr_1023, EqvArgInsts_1094, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1022);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_1075;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1075);
                  if ((Var_1144 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_1027;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1138, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_1027 = ((MR_Word) ((MR_hl_field(3, EqvInst_1138, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1027);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_1029;

                      {
                        Var_1029 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1029, 0) = ((MR_Box) (InstNameStr_1075));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1029));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_1030;
                      MR_Word STATE_VARIABLE_Expansions_6_1031;
                      MR_Word Var_1032;
                      MR_Word Var_1033;
                      MR_Word Var_1035;
                      MR_Word Var_1037;
                      MR_Word Var_1039;
                      MR_Word EqvPieces_1041;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1075, &InstNumPieces_1030, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1031);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1138, Suffix_11, &EqvPieces_1041, STATE_VARIABLE_Expansions_6_1031, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_1037 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1037, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_1037, 1) = ((MR_Box) (EqvPieces_1041));
                      }
                      {
                        Var_1035 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1035, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_1035, 1) = ((MR_Box) (Var_1037));
                      }
                      {
                        Var_1033 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1033, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_1033, 1) = ((MR_Box) (Var_1035));
                      }
                      {
                        Var_1039 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1039, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_1039, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_1032 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1033, Var_1039);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1030, Var_1032);
                    }
                  }
                  else
                  {
                    MR_Word Var_458;
                    MR_Word SubInstName_460 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_461;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_460, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_461, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_458 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_461, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[29])), Var_458);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_1005 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1006;
                MR_Word Var_1012;
                MR_Word Var_1014;
                MR_Word Var_1015;
                MR_Word EqvSymName_961;
                MR_Word EqvArgInsts_962;
                MR_Word EqvInstName_889;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1005, InstName_10, &EqvInst_1006);
                Var_1015 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1014 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1012 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1006)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1006, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_889 = ((MR_Word) ((MR_hl_field(3, EqvInst_1006, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_889)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_961 = ((MR_Word) ((MR_hl_field(0, EqvInstName_889, 0))));
                    EqvArgInsts_962 = ((MR_Word) ((MR_hl_field(0, EqvInstName_889, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_889);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_891;
                  MR_Word NameInfo_894;
                  MR_Word Var_890;

                  {
                    NameInfo_894 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_894, 0) = ((MR_Box) (Var_1015));
                    MR_hl_field(0, NameInfo_894, 1) = ((MR_Box) (Var_1014));
                    MR_hl_field(0, NameInfo_894, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_894, 3) = ((MR_Box) (Var_1012));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_961, &EqvSymNameStr_891);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_894, EqvSymNameStr_891, EqvArgInsts_962, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_890);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_943;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_943);
                  if ((Var_1012 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_895;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1006)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1006, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_895 = ((MR_Word) ((MR_hl_field(3, EqvInst_1006, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_895);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_897;

                      {
                        Var_897 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_897, 0) = ((MR_Box) (InstNameStr_943));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_897));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_898;
                      MR_Word STATE_VARIABLE_Expansions_6_899;
                      MR_Word Var_900;
                      MR_Word Var_901;
                      MR_Word Var_903;
                      MR_Word Var_905;
                      MR_Word Var_907;
                      MR_Word EqvPieces_909;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_943, &InstNumPieces_898, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_899);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1006, Suffix_11, &EqvPieces_909, STATE_VARIABLE_Expansions_6_899, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_905 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_905, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_905, 1) = ((MR_Box) (EqvPieces_909));
                      }
                      {
                        Var_903 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_903, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_903, 1) = ((MR_Box) (Var_905));
                      }
                      {
                        Var_901 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_901, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_901, 1) = ((MR_Box) (Var_903));
                      }
                      {
                        Var_907 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_907, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_907, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_900 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_901, Var_907);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_898, Var_900);
                    }
                  }
                  else
                  {
                    MR_Word Var_322;
                    MR_Word SubInstName_362 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_363;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_362, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_363, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_322 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_363, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[28])), Var_322);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_55 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 1))) & (MR_Integer) 7);
                MR_Word Type_344 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_345 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_411 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_345 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word EqvInst_335;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                  MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                  MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                  {
                    EqvInst_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, EqvInst_335, 0) = (MR_Box) ((MR_Unsigned) (Uniq_55));
                    MR_hl_field(1, EqvInst_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                  next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_335;
                  next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_95;
                  tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                  tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                  tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                  tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_String UniqStr_56;
                  MR_Word Var_187;
                  MR_Word Var_188;
                  MR_String Var_189;
                  MR_String Var_191;
                  MR_Word Var_194;
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Var_203;
                  MR_Word TVarSet_336 = ((MR_Word) ((MR_hl_field(1, Audience_345, 0))));
                  MR_Word TypePieces_338;

                  TypePieces_338 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_336, Var_411, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_344);
                  UniqStr_56 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_55, (MR_String) "shared");
                  Var_191 = mercury__string__f_43_43_2_f_0(UniqStr_56, (MR_String) ",");
                  Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "typed_ground(", Var_191);
                  {
                    Var_188 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_188, 0) = ((MR_Box) (Var_189));
                  }
                  {
                    Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
                    MR_hl_field(1, Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_203, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(1, Var_203, 1) = ((MR_Box) (Suffix_11));
                  }
                  {
                    Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_200, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_203));
                  }
                  Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_338, Var_200);
                  Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_199);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_187, Var_194);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Type_48 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_50 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_405 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_50 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                  MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                  MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_95;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                  tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                  tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                  tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word TVarSet_51 = ((MR_Word) ((MR_hl_field(1, Audience_50, 0))));
                  MR_Word TypePieces_53;
                  MR_Word SubInstNamePieces_54;
                  MR_Word Var_152;
                  MR_Word Var_153;
                  MR_Word Var_160;
                  MR_Word Var_161;
                  MR_Word Var_164;

                  TypePieces_53 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_51, Var_405, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_48);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_49, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_54, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_164, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(1, Var_164, 1) = ((MR_Box) (Suffix_11));
                  }
                  {
                    Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
                  }
                  Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_54, Var_161);
                  Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_160);
                  Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_53, Var_153);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[15])), Var_152);
                }
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_96;
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95,
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
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
          MR_Word Uniq_88 = ((MR_Unsigned) ((MR_hl_field(1, Inst_10, 0))) & (MR_Integer) 7);

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
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(2, Inst_10, 0))) & (MR_Integer) 7);
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_10, 2))));
          MR_String BoundName_17;

          BoundName_17 = parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(Uniq_14, (MR_String) "bound");
          if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
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
            MR_Word HeadBoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 0))));
            MR_Word TailBoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, BoundFunctors_16, 1))));
            MR_Word BoundPieces_20;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_String Var_43;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_51;

            hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_8, HeadBoundFunctor_18, TailBoundFunctors_19, (MR_Word) ((MR_Unsigned) 0U), &BoundPieces_20, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
            Var_43 = mercury__string__f_43_43_2_f_0(BoundName_17, (MR_String) "(");
            {
              Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_42, 0) = ((MR_Box) (Var_43));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
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
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
            }
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_48);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_32 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
              MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = InstName_32;
              MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_33;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
              tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
              tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
              tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word SubInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));
              MR_String Names_30;
              MR_Word SubInstPieces_31;
              MR_Word Var_71;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_82;
              MR_Word InstVarSet_100 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

              Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__error_msg_inst_scalar_common_1[1]), Vars_28);
              Names_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_100, (MR_Integer) 0, Var_71);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInst_29, (MR_Word) ((MR_Unsigned) 0U), &SubInstPieces_31, STATE_VARIABLE_Expansions_0_33, &STATE_VARIABLE_Expansions_34);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
              MR_Word Uniq_95 = ((MR_Unsigned) ((MR_hl_field(3, Inst_10, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_96 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));

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
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
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
    MR_Word STATE_VARIABLE_Expansions_0_95 = tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
    MR_Word STATE_VARIABLE_Expansions_96;
    MR_bool succeeded;
    MR_Word PastPieces_14;

    succeeded = hlds__error_msg_inst__have_we_expanded_inst_name_3_p_0(STATE_VARIABLE_Expansions_0_95, InstName_10, &PastPieces_14);
    if (succeeded)
    {
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PastPieces_14, Suffix_11);
      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
    }
    else
      switch (MR_tag((MR_Word) InstName_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, InstName_10, 0))));
            MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, InstName_10, 1))));
            MR_String SymNameStr_17;
            MR_Word NameInfo_18;
            MR_Word ModuleInfo_19;
            MR_Word InstTable_20;
            MR_Word UserInstTable_21;
            MR_Integer Arity_22;
            MR_Word InstCtor_23;
            MR_Word Var_395;
            MR_Word Var_397;

            hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, SymName_15, &SymNameStr_17);
            ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_395 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_397 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            {
              NameInfo_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameInfo_18, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(0, NameInfo_18, 1) = ((MR_Box) (Var_395));
              MR_hl_field(0, NameInfo_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, NameInfo_18, 3) = ((MR_Box) (Var_397));
            }
            hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_19, &InstTable_20);
            hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_20, &UserInstTable_21);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_16, &Arity_22);
            {
              InstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstCtor_23, 0) = ((MR_Box) (SymName_15));
              MR_hl_field(0, InstCtor_23, 1) = ((MR_Box) (Arity_22));
            }
            succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(InstName_10);
            if (succeeded)
            {
              MR_Word Var_24;

              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_24);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
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

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_26, STATE_VARIABLE_Expansions_0_95, &Var_27);
                {
                  NamedNamePieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NamedNamePieces_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[16])));
                  MR_hl_field(1, NamedNamePieces_28, 1) = ((MR_Box) (NamePieces_26));
                }
                ExpandInsts_29 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 2))) & (MR_Integer) 1);
                switch (ExpandInsts_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_26, Suffix_11);
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Params_31;
                      MR_Word InstBody_32;
                      MR_Word EqvInst0_36;
                      MR_Word EqvInst_37;
                      MR_Word STATE_VARIABLE_Expansions_1_101;
                      MR_Word Var_447;

                      hlds__error_msg_inst__record_user_inst_name_4_p_0(InstName_10, NamedNamePieces_28, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_1_101);
                      Params_31 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 1))));
                      InstBody_32 = ((MR_Word) ((MR_hl_field(0, InstDefn_25, 2))));
                      EqvInst0_36 = (MR_Word) (InstBody_32);
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_31, ArgInsts_16, EqvInst0_36, &EqvInst_37);
                      succeeded = ((((MR_tag((MR_Word) EqvInst_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_37, 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_447 = ((MR_Word) ((MR_hl_field(3, EqvInst_37, 1))));
                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_447);
                      }
                      if (succeeded)
                      {
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Suffix_11);
                        STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_1_101;
                      }
                      else
                      {
                        MR_Word EqvPieces_38;
                        MR_Word Var_103;
                        MR_Word Var_104;
                        MR_Word Var_106;
                        MR_Word Var_109;

                        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_37, Suffix_11, &EqvPieces_38, STATE_VARIABLE_Expansions_1_101, &STATE_VARIABLE_Expansions_96);
                        {
                          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                          MR_hl_field(1, Var_109, 1) = ((MR_Box) (EqvPieces_38));
                        }
                        {
                          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
                        }
                        {
                          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
                        }
                        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[17])));
                        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamedNamePieces_28, Var_103);
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_434_434;
                MR_Word TypeCtorInfo_435_435;
                MR_String BaseName_39;
                MR_Word Builtin_40;
                MR_Word BuiltinInstCtor_41;
                MR_Word Var_127;
                MR_Box conv1__InstDefn_42;

                succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 0);
                if (succeeded)
                {
                  BaseName_39 = ((MR_String) ((MR_hl_field(0, SymName_15, 0))));
                  Builtin_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  TypeCtorInfo_434_434 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0);
                  TypeCtorInfo_435_435 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0);
                  {
                    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Builtin_40));
                    MR_hl_field(1, Var_127, 1) = ((MR_Box) (BaseName_39));
                  }
                  {
                    BuiltinInstCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BuiltinInstCtor_41, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(0, BuiltinInstCtor_41, 1) = ((MR_Box) (Arity_22));
                  }
                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_434_434, TypeCtorInfo_435_435, UserInstTable_21, ((MR_Box) (BuiltinInstCtor_41)), &conv1__InstDefn_42);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word NamePieces_330;
                  MR_Word Var_43;

                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, SymNameStr_17, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_330, STATE_VARIABLE_Expansions_0_95, &Var_43);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_330, Suffix_11);
                }
                else
                {
                  MR_String ConsIdName_44;
                  MR_Word Var_129;
                  MR_String Var_130;

                  succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_129 = ((MR_Word) ((MR_hl_field(1, SymName_15, 0))));
                    ConsIdName_44 = ((MR_String) ((MR_hl_field(1, SymName_15, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_130 = ((MR_String) ((MR_hl_field(0, Var_129, 0))));
                      succeeded = (strcmp(Var_130, (MR_String) "FAKE_CONS_ID") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NamePieces_331;
                    MR_Word Var_45;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_18, ConsIdName_44, ArgInsts_16, (MR_Word) ((MR_Unsigned) 0U), &NamePieces_331, STATE_VARIABLE_Expansions_0_95, &Var_45);
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NamePieces_331, Suffix_11);
                  }
                  else
                  {
                    MR_String InstCtorName_46;
                    MR_String Msg_47;
                    MR_String Var_468;
                    MR_String Var_476;
                    MR_String Var_477;

                    InstCtorName_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_15);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[7]), Arity_22, &Var_468);
                    Var_476 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_468);
                    Var_477 = mercury__string__f_43_43_2_f_0(InstCtorName_46, Var_476);
                    Msg_47 = mercury__string__f_43_43_2_f_0((MR_String) "undefined inst ", Var_477);
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.error_msg_inst.inst_name_to_pieces\'/7", Msg_47);
                      return;
                    }
                  }
                }
                STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_1383 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_1384;
            MR_Word Var_1391;
            MR_Word Var_1393;
            MR_Word Var_1394;
            MR_Word EqvSymName_1294;
            MR_Word EqvArgInsts_1295;
            MR_Word EqvInstName_1153;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1383, InstName_10, &EqvInst_1384);
            Var_1394 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_1393 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_1391 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_1384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1384, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_1153 = ((MR_Word) ((MR_hl_field(3, EqvInst_1384, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_1153)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_1294 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1153, 0))));
                EqvArgInsts_1295 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1153, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1153);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_1155;
              MR_Word NameInfo_1158;
              MR_Word Var_1154;

              {
                NameInfo_1158 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_1158, 0) = ((MR_Box) (Var_1394));
                MR_hl_field(0, NameInfo_1158, 1) = ((MR_Box) (Var_1393));
                MR_hl_field(0, NameInfo_1158, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_1158, 3) = ((MR_Box) (Var_1391));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1294, &EqvSymNameStr_1155);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_1158, EqvSymNameStr_1155, EqvArgInsts_1295, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1154);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_1253;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1253);
              if ((Var_1391 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_1182;

                succeeded = ((((MR_tag((MR_Word) EqvInst_1384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1384, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_1182 = ((MR_Word) ((MR_hl_field(3, EqvInst_1384, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1182);
                }
                if (succeeded)
                {
                  MR_Word Var_1184;

                  {
                    Var_1184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_1184, 0) = ((MR_Box) (InstNameStr_1253));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1184));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_1185;
                  MR_Word STATE_VARIABLE_Expansions_6_1186;
                  MR_Word Var_1187;
                  MR_Word Var_1188;
                  MR_Word Var_1190;
                  MR_Word Var_1192;
                  MR_Word Var_1194;
                  MR_Word EqvPieces_1196;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1253, &InstNumPieces_1185, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1186);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1384, Suffix_11, &EqvPieces_1196, STATE_VARIABLE_Expansions_6_1186, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_1192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1192, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_1192, 1) = ((MR_Box) (EqvPieces_1196));
                  }
                  {
                    Var_1190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1190, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_1190, 1) = ((MR_Box) (Var_1192));
                  }
                  {
                    Var_1188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1188, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(1, Var_1188, 1) = ((MR_Box) (Var_1190));
                  }
                  {
                    Var_1194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_1194, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_1194, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_1187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1188, Var_1194);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1185, Var_1187);
                }
              }
              else
              {
                MR_Word Live_81 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) >> 1)) & (MR_Integer) 1);
                MR_Word Real_82 = ((MR_Unsigned) ((MR_hl_field(1, InstName_10, 0))) & (MR_Integer) 1);
                MR_Word Var_243;
                MR_String Var_244;
                MR_String Var_245;
                MR_Word Var_247;
                MR_Word Var_248;
                MR_String Var_249;
                MR_String Var_250;
                MR_Word SubInstA_1159 = ((MR_Word) ((MR_hl_field(1, InstName_10, 1))));
                MR_Word SubInstB_1160 = ((MR_Word) ((MR_hl_field(1, InstName_10, 2))));
                MR_Word InitialArgs_1162;
                MR_Word SubInstPiecesA_1165;
                MR_Word SubInstPiecesB_1166;
                MR_Word STATE_VARIABLE_Expansions_8_1167;
                MR_Word Var_1173;
                MR_Word Var_1174;
                MR_Word Var_1176;
                MR_Word Var_1177;
                MR_Word Var_1179;

                Var_245 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_81);
                Var_244 = mercury__string__f_43_43_2_f_0(Var_245, (MR_String) ",");
                {
                  Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_243, 1) = ((MR_Box) (Var_244));
                }
                Var_250 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_82);
                Var_249 = mercury__string__f_43_43_2_f_0(Var_250, (MR_String) ",");
                {
                  Var_248 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_248, 0) = ((MR_Box) (Var_249));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) (Var_248));
                  MR_hl_field(1, Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitialArgs_1162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitialArgs_1162, 0) = ((MR_Box) (Var_243));
                  MR_hl_field(1, InitialArgs_1162, 1) = ((MR_Box) (Var_247));
                }
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstA_1159, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_1165, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_1167);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstB_1160, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_1166, STATE_VARIABLE_Expansions_8_1167, &STATE_VARIABLE_Expansions_96);
                Var_1179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_1166, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_1177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_1179);
                Var_1176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_1165, Var_1177);
                Var_1174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_1176);
                Var_1173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitialArgs_1162, Var_1174);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[30])), Var_1173);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleInfo_873 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            MR_Word EqvInst_874;
            MR_Word Var_880;
            MR_Word Var_882;
            MR_Word Var_883;
            MR_Word EqvSymName_829;
            MR_Word EqvArgInsts_830;
            MR_Word EqvInstName_757;

            hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_873, InstName_10, &EqvInst_874);
            Var_883 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
            Var_882 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
            Var_880 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
            succeeded = ((((MR_tag((MR_Word) EqvInst_874)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_874, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              EqvInstName_757 = ((MR_Word) ((MR_hl_field(3, EqvInst_874, 1))));
              succeeded = ((MR_tag((MR_Word) EqvInstName_757)) == (MR_Integer) 0);
              if (succeeded)
              {
                EqvSymName_829 = ((MR_Word) ((MR_hl_field(0, EqvInstName_757, 0))));
                EqvArgInsts_830 = ((MR_Word) ((MR_hl_field(0, EqvInstName_757, 1))));
                succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_757);
              }
            }
            if (succeeded)
            {
              MR_String EqvSymNameStr_759;
              MR_Word NameInfo_762;
              MR_Word Var_758;

              {
                NameInfo_762 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameInfo_762, 0) = ((MR_Box) (Var_883));
                MR_hl_field(0, NameInfo_762, 1) = ((MR_Box) (Var_882));
                MR_hl_field(0, NameInfo_762, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, NameInfo_762, 3) = ((MR_Box) (Var_880));
              }
              hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_829, &EqvSymNameStr_759);
              hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_762, EqvSymNameStr_759, EqvArgInsts_830, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_758);
              STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
            }
            else
            {
              MR_String InstNameStr_811;

              hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_811);
              if ((Var_880 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_763;

                succeeded = ((((MR_tag((MR_Word) EqvInst_874)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_874, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_763 = ((MR_Word) ((MR_hl_field(3, EqvInst_874, 1))));
                  succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_763);
                }
                if (succeeded)
                {
                  MR_Word Var_765;

                  {
                    Var_765 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_765, 0) = ((MR_Box) (InstNameStr_811));
                  }
                  {
                    Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_765));
                    MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                  }
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_Word InstNumPieces_766;
                  MR_Word STATE_VARIABLE_Expansions_6_767;
                  MR_Word Var_768;
                  MR_Word Var_769;
                  MR_Word Var_771;
                  MR_Word Var_773;
                  MR_Word Var_775;
                  MR_Word EqvPieces_777;

                  hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_811, &InstNumPieces_766, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_767);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_874, Suffix_11, &EqvPieces_777, STATE_VARIABLE_Expansions_6_767, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_773 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_773, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                    MR_hl_field(1, Var_773, 1) = ((MR_Box) (EqvPieces_777));
                  }
                  {
                    Var_771 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_771, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                    MR_hl_field(1, Var_771, 1) = ((MR_Box) (Var_773));
                  }
                  {
                    Var_769 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_769, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(1, Var_769, 1) = ((MR_Box) (Var_771));
                  }
                  {
                    Var_775 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_775, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_775, 1) = ((MR_Box) (Suffix_11));
                  }
                  Var_768 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_769, Var_775);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_766, Var_768);
                }
              }
              else
              {
                MR_Word SubInstA_83 = ((MR_Word) ((MR_hl_field(2, InstName_10, 0))));
                MR_Word SubInstB_84 = ((MR_Word) ((MR_hl_field(2, InstName_10, 1))));
                MR_Word SubInstPiecesA_89;
                MR_Word SubInstPiecesB_90;
                MR_Word STATE_VARIABLE_Expansions_8_253;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word Var_266;
                MR_Word Var_267;
                MR_Word Var_274;

                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstA_83, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesA_89, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_8_253);
                hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstB_84, (MR_Word) ((MR_Unsigned) 0U), &SubInstPiecesB_90, STATE_VARIABLE_Expansions_8_253, &STATE_VARIABLE_Expansions_96);
                Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesB_90, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                Var_267 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_274);
                Var_266 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstPiecesA_89, Var_267);
                Var_261 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_266);
                Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_261);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[27])), Var_260);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstName_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_740 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_741;
                MR_Word Var_748;
                MR_Word Var_750;
                MR_Word Var_751;
                MR_Word EqvSymName_641;
                MR_Word EqvArgInsts_642;
                MR_Word EqvInstName_485;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_740, InstName_10, &EqvInst_741);
                Var_751 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_750 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_748 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_741)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_741, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_485 = ((MR_Word) ((MR_hl_field(3, EqvInst_741, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_485)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_641 = ((MR_Word) ((MR_hl_field(0, EqvInstName_485, 0))));
                    EqvArgInsts_642 = ((MR_Word) ((MR_hl_field(0, EqvInstName_485, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_485);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_487;
                  MR_Word NameInfo_490;
                  MR_Word Var_486;

                  {
                    NameInfo_490 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_490, 0) = ((MR_Box) (Var_751));
                    MR_hl_field(0, NameInfo_490, 1) = ((MR_Box) (Var_750));
                    MR_hl_field(0, NameInfo_490, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_490, 3) = ((MR_Box) (Var_748));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_641, &EqvSymNameStr_487);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_490, EqvSymNameStr_487, EqvArgInsts_642, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_486);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_595;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_595);
                  if ((Var_748 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_519;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_741)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_741, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_519 = ((MR_Word) ((MR_hl_field(3, EqvInst_741, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_519);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_521;

                      {
                        Var_521 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_521, 0) = ((MR_Box) (InstNameStr_595));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_521));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_522;
                      MR_Word STATE_VARIABLE_Expansions_6_523;
                      MR_Word Var_524;
                      MR_Word Var_525;
                      MR_Word Var_527;
                      MR_Word Var_529;
                      MR_Word Var_531;
                      MR_Word EqvPieces_533;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_595, &InstNumPieces_522, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_523);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_741, Suffix_11, &EqvPieces_533, STATE_VARIABLE_Expansions_6_523, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_529 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_529, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_529, 1) = ((MR_Box) (EqvPieces_533));
                      }
                      {
                        Var_527 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_527, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_527, 1) = ((MR_Box) (Var_529));
                      }
                      {
                        Var_525 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_525, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_525, 1) = ((MR_Box) (Var_527));
                      }
                      {
                        Var_531 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_531, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_531, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_524 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_525, Var_531);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_522, Var_524);
                    }
                  }
                  else
                  {
                    MR_Word Uniq_353 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word Var_493;
                    MR_Word Var_494;
                    MR_String Var_495;
                    MR_String Var_496;
                    MR_String Var_498;
                    MR_Word Var_500;
                    MR_Word Var_501;
                    MR_String Var_502;
                    MR_String Var_503;
                    MR_Word Var_505;
                    MR_Word Var_506;
                    MR_String Var_507;
                    MR_String Var_508;
                    MR_Word Var_511;
                    MR_Word SubInstName_513 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_514;
                    MR_String UniqStr_515;
                    MR_Word Live_516 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_517 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_515 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_353, (MR_String) "shared");
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_513, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_514, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_498 = mercury__string__f_43_43_2_f_0(UniqStr_515, (MR_String) ",");
                    Var_496 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_498);
                    Var_495 = mercury__string__f_43_43_2_f_0((MR_String) "ground", Var_496);
                    {
                      Var_494 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_494, 0) = ((MR_Box) (Var_495));
                    }
                    Var_503 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_516);
                    Var_502 = mercury__string__f_43_43_2_f_0(Var_503, (MR_String) ",");
                    {
                      Var_501 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_501, 0) = ((MR_Box) (Var_502));
                    }
                    Var_508 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_517);
                    Var_507 = mercury__string__f_43_43_2_f_0(Var_508, (MR_String) ",");
                    {
                      Var_506 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_506, 0) = ((MR_Box) (Var_507));
                    }
                    {
                      Var_505 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_505, 0) = ((MR_Box) (Var_506));
                      MR_hl_field(1, Var_505, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_500 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_500, 0) = ((MR_Box) (Var_501));
                      MR_hl_field(1, Var_500, 1) = ((MR_Box) (Var_505));
                    }
                    {
                      Var_493 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_493, 0) = ((MR_Box) (Var_494));
                      MR_hl_field(1, Var_493, 1) = ((MR_Box) (Var_500));
                    }
                    Var_511 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_514, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_493, Var_511);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ModuleInfo_392 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_393;
                MR_Word Var_464;
                MR_Word Var_466;
                MR_Word Var_467;
                MR_Word EqvSymName_74;
                MR_Word EqvArgInsts_75;
                MR_Word EqvInstName_73;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_392, InstName_10, &EqvInst_393);
                Var_467 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_466 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_464 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_73 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_73)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_74 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 0))));
                    EqvArgInsts_75 = ((MR_Word) ((MR_hl_field(0, EqvInstName_73, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_73);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_76;
                  MR_Word NameInfo_349;
                  MR_Word Var_77;

                  {
                    NameInfo_349 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_349, 0) = ((MR_Box) (Var_467));
                    MR_hl_field(0, NameInfo_349, 1) = ((MR_Box) (Var_466));
                    MR_hl_field(0, NameInfo_349, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_349, 3) = ((MR_Box) (Var_464));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_74, &EqvSymNameStr_76);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_349, EqvSymNameStr_76, EqvArgInsts_75, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_77);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_78;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_78);
                  if ((Var_464 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_448;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_393, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_448 = ((MR_Word) ((MR_hl_field(3, EqvInst_393, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_448);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_218;

                      {
                        Var_218 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_218, 0) = ((MR_Box) (InstNameStr_78));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_218));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_79;
                      MR_Word STATE_VARIABLE_Expansions_6_219;
                      MR_Word Var_221;
                      MR_Word Var_222;
                      MR_Word Var_224;
                      MR_Word Var_227;
                      MR_Word Var_230;
                      MR_Word EqvPieces_350;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_78, &InstNumPieces_79, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_219);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_393, Suffix_11, &EqvPieces_350, STATE_VARIABLE_Expansions_6_219, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_227, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_227, 1) = ((MR_Box) (EqvPieces_350));
                      }
                      {
                        Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_224, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_227));
                      }
                      {
                        Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_222, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_224));
                      }
                      {
                        Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_230, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_230, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, Var_230);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_79, Var_221);
                    }
                  }
                  else
                  {
                    MR_Word Var_284;
                    MR_Word Var_285;
                    MR_String Var_286;
                    MR_String Var_287;
                    MR_String Var_289;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_String Var_293;
                    MR_String Var_294;
                    MR_Word Var_296;
                    MR_Word Var_297;
                    MR_String Var_298;
                    MR_String Var_299;
                    MR_Word Var_305;
                    MR_Word Uniq_354 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 2)) & (MR_Integer) 7);
                    MR_Word SubInstName_356 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_357;
                    MR_String UniqStr_359;
                    MR_Word Live_360 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) >> 1)) & (MR_Integer) 1);
                    MR_Word Real_361 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 2))) & (MR_Integer) 1);

                    UniqStr_359 = parse_tree__parse_tree_to_term__any_inst_uniqueness_1_f_0(Uniq_354);
                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_356, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_357, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_289 = mercury__string__f_43_43_2_f_0(UniqStr_359, (MR_String) ",");
                    Var_287 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_289);
                    Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "any", Var_287);
                    {
                      Var_285 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_285, 0) = ((MR_Box) (Var_286));
                    }
                    Var_294 = parse_tree__parse_tree_to_term__is_live_to_str_1_f_0(Live_360);
                    Var_293 = mercury__string__f_43_43_2_f_0(Var_294, (MR_String) ",");
                    {
                      Var_292 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_292, 0) = ((MR_Box) (Var_293));
                    }
                    Var_299 = parse_tree__parse_tree_to_term__unify_is_real_to_str_1_f_0(Real_361);
                    Var_298 = mercury__string__f_43_43_2_f_0(Var_299, (MR_String) ",");
                    {
                      Var_297 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_297, 0) = ((MR_Box) (Var_298));
                    }
                    {
                      Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                      MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])));
                    }
                    {
                      Var_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_291, 0) = ((MR_Box) (Var_292));
                      MR_hl_field(1, Var_291, 1) = ((MR_Box) (Var_296));
                    }
                    {
                      Var_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_284, 0) = ((MR_Box) (Var_285));
                      MR_hl_field(1, Var_284, 1) = ((MR_Box) (Var_291));
                    }
                    Var_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_357, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_284, Var_305);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ModuleInfo_1137 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1138;
                MR_Word Var_1144;
                MR_Word Var_1146;
                MR_Word Var_1147;
                MR_Word EqvSymName_1093;
                MR_Word EqvArgInsts_1094;
                MR_Word EqvInstName_1021;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1137, InstName_10, &EqvInst_1138);
                Var_1147 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1146 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1144 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1138, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_1021 = ((MR_Word) ((MR_hl_field(3, EqvInst_1138, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_1021)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_1093 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1021, 0))));
                    EqvArgInsts_1094 = ((MR_Word) ((MR_hl_field(0, EqvInstName_1021, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_1021);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_1023;
                  MR_Word NameInfo_1026;
                  MR_Word Var_1022;

                  {
                    NameInfo_1026 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_1026, 0) = ((MR_Box) (Var_1147));
                    MR_hl_field(0, NameInfo_1026, 1) = ((MR_Box) (Var_1146));
                    MR_hl_field(0, NameInfo_1026, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_1026, 3) = ((MR_Box) (Var_1144));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_1093, &EqvSymNameStr_1023);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_1026, EqvSymNameStr_1023, EqvArgInsts_1094, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_1022);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_1075;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_1075);
                  if ((Var_1144 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_1027;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1138, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_1027 = ((MR_Word) ((MR_hl_field(3, EqvInst_1138, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_1027);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_1029;

                      {
                        Var_1029 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1029, 0) = ((MR_Box) (InstNameStr_1075));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_1029));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_1030;
                      MR_Word STATE_VARIABLE_Expansions_6_1031;
                      MR_Word Var_1032;
                      MR_Word Var_1033;
                      MR_Word Var_1035;
                      MR_Word Var_1037;
                      MR_Word Var_1039;
                      MR_Word EqvPieces_1041;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_1075, &InstNumPieces_1030, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_1031);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1138, Suffix_11, &EqvPieces_1041, STATE_VARIABLE_Expansions_6_1031, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_1037 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1037, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_1037, 1) = ((MR_Box) (EqvPieces_1041));
                      }
                      {
                        Var_1035 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1035, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_1035, 1) = ((MR_Box) (Var_1037));
                      }
                      {
                        Var_1033 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1033, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_1033, 1) = ((MR_Box) (Var_1035));
                      }
                      {
                        Var_1039 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_1039, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_1039, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_1032 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1033, Var_1039);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_1030, Var_1032);
                    }
                  }
                  else
                  {
                    MR_Word Var_458;
                    MR_Word SubInstName_460 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_461;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_460, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_461, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_458 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_461, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[29])), Var_458);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ModuleInfo_1005 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                MR_Word EqvInst_1006;
                MR_Word Var_1012;
                MR_Word Var_1014;
                MR_Word Var_1015;
                MR_Word EqvSymName_961;
                MR_Word EqvArgInsts_962;
                MR_Word EqvInstName_889;

                hlds__inst_lookup__inst_lookup_debug_3_p_0(ModuleInfo_1005, InstName_10, &EqvInst_1006);
                Var_1015 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
                Var_1014 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                Var_1012 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                succeeded = ((((MR_tag((MR_Word) EqvInst_1006)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1006, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  EqvInstName_889 = ((MR_Word) ((MR_hl_field(3, EqvInst_1006, 1))));
                  succeeded = ((MR_tag((MR_Word) EqvInstName_889)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    EqvSymName_961 = ((MR_Word) ((MR_hl_field(0, EqvInstName_889, 0))));
                    EqvArgInsts_962 = ((MR_Word) ((MR_hl_field(0, EqvInstName_889, 1))));
                    succeeded = hlds__inst_lookup__is_unknown_or_missing_user_inst_name_1_p_0(EqvInstName_889);
                  }
                }
                if (succeeded)
                {
                  MR_String EqvSymNameStr_891;
                  MR_Word NameInfo_894;
                  MR_Word Var_890;

                  {
                    NameInfo_894 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, NameInfo_894, 0) = ((MR_Box) (Var_1015));
                    MR_hl_field(0, NameInfo_894, 1) = ((MR_Box) (Var_1014));
                    MR_hl_field(0, NameInfo_894, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, NameInfo_894, 3) = ((MR_Box) (Var_1012));
                  }
                  hlds__error_msg_inst__sym_name_to_min_qual_string_3_p_0(Info_8, EqvSymName_961, &EqvSymNameStr_891);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(NameInfo_894, EqvSymNameStr_891, EqvArgInsts_962, Suffix_11, &Pieces_12, STATE_VARIABLE_Expansions_0_95, &Var_890);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
                else
                {
                  MR_String InstNameStr_943;

                  hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(InstName_10, &InstNameStr_943);
                  if ((Var_1012 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_895;

                    succeeded = ((((MR_tag((MR_Word) EqvInst_1006)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, EqvInst_1006, 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_895 = ((MR_Word) ((MR_hl_field(3, EqvInst_1006, 1))));
                      succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_10, Var_895);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_897;

                      {
                        Var_897 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_897, 0) = ((MR_Box) (InstNameStr_943));
                      }
                      {
                        Pieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_12, 0) = ((MR_Box) (Var_897));
                        MR_hl_field(1, Pieces_12, 1) = ((MR_Box) (Suffix_11));
                      }
                      STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                    }
                    else
                    {
                      MR_Word InstNumPieces_898;
                      MR_Word STATE_VARIABLE_Expansions_6_899;
                      MR_Word Var_900;
                      MR_Word Var_901;
                      MR_Word Var_903;
                      MR_Word Var_905;
                      MR_Word Var_907;
                      MR_Word EqvPieces_909;

                      hlds__error_msg_inst__record_internal_inst_name_5_p_0(InstName_10, InstNameStr_943, &InstNumPieces_898, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_6_899);
                      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, EqvInst_1006, Suffix_11, &EqvPieces_909, STATE_VARIABLE_Expansions_6_899, &STATE_VARIABLE_Expansions_96);
                      {
                        Var_905 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_905, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
                        MR_hl_field(1, Var_905, 1) = ((MR_Box) (EqvPieces_909));
                      }
                      {
                        Var_903 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_903, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[14])));
                        MR_hl_field(1, Var_903, 1) = ((MR_Box) (Var_905));
                      }
                      {
                        Var_901 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_901, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(1, Var_901, 1) = ((MR_Box) (Var_903));
                      }
                      {
                        Var_907 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_907, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                        MR_hl_field(1, Var_907, 1) = ((MR_Box) (Suffix_11));
                      }
                      Var_900 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_901, Var_907);
                      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstNumPieces_898, Var_900);
                    }
                  }
                  else
                  {
                    MR_Word Var_322;
                    MR_Word SubInstName_362 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                    MR_Word SubInstNamePieces_363;

                    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_362, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_363, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                    Var_322 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_363, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[13])));
                    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[28])), Var_322);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Uniq_55 = ((MR_Unsigned) ((MR_hl_field(3, InstName_10, 1))) & (MR_Integer) 7);
                MR_Word Type_344 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_345 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_411 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_345 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word EqvInst_335;
                  MR_Word next_value_of_tscc_proc_1_input_1_Info_8;
                  MR_Word next_value_of_tscc_proc_1_input_2_Inst_10;
                  MR_Word next_value_of_tscc_proc_1_input_3_Suffix_11;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;

                  {
                    EqvInst_335 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, EqvInst_335, 0) = (MR_Box) ((MR_Unsigned) (Uniq_55));
                    MR_hl_field(1, EqvInst_335, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_Info_8 = Info_8;
                  next_value_of_tscc_proc_1_input_2_Inst_10 = EqvInst_335;
                  next_value_of_tscc_proc_1_input_3_Suffix_11 = Suffix_11;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = STATE_VARIABLE_Expansions_0_95;
                  tscc_proc_1_input_1_Info_8 = next_value_of_tscc_proc_1_input_1_Info_8;
                  tscc_proc_1_input_2_Inst_10 = next_value_of_tscc_proc_1_input_2_Inst_10;
                  tscc_proc_1_input_3_Suffix_11 = next_value_of_tscc_proc_1_input_3_Suffix_11;
                  tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Expansions_0_33;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_String UniqStr_56;
                  MR_Word Var_187;
                  MR_Word Var_188;
                  MR_String Var_189;
                  MR_String Var_191;
                  MR_Word Var_194;
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Var_203;
                  MR_Word TVarSet_336 = ((MR_Word) ((MR_hl_field(1, Audience_345, 0))));
                  MR_Word TypePieces_338;

                  TypePieces_338 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_336, Var_411, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_344);
                  UniqStr_56 = parse_tree__parse_tree_to_term__inst_uniqueness_2_f_0(Uniq_55, (MR_String) "shared");
                  Var_191 = mercury__string__f_43_43_2_f_0(UniqStr_56, (MR_String) ",");
                  Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "typed_ground(", Var_191);
                  {
                    Var_188 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_188, 0) = ((MR_Box) (Var_189));
                  }
                  {
                    Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
                    MR_hl_field(1, Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_203, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(1, Var_203, 1) = ((MR_Box) (Suffix_11));
                  }
                  {
                    Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_200, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_203));
                  }
                  Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_338, Var_200);
                  Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[11])), Var_199);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_187, Var_194);
                  STATE_VARIABLE_Expansions_96 = STATE_VARIABLE_Expansions_0_95;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Type_48 = ((MR_Word) ((MR_hl_field(3, InstName_10, 1))));
                MR_Word SubInstName_49 = ((MR_Word) ((MR_hl_field(3, InstName_10, 2))));
                MR_Word Audience_50 = ((MR_Word) ((MR_hl_field(0, Info_8, 3))));
                MR_Word Var_405 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));

                if ((Audience_50 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_Info_8 = Info_8;
                  MR_Word next_value_of_tscc_proc_2_input_2_InstName_10 = SubInstName_49;
                  MR_Word next_value_of_tscc_proc_2_input_3_Suffix_11 = Suffix_11;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = STATE_VARIABLE_Expansions_0_95;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_Info_8 = next_value_of_tscc_proc_2_input_1_Info_8;
                  tscc_proc_2_input_2_InstName_10 = next_value_of_tscc_proc_2_input_2_InstName_10;
                  tscc_proc_2_input_3_Suffix_11 = next_value_of_tscc_proc_2_input_3_Suffix_11;
                  tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Expansions_0_95;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word TVarSet_51 = ((MR_Word) ((MR_hl_field(1, Audience_50, 0))));
                  MR_Word TypePieces_53;
                  MR_Word SubInstNamePieces_54;
                  MR_Word Var_152;
                  MR_Word Var_153;
                  MR_Word Var_160;
                  MR_Word Var_161;
                  MR_Word Var_164;

                  TypePieces_53 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_51, Var_405, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Type_48);
                  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_110_97_109_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, SubInstName_49, (MR_Word) ((MR_Unsigned) 0U), &SubInstNamePieces_54, STATE_VARIABLE_Expansions_0_95, &STATE_VARIABLE_Expansions_96);
                  {
                    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_164, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
                    MR_hl_field(1, Var_164, 1) = ((MR_Box) (Suffix_11));
                  }
                  {
                    Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
                    MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
                  }
                  Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SubInstNamePieces_54, Var_161);
                  Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), Var_160);
                  Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_53, Var_153);
                  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[15])), Var_152);
                }
              }
              break;
          }
          break;
      }
    tscc_output_1_Pieces_12 = Pieces_12;
    tscc_output_2_STATE_VARIABLE_Expansions_34 = STATE_VARIABLE_Expansions_96;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Pieces_12 = tscc_output_1_Pieces_12;
  *tscc_output_ptr_2_STATE_VARIABLE_Expansions_34 = tscc_output_2_STATE_VARIABLE_Expansions_34;
  return;
}

static void MR_CALL 
hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word HeadBoundFunctor_11,
  MR_Word TailBoundFunctors_12,
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
  MR_Word STATE_VARIABLE_Expansions_1_31;
  MR_Integer Arity_23;
  MR_Word TypeCtor_24;
  MR_String BaseName_26;
  MR_Word SymName_22;
  MR_Word Var_42;

  if ((TailBoundFunctors_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadSuffix_16 = Suffix_13;
    STATE_VARIABLE_Expansions_1_31 = STATE_VARIABLE_Expansions_0_29;
  }
  else
  {
    MR_Word HeadTailBoundFunctor_17 = ((MR_Word) ((MR_hl_field(1, TailBoundFunctors_12, 0))));
    MR_Word TailTailBoundFunctors_18 = ((MR_Word) ((MR_hl_field(1, TailBoundFunctors_12, 1))));
    MR_Word TailPieces_19;
    MR_Word Var_34;
    MR_Word Var_37;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, HeadTailBoundFunctor_17, TailTailBoundFunctors_18, Suffix_13, &TailPieces_19, STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_1_31);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (TailPieces_19));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[5])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      HeadSuffix_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadSuffix_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
      MR_hl_field(1, HeadSuffix_16, 1) = ((MR_Box) (Var_34));
    }
  }
  ConsId0_20 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctor_11, 0))));
  ArgInsts_21 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctor_11, 1))));
  succeeded = ((MR_tag((MR_Word) ConsId0_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_42 = (MR_Word) (MR_body((MR_Word) (ConsId0_20), (MR_Integer) 1));
    SymName_22 = ((MR_Word) ((MR_hl_field(0, Var_42, 0))));
    Arity_23 = ((MR_Integer) ((MR_hl_field(0, Var_42, 1))));
    TypeCtor_24 = ((MR_Word) ((MR_hl_field(0, Var_42, 2))));
    succeeded = ((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1);
    if (succeeded)
      BaseName_26 = ((MR_String) ((MR_hl_field(1, SymName_22, 1))));
  }
  if (succeeded)
  {
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (BaseName_26));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (Arity_23));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) (TypeCtor_24));
    }
    ConsId_27 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_43)));
  }
  else
    ConsId_27 = ConsId0_20;
  ConsIdStr_28 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_27);
  hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_95_97_110_100_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, ConsIdStr_28, ArgInsts_21, HeadSuffix_16, Pieces_14, STATE_VARIABLE_Expansions_1_31, STATE_VARIABLE_Expansions_30);
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
    MR_Word HeadTailInst_17 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, 0))));
    MR_Word TailTailInsts_18 = ((MR_Word) ((MR_hl_field(1, TailInsts_12, 1))));
    MR_Word HeadPieces_19;
    MR_Word TailPieces_20;
    MR_Word STATE_VARIABLE_Expansions_2_32;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_9, HeadInst_11, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[9])), &HeadPieces_19, STATE_VARIABLE_Expansions_0_21, &STATE_VARIABLE_Expansions_2_32);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_8_p_0(Info_9, HeadTailInst_17, TailTailInsts_18, Suffix_13, &TailPieces_20, STATE_VARIABLE_Expansions_2_32, STATE_VARIABLE_Expansions_22);
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
    MR_Word HeadArgInst_16 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, 0))));
    MR_Word TailArgInsts_17 = ((MR_Word) ((MR_hl_field(1, ArgInsts_12, 1))));
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
        MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[26])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[0])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Suffix_13));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
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
    MR_Word HeadArgInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailArgInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_1_22;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, HeadArgInst_14, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_22);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(HeadVar__1_1, TailArgInsts_15, &TailPieces_17, STATE_VARIABLE_Expansions_1_22, STATE_VARIABLE_Expansions_6);
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
    MR_Word HeadArgInst_39 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
    MR_Word TailArgInsts_40 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
    MR_Word HeadPieces_41;
    MR_Word TailPieces_42;
    MR_Word STATE_VARIABLE_Expansions_1_46;

    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(Info_8, HeadArgInst_39, (MR_Word) ((MR_Unsigned) 0U), &HeadPieces_41, STATE_VARIABLE_Expansions_0_18, &STATE_VARIABLE_Expansions_1_46);
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_105_110_115_116_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(Info_8, TailArgInsts_40, &TailPieces_42, STATE_VARIABLE_Expansions_1_46, STATE_VARIABLE_Expansions_19);
    {
      ArgInstPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgInstPieces_17, 0) = ((MR_Box) (HeadPieces_41));
      MR_hl_field(1, ArgInstPieces_17, 1) = ((MR_Box) (TailPieces_42));
    }
    Var_25 = mercury__string__f_43_43_2_f_0(BaseModeName_14, (MR_String) "(");
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
    }
    Var_27 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(ArgInstPieces_17);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_27));
    }
    *Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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
    MR_Word HeadMode_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailModes_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word HeadPieces_16;
    MR_Word TailPieces_17;
    MR_Word STATE_VARIABLE_Expansions_1_21;
    MR_Word Mode1_22;

    parse_tree__prog_mode__strip_typed_insts_from_mode_2_p_0(HeadMode_14, &Mode1_22);
    if (((MR_tag((MR_Word) Mode1_22)) == (MR_Integer) 0))
    {
      MR_Word FromInst1_23 = ((MR_Word) ((MR_hl_field(0, Mode1_22, 0))));
      MR_Word ToInst1_24 = ((MR_Word) ((MR_hl_field(0, Mode1_22, 1))));
      MR_Word Mode_25;

      parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst1_23, ToInst1_24, &Mode_25);
      if (((MR_tag((MR_Word) Mode_25)) == (MR_Integer) 0))
      {
        MR_Word FromInst_26 = ((MR_Word) ((MR_hl_field(0, Mode_25, 0))));
        MR_Word ToInst_27 = ((MR_Word) ((MR_hl_field(0, Mode_25, 1))));
        MR_Word FromPieces_28;
        MR_Word ToPieces_29;
        MR_Word STATE_VARIABLE_Expansions_1_33;
        MR_Word Var_35;

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, FromInst_26, (MR_Word) ((MR_Unsigned) 0U), &FromPieces_28, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_33);
        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ToInst_27, (MR_Word) ((MR_Unsigned) 0U), &ToPieces_29, STATE_VARIABLE_Expansions_1_33, &STATE_VARIABLE_Expansions_1_21);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[11])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (ToPieces_29));
        }
        HeadPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FromPieces_28, Var_35);
      }
      else
      {
        MR_Word ModeName_30 = ((MR_Word) ((MR_hl_field(1, Mode_25, 0))));
        MR_Word ArgInsts_31 = ((MR_Word) ((MR_hl_field(1, Mode_25, 1))));

        hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ModeName_30, ArgInsts_31, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_21);
      }
    }
    else
    {
      MR_Word ModeName_38 = ((MR_Word) ((MR_hl_field(1, Mode1_22, 0))));
      MR_Word ArgInsts_39 = ((MR_Word) ((MR_hl_field(1, Mode1_22, 1))));

      hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_7_p_0(HeadVar__1_1, ModeName_38, ArgInsts_39, &HeadPieces_16, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_1_21);
    }
    hlds__error_msg_inst__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_115_95_116_111_95_112_105_101_99_101_115_95_95_91_50_93_95_48_6_p_0(HeadVar__1_1, TailModes_15, &TailPieces_17, STATE_VARIABLE_Expansions_1_21, STATE_VARIABLE_Expansions_6);
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
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, 0))) & (MR_Integer) 1);
  MR_Word ArgModes_17 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_13, 1))));
  MR_Word Det_19 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_13, 3))) & (MR_Integer) 7);
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
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[22])));
        }
        {
          UniqPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UniqPieces_20, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[8])));
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
            MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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

          JoinedRealArgModePieces_32 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(RealArgModePieces_28);
          Var_89 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "func(");
          Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_89);
          {
            Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_86, 0) = ((MR_Box) (Var_87));
          }
          {
            Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[4])));
            MR_hl_field(1, Var_91, 1) = ((MR_Box) (JoinedRealArgModePieces_32));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(2, &hlds__error_msg_inst_scalar_common_3[10])));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) (RetModePieces_29));
          }
          {
            Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[5])));
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
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
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

        JoinedArgModePieces_27 = parse_tree__error_spec__pieces_strict_list_to_pieces_1_f_0(ArgModesPieces_22);
        Var_62 = mercury__string__f_43_43_2_f_0(AnyPrefix_11, (MR_String) "pred(");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 7U));
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
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__error_msg_inst_scalar_common_1[23])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__error_msg_inst_scalar_common_1[6])));
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
  MR_Word ExpansionsMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, 0))));
  MR_Word ExpansionsCounter0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_16, 1))));
  MR_Integer InstNum_12;
  MR_Word ExpansionsCounter_13;
  MR_String InstNameNumStr_14;
  MR_Word ExpansionsMap_15;
  MR_Word Var_24;
  MR_String Var_28;
  MR_String Var_36;
  MR_String Var_37;

  mercury__counter__allocate_3_p_0(&InstNum_12, ExpansionsCounter0_11, &ExpansionsCounter_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__error_msg_inst_scalar_common_3[7]), InstNum_12, &Var_28);
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
  MR_Word ExpansionsMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, 0))));
  MR_Word ExpansionsCounter0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Expansions_0_11, 1))));
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
  MR_Word ExpansionsMap_7 = ((MR_Word) ((MR_hl_field(0, Expansions_4, 0))));
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
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(1, SymName_5, 0))));
    MR_String BaseName_8 = ((MR_String) ((MR_hl_field(1, SymName_5, 1))));
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, Info_4, 0))));
    MR_Word CurModuleName_10;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &CurModuleName_10);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, CurModuleName_10);
    if (!(succeeded))
    {
      MR_Word Var_15;

      Var_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_15);
    }
    if (succeeded)
      *SymNameStr_6 = BaseName_8;
    else
      *SymNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
  }
  else
    *SymNameStr_6 = ((MR_String) ((MR_hl_field(0, SymName_5, 0))));
}

static void MR_CALL 
hlds__error_msg_inst__compiler_key_inst_name_to_dollar_string_2_p_0(
  MR_Word InstName_3,
  MR_String * InstNameStr_4)
{
  switch (MR_tag((MR_Word) InstName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *InstNameStr_4 = (MR_String) "\044unify_inst";
      break;
    case (MR_Integer) 2:
      *InstNameStr_4 = (MR_String) "\044merge_inst";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *InstNameStr_4 = (MR_String) "\044ground_inst";
          break;
        case (MR_Integer) 1:
          *InstNameStr_4 = (MR_String) "\044any_inst";
          break;
        case (MR_Integer) 2:
          *InstNameStr_4 = (MR_String) "\044shared_inst";
          break;
        case (MR_Integer) 3:
          *InstNameStr_4 = (MR_String) "\044mostly_uniq_inst";
          break;
      }
      break;
  }
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
      Var_12 = ((MR_Word) ((MR_hl_field(1, Pieces_4, 0))));
      AfterFirstFixed_8 = ((MR_Word) ((MR_hl_field(1, Pieces_4, 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 2);
      if (succeeded)
      {
        FirstFixed_7 = ((MR_String) ((MR_hl_field(2, Var_12, 0))));
        if ((AfterFirstFixed_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Summary_6 = FirstFixed_7;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TailPieces_9;
          MR_String TailSummary_10;
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, 0))));
          MR_String Var_14;
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, AfterFirstFixed_8, 1))));
          MR_Word Var_16;
          MR_Integer Var_17;
          MR_Integer Var_18;
          MR_String Var_19;
          MR_String Var_20;

          succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            Var_14 = ((MR_String) ((MR_hl_field(3, Var_13, 1))));
            succeeded = (strcmp(Var_14, (MR_String) ",") == 0);
            if (succeeded)
            {
              succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
                TailPieces_9 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 12U));
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

static MR_bool MR_CALL 
hlds__error_msg_inst____Unify____user_or_developer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__error_msg_inst____Unify____user_or_developer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__error_msg_inst____Compare____user_or_developer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__error_msg_inst____Compare____user_or_developer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&hlds__error_msg_inst__hlds__error_msg_inst__type_ctor_info_user_or_developer_0);
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
