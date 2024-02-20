/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2024-02-20
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


// :- module parse_tree.parse_tree_out_clause.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_clause__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_clause.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word S_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_111_109_105_115_101_95_101_113_118_95_115_111_108_117_116_105_111_110_115_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71,
  MR_Word tscc_proc_1_input_2_S_12,
  MR_Word tscc_proc_1_input_3_VarSet_13,
  MR_Unsigned tscc_proc_1_input_4_Indent_14,
  MR_Word tscc_proc_1_input_5_Vars_15,
  MR_Word tscc_proc_1_input_6_StateVars_16,
  MR_Word tscc_proc_1_input_7_DotSVars_17,
  MR_Word tscc_proc_1_input_8_ColonSVars_18,
  MR_Word tscc_proc_1_input_9_Goal_19,
  MR_String tscc_proc_1_input_10_Keyword_20);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Word S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word S_6,
  MR_Word TraceExpr_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word S_6,
  MR_Word TraceExpr_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word S_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Word S_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_111_109_105_115_101_95_101_113_118_95_115_111_108_117_116_105_111_110_115_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71,
  MR_Word tscc_proc_1_input_2_VarSet_13,
  MR_Unsigned tscc_proc_1_input_3_Indent_14,
  MR_Word tscc_proc_1_input_4_Vars_15,
  MR_Word tscc_proc_1_input_5_StateVars_16,
  MR_Word tscc_proc_1_input_6_DotSVars_17,
  MR_Word tscc_proc_1_input_7_ColonSVars_18,
  MR_Word tscc_proc_1_input_8_Goal_19,
  MR_String tscc_proc_1_input_9_Keyword_20,
  MR_Word tscc_proc_1_input_10_STATE_VARIABLE_U_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_U_42);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_U_0_109,
  MR_Word * STATE_VARIABLE_U_110);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10,
  MR_Word STATE_VARIABLE_U_0_16,
  MR_Word * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Word STATE_VARIABLE_U_0_16,
  MR_Word * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word TraceExpr_8,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word TraceExpr_8,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_3,
  MR_Word * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_U_0_15,
  MR_Word * STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10,
  MR_Word STATE_VARIABLE_U_0_20,
  MR_Word * STATE_VARIABLE_U_21);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_U_0_6,
  MR_Word * STATE_VARIABLE_U_7);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_catch_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_trace_mutable_var_and_comma_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Box S_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_promise_eqv_solutions_goal_11_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71,
  MR_Box tscc_proc_2_input_2_S_12,
  MR_Word tscc_proc_2_input_3_VarSet_13,
  MR_Unsigned tscc_proc_2_input_4_Indent_14,
  MR_Word tscc_proc_2_input_5_Vars_15,
  MR_Word tscc_proc_2_input_6_StateVars_16,
  MR_Word tscc_proc_2_input_7_DotSVars_17,
  MR_Word tscc_proc_2_input_8_ColonSVars_18,
  MR_Word tscc_proc_2_input_9_Goal_19,
  MR_String tscc_proc_2_input_10_Keyword_20,
  MR_Box tscc_proc_2_input_11_STATE_VARIABLE_U_0_41,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_94);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_orelse_goals_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10,
  MR_Box STATE_VARIABLE_U_0_109,
  MR_Box * STATE_VARIABLE_U_110);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_par_conj_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Box S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_conj_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Box S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_disj_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Box S_6,
  MR_Word TraceExpr_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Box S_6,
  MR_Word TraceExpr_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Box S_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Box S_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_some_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14);


static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_clause_scalar_common_4[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_5[3][12];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_6[3][10];


struct parse_tree__parse_tree_out_clause__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_clause__vector_common_type_3_0_s parse_tree__parse_tree_out_clause_vector_common_3[48];



static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "there_was_a_syntax_error")) },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_clause_scalar_common_4[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_5[3][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_6[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_clause__vector_common_type_3_0_s parse_tree__parse_tree_out_clause_vector_common_3[48] = {
  /* row   0 */   { (MR_String) "require_det" },
  /* row   1 */   { (MR_String) "require_semidet" },
  /* row   2 */   { (MR_String) "require_multi" },
  /* row   3 */   { (MR_String) "require_nondet" },
  /* row   4 */   { (MR_String) "require_cc_multi" },
  /* row   5 */   { (MR_String) "require_cc_nondet" },
  /* row   6 */   { (MR_String) "require_erroneous" },
  /* row   7 */   { (MR_String) "require_failure" },
  /* row   8 */   { (MR_String) "require_switch_arms_det" },
  /* row   9 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  10 */   { (MR_String) "require_switch_arms_multi" },
  /* row  11 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  12 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  13 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  14 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  15 */   { (MR_String) "require_switch_arms_failure" },
  /* row  16 */   { (MR_String) "require_det" },
  /* row  17 */   { (MR_String) "require_semidet" },
  /* row  18 */   { (MR_String) "require_multi" },
  /* row  19 */   { (MR_String) "require_nondet" },
  /* row  20 */   { (MR_String) "require_cc_multi" },
  /* row  21 */   { (MR_String) "require_cc_nondet" },
  /* row  22 */   { (MR_String) "require_erroneous" },
  /* row  23 */   { (MR_String) "require_failure" },
  /* row  24 */   { (MR_String) "require_switch_arms_det" },
  /* row  25 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  26 */   { (MR_String) "require_switch_arms_multi" },
  /* row  27 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  28 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  29 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  30 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  31 */   { (MR_String) "require_switch_arms_failure" },
  /* row  32 */   { (MR_String) "require_det" },
  /* row  33 */   { (MR_String) "require_semidet" },
  /* row  34 */   { (MR_String) "require_multi" },
  /* row  35 */   { (MR_String) "require_nondet" },
  /* row  36 */   { (MR_String) "require_cc_multi" },
  /* row  37 */   { (MR_String) "require_cc_nondet" },
  /* row  38 */   { (MR_String) "require_erroneous" },
  /* row  39 */   { (MR_String) "require_failure" },
  /* row  40 */   { (MR_String) "require_switch_arms_det" },
  /* row  41 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  42 */   { (MR_String) "require_switch_arms_multi" },
  /* row  43 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  44 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  45 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  46 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  47 */   { (MR_String) "require_switch_arms_failure" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_99_108_97_117_115_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word MethodName_6,
  MR_Word ItemClause_7,
  MR_Word S_8)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 4))));
  MR_Word BodyGoal_17;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_29;

    Var_29 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_18;
        MR_Word ResultTerm_19;
        MR_Box conv0_ResultTerm_19;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv6_STATE_VARIABLE_U_29_43;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_18, &conv0_ResultTerm_19);
        ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, S_8);
        if (!((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_32 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 0))));
          MR_Word TailArgs_33 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 1))));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv2_STATE_VARIABLE_U_23_37;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv4_STATE_VARIABLE_U_27_41;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_23_37);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_32, TailArgs_33, S_8);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_27_41);
        }
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_29_43);
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, S_8);
        else
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_36_49;

          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, ResultTerm_19, S_8);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_7(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_36_49);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, S_8);
        if (!((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_54 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv10_STATE_VARIABLE_U_21_59;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_25_63;

          func_9(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_21_59);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_54, TailArgs_55, S_8);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_25_63);
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv14_STATE_VARIABLE_U_27_65;

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_27_65);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17);
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_99_108_97_117_115_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word MethodName_6,
  MR_Word ItemClause_7,
  MR_Word STATE_VARIABLE_U_0_20,
  MR_Word * STATE_VARIABLE_U_21)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 4))));
  MR_Word BodyGoal_17;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_29;

    Var_29 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_18;
        MR_Word ResultTerm_19;
        MR_Word STATE_VARIABLE_U_21_35;
        MR_Word STATE_VARIABLE_U_27_41;
        MR_Word STATE_VARIABLE_U_29_43;
        MR_Box conv0_ResultTerm_19;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv6_STATE_VARIABLE_U_29_43;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_18, &conv0_ResultTerm_19);
        ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_21_35);
        if ((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_27_41 = STATE_VARIABLE_U_21_35;
        else
        {
          MR_Word HeadArg_32 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 0))));
          MR_Word TailArgs_33 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_U_23_37;
          MR_Word STATE_VARIABLE_U_25_39;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv2_STATE_VARIABLE_U_23_37;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv4_STATE_VARIABLE_U_27_41;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_35)), &conv2_STATE_VARIABLE_U_23_37);
          STATE_VARIABLE_U_23_37 = ((MR_Word) (conv2_STATE_VARIABLE_U_23_37));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_32, TailArgs_33, STATE_VARIABLE_U_23_37, &STATE_VARIABLE_U_25_39);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_39)), &conv4_STATE_VARIABLE_U_27_41);
          STATE_VARIABLE_U_27_41 = ((MR_Word) (conv4_STATE_VARIABLE_U_27_41));
        }
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_41)), &conv6_STATE_VARIABLE_U_29_43);
        STATE_VARIABLE_U_29_43 = ((MR_Word) (conv6_STATE_VARIABLE_U_29_43));
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, STATE_VARIABLE_U_29_43, STATE_VARIABLE_U_21);
        else
        {
          MR_Word STATE_VARIABLE_U_34_47;
          MR_Word STATE_VARIABLE_U_36_49;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv8_STATE_VARIABLE_U_36_49;

          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, ResultTerm_19, STATE_VARIABLE_U_29_43, &STATE_VARIABLE_U_34_47);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_7(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_34_47)), &conv8_STATE_VARIABLE_U_36_49);
          STATE_VARIABLE_U_36_49 = ((MR_Word) (conv8_STATE_VARIABLE_U_36_49));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_36_49, STATE_VARIABLE_U_21);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_U_19_57;
        MR_Word STATE_VARIABLE_U_25_63;

        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_19_57);
        if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_25_63 = STATE_VARIABLE_U_19_57;
        else
        {
          MR_Word HeadArg_54 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_U_21_59;
          MR_Word STATE_VARIABLE_U_23_61;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv10_STATE_VARIABLE_U_21_59;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_25_63;

          func_9(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_57)), &conv10_STATE_VARIABLE_U_21_59);
          STATE_VARIABLE_U_21_59 = ((MR_Word) (conv10_STATE_VARIABLE_U_21_59));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_54, TailArgs_55, STATE_VARIABLE_U_21_59, &STATE_VARIABLE_U_23_61);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_61)), &conv12_STATE_VARIABLE_U_25_63);
          STATE_VARIABLE_U_25_63 = ((MR_Word) (conv12_STATE_VARIABLE_U_25_63));
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_25_63;
        else
        {
          MR_Word STATE_VARIABLE_U_27_65;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv14_STATE_VARIABLE_U_27_65;

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_63)), &conv14_STATE_VARIABLE_U_27_65);
          STATE_VARIABLE_U_27_65 = ((MR_Word) (conv14_STATE_VARIABLE_U_27_65));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_27_65, STATE_VARIABLE_U_21);
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_99_108_97_117_115_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word Info_6,
  MR_Word S_7,
  MR_Word ItemClause_8)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredName0_11 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 1))));
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 5))));
  MR_Word BodyGoal_17;
  MR_Word PredName_18;
  MR_Box conv0_STATE_VARIABLE_U_23_23;
  void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv17_STATE_VARIABLE_U_22;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_34;

    Var_34 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_11, &PredName_18);
  parse_tree__parse_tree_out_info__maybe_format_line_number_5_p_0(TypeClassInfo_for_pt_output_27, Info_6, Context_15, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_23_23);
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_19;
        MR_Word ResultTerm_20;
        MR_Box conv1_ResultTerm_20;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_29_48;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_19, &conv1_ResultTerm_20);
        ResultTerm_20 = ((MR_Word) (conv1_ResultTerm_20));
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, S_7);
        if (!((FuncArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_37 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 0))));
          MR_Word TailArgs_38 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 1))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv3_STATE_VARIABLE_U_23_42;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_27_46;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_23_42);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_37, TailArgs_38, S_7);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_27_46);
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_29_48);
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_20, S_7);
        else
        {
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_U_36_54;

          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, ResultTerm_20, S_7);
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_36_54);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, S_7);
        if (!((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_59 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_60 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv11_STATE_VARIABLE_U_21_64;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_25_68;

          func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_21_64);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_59, TailArgs_60, S_7);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_12(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_25_68);
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv15_STATE_VARIABLE_U_27_70;

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_27_70);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17);
        }
      }
      break;
  }
  func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_16(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_22);
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_116_101_109_95_99_108_97_117_115_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word Info_6,
  MR_Word ItemClause_8,
  MR_Word STATE_VARIABLE_U_0_21,
  MR_Word * STATE_VARIABLE_U_22)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredName0_11 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 1))));
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 5))));
  MR_Word BodyGoal_17;
  MR_Word PredName_18;
  MR_Word STATE_VARIABLE_U_23_23;
  MR_Word STATE_VARIABLE_U_24_24;
  MR_Box conv0_STATE_VARIABLE_U_23_23;
  void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv17_STATE_VARIABLE_U_22;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_34;

    Var_34 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_11, &PredName_18);
  parse_tree__parse_tree_out_info__maybe_format_line_number_5_p_0(TypeClassInfo_for_pt_output_27, Info_6, Context_15, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv0_STATE_VARIABLE_U_23_23);
  STATE_VARIABLE_U_23_23 = ((MR_Word) (conv0_STATE_VARIABLE_U_23_23));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_19;
        MR_Word ResultTerm_20;
        MR_Word STATE_VARIABLE_U_21_40;
        MR_Word STATE_VARIABLE_U_27_46;
        MR_Word STATE_VARIABLE_U_29_48;
        MR_Box conv1_ResultTerm_20;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_29_48;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_19, &conv1_ResultTerm_20);
        ResultTerm_20 = ((MR_Word) (conv1_ResultTerm_20));
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_21_40);
        if ((FuncArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_27_46 = STATE_VARIABLE_U_21_40;
        else
        {
          MR_Word HeadArg_37 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 0))));
          MR_Word TailArgs_38 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_U_23_42;
          MR_Word STATE_VARIABLE_U_25_44;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv3_STATE_VARIABLE_U_23_42;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_27_46;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_40)), &conv3_STATE_VARIABLE_U_23_42);
          STATE_VARIABLE_U_23_42 = ((MR_Word) (conv3_STATE_VARIABLE_U_23_42));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_37, TailArgs_38, STATE_VARIABLE_U_23_42, &STATE_VARIABLE_U_25_44);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_44)), &conv5_STATE_VARIABLE_U_27_46);
          STATE_VARIABLE_U_27_46 = ((MR_Word) (conv5_STATE_VARIABLE_U_27_46));
        }
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_46)), &conv7_STATE_VARIABLE_U_29_48);
        STATE_VARIABLE_U_29_48 = ((MR_Word) (conv7_STATE_VARIABLE_U_29_48));
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_20, STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_24_24);
        else
        {
          MR_Word STATE_VARIABLE_U_34_52;
          MR_Word STATE_VARIABLE_U_36_54;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_U_36_54;

          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, ResultTerm_20, STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_34_52);
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_34_52)), &conv9_STATE_VARIABLE_U_36_54);
          STATE_VARIABLE_U_36_54 = ((MR_Word) (conv9_STATE_VARIABLE_U_36_54));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_36_54, &STATE_VARIABLE_U_24_24);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_U_19_62;
        MR_Word STATE_VARIABLE_U_25_68;

        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_19_62);
        if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_25_68 = STATE_VARIABLE_U_19_62;
        else
        {
          MR_Word HeadArg_59 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_60 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_U_21_64;
          MR_Word STATE_VARIABLE_U_23_66;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv11_STATE_VARIABLE_U_21_64;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_25_68;

          func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_62)), &conv11_STATE_VARIABLE_U_21_64);
          STATE_VARIABLE_U_21_64 = ((MR_Word) (conv11_STATE_VARIABLE_U_21_64));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_59, TailArgs_60, STATE_VARIABLE_U_21_64, &STATE_VARIABLE_U_23_66);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_12(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_66)), &conv13_STATE_VARIABLE_U_25_68);
          STATE_VARIABLE_U_25_68 = ((MR_Word) (conv13_STATE_VARIABLE_U_25_68));
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          STATE_VARIABLE_U_24_24 = STATE_VARIABLE_U_25_68;
        else
        {
          MR_Word STATE_VARIABLE_U_27_70;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv15_STATE_VARIABLE_U_27_70;

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_68)), &conv15_STATE_VARIABLE_U_27_70);
          STATE_VARIABLE_U_27_70 = ((MR_Word) (conv15_STATE_VARIABLE_U_27_70));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_27_70, &STATE_VARIABLE_U_24_24);
        }
      }
      break;
  }
  func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_16(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_24)), &conv17_STATE_VARIABLE_U_22);
  *STATE_VARIABLE_U_22 = ((MR_Word) (conv17_STATE_VARIABLE_U_22));
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word S_6,
  MR_Word PrintBase_7,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Base_10 = (MR_hl_field(0, TraceExpr_8, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, PrintBase_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (PrintBase_7)), Base_10, ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv3_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_14;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, TraceExprA_11);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv7_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_41);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv9_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv13_STATE_VARIABLE_U_14;

                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_41);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_40);
                func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_12(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word PrintBase_7,
  MR_Word TraceExpr_8,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Base_10 = (MR_hl_field(0, TraceExpr_8, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, PrintBase_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (PrintBase_7)), Base_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_14);
          *STATE_VARIABLE_U_14 = ((MR_Word) (conv1_STATE_VARIABLE_U_14));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_U_17_17;
          MR_Word STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv3_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_14;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv3_STATE_VARIABLE_U_17_17);
          STATE_VARIABLE_U_17_17 = ((MR_Word) (conv3_STATE_VARIABLE_U_17_17));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, PrintBase_7, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv5_STATE_VARIABLE_U_14);
          *STATE_VARIABLE_U_14 = ((MR_Word) (conv5_STATE_VARIABLE_U_14));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_U_31_31;
                MR_Word STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv7_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;
                MR_Word next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, PrintBase_7, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_31)), &conv7_STATE_VARIABLE_U_33_33);
                STATE_VARIABLE_U_33_33 = ((MR_Word) (conv7_STATE_VARIABLE_U_33_33));
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_U_23_23;
                MR_Word STATE_VARIABLE_U_24_24;
                MR_Word STATE_VARIABLE_U_26_26;
                MR_Word STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv9_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv13_STATE_VARIABLE_U_14;

                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv9_STATE_VARIABLE_U_23_23);
                STATE_VARIABLE_U_23_23 = ((MR_Word) (conv9_STATE_VARIABLE_U_23_23));
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, PrintBase_7, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_24)), &conv11_STATE_VARIABLE_U_26_26);
                STATE_VARIABLE_U_26_26 = ((MR_Word) (conv11_STATE_VARIABLE_U_26_26));
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, PrintBase_7, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_12(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_27)), &conv13_STATE_VARIABLE_U_14);
                *STATE_VARIABLE_U_14 = ((MR_Word) (conv13_STATE_VARIABLE_U_14));
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4)
{
  MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Unsigned Var_21;
  MR_Unsigned Var_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_16_16;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_20_20;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "catch ")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_16_16);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_8, (MR_Integer) 0, Pattern_10, S_7);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " ->")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_20_20);
  Var_21 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, Var_21, S_7);
  Var_24 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_8, Var_24, Goal_11);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, Indent_9, S_7);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_U_16_16;
  MR_Word STATE_VARIABLE_U_18_18;
  MR_Word STATE_VARIABLE_U_20_20;
  MR_Unsigned Var_21;
  MR_Word STATE_VARIABLE_U_22_22;
  MR_Unsigned Var_24;
  MR_Word STATE_VARIABLE_U_25_25;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_16_16;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_20_20;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "catch ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_16_16);
  STATE_VARIABLE_U_16_16 = ((MR_Word) (conv1_STATE_VARIABLE_U_16_16));
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_8, (MR_Integer) 0, Pattern_10, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " ->")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv3_STATE_VARIABLE_U_20_20);
  STATE_VARIABLE_U_20_20 = ((MR_Word) (conv3_STATE_VARIABLE_U_20_20));
  Var_21 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, Var_21, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
  Var_24 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_27, VarSet_8, Var_24, Goal_11, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_25_25);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_27, Indent_9, STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_14);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word S_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16)
{
  MR_String MutableName_28;
  MR_Word StateVar_29;
  MR_String StateVarStr_30;
  MR_String StateStr_31;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_18;

  switch (STATE_VARIABLE_NeedComma_0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv1_STATE_VARIABLE_U_19_19;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_19_19);
      }
      break;
  }
  *STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
  MutableName_28 = ((MR_String) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 0))));
  StateVar_29 = ((MR_Word) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 1))));
  StateVarStr_30 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, StateVar_29);
  Var_40 = mercury__string__f_43_43_2_f_0(StateVarStr_30, (MR_String) ")");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0(MutableName_28, Var_42);
  StateStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "state(", Var_43);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) (StateStr_31)), ((MR_Box) (S_9)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_18);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  MR_Word STATE_VARIABLE_U_19_19;
  MR_String MutableName_28;
  MR_Word StateVar_29;
  MR_String StateVarStr_30;
  MR_String StateStr_31;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_18;

  switch (STATE_VARIABLE_NeedComma_0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_U_19_19 = STATE_VARIABLE_U_0_17;
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv1_STATE_VARIABLE_U_19_19;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv1_STATE_VARIABLE_U_19_19);
        STATE_VARIABLE_U_19_19 = ((MR_Word) (conv1_STATE_VARIABLE_U_19_19));
      }
      break;
  }
  *STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
  MutableName_28 = ((MR_String) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 0))));
  StateVar_29 = ((MR_Word) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 1))));
  StateVarStr_30 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, StateVar_29);
  Var_40 = mercury__string__f_43_43_2_f_0(StateVarStr_30, (MR_String) ")");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0(MutableName_28, Var_42);
  StateStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "state(", Var_43);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) (StateStr_31)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_19)), &conv3_STATE_VARIABLE_U_18);
  *STATE_VARIABLE_U_18 = ((MR_Word) (conv3_STATE_VARIABLE_U_18));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv65_STATE_VARIABLE_NeedComma_16;

  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv65_STATE_VARIABLE_NeedComma_16);
  *wrapper_arg_3 = ((MR_Box) (conv65_STATE_VARIABLE_NeedComma_16));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_111_109_105_115_101_95_101_113_118_95_115_111_108_117_116_105_111_110_115_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71,
  MR_Word tscc_proc_1_input_2_S_12,
  MR_Word tscc_proc_1_input_3_VarSet_13,
  MR_Unsigned tscc_proc_1_input_4_Indent_14,
  MR_Word tscc_proc_1_input_5_Vars_15,
  MR_Word tscc_proc_1_input_6_StateVars_16,
  MR_Word tscc_proc_1_input_7_DotSVars_17,
  MR_Word tscc_proc_1_input_8_ColonSVars_18,
  MR_Word tscc_proc_1_input_9_Goal_19,
  MR_String tscc_proc_1_input_10_Keyword_20)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
  MR_Word tscc_proc_2_input_2_S_7;
  MR_Word tscc_proc_2_input_3_VarSet_8;
  MR_Unsigned tscc_proc_2_input_4_Indent_9;
  MR_Word tscc_proc_2_input_5_Goal_10;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = io.text_output_stream, U = io.state]_0_1/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = io.text_output_stream, U = io.state]_0_1/11-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = io.text_output_stream, U = io.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
    MR_Word S_12 = tscc_proc_1_input_2_S_12;
    MR_Word VarSet_13 = tscc_proc_1_input_3_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_1_input_4_Indent_14;
    MR_Word Vars_15 = tscc_proc_1_input_5_Vars_15;
    MR_Word StateVars_16 = tscc_proc_1_input_6_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_1_input_7_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_1_input_8_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_1_input_9_Goal_19;
    MR_String Keyword_20 = tscc_proc_1_input_10_Keyword_20;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Word next_value_of_tscc_proc_2_input_2_S_7 = S_12;
      MR_Word next_value_of_tscc_proc_2_input_3_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_2_input_5_Goal_10 = Goal_19;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_2_input_2_S_7 = next_value_of_tscc_proc_2_input_2_S_7;
      tscc_proc_2_input_3_VarSet_8 = next_value_of_tscc_proc_2_input_3_VarSet_8;
      tscc_proc_2_input_4_Indent_9 = next_value_of_tscc_proc_2_input_4_Indent_9;
      tscc_proc_2_input_5_Goal_10 = next_value_of_tscc_proc_2_input_5_Goal_10;
      goto top_of_proc_2;
    }
    else
    {
      MR_Unsigned Indent1_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_44_44;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_46_46;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_65_65;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_U_42;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_44_44);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_46_46);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, S_12);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv5_STATE_VARIABLE_U_50_50;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_50_50);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv7_STATE_VARIABLE_U_55_55;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_55_55);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv9_STATE_VARIABLE_U_60_60;

        func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_60_60);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_65_65);
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, S_12);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, S_12);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_12(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_42);
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
    MR_Word S_7 = tscc_proc_2_input_2_S_7;
    MR_Word VarSet_8 = tscc_proc_2_input_3_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_2_input_4_Indent_9;
    MR_Word Goal_10 = tscc_proc_2_input_5_Goal_10;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv82_STATE_VARIABLE_U_359_359;
          MR_Box conv83_STATE_VARIABLE_U_363_363;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv82_STATE_VARIABLE_U_359_359);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, S_7);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv83_STATE_VARIABLE_U_363_363);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, S_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv22_STATE_VARIABLE_U_357_357;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_357_357);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Name_417, Terms_418);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv70_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv70_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv33_STATE_VARIABLE_U_311_311;
              MR_Box conv34_STATE_VARIABLE_U_318_318;
              MR_Box conv35_STATE_VARIABLE_U_323_323;
              MR_Box conv36_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_U_311_311);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Vars_406, StateVars_407);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Cond_76);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_U_318_318);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Then_408);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_U_323_323);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Else_409);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Unsigned Indent1_415;
              MR_Box conv26_STATE_VARIABLE_U_345_345;
              MR_Box conv27_STATE_VARIABLE_U_94;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_345_345);
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_415, Disjunct1_82);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, NonFirstDisjuncts_85);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv40_STATE_VARIABLE_U_330_330;
              MR_Box conv41_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_U_330_330);
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_410, SubGoal_411);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv41_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box conv32_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv42_STATE_VARIABLE_U_339_339;
              MR_Box conv43_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_U_339_339);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv43_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Word next_value_of_tscc_proc_2_input_2_S_7 = S_7;
                MR_Word next_value_of_tscc_proc_2_input_3_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_2_input_5_Goal_10 = SubGoal_23;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_2_input_2_S_7 = next_value_of_tscc_proc_2_input_2_S_7;
                tscc_proc_2_input_3_VarSet_8 = next_value_of_tscc_proc_2_input_3_VarSet_8;
                tscc_proc_2_input_4_Indent_9 = next_value_of_tscc_proc_2_input_4_Indent_9;
                tscc_proc_2_input_5_Goal_10 = next_value_of_tscc_proc_2_input_5_Goal_10;
                goto top_of_proc_2;
              }
              else
              {
                MR_Unsigned Indent1_370;
                MR_Box conv49_STATE_VARIABLE_U_131_131;
                MR_Box conv50_STATE_VARIABLE_U_137_137;
                MR_Box conv51_STATE_VARIABLE_U_94;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Box conv47_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv47_STATE_VARIABLE_U_127_127);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Box conv48_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv48_STATE_VARIABLE_U_127_127);
                    }
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv49_STATE_VARIABLE_U_131_131);
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv50_STATE_VARIABLE_U_137_137);
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_370, SubGoal_23);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv51_STATE_VARIABLE_U_94);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv44_STATE_VARIABLE_U_151_151;
              MR_Box conv45_STATE_VARIABLE_U_153_153;
              MR_Box conv46_STATE_VARIABLE_U_94;

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv44_STATE_VARIABLE_U_151_151);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv45_STATE_VARIABLE_U_153_153);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_385, SubGoal_386);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv46_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_374;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_376;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_381;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "arbitrary";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[32 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv55_STATE_VARIABLE_U_159_159;
              MR_Box conv56_STATE_VARIABLE_U_161_161;
              MR_Box conv57_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv55_STATE_VARIABLE_U_159_159);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv56_STATE_VARIABLE_U_161_161);
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_387, SubGoal_388);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv57_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv52_STATE_VARIABLE_U_169_169;
              MR_Box conv53_STATE_VARIABLE_U_173_173;
              MR_Box conv54_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv52_STATE_VARIABLE_U_169_169);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_39);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv53_STATE_VARIABLE_U_173_173);
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_389, SubGoal_390);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv54_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv58_STATE_VARIABLE_U_180_180;
              MR_Box conv59_STATE_VARIABLE_U_182_182;
              MR_Box conv60_STATE_VARIABLE_U_186_186;
              MR_Box conv61_STATE_VARIABLE_U_94;

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[40 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv58_STATE_VARIABLE_U_180_180);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv59_STATE_VARIABLE_U_182_182);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_394);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv60_STATE_VARIABLE_U_186_186);
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_391, SubGoal_392);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv61_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box conv23_STATE_VARIABLE_U_194_194;
              MR_Box conv24_STATE_VARIABLE_U_197_197;
              MR_Box conv25_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_194_194);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_420, S_7, HeadWarning_43, TailWarnings_44);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_197_197);
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_395, SubGoal_396);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Unsigned Var_261;
              MR_Unsigned Var_264;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv62_STATE_VARIABLE_U_239_239;
              MR_Box conv67_Var_66;
              MR_Box conv66_STATE_VARIABLE_U_257_257;
              MR_Box conv68_STATE_VARIABLE_U_260_260;
              MR_Box conv69_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv62_STATE_VARIABLE_U_239_239);
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, CompileTime_63);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_243_243);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, RunTime_64);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Box conv63_STATE_VARIABLE_U_250_250;
                MR_Box conv64_STATE_VARIABLE_U_254_254;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_247_247);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv63_STATE_VARIABLE_U_250_250);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv64_STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[2]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = ((MR_Box) (S_7));
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv67_Var_66, ((MR_Box) ((MR_Integer) 0)), &conv66_STATE_VARIABLE_U_257_257);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv68_STATE_VARIABLE_U_260_260);
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, S_7);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_264, SubGoal_398);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv69_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word Var_232;
              MR_Unsigned Indent1_397;
              MR_Box conv14_STATE_VARIABLE_U_205_205;
              MR_Box conv17_STATE_VARIABLE_U_217_217;
              MR_Box conv20_STATE_VARIABLE_U_229_229;
              MR_Box conv21_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_205_205);
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Box conv15_STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_207_207);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, S_7);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Box conv16_STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_213_213);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, S_7);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_217_217);
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Box conv18_STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_219_219);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, S_7);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Box conv19_STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_225_225);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, S_7);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_229_229);
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, S_7);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_397, Var_232);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word Var_296;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv71_STATE_VARIABLE_U_271_271;
              MR_Box conv74_STATE_VARIABLE_U_279_279;
              MR_Box conv75_STATE_VARIABLE_U_285_285;
              MR_Box conv76_STATE_VARIABLE_U_288_288;
              MR_Box conv78_STATE_VARIABLE_U_297_297;
              MR_Box conv81_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv71_STATE_VARIABLE_U_271_271);
              if (!((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));
                MR_Box conv72_STATE_VARIABLE_U_273_273;
                MR_Box conv73_STATE_VARIABLE_U_277_277;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv72_STATE_VARIABLE_U_273_273);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv73_STATE_VARIABLE_U_277_277);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv74_STATE_VARIABLE_U_279_279);
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, SubGoal_402);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv75_STATE_VARIABLE_U_285_285);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv76_STATE_VARIABLE_U_288_288);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Then_68);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              if (!((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Box conv77_STATE_VARIABLE_U_293_293;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv77_STATE_VARIABLE_U_293_293);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Else_72);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[2]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = ((MR_Box) (S_7));
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, ((MR_Box) ((MR_Integer) 0)), &conv78_STATE_VARIABLE_U_297_297);
              if (!((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Box conv79_STATE_VARIABLE_U_300_300;
                MR_Box conv80_STATE_VARIABLE_U_304_304;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv79_STATE_VARIABLE_U_300_300);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv80_STATE_VARIABLE_U_304_304);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, CatchAnyGoal_74);
              }
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv81_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv37_STATE_VARIABLE_U_101_101;
              MR_Box conv38_STATE_VARIABLE_U_106_106;
              MR_Box conv39_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_U_101_101);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_U_106_106);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv39_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv28_STATE_VARIABLE_U_114_114;
              MR_Box conv29_STATE_VARIABLE_U_119_119;
              MR_Box conv30_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalA_367);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_119_119);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalB_368);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Var_355;
              MR_Box conv31_STATE_VARIABLE_U_354_354;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_354_354);
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_355, Terms_88);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420,
  MR_Word tscc_proc_2_input_2_S_7,
  MR_Word tscc_proc_2_input_3_VarSet_8,
  MR_Unsigned tscc_proc_2_input_4_Indent_9,
  MR_Word tscc_proc_2_input_5_Goal_10)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
  MR_Word tscc_proc_1_input_2_S_12;
  MR_Word tscc_proc_1_input_3_VarSet_13;
  MR_Unsigned tscc_proc_1_input_4_Indent_14;
  MR_Word tscc_proc_1_input_5_Vars_15;
  MR_Word tscc_proc_1_input_6_StateVars_16;
  MR_Word tscc_proc_1_input_7_DotSVars_17;
  MR_Word tscc_proc_1_input_8_ColonSVars_18;
  MR_Word tscc_proc_1_input_9_Goal_19;
  MR_String tscc_proc_1_input_10_Keyword_20;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = io.text_output_stream, U = io.state]_0_1/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = io.text_output_stream, U = io.state]_0_1/11-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = io.text_output_stream, U = io.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
    MR_Word S_12 = tscc_proc_1_input_2_S_12;
    MR_Word VarSet_13 = tscc_proc_1_input_3_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_1_input_4_Indent_14;
    MR_Word Vars_15 = tscc_proc_1_input_5_Vars_15;
    MR_Word StateVars_16 = tscc_proc_1_input_6_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_1_input_7_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_1_input_8_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_1_input_9_Goal_19;
    MR_String Keyword_20 = tscc_proc_1_input_10_Keyword_20;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Word next_value_of_tscc_proc_2_input_2_S_7 = S_12;
      MR_Word next_value_of_tscc_proc_2_input_3_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_2_input_5_Goal_10 = Goal_19;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_2_input_2_S_7 = next_value_of_tscc_proc_2_input_2_S_7;
      tscc_proc_2_input_3_VarSet_8 = next_value_of_tscc_proc_2_input_3_VarSet_8;
      tscc_proc_2_input_4_Indent_9 = next_value_of_tscc_proc_2_input_4_Indent_9;
      tscc_proc_2_input_5_Goal_10 = next_value_of_tscc_proc_2_input_5_Goal_10;
      goto top_of_proc_2;
    }
    else
    {
      MR_Unsigned Indent1_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_44_44;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_46_46;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_65_65;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_U_42;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_44_44);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_46_46);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, S_12);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv5_STATE_VARIABLE_U_50_50;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_50_50);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv7_STATE_VARIABLE_U_55_55;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_55_55);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv9_STATE_VARIABLE_U_60_60;

        func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_60_60);
      }
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_65_65);
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, S_12);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, S_12);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_12(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_42);
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
    MR_Word S_7 = tscc_proc_2_input_2_S_7;
    MR_Word VarSet_8 = tscc_proc_2_input_3_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_2_input_4_Indent_9;
    MR_Word Goal_10 = tscc_proc_2_input_5_Goal_10;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv82_STATE_VARIABLE_U_359_359;
          MR_Box conv83_STATE_VARIABLE_U_363_363;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv82_STATE_VARIABLE_U_359_359);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, S_7);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv83_STATE_VARIABLE_U_363_363);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, S_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv22_STATE_VARIABLE_U_357_357;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_357_357);
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Name_417, Terms_418);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv70_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv70_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv33_STATE_VARIABLE_U_311_311;
              MR_Box conv34_STATE_VARIABLE_U_318_318;
              MR_Box conv35_STATE_VARIABLE_U_323_323;
              MR_Box conv36_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv33_STATE_VARIABLE_U_311_311);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Vars_406, StateVars_407);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Cond_76);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_U_318_318);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Then_408);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv35_STATE_VARIABLE_U_323_323);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Else_409);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Unsigned Indent1_415;
              MR_Box conv26_STATE_VARIABLE_U_345_345;
              MR_Box conv27_STATE_VARIABLE_U_94;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_345_345);
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_415, Disjunct1_82);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, NonFirstDisjuncts_85);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv40_STATE_VARIABLE_U_330_330;
              MR_Box conv41_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_U_330_330);
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_410, SubGoal_411);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv41_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box conv32_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv42_STATE_VARIABLE_U_339_339;
              MR_Box conv43_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_U_339_339);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv43_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Word next_value_of_tscc_proc_2_input_2_S_7 = S_7;
                MR_Word next_value_of_tscc_proc_2_input_3_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_2_input_5_Goal_10 = SubGoal_23;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_2_input_2_S_7 = next_value_of_tscc_proc_2_input_2_S_7;
                tscc_proc_2_input_3_VarSet_8 = next_value_of_tscc_proc_2_input_3_VarSet_8;
                tscc_proc_2_input_4_Indent_9 = next_value_of_tscc_proc_2_input_4_Indent_9;
                tscc_proc_2_input_5_Goal_10 = next_value_of_tscc_proc_2_input_5_Goal_10;
                goto top_of_proc_2;
              }
              else
              {
                MR_Unsigned Indent1_370;
                MR_Box conv49_STATE_VARIABLE_U_131_131;
                MR_Box conv50_STATE_VARIABLE_U_137_137;
                MR_Box conv51_STATE_VARIABLE_U_94;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Box conv47_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv47_STATE_VARIABLE_U_127_127);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Box conv48_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv48_STATE_VARIABLE_U_127_127);
                    }
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv49_STATE_VARIABLE_U_131_131);
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv50_STATE_VARIABLE_U_137_137);
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_370, SubGoal_23);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv51_STATE_VARIABLE_U_94);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv44_STATE_VARIABLE_U_151_151;
              MR_Box conv45_STATE_VARIABLE_U_153_153;
              MR_Box conv46_STATE_VARIABLE_U_94;

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv44_STATE_VARIABLE_U_151_151);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv45_STATE_VARIABLE_U_153_153);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_385, SubGoal_386);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv46_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_374;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_376;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_1_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_5_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_1_input_6_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_1_input_7_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_1_input_8_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_1_input_9_Goal_19 = SubGoal_381;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_S_12 = next_value_of_tscc_proc_1_input_2_S_12;
              tscc_proc_1_input_3_VarSet_13 = next_value_of_tscc_proc_1_input_3_VarSet_13;
              tscc_proc_1_input_4_Indent_14 = next_value_of_tscc_proc_1_input_4_Indent_14;
              tscc_proc_1_input_5_Vars_15 = next_value_of_tscc_proc_1_input_5_Vars_15;
              tscc_proc_1_input_6_StateVars_16 = next_value_of_tscc_proc_1_input_6_StateVars_16;
              tscc_proc_1_input_7_DotSVars_17 = next_value_of_tscc_proc_1_input_7_DotSVars_17;
              tscc_proc_1_input_8_ColonSVars_18 = next_value_of_tscc_proc_1_input_8_ColonSVars_18;
              tscc_proc_1_input_9_Goal_19 = next_value_of_tscc_proc_1_input_9_Goal_19;
              tscc_proc_1_input_10_Keyword_20 = (MR_String) "arbitrary";
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[32 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv55_STATE_VARIABLE_U_159_159;
              MR_Box conv56_STATE_VARIABLE_U_161_161;
              MR_Box conv57_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv55_STATE_VARIABLE_U_159_159);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv56_STATE_VARIABLE_U_161_161);
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_387, SubGoal_388);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv57_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv52_STATE_VARIABLE_U_169_169;
              MR_Box conv53_STATE_VARIABLE_U_173_173;
              MR_Box conv54_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv52_STATE_VARIABLE_U_169_169);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_39);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv53_STATE_VARIABLE_U_173_173);
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_389, SubGoal_390);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv54_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv58_STATE_VARIABLE_U_180_180;
              MR_Box conv59_STATE_VARIABLE_U_182_182;
              MR_Box conv60_STATE_VARIABLE_U_186_186;
              MR_Box conv61_STATE_VARIABLE_U_94;

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[40 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv58_STATE_VARIABLE_U_180_180);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv59_STATE_VARIABLE_U_182_182);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_394);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv60_STATE_VARIABLE_U_186_186);
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_391, SubGoal_392);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv61_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box conv23_STATE_VARIABLE_U_194_194;
              MR_Box conv24_STATE_VARIABLE_U_197_197;
              MR_Box conv25_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_194_194);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_420, S_7, HeadWarning_43, TailWarnings_44);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_197_197);
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_395, SubGoal_396);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Unsigned Var_261;
              MR_Unsigned Var_264;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv62_STATE_VARIABLE_U_239_239;
              MR_Box conv67_Var_66;
              MR_Box conv66_STATE_VARIABLE_U_257_257;
              MR_Box conv68_STATE_VARIABLE_U_260_260;
              MR_Box conv69_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv62_STATE_VARIABLE_U_239_239);
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, CompileTime_63);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_243_243);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, RunTime_64);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Box conv63_STATE_VARIABLE_U_250_250;
                MR_Box conv64_STATE_VARIABLE_U_254_254;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_247_247);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv63_STATE_VARIABLE_U_250_250);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv64_STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[2]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = ((MR_Box) (S_7));
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv67_Var_66, ((MR_Box) ((MR_Integer) 0)), &conv66_STATE_VARIABLE_U_257_257);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv68_STATE_VARIABLE_U_260_260);
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, S_7);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_264, SubGoal_398);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv69_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word Var_232;
              MR_Unsigned Indent1_397;
              MR_Box conv14_STATE_VARIABLE_U_205_205;
              MR_Box conv17_STATE_VARIABLE_U_217_217;
              MR_Box conv20_STATE_VARIABLE_U_229_229;
              MR_Box conv21_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_205_205);
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Box conv15_STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_207_207);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, S_7);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Box conv16_STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_213_213);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, S_7);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_217_217);
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Box conv18_STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_219_219);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, S_7);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Box conv19_STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_225_225);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, S_7);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_229_229);
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, S_7);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_397, Var_232);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word Var_296;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv71_STATE_VARIABLE_U_271_271;
              MR_Box conv74_STATE_VARIABLE_U_279_279;
              MR_Box conv75_STATE_VARIABLE_U_285_285;
              MR_Box conv76_STATE_VARIABLE_U_288_288;
              MR_Box conv78_STATE_VARIABLE_U_297_297;
              MR_Box conv81_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv71_STATE_VARIABLE_U_271_271);
              if (!((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));
                MR_Box conv72_STATE_VARIABLE_U_273_273;
                MR_Box conv73_STATE_VARIABLE_U_277_277;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv72_STATE_VARIABLE_U_273_273);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv73_STATE_VARIABLE_U_277_277);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv74_STATE_VARIABLE_U_279_279);
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, SubGoal_402);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv75_STATE_VARIABLE_U_285_285);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv76_STATE_VARIABLE_U_288_288);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Then_68);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              if (!((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Box conv77_STATE_VARIABLE_U_293_293;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv77_STATE_VARIABLE_U_293_293);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Else_72);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[2]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = ((MR_Box) (S_7));
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, ((MR_Box) ((MR_Integer) 0)), &conv78_STATE_VARIABLE_U_297_297);
              if (!((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Box conv79_STATE_VARIABLE_U_300_300;
                MR_Box conv80_STATE_VARIABLE_U_304_304;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv79_STATE_VARIABLE_U_300_300);
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, S_7);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv80_STATE_VARIABLE_U_304_304);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, CatchAnyGoal_74);
              }
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv81_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv37_STATE_VARIABLE_U_101_101;
              MR_Box conv38_STATE_VARIABLE_U_106_106;
              MR_Box conv39_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_U_101_101);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_U_106_106);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv39_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv28_STATE_VARIABLE_U_114_114;
              MR_Box conv29_STATE_VARIABLE_U_119_119;
              MR_Box conv30_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalA_367);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_119_119);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalB_368);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Var_355;
              MR_Box conv31_STATE_VARIABLE_U_354_354;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_U_354_354);
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_355, Terms_88);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10)
{
  switch (MR_tag((MR_Word) Goal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent_9, Goal_10);
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
        MR_Box conv0_STATE_VARIABLE_U_114_114;
        MR_Box conv1_STATE_VARIABLE_U_110;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_114_114);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, S_7);
        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent1_108, Goal_10);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, S_7);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_110);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent_9, Goal_10);
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
            MR_Box conv0_STATE_VARIABLE_U_114_114;
            MR_Box conv1_STATE_VARIABLE_U_110;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_114_114);
            parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, S_7);
            parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent1_108, Goal_10);
            parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, S_7);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_110);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 1))));

      if ((TailGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned Var_18 = (Indent_9 + (MR_Unsigned) 1U);

        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, S_7, VarSet_8, Var_18, HeadGoal_12);
      }
      else
      {
        MR_Unsigned Var_21 = (Indent_9 + (MR_Unsigned) 1U);
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_26_26;
        MR_Word next_value_of_Goals_10;

        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, S_7, VarSet_8, Var_21, HeadGoal_12);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, S_7);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "orelse")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_26_26);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, S_7);
        // direct tailcall eliminated
        ;
        next_value_of_Goals_10 = TailGoals_13;
        Goals_10 = next_value_of_Goals_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Disjunct_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Disjuncts_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Unsigned Indent1_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_U_24_24;
      MR_Word next_value_of_HeadVar__4_4;

      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, HeadVar__3_3, HeadVar__1_1);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) ";")), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_24_24);
      Indent1_19 = (HeadVar__3_3 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent1_19, HeadVar__1_1);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, HeadVar__1_1, HeadVar__2_2, Indent1_19, Disjunct_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Disjuncts_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_9, Indent_10, GoalA_11);
    if (!((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GoalB_14 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_20_20;
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ",")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, Indent_10, S_8);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_14;
      next_value_of_GoalsB_12 = GoalsC_15;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Word S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12)
{
  while (MR_TRUE)
  {
    MR_Unsigned Indent1_14 = (Indent_10 + (MR_Unsigned) 1U);

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_25, Indent1_14, S_8);
    parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_25, S_8, VarSet_9, Indent1_14, GoalA_11);
    if (!((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GoalB_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_16 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_U_24_24;
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;

      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_25, Indent_10, S_8);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_25, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_25)), ((MR_Box) ((MR_String) "&\n")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_15;
      next_value_of_GoalsB_12 = GoalsC_16;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word S_6,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_99_111_109_112_105_108_101_116_105_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_43, Base_10, S_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv1_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, TraceExprA_11);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv5_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv7_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_14;

                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_54_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_40);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_99_111_109_112_105_108_101_116_105_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word CompileTime_5,
  MR_Word S_6)
{
  MR_String CondStr_9;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_15;

  switch (MR_tag((MR_Word) CompileTime_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FlagName_8 = ((MR_String) ((MR_hl_field(0, CompileTime_5, (MR_Integer) 0))));
        MR_String Var_19;
        MR_String Var_37;

        Var_19 = mercury__term_io__quoted_string_1_f_0(FlagName_8);
        Var_37 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "flag(", Var_37);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_10 = ((MR_Unsigned) ((MR_hl_field(1, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_11;
        MR_String Var_34;

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_11, Grade_10);
        Var_34 = mercury__string__f_43_43_2_f_0(GradeName_11, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "grade(", Var_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_12 = ((MR_Unsigned) ((MR_hl_field(2, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String LevelStr_13;
        MR_String Var_31;

        switch (Level_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            LevelStr_13 = (MR_String) "deep";
            break;
          case (MR_Integer) 0:
            LevelStr_13 = (MR_String) "shallow";
            break;
        }
        Var_31 = mercury__string__f_43_43_2_f_0(LevelStr_13, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "tracelevel(", Var_31);
      }
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (CondStr_9)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word S_6,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_43, Base_10, S_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv1_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, TraceExprA_11);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv5_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv7_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_14;

                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_48_53_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_40);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word S_6)
{
  MR_Word TypeClassInfo_for_writer_15;
  MR_String EnvVarName_5 = (MR_String) (HeadVar__1_1);
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_9;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "env(")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_11_11);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, &TypeClassInfo_for_writer_15);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_15, S_6, EnvVarName_5);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word S_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv1_STATE_VARIABLE_U_4;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_1)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_4);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word S_6,
  MR_Word HeadWarning_7,
  MR_Word TailWarnings_8)
{
  while (MR_TRUE)
  {
    MR_String Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_15_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_14 = parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(HeadWarning_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Var_14)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15_15);
    if (!((TailWarnings_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailWarning_10 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 0))));
      MR_Word TailTailWarnings_11 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 1))));
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv3_STATE_VARIABLE_U_17_17;
      MR_Word next_value_of_HeadWarning_7;
      MR_Word next_value_of_TailWarnings_8;

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadWarning_7 = HeadTailWarning_10;
      next_value_of_TailWarnings_8 = TailTailWarnings_11;
      HeadWarning_7 = next_value_of_HeadWarning_7;
      TailWarnings_8 = next_value_of_TailWarnings_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10)
{
  if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));
    MR_String PredName_13 = ((MR_String) ((MR_hl_field(1, SymName_9, (MR_Integer) 1))));
    MR_Word SubTerm_14;
    MR_Word Var_21;
    MR_Word Var_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_20_20;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_33, (MR_Integer) 0, ModuleName_12, S_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_33, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_33)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_20_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (PredName_13));
    }
    Var_22 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_14, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, SubTerm_14, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_14, 2) = ((MR_Box) (Var_22));
    }
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_14, S_7);
  }
  else
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String PredName_31 = ((MR_String) ((MR_hl_field(0, SymName_9, (MR_Integer) 0))));
    MR_Word SubTerm_32;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredName_31));
    }
    Var_27 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_32, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubTerm_32, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_32, 2) = ((MR_Box) (Var_27));
    }
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_32, S_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10)
{
  if (((MR_tag((MR_Word) PODVar_10)) == (MR_Integer) 1))
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, PODVar_10, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_17_17;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "!.")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_17_17);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_19, S_7);
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, PODVar_10, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_12, S_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Word S_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10)
{
  MR_bool succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_23_23;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_21;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) " some [")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_23_23);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, Vars_9, S_7);
    succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv3_STATE_VARIABLE_U_27_27;

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_27_27);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, StateVars_10, S_7);
    }
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) "]")), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_21);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Word S_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_26_26;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), ((MR_Box) (S_1)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_26_26);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_19, S_1);
      if (!((SVars_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word SVar_42;
        MR_Word SVars_43;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv3_STATE_VARIABLE_U_29_29;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_26_48;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_1)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_29_29);
        SVar_42 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 0))));
        SVars_43 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 1))));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), ((MR_Box) (S_1)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_26_48);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_42, S_1);
        if (!((SVars_43 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv7_STATE_VARIABLE_U_29_51;
          MR_Word next_value_of_HeadVar__5_5;

          func_6(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_1)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_29_51);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = SVars_43;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv79_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_116_99_104_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv79_STATE_VARIABLE_U_14);
  *wrapper_arg_3 = ((MR_Box) (conv79_STATE_VARIABLE_U_14));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv66_STATE_VARIABLE_NeedComma_16;
  MR_Word conv65_STATE_VARIABLE_U_18;

  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_109_117_116_97_98_108_101_95_118_97_114_95_97_110_100_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv66_STATE_VARIABLE_NeedComma_16, ((MR_Word) (wrapper_arg_4)), &conv65_STATE_VARIABLE_U_18);
  *wrapper_arg_3 = ((MR_Box) (conv66_STATE_VARIABLE_NeedComma_16));
  *wrapper_arg_5 = ((MR_Box) (conv65_STATE_VARIABLE_U_18));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_111_109_105_115_101_95_101_113_118_95_115_111_108_117_116_105_111_110_115_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71,
  MR_Word tscc_proc_1_input_2_VarSet_13,
  MR_Unsigned tscc_proc_1_input_3_Indent_14,
  MR_Word tscc_proc_1_input_4_Vars_15,
  MR_Word tscc_proc_1_input_5_StateVars_16,
  MR_Word tscc_proc_1_input_6_DotSVars_17,
  MR_Word tscc_proc_1_input_7_ColonSVars_18,
  MR_Word tscc_proc_1_input_8_Goal_19,
  MR_String tscc_proc_1_input_9_Keyword_20,
  MR_Word tscc_proc_1_input_10_STATE_VARIABLE_U_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_U_42)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
  MR_Word tscc_proc_2_input_2_VarSet_8;
  MR_Unsigned tscc_proc_2_input_3_Indent_9;
  MR_Word tscc_proc_2_input_4_Goal_10;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
  MR_Word tscc_output_1_STATE_VARIABLE_U_42;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = string.builder.handle, U = string.builder.state]_0_1/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = string.builder.handle, U = string.builder.state]_0_1/11-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = string.builder.handle, U = string.builder.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
    MR_Word VarSet_13 = tscc_proc_1_input_2_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_1_input_3_Indent_14;
    MR_Word Vars_15 = tscc_proc_1_input_4_Vars_15;
    MR_Word StateVars_16 = tscc_proc_1_input_5_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_1_input_6_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_1_input_7_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_1_input_8_Goal_19;
    MR_String Keyword_20 = tscc_proc_1_input_9_Keyword_20;
    MR_Word STATE_VARIABLE_U_0_41 = tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
    MR_Word STATE_VARIABLE_U_42;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Word next_value_of_tscc_proc_2_input_2_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_2_input_3_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_2_input_4_Goal_10 = Goal_19;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_41;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_2_input_2_VarSet_8 = next_value_of_tscc_proc_2_input_2_VarSet_8;
      tscc_proc_2_input_3_Indent_9 = next_value_of_tscc_proc_2_input_3_Indent_9;
      tscc_proc_2_input_4_Goal_10 = next_value_of_tscc_proc_2_input_4_Goal_10;
      tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
      goto top_of_proc_2;
    }
    else
    {
      MR_Unsigned Indent1_40;
      MR_Word STATE_VARIABLE_U_44_44;
      MR_Word STATE_VARIABLE_U_46_46;
      MR_Word STATE_VARIABLE_U_48_48;
      MR_Word STATE_VARIABLE_U_50_50;
      MR_Word STATE_VARIABLE_U_53_53;
      MR_Word STATE_VARIABLE_U_55_55;
      MR_Word STATE_VARIABLE_U_58_58;
      MR_Word STATE_VARIABLE_U_60_60;
      MR_Word STATE_VARIABLE_U_63_63;
      MR_Word STATE_VARIABLE_U_65_65;
      MR_Word STATE_VARIABLE_U_67_67;
      MR_Word STATE_VARIABLE_U_68_68;
      MR_Word STATE_VARIABLE_U_69_69;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_44_44;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_46_46;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_65_65;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_U_42;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_41)), &conv1_STATE_VARIABLE_U_44_44);
      STATE_VARIABLE_U_44_44 = ((MR_Word) (conv1_STATE_VARIABLE_U_44_44));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_44_44)), &conv3_STATE_VARIABLE_U_46_46);
      STATE_VARIABLE_U_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_U_46_46));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv5_STATE_VARIABLE_U_50_50;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_48_48)), &conv5_STATE_VARIABLE_U_50_50);
        STATE_VARIABLE_U_50_50 = ((MR_Word) (conv5_STATE_VARIABLE_U_50_50));
      }
      else
        STATE_VARIABLE_U_50_50 = STATE_VARIABLE_U_48_48;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_53_53);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv7_STATE_VARIABLE_U_55_55;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_53_53)), &conv7_STATE_VARIABLE_U_55_55);
        STATE_VARIABLE_U_55_55 = ((MR_Word) (conv7_STATE_VARIABLE_U_55_55));
      }
      else
        STATE_VARIABLE_U_55_55 = STATE_VARIABLE_U_53_53;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_58_58);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv9_STATE_VARIABLE_U_60_60;

        func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_58_58)), &conv9_STATE_VARIABLE_U_60_60);
        STATE_VARIABLE_U_60_60 = ((MR_Word) (conv9_STATE_VARIABLE_U_60_60));
      }
      else
        STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_58_58;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_63_63);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_63_63)), &conv11_STATE_VARIABLE_U_65_65);
      STATE_VARIABLE_U_65_65 = ((MR_Word) (conv11_STATE_VARIABLE_U_65_65));
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, Indent1_40, Goal_19, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_69_69);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_12(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_69_69)), &conv13_STATE_VARIABLE_U_42);
      STATE_VARIABLE_U_42 = ((MR_Word) (conv13_STATE_VARIABLE_U_42));
    }
    tscc_output_1_STATE_VARIABLE_U_42 = STATE_VARIABLE_U_42;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
    MR_Word VarSet_8 = tscc_proc_2_input_2_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_2_input_3_Indent_9;
    MR_Word Goal_10 = tscc_proc_2_input_4_Goal_10;
    MR_Word STATE_VARIABLE_U_0_93 = tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
    MR_Word STATE_VARIABLE_U_94;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_U_359_359;
          MR_Word STATE_VARIABLE_U_361_361;
          MR_Word STATE_VARIABLE_U_363_363;
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv84_STATE_VARIABLE_U_359_359;
          MR_Box conv85_STATE_VARIABLE_U_363_363;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv84_STATE_VARIABLE_U_359_359);
          STATE_VARIABLE_U_359_359 = ((MR_Word) (conv84_STATE_VARIABLE_U_359_359));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, STATE_VARIABLE_U_359_359, &STATE_VARIABLE_U_361_361);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_361_361)), &conv85_STATE_VARIABLE_U_363_363);
          STATE_VARIABLE_U_363_363 = ((MR_Word) (conv85_STATE_VARIABLE_U_363_363));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, STATE_VARIABLE_U_363_363, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_U_357_357;
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv22_STATE_VARIABLE_U_357_357;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv22_STATE_VARIABLE_U_357_357);
          STATE_VARIABLE_U_357_357 = ((MR_Word) (conv22_STATE_VARIABLE_U_357_357));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Name_417, Terms_418, STATE_VARIABLE_U_357_357, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv71_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv71_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv71_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_U_311_311;
              MR_Word STATE_VARIABLE_U_312_312;
              MR_Word STATE_VARIABLE_U_314_314;
              MR_Word STATE_VARIABLE_U_315_315;
              MR_Word STATE_VARIABLE_U_316_316;
              MR_Word STATE_VARIABLE_U_318_318;
              MR_Word STATE_VARIABLE_U_319_319;
              MR_Word STATE_VARIABLE_U_320_320;
              MR_Word STATE_VARIABLE_U_321_321;
              MR_Word STATE_VARIABLE_U_323_323;
              MR_Word STATE_VARIABLE_U_324_324;
              MR_Word STATE_VARIABLE_U_325_325;
              MR_Word STATE_VARIABLE_U_326_326;
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv33_STATE_VARIABLE_U_311_311;
              MR_Box conv34_STATE_VARIABLE_U_318_318;
              MR_Box conv35_STATE_VARIABLE_U_323_323;
              MR_Box conv36_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv33_STATE_VARIABLE_U_311_311);
              STATE_VARIABLE_U_311_311 = ((MR_Word) (conv33_STATE_VARIABLE_U_311_311));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, Vars_406, StateVars_407, STATE_VARIABLE_U_311_311, &STATE_VARIABLE_U_312_312);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_312_312, &STATE_VARIABLE_U_314_314);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Cond_76, STATE_VARIABLE_U_314_314, &STATE_VARIABLE_U_315_315);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_315_315, &STATE_VARIABLE_U_316_316);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_316_316)), &conv34_STATE_VARIABLE_U_318_318);
              STATE_VARIABLE_U_318_318 = ((MR_Word) (conv34_STATE_VARIABLE_U_318_318));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_318_318, &STATE_VARIABLE_U_319_319);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Then_408, STATE_VARIABLE_U_319_319, &STATE_VARIABLE_U_320_320);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_320_320, &STATE_VARIABLE_U_321_321);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_321_321)), &conv35_STATE_VARIABLE_U_323_323);
              STATE_VARIABLE_U_323_323 = ((MR_Word) (conv35_STATE_VARIABLE_U_323_323));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_323_323, &STATE_VARIABLE_U_324_324);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Else_409, STATE_VARIABLE_U_324_324, &STATE_VARIABLE_U_325_325);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_325_325, &STATE_VARIABLE_U_326_326);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_326_326)), &conv36_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv36_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Word STATE_VARIABLE_U_345_345;
              MR_Word STATE_VARIABLE_U_347_347;
              MR_Word STATE_VARIABLE_U_348_348;
              MR_Word STATE_VARIABLE_U_349_349;
              MR_Word STATE_VARIABLE_U_350_350;
              MR_Unsigned Indent1_415;
              MR_Box conv26_STATE_VARIABLE_U_345_345;
              MR_Box conv27_STATE_VARIABLE_U_94;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv26_STATE_VARIABLE_U_345_345);
              STATE_VARIABLE_U_345_345 = ((MR_Word) (conv26_STATE_VARIABLE_U_345_345));
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, STATE_VARIABLE_U_345_345, &STATE_VARIABLE_U_347_347);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_415, Disjunct1_82, STATE_VARIABLE_U_347_347, &STATE_VARIABLE_U_348_348);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, NonFirstDisjuncts_85, STATE_VARIABLE_U_348_348, &STATE_VARIABLE_U_349_349);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_349_349, &STATE_VARIABLE_U_350_350);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_350_350)), &conv27_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv27_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_U_330_330;
              MR_Word STATE_VARIABLE_U_332_332;
              MR_Word STATE_VARIABLE_U_333_333;
              MR_Word STATE_VARIABLE_U_334_334;
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv40_STATE_VARIABLE_U_330_330;
              MR_Box conv41_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv40_STATE_VARIABLE_U_330_330);
              STATE_VARIABLE_U_330_330 = ((MR_Word) (conv40_STATE_VARIABLE_U_330_330));
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, STATE_VARIABLE_U_330_330, &STATE_VARIABLE_U_332_332);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_410, SubGoal_411, STATE_VARIABLE_U_332_332, &STATE_VARIABLE_U_333_333);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_333_333, &STATE_VARIABLE_U_334_334);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_334_334)), &conv41_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv41_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box conv32_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv32_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv32_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_U_339_339;
              MR_Word STATE_VARIABLE_U_340_340;
              MR_Word STATE_VARIABLE_U_341_341;
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv42_STATE_VARIABLE_U_339_339;
              MR_Box conv43_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv42_STATE_VARIABLE_U_339_339);
              STATE_VARIABLE_U_339_339 = ((MR_Word) (conv42_STATE_VARIABLE_U_339_339));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414, STATE_VARIABLE_U_339_339, &STATE_VARIABLE_U_340_340);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_340_340, &STATE_VARIABLE_U_341_341);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_341_341)), &conv43_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv43_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Word next_value_of_tscc_proc_2_input_2_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_2_input_3_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Goal_10 = SubGoal_23;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_93;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_2_input_2_VarSet_8 = next_value_of_tscc_proc_2_input_2_VarSet_8;
                tscc_proc_2_input_3_Indent_9 = next_value_of_tscc_proc_2_input_3_Indent_9;
                tscc_proc_2_input_4_Goal_10 = next_value_of_tscc_proc_2_input_4_Goal_10;
                tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
                goto top_of_proc_2;
              }
              else
              {
                MR_Word STATE_VARIABLE_U_127_127;
                MR_Word STATE_VARIABLE_U_131_131;
                MR_Word STATE_VARIABLE_U_133_133;
                MR_Word STATE_VARIABLE_U_137_137;
                MR_Word STATE_VARIABLE_U_139_139;
                MR_Word STATE_VARIABLE_U_140_140;
                MR_Word STATE_VARIABLE_U_141_141;
                MR_Unsigned Indent1_370;
                MR_Box conv49_STATE_VARIABLE_U_131_131;
                MR_Box conv50_STATE_VARIABLE_U_137_137;
                MR_Box conv51_STATE_VARIABLE_U_94;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Box conv47_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv47_STATE_VARIABLE_U_127_127);
                      STATE_VARIABLE_U_127_127 = ((MR_Word) (conv47_STATE_VARIABLE_U_127_127));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Box conv48_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv48_STATE_VARIABLE_U_127_127);
                      STATE_VARIABLE_U_127_127 = ((MR_Word) (conv48_STATE_VARIABLE_U_127_127));
                    }
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_127_127)), &conv49_STATE_VARIABLE_U_131_131);
                STATE_VARIABLE_U_131_131 = ((MR_Word) (conv49_STATE_VARIABLE_U_131_131));
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_133_133)), &conv50_STATE_VARIABLE_U_137_137);
                STATE_VARIABLE_U_137_137 = ((MR_Word) (conv50_STATE_VARIABLE_U_137_137));
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, STATE_VARIABLE_U_137_137, &STATE_VARIABLE_U_139_139);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_370, SubGoal_23, STATE_VARIABLE_U_139_139, &STATE_VARIABLE_U_140_140);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_140_140, &STATE_VARIABLE_U_141_141);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_141_141)), &conv51_STATE_VARIABLE_U_94);
                STATE_VARIABLE_U_94 = ((MR_Word) (conv51_STATE_VARIABLE_U_94));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Word STATE_VARIABLE_U_151_151;
              MR_Word STATE_VARIABLE_U_153_153;
              MR_Word STATE_VARIABLE_U_154_154;
              MR_Word STATE_VARIABLE_U_155_155;
              MR_Word STATE_VARIABLE_U_156_156;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv44_STATE_VARIABLE_U_151_151;
              MR_Box conv45_STATE_VARIABLE_U_153_153;
              MR_Box conv46_STATE_VARIABLE_U_94;

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv44_STATE_VARIABLE_U_151_151);
              STATE_VARIABLE_U_151_151 = ((MR_Word) (conv44_STATE_VARIABLE_U_151_151));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_151_151)), &conv45_STATE_VARIABLE_U_153_153);
              STATE_VARIABLE_U_153_153 = ((MR_Word) (conv45_STATE_VARIABLE_U_153_153));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, STATE_VARIABLE_U_153_153, &STATE_VARIABLE_U_154_154);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_385, SubGoal_386, STATE_VARIABLE_U_154_154, &STATE_VARIABLE_U_155_155);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_155_155, &STATE_VARIABLE_U_156_156);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_156_156)), &conv46_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv46_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_374;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_376;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_381;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "arbitrary";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[16 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Word STATE_VARIABLE_U_159_159;
              MR_Word STATE_VARIABLE_U_161_161;
              MR_Word STATE_VARIABLE_U_163_163;
              MR_Word STATE_VARIABLE_U_164_164;
              MR_Word STATE_VARIABLE_U_165_165;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv55_STATE_VARIABLE_U_159_159;
              MR_Box conv56_STATE_VARIABLE_U_161_161;
              MR_Box conv57_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv55_STATE_VARIABLE_U_159_159);
              STATE_VARIABLE_U_159_159 = ((MR_Word) (conv55_STATE_VARIABLE_U_159_159));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_159_159)), &conv56_STATE_VARIABLE_U_161_161);
              STATE_VARIABLE_U_161_161 = ((MR_Word) (conv56_STATE_VARIABLE_U_161_161));
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, STATE_VARIABLE_U_161_161, &STATE_VARIABLE_U_163_163);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_387, SubGoal_388, STATE_VARIABLE_U_163_163, &STATE_VARIABLE_U_164_164);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_164_164, &STATE_VARIABLE_U_165_165);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_165_165)), &conv57_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv57_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_U_169_169;
              MR_Word STATE_VARIABLE_U_171_171;
              MR_Word STATE_VARIABLE_U_173_173;
              MR_Word STATE_VARIABLE_U_175_175;
              MR_Word STATE_VARIABLE_U_176_176;
              MR_Word STATE_VARIABLE_U_177_177;
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv52_STATE_VARIABLE_U_169_169;
              MR_Box conv53_STATE_VARIABLE_U_173_173;
              MR_Box conv54_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv52_STATE_VARIABLE_U_169_169);
              STATE_VARIABLE_U_169_169 = ((MR_Word) (conv52_STATE_VARIABLE_U_169_169));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Var_39, STATE_VARIABLE_U_169_169, &STATE_VARIABLE_U_171_171);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_171_171)), &conv53_STATE_VARIABLE_U_173_173);
              STATE_VARIABLE_U_173_173 = ((MR_Word) (conv53_STATE_VARIABLE_U_173_173));
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, STATE_VARIABLE_U_173_173, &STATE_VARIABLE_U_175_175);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_389, SubGoal_390, STATE_VARIABLE_U_175_175, &STATE_VARIABLE_U_176_176);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_176_176, &STATE_VARIABLE_U_177_177);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_177_177)), &conv54_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv54_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Word STATE_VARIABLE_U_180_180;
              MR_Word STATE_VARIABLE_U_182_182;
              MR_Word STATE_VARIABLE_U_184_184;
              MR_Word STATE_VARIABLE_U_186_186;
              MR_Word STATE_VARIABLE_U_188_188;
              MR_Word STATE_VARIABLE_U_189_189;
              MR_Word STATE_VARIABLE_U_190_190;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv58_STATE_VARIABLE_U_180_180;
              MR_Box conv59_STATE_VARIABLE_U_182_182;
              MR_Box conv60_STATE_VARIABLE_U_186_186;
              MR_Box conv61_STATE_VARIABLE_U_94;

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[24 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv58_STATE_VARIABLE_U_180_180);
              STATE_VARIABLE_U_180_180 = ((MR_Word) (conv58_STATE_VARIABLE_U_180_180));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_180_180)), &conv59_STATE_VARIABLE_U_182_182);
              STATE_VARIABLE_U_182_182 = ((MR_Word) (conv59_STATE_VARIABLE_U_182_182));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Var_394, STATE_VARIABLE_U_182_182, &STATE_VARIABLE_U_184_184);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_184_184)), &conv60_STATE_VARIABLE_U_186_186);
              STATE_VARIABLE_U_186_186 = ((MR_Word) (conv60_STATE_VARIABLE_U_186_186));
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, STATE_VARIABLE_U_186_186, &STATE_VARIABLE_U_188_188);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_391, SubGoal_392, STATE_VARIABLE_U_188_188, &STATE_VARIABLE_U_189_189);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_189_189, &STATE_VARIABLE_U_190_190);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_190_190)), &conv61_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv61_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_U_194_194;
              MR_Word STATE_VARIABLE_U_195_195;
              MR_Word STATE_VARIABLE_U_197_197;
              MR_Word STATE_VARIABLE_U_199_199;
              MR_Word STATE_VARIABLE_U_200_200;
              MR_Word STATE_VARIABLE_U_201_201;
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box conv23_STATE_VARIABLE_U_194_194;
              MR_Box conv24_STATE_VARIABLE_U_197_197;
              MR_Box conv25_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv23_STATE_VARIABLE_U_194_194);
              STATE_VARIABLE_U_194_194 = ((MR_Word) (conv23_STATE_VARIABLE_U_194_194));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_420, HeadWarning_43, TailWarnings_44, STATE_VARIABLE_U_194_194, &STATE_VARIABLE_U_195_195);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_195_195)), &conv24_STATE_VARIABLE_U_197_197);
              STATE_VARIABLE_U_197_197 = ((MR_Word) (conv24_STATE_VARIABLE_U_197_197));
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, STATE_VARIABLE_U_197_197, &STATE_VARIABLE_U_199_199);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_395, SubGoal_396, STATE_VARIABLE_U_199_199, &STATE_VARIABLE_U_200_200);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_200_200, &STATE_VARIABLE_U_201_201);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_201_201)), &conv25_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv25_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_U_237_237;
              MR_Word STATE_VARIABLE_U_239_239;
              MR_Word STATE_VARIABLE_U_242_242;
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Word STATE_VARIABLE_U_246_246;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Word STATE_VARIABLE_U_254_254;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Word STATE_VARIABLE_U_257_257;
              MR_Word STATE_VARIABLE_U_260_260;
              MR_Unsigned Var_261;
              MR_Word STATE_VARIABLE_U_262_262;
              MR_Unsigned Var_264;
              MR_Word STATE_VARIABLE_U_265_265;
              MR_Word STATE_VARIABLE_U_267_267;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv62_STATE_VARIABLE_U_239_239;
              MR_Box conv68_Var_66;
              MR_Box conv67_STATE_VARIABLE_U_257_257;
              MR_Box conv69_STATE_VARIABLE_U_260_260;
              MR_Box conv70_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_237_237);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_237_237)), &conv62_STATE_VARIABLE_U_239_239);
              STATE_VARIABLE_U_239_239 = ((MR_Word) (conv62_STATE_VARIABLE_U_239_239));
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_242_242 = STATE_VARIABLE_U_239_239;
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              }
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, CompileTime_63, STATE_VARIABLE_U_239_239, &STATE_VARIABLE_U_242_242);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_246_246 = STATE_VARIABLE_U_242_242;
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              }
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_244_244;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, STATE_VARIABLE_NeedComma_243_243, STATE_VARIABLE_U_242_242, &STATE_VARIABLE_U_244_244);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, RunTime_64, STATE_VARIABLE_U_244_244, &STATE_VARIABLE_U_246_246);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_254_254 = STATE_VARIABLE_U_246_246;
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              }
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_248_248;
                MR_Word STATE_VARIABLE_U_250_250;
                MR_Word STATE_VARIABLE_U_252_252;
                MR_Box conv63_STATE_VARIABLE_U_250_250;
                MR_Box conv64_STATE_VARIABLE_U_254_254;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, STATE_VARIABLE_NeedComma_247_247, STATE_VARIABLE_U_246_246, &STATE_VARIABLE_U_248_248);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_248_248)), &conv63_STATE_VARIABLE_U_250_250);
                STATE_VARIABLE_U_250_250 = ((MR_Word) (conv63_STATE_VARIABLE_U_250_250));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, STATE_VARIABLE_U_250_250, &STATE_VARIABLE_U_252_252);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_252_252)), &conv64_STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_U_254_254 = ((MR_Word) (conv64_STATE_VARIABLE_U_254_254));
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[1]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = NULL;
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv68_Var_66, ((MR_Box) (STATE_VARIABLE_U_254_254)), &conv67_STATE_VARIABLE_U_257_257);
              STATE_VARIABLE_U_257_257 = ((MR_Word) (conv67_STATE_VARIABLE_U_257_257));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_257_257)), &conv69_STATE_VARIABLE_U_260_260);
              STATE_VARIABLE_U_260_260 = ((MR_Word) (conv69_STATE_VARIABLE_U_260_260));
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, STATE_VARIABLE_U_260_260, &STATE_VARIABLE_U_262_262);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Var_264, SubGoal_398, STATE_VARIABLE_U_262_262, &STATE_VARIABLE_U_265_265);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_265_265, &STATE_VARIABLE_U_267_267);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_267_267)), &conv70_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv70_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_U_205_205;
              MR_Word STATE_VARIABLE_U_209_209;
              MR_Word STATE_VARIABLE_U_217_217;
              MR_Word STATE_VARIABLE_U_221_221;
              MR_Word STATE_VARIABLE_U_229_229;
              MR_Word STATE_VARIABLE_U_231_231;
              MR_Word Var_232;
              MR_Word STATE_VARIABLE_U_233_233;
              MR_Word STATE_VARIABLE_U_234_234;
              MR_Unsigned Indent1_397;
              MR_Box conv14_STATE_VARIABLE_U_205_205;
              MR_Box conv17_STATE_VARIABLE_U_217_217;
              MR_Box conv20_STATE_VARIABLE_U_229_229;
              MR_Box conv21_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv14_STATE_VARIABLE_U_205_205);
              STATE_VARIABLE_U_205_205 = ((MR_Word) (conv14_STATE_VARIABLE_U_205_205));
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_207_207;
                MR_Box conv15_STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_205_205)), &conv15_STATE_VARIABLE_U_207_207);
                STATE_VARIABLE_U_207_207 = ((MR_Word) (conv15_STATE_VARIABLE_U_207_207));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, STATE_VARIABLE_U_207_207, &STATE_VARIABLE_U_209_209);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_U_211_211;
                MR_Word STATE_VARIABLE_U_213_213;
                MR_Box conv16_STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_211_211);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_211_211)), &conv16_STATE_VARIABLE_U_213_213);
                STATE_VARIABLE_U_213_213 = ((MR_Word) (conv16_STATE_VARIABLE_U_213_213));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, STATE_VARIABLE_U_213_213, &STATE_VARIABLE_U_209_209);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_209_209)), &conv17_STATE_VARIABLE_U_217_217);
              STATE_VARIABLE_U_217_217 = ((MR_Word) (conv17_STATE_VARIABLE_U_217_217));
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_219_219;
                MR_Box conv18_STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_217_217)), &conv18_STATE_VARIABLE_U_219_219);
                STATE_VARIABLE_U_219_219 = ((MR_Word) (conv18_STATE_VARIABLE_U_219_219));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, STATE_VARIABLE_U_219_219, &STATE_VARIABLE_U_221_221);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_U_223_223;
                MR_Word STATE_VARIABLE_U_225_225;
                MR_Box conv19_STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_223_223);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_223_223)), &conv19_STATE_VARIABLE_U_225_225);
                STATE_VARIABLE_U_225_225 = ((MR_Word) (conv19_STATE_VARIABLE_U_225_225));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, STATE_VARIABLE_U_225_225, &STATE_VARIABLE_U_221_221);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_221_221)), &conv20_STATE_VARIABLE_U_229_229);
              STATE_VARIABLE_U_229_229 = ((MR_Word) (conv20_STATE_VARIABLE_U_229_229));
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, STATE_VARIABLE_U_229_229, &STATE_VARIABLE_U_231_231);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_397, Var_232, STATE_VARIABLE_U_231_231, &STATE_VARIABLE_U_233_233);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_233_233, &STATE_VARIABLE_U_234_234);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_234_234)), &conv21_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv21_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_U_271_271;
              MR_Word STATE_VARIABLE_U_277_277;
              MR_Word STATE_VARIABLE_U_279_279;
              MR_Word STATE_VARIABLE_U_281_281;
              MR_Word STATE_VARIABLE_U_282_282;
              MR_Word STATE_VARIABLE_U_283_283;
              MR_Word STATE_VARIABLE_U_285_285;
              MR_Word STATE_VARIABLE_U_286_286;
              MR_Word STATE_VARIABLE_U_288_288;
              MR_Word STATE_VARIABLE_U_289_289;
              MR_Word STATE_VARIABLE_U_290_290;
              MR_Word STATE_VARIABLE_U_291_291;
              MR_Word STATE_VARIABLE_U_295_295;
              MR_Word Var_296;
              MR_Word STATE_VARIABLE_U_297_297;
              MR_Word STATE_VARIABLE_U_306_306;
              MR_Word STATE_VARIABLE_U_307_307;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv72_STATE_VARIABLE_U_271_271;
              MR_Box conv75_STATE_VARIABLE_U_279_279;
              MR_Box conv76_STATE_VARIABLE_U_285_285;
              MR_Box conv77_STATE_VARIABLE_U_288_288;
              MR_Box conv80_STATE_VARIABLE_U_297_297;
              MR_Box conv83_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv72_STATE_VARIABLE_U_271_271);
              STATE_VARIABLE_U_271_271 = ((MR_Word) (conv72_STATE_VARIABLE_U_271_271));
              if ((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_277_277 = STATE_VARIABLE_U_271_271;
              else
              {
                MR_Word STATE_VARIABLE_U_273_273;
                MR_Word STATE_VARIABLE_U_275_275;
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));
                MR_Box conv73_STATE_VARIABLE_U_273_273;
                MR_Box conv74_STATE_VARIABLE_U_277_277;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_271_271)), &conv73_STATE_VARIABLE_U_273_273);
                STATE_VARIABLE_U_273_273 = ((MR_Word) (conv73_STATE_VARIABLE_U_273_273));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, STATE_VARIABLE_U_273_273, &STATE_VARIABLE_U_275_275);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_275_275)), &conv74_STATE_VARIABLE_U_277_277);
                STATE_VARIABLE_U_277_277 = ((MR_Word) (conv74_STATE_VARIABLE_U_277_277));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_277_277)), &conv75_STATE_VARIABLE_U_279_279);
              STATE_VARIABLE_U_279_279 = ((MR_Word) (conv75_STATE_VARIABLE_U_279_279));
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_279_279, &STATE_VARIABLE_U_281_281);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, SubGoal_402, STATE_VARIABLE_U_281_281, &STATE_VARIABLE_U_282_282);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_282_282, &STATE_VARIABLE_U_283_283);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_283_283)), &conv76_STATE_VARIABLE_U_285_285);
              STATE_VARIABLE_U_285_285 = ((MR_Word) (conv76_STATE_VARIABLE_U_285_285));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_285_285, &STATE_VARIABLE_U_286_286);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_286_286)), &conv77_STATE_VARIABLE_U_288_288);
              STATE_VARIABLE_U_288_288 = ((MR_Word) (conv77_STATE_VARIABLE_U_288_288));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_288_288, &STATE_VARIABLE_U_289_289);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, Then_68, STATE_VARIABLE_U_289_289, &STATE_VARIABLE_U_290_290);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_290_290, &STATE_VARIABLE_U_291_291);
              if ((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_295_295 = STATE_VARIABLE_U_291_291;
              else
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_293_293;
                MR_Word STATE_VARIABLE_U_294_294;
                MR_Box conv78_STATE_VARIABLE_U_293_293;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_291_291)), &conv78_STATE_VARIABLE_U_293_293);
                STATE_VARIABLE_U_293_293 = ((MR_Word) (conv78_STATE_VARIABLE_U_293_293));
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_293_293, &STATE_VARIABLE_U_294_294);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, Else_72, STATE_VARIABLE_U_294_294, &STATE_VARIABLE_U_295_295);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[1]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = NULL;
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, ((MR_Box) (STATE_VARIABLE_U_295_295)), &conv80_STATE_VARIABLE_U_297_297);
              STATE_VARIABLE_U_297_297 = ((MR_Word) (conv80_STATE_VARIABLE_U_297_297));
              if ((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_306_306 = STATE_VARIABLE_U_297_297;
              else
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_300_300;
                MR_Word STATE_VARIABLE_U_302_302;
                MR_Word STATE_VARIABLE_U_304_304;
                MR_Word STATE_VARIABLE_U_305_305;
                MR_Box conv81_STATE_VARIABLE_U_300_300;
                MR_Box conv82_STATE_VARIABLE_U_304_304;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_297_297)), &conv81_STATE_VARIABLE_U_300_300);
                STATE_VARIABLE_U_300_300 = ((MR_Word) (conv81_STATE_VARIABLE_U_300_300));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, STATE_VARIABLE_U_300_300, &STATE_VARIABLE_U_302_302);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_302_302)), &conv82_STATE_VARIABLE_U_304_304);
                STATE_VARIABLE_U_304_304 = ((MR_Word) (conv82_STATE_VARIABLE_U_304_304));
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_304_304, &STATE_VARIABLE_U_305_305);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, CatchAnyGoal_74, STATE_VARIABLE_U_305_305, &STATE_VARIABLE_U_306_306);
              }
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_306_306, &STATE_VARIABLE_U_307_307);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_307_307)), &conv83_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv83_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Word STATE_VARIABLE_U_101_101;
              MR_Word STATE_VARIABLE_U_102_102;
              MR_Word STATE_VARIABLE_U_103_103;
              MR_Word STATE_VARIABLE_U_104_104;
              MR_Word STATE_VARIABLE_U_106_106;
              MR_Word STATE_VARIABLE_U_107_107;
              MR_Word STATE_VARIABLE_U_108_108;
              MR_Word STATE_VARIABLE_U_109_109;
              MR_Box conv37_STATE_VARIABLE_U_101_101;
              MR_Box conv38_STATE_VARIABLE_U_106_106;
              MR_Box conv39_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv37_STATE_VARIABLE_U_101_101);
              STATE_VARIABLE_U_101_101 = ((MR_Word) (conv37_STATE_VARIABLE_U_101_101));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_17, SubGoalA_15, STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_103_103);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_104_104)), &conv38_STATE_VARIABLE_U_106_106);
              STATE_VARIABLE_U_106_106 = ((MR_Word) (conv38_STATE_VARIABLE_U_106_106));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_107_107);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_17, SubGoalB_16, STATE_VARIABLE_U_107_107, &STATE_VARIABLE_U_108_108);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_109_109)), &conv39_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv39_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word STATE_VARIABLE_U_114_114;
              MR_Word STATE_VARIABLE_U_115_115;
              MR_Word STATE_VARIABLE_U_116_116;
              MR_Word STATE_VARIABLE_U_117_117;
              MR_Word STATE_VARIABLE_U_119_119;
              MR_Word STATE_VARIABLE_U_120_120;
              MR_Word STATE_VARIABLE_U_121_121;
              MR_Word STATE_VARIABLE_U_122_122;
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv28_STATE_VARIABLE_U_114_114;
              MR_Box conv29_STATE_VARIABLE_U_119_119;
              MR_Box conv30_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv28_STATE_VARIABLE_U_114_114);
              STATE_VARIABLE_U_114_114 = ((MR_Word) (conv28_STATE_VARIABLE_U_114_114));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_369, SubGoalA_367, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_117_117)), &conv29_STATE_VARIABLE_U_119_119);
              STATE_VARIABLE_U_119_119 = ((MR_Word) (conv29_STATE_VARIABLE_U_119_119));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, STATE_VARIABLE_U_119_119, &STATE_VARIABLE_U_120_120);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_369, SubGoalB_368, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_121_121);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_121_121, &STATE_VARIABLE_U_122_122);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_122_122)), &conv30_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv30_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_U_354_354;
              MR_Word Var_355;
              MR_Box conv31_STATE_VARIABLE_U_354_354;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv31_STATE_VARIABLE_U_354_354);
              STATE_VARIABLE_U_354_354 = ((MR_Word) (conv31_STATE_VARIABLE_U_354_354));
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Var_355, Terms_88, STATE_VARIABLE_U_354_354, &STATE_VARIABLE_U_94);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_42 = STATE_VARIABLE_U_94;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_42 = tscc_output_1_STATE_VARIABLE_U_42;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420,
  MR_Word tscc_proc_2_input_2_VarSet_8,
  MR_Unsigned tscc_proc_2_input_3_Indent_9,
  MR_Word tscc_proc_2_input_4_Goal_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_U_0_93,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_U_42)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
  MR_Word tscc_proc_1_input_2_VarSet_13;
  MR_Unsigned tscc_proc_1_input_3_Indent_14;
  MR_Word tscc_proc_1_input_4_Vars_15;
  MR_Word tscc_proc_1_input_5_StateVars_16;
  MR_Word tscc_proc_1_input_6_DotSVars_17;
  MR_Word tscc_proc_1_input_7_ColonSVars_18;
  MR_Word tscc_proc_1_input_8_Goal_19;
  MR_String tscc_proc_1_input_9_Keyword_20;
  MR_Word tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
  MR_Word tscc_output_1_STATE_VARIABLE_U_42;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = string.builder.handle, U = string.builder.state]_0_1/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_promise_eqv_solutions_goal__[S = string.builder.handle, U = string.builder.state]_0_1/11-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.TypeSpecOf__pred__mercury_format_goal__[S = string.builder.handle, U = string.builder.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
    MR_Word VarSet_13 = tscc_proc_1_input_2_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_1_input_3_Indent_14;
    MR_Word Vars_15 = tscc_proc_1_input_4_Vars_15;
    MR_Word StateVars_16 = tscc_proc_1_input_5_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_1_input_6_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_1_input_7_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_1_input_8_Goal_19;
    MR_String Keyword_20 = tscc_proc_1_input_9_Keyword_20;
    MR_Word STATE_VARIABLE_U_0_41 = tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
    MR_Word STATE_VARIABLE_U_42;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Word next_value_of_tscc_proc_2_input_2_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_2_input_3_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_2_input_4_Goal_10 = Goal_19;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_41;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_2_input_2_VarSet_8 = next_value_of_tscc_proc_2_input_2_VarSet_8;
      tscc_proc_2_input_3_Indent_9 = next_value_of_tscc_proc_2_input_3_Indent_9;
      tscc_proc_2_input_4_Goal_10 = next_value_of_tscc_proc_2_input_4_Goal_10;
      tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
      goto top_of_proc_2;
    }
    else
    {
      MR_Unsigned Indent1_40;
      MR_Word STATE_VARIABLE_U_44_44;
      MR_Word STATE_VARIABLE_U_46_46;
      MR_Word STATE_VARIABLE_U_48_48;
      MR_Word STATE_VARIABLE_U_50_50;
      MR_Word STATE_VARIABLE_U_53_53;
      MR_Word STATE_VARIABLE_U_55_55;
      MR_Word STATE_VARIABLE_U_58_58;
      MR_Word STATE_VARIABLE_U_60_60;
      MR_Word STATE_VARIABLE_U_63_63;
      MR_Word STATE_VARIABLE_U_65_65;
      MR_Word STATE_VARIABLE_U_67_67;
      MR_Word STATE_VARIABLE_U_68_68;
      MR_Word STATE_VARIABLE_U_69_69;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_44_44;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_46_46;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv11_STATE_VARIABLE_U_65_65;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_U_42;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_41)), &conv1_STATE_VARIABLE_U_44_44);
      STATE_VARIABLE_U_44_44 = ((MR_Word) (conv1_STATE_VARIABLE_U_44_44));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_44_44)), &conv3_STATE_VARIABLE_U_46_46);
      STATE_VARIABLE_U_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_U_46_46));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv5_STATE_VARIABLE_U_50_50;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_48_48)), &conv5_STATE_VARIABLE_U_50_50);
        STATE_VARIABLE_U_50_50 = ((MR_Word) (conv5_STATE_VARIABLE_U_50_50));
      }
      else
        STATE_VARIABLE_U_50_50 = STATE_VARIABLE_U_48_48;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_53_53);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv7_STATE_VARIABLE_U_55_55;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_53_53)), &conv7_STATE_VARIABLE_U_55_55);
        STATE_VARIABLE_U_55_55 = ((MR_Word) (conv7_STATE_VARIABLE_U_55_55));
      }
      else
        STATE_VARIABLE_U_55_55 = STATE_VARIABLE_U_53_53;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_58_58);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv9_STATE_VARIABLE_U_60_60;

        func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_58_58)), &conv9_STATE_VARIABLE_U_60_60);
        STATE_VARIABLE_U_60_60 = ((MR_Word) (conv9_STATE_VARIABLE_U_60_60));
      }
      else
        STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_58_58;
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_63_63);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_63_63)), &conv11_STATE_VARIABLE_U_65_65);
      STATE_VARIABLE_U_65_65 = ((MR_Word) (conv11_STATE_VARIABLE_U_65_65));
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_71, VarSet_13, Indent1_40, Goal_19, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_69_69);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_12(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_69_69)), &conv13_STATE_VARIABLE_U_42);
      STATE_VARIABLE_U_42 = ((MR_Word) (conv13_STATE_VARIABLE_U_42));
    }
    tscc_output_1_STATE_VARIABLE_U_42 = STATE_VARIABLE_U_42;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
    MR_Word VarSet_8 = tscc_proc_2_input_2_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_2_input_3_Indent_9;
    MR_Word Goal_10 = tscc_proc_2_input_4_Goal_10;
    MR_Word STATE_VARIABLE_U_0_93 = tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
    MR_Word STATE_VARIABLE_U_94;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_U_359_359;
          MR_Word STATE_VARIABLE_U_361_361;
          MR_Word STATE_VARIABLE_U_363_363;
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv84_STATE_VARIABLE_U_359_359;
          MR_Box conv85_STATE_VARIABLE_U_363_363;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv84_STATE_VARIABLE_U_359_359);
          STATE_VARIABLE_U_359_359 = ((MR_Word) (conv84_STATE_VARIABLE_U_359_359));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, STATE_VARIABLE_U_359_359, &STATE_VARIABLE_U_361_361);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_361_361)), &conv85_STATE_VARIABLE_U_363_363);
          STATE_VARIABLE_U_363_363 = ((MR_Word) (conv85_STATE_VARIABLE_U_363_363));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, STATE_VARIABLE_U_363_363, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_U_357_357;
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv22_STATE_VARIABLE_U_357_357;

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv22_STATE_VARIABLE_U_357_357);
          STATE_VARIABLE_U_357_357 = ((MR_Word) (conv22_STATE_VARIABLE_U_357_357));
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Name_417, Terms_418, STATE_VARIABLE_U_357_357, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv71_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv71_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv71_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_U_311_311;
              MR_Word STATE_VARIABLE_U_312_312;
              MR_Word STATE_VARIABLE_U_314_314;
              MR_Word STATE_VARIABLE_U_315_315;
              MR_Word STATE_VARIABLE_U_316_316;
              MR_Word STATE_VARIABLE_U_318_318;
              MR_Word STATE_VARIABLE_U_319_319;
              MR_Word STATE_VARIABLE_U_320_320;
              MR_Word STATE_VARIABLE_U_321_321;
              MR_Word STATE_VARIABLE_U_323_323;
              MR_Word STATE_VARIABLE_U_324_324;
              MR_Word STATE_VARIABLE_U_325_325;
              MR_Word STATE_VARIABLE_U_326_326;
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv33_STATE_VARIABLE_U_311_311;
              MR_Box conv34_STATE_VARIABLE_U_318_318;
              MR_Box conv35_STATE_VARIABLE_U_323_323;
              MR_Box conv36_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv33_STATE_VARIABLE_U_311_311);
              STATE_VARIABLE_U_311_311 = ((MR_Word) (conv33_STATE_VARIABLE_U_311_311));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, Vars_406, StateVars_407, STATE_VARIABLE_U_311_311, &STATE_VARIABLE_U_312_312);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_312_312, &STATE_VARIABLE_U_314_314);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Cond_76, STATE_VARIABLE_U_314_314, &STATE_VARIABLE_U_315_315);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_315_315, &STATE_VARIABLE_U_316_316);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_316_316)), &conv34_STATE_VARIABLE_U_318_318);
              STATE_VARIABLE_U_318_318 = ((MR_Word) (conv34_STATE_VARIABLE_U_318_318));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_318_318, &STATE_VARIABLE_U_319_319);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Then_408, STATE_VARIABLE_U_319_319, &STATE_VARIABLE_U_320_320);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_320_320, &STATE_VARIABLE_U_321_321);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_321_321)), &conv35_STATE_VARIABLE_U_323_323);
              STATE_VARIABLE_U_323_323 = ((MR_Word) (conv35_STATE_VARIABLE_U_323_323));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, STATE_VARIABLE_U_323_323, &STATE_VARIABLE_U_324_324);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_405, Else_409, STATE_VARIABLE_U_324_324, &STATE_VARIABLE_U_325_325);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_325_325, &STATE_VARIABLE_U_326_326);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_326_326)), &conv36_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv36_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Word STATE_VARIABLE_U_345_345;
              MR_Word STATE_VARIABLE_U_347_347;
              MR_Word STATE_VARIABLE_U_348_348;
              MR_Word STATE_VARIABLE_U_349_349;
              MR_Word STATE_VARIABLE_U_350_350;
              MR_Unsigned Indent1_415;
              MR_Box conv26_STATE_VARIABLE_U_345_345;
              MR_Box conv27_STATE_VARIABLE_U_94;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv26_STATE_VARIABLE_U_345_345);
              STATE_VARIABLE_U_345_345 = ((MR_Word) (conv26_STATE_VARIABLE_U_345_345));
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, STATE_VARIABLE_U_345_345, &STATE_VARIABLE_U_347_347);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_415, Disjunct1_82, STATE_VARIABLE_U_347_347, &STATE_VARIABLE_U_348_348);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, NonFirstDisjuncts_85, STATE_VARIABLE_U_348_348, &STATE_VARIABLE_U_349_349);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_349_349, &STATE_VARIABLE_U_350_350);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_350_350)), &conv27_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv27_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_U_330_330;
              MR_Word STATE_VARIABLE_U_332_332;
              MR_Word STATE_VARIABLE_U_333_333;
              MR_Word STATE_VARIABLE_U_334_334;
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv40_STATE_VARIABLE_U_330_330;
              MR_Box conv41_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv40_STATE_VARIABLE_U_330_330);
              STATE_VARIABLE_U_330_330 = ((MR_Word) (conv40_STATE_VARIABLE_U_330_330));
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, STATE_VARIABLE_U_330_330, &STATE_VARIABLE_U_332_332);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_410, SubGoal_411, STATE_VARIABLE_U_332_332, &STATE_VARIABLE_U_333_333);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_333_333, &STATE_VARIABLE_U_334_334);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_334_334)), &conv41_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv41_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Box conv32_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv32_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv32_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_U_339_339;
              MR_Word STATE_VARIABLE_U_340_340;
              MR_Word STATE_VARIABLE_U_341_341;
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv42_STATE_VARIABLE_U_339_339;
              MR_Box conv43_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv42_STATE_VARIABLE_U_339_339);
              STATE_VARIABLE_U_339_339 = ((MR_Word) (conv42_STATE_VARIABLE_U_339_339));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414, STATE_VARIABLE_U_339_339, &STATE_VARIABLE_U_340_340);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_340_340, &STATE_VARIABLE_U_341_341);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_341_341)), &conv43_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv43_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Word next_value_of_tscc_proc_2_input_2_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_2_input_3_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_2_input_4_Goal_10 = SubGoal_23;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_93;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_2_input_2_VarSet_8 = next_value_of_tscc_proc_2_input_2_VarSet_8;
                tscc_proc_2_input_3_Indent_9 = next_value_of_tscc_proc_2_input_3_Indent_9;
                tscc_proc_2_input_4_Goal_10 = next_value_of_tscc_proc_2_input_4_Goal_10;
                tscc_proc_2_input_5_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_93;
                goto top_of_proc_2;
              }
              else
              {
                MR_Word STATE_VARIABLE_U_127_127;
                MR_Word STATE_VARIABLE_U_131_131;
                MR_Word STATE_VARIABLE_U_133_133;
                MR_Word STATE_VARIABLE_U_137_137;
                MR_Word STATE_VARIABLE_U_139_139;
                MR_Word STATE_VARIABLE_U_140_140;
                MR_Word STATE_VARIABLE_U_141_141;
                MR_Unsigned Indent1_370;
                MR_Box conv49_STATE_VARIABLE_U_131_131;
                MR_Box conv50_STATE_VARIABLE_U_137_137;
                MR_Box conv51_STATE_VARIABLE_U_94;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Box conv47_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv47_STATE_VARIABLE_U_127_127);
                      STATE_VARIABLE_U_127_127 = ((MR_Word) (conv47_STATE_VARIABLE_U_127_127));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Box conv48_STATE_VARIABLE_U_127_127;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv48_STATE_VARIABLE_U_127_127);
                      STATE_VARIABLE_U_127_127 = ((MR_Word) (conv48_STATE_VARIABLE_U_127_127));
                    }
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_127_127)), &conv49_STATE_VARIABLE_U_131_131);
                STATE_VARIABLE_U_131_131 = ((MR_Word) (conv49_STATE_VARIABLE_U_131_131));
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_133_133)), &conv50_STATE_VARIABLE_U_137_137);
                STATE_VARIABLE_U_137_137 = ((MR_Word) (conv50_STATE_VARIABLE_U_137_137));
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, STATE_VARIABLE_U_137_137, &STATE_VARIABLE_U_139_139);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_370, SubGoal_23, STATE_VARIABLE_U_139_139, &STATE_VARIABLE_U_140_140);
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_140_140, &STATE_VARIABLE_U_141_141);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_141_141)), &conv51_STATE_VARIABLE_U_94);
                STATE_VARIABLE_U_94 = ((MR_Word) (conv51_STATE_VARIABLE_U_94));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Word STATE_VARIABLE_U_151_151;
              MR_Word STATE_VARIABLE_U_153_153;
              MR_Word STATE_VARIABLE_U_154_154;
              MR_Word STATE_VARIABLE_U_155_155;
              MR_Word STATE_VARIABLE_U_156_156;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv44_STATE_VARIABLE_U_151_151;
              MR_Box conv45_STATE_VARIABLE_U_153_153;
              MR_Box conv46_STATE_VARIABLE_U_94;

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv44_STATE_VARIABLE_U_151_151);
              STATE_VARIABLE_U_151_151 = ((MR_Word) (conv44_STATE_VARIABLE_U_151_151));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_151_151)), &conv45_STATE_VARIABLE_U_153_153);
              STATE_VARIABLE_U_153_153 = ((MR_Word) (conv45_STATE_VARIABLE_U_153_153));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, STATE_VARIABLE_U_153_153, &STATE_VARIABLE_U_154_154);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_385, SubGoal_386, STATE_VARIABLE_U_154_154, &STATE_VARIABLE_U_155_155);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_155_155, &STATE_VARIABLE_U_156_156);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_156_156)), &conv46_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv46_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_374;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_376;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Word next_value_of_tscc_proc_1_input_2_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_1_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_1_input_4_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_1_input_5_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_1_input_6_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_1_input_7_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_1_input_8_Goal_19 = SubGoal_381;
              MR_Word next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_1_input_2_VarSet_13 = next_value_of_tscc_proc_1_input_2_VarSet_13;
              tscc_proc_1_input_3_Indent_14 = next_value_of_tscc_proc_1_input_3_Indent_14;
              tscc_proc_1_input_4_Vars_15 = next_value_of_tscc_proc_1_input_4_Vars_15;
              tscc_proc_1_input_5_StateVars_16 = next_value_of_tscc_proc_1_input_5_StateVars_16;
              tscc_proc_1_input_6_DotSVars_17 = next_value_of_tscc_proc_1_input_6_DotSVars_17;
              tscc_proc_1_input_7_ColonSVars_18 = next_value_of_tscc_proc_1_input_7_ColonSVars_18;
              tscc_proc_1_input_8_Goal_19 = next_value_of_tscc_proc_1_input_8_Goal_19;
              tscc_proc_1_input_9_Keyword_20 = (MR_String) "arbitrary";
              tscc_proc_1_input_10_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_U_0_41;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[16 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Word STATE_VARIABLE_U_159_159;
              MR_Word STATE_VARIABLE_U_161_161;
              MR_Word STATE_VARIABLE_U_163_163;
              MR_Word STATE_VARIABLE_U_164_164;
              MR_Word STATE_VARIABLE_U_165_165;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv55_STATE_VARIABLE_U_159_159;
              MR_Box conv56_STATE_VARIABLE_U_161_161;
              MR_Box conv57_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv55_STATE_VARIABLE_U_159_159);
              STATE_VARIABLE_U_159_159 = ((MR_Word) (conv55_STATE_VARIABLE_U_159_159));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_159_159)), &conv56_STATE_VARIABLE_U_161_161);
              STATE_VARIABLE_U_161_161 = ((MR_Word) (conv56_STATE_VARIABLE_U_161_161));
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, STATE_VARIABLE_U_161_161, &STATE_VARIABLE_U_163_163);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_387, SubGoal_388, STATE_VARIABLE_U_163_163, &STATE_VARIABLE_U_164_164);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_164_164, &STATE_VARIABLE_U_165_165);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_165_165)), &conv57_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv57_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_U_169_169;
              MR_Word STATE_VARIABLE_U_171_171;
              MR_Word STATE_VARIABLE_U_173_173;
              MR_Word STATE_VARIABLE_U_175_175;
              MR_Word STATE_VARIABLE_U_176_176;
              MR_Word STATE_VARIABLE_U_177_177;
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box conv52_STATE_VARIABLE_U_169_169;
              MR_Box conv53_STATE_VARIABLE_U_173_173;
              MR_Box conv54_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv52_STATE_VARIABLE_U_169_169);
              STATE_VARIABLE_U_169_169 = ((MR_Word) (conv52_STATE_VARIABLE_U_169_169));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Var_39, STATE_VARIABLE_U_169_169, &STATE_VARIABLE_U_171_171);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_171_171)), &conv53_STATE_VARIABLE_U_173_173);
              STATE_VARIABLE_U_173_173 = ((MR_Word) (conv53_STATE_VARIABLE_U_173_173));
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, STATE_VARIABLE_U_173_173, &STATE_VARIABLE_U_175_175);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_389, SubGoal_390, STATE_VARIABLE_U_175_175, &STATE_VARIABLE_U_176_176);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_176_176, &STATE_VARIABLE_U_177_177);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_177_177)), &conv54_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv54_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Word STATE_VARIABLE_U_180_180;
              MR_Word STATE_VARIABLE_U_182_182;
              MR_Word STATE_VARIABLE_U_184_184;
              MR_Word STATE_VARIABLE_U_186_186;
              MR_Word STATE_VARIABLE_U_188_188;
              MR_Word STATE_VARIABLE_U_189_189;
              MR_Word STATE_VARIABLE_U_190_190;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv58_STATE_VARIABLE_U_180_180;
              MR_Box conv59_STATE_VARIABLE_U_182_182;
              MR_Box conv60_STATE_VARIABLE_U_186_186;
              MR_Box conv61_STATE_VARIABLE_U_94;

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[24 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv58_STATE_VARIABLE_U_180_180);
              STATE_VARIABLE_U_180_180 = ((MR_Word) (conv58_STATE_VARIABLE_U_180_180));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_180_180)), &conv59_STATE_VARIABLE_U_182_182);
              STATE_VARIABLE_U_182_182 = ((MR_Word) (conv59_STATE_VARIABLE_U_182_182));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Var_394, STATE_VARIABLE_U_182_182, &STATE_VARIABLE_U_184_184);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_184_184)), &conv60_STATE_VARIABLE_U_186_186);
              STATE_VARIABLE_U_186_186 = ((MR_Word) (conv60_STATE_VARIABLE_U_186_186));
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, STATE_VARIABLE_U_186_186, &STATE_VARIABLE_U_188_188);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_391, SubGoal_392, STATE_VARIABLE_U_188_188, &STATE_VARIABLE_U_189_189);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_189_189, &STATE_VARIABLE_U_190_190);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_190_190)), &conv61_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv61_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_U_194_194;
              MR_Word STATE_VARIABLE_U_195_195;
              MR_Word STATE_VARIABLE_U_197_197;
              MR_Word STATE_VARIABLE_U_199_199;
              MR_Word STATE_VARIABLE_U_200_200;
              MR_Word STATE_VARIABLE_U_201_201;
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box conv23_STATE_VARIABLE_U_194_194;
              MR_Box conv24_STATE_VARIABLE_U_197_197;
              MR_Box conv25_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv23_STATE_VARIABLE_U_194_194);
              STATE_VARIABLE_U_194_194 = ((MR_Word) (conv23_STATE_VARIABLE_U_194_194));
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_420, HeadWarning_43, TailWarnings_44, STATE_VARIABLE_U_194_194, &STATE_VARIABLE_U_195_195);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_195_195)), &conv24_STATE_VARIABLE_U_197_197);
              STATE_VARIABLE_U_197_197 = ((MR_Word) (conv24_STATE_VARIABLE_U_197_197));
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, STATE_VARIABLE_U_197_197, &STATE_VARIABLE_U_199_199);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_395, SubGoal_396, STATE_VARIABLE_U_199_199, &STATE_VARIABLE_U_200_200);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_200_200, &STATE_VARIABLE_U_201_201);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_201_201)), &conv25_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv25_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_U_237_237;
              MR_Word STATE_VARIABLE_U_239_239;
              MR_Word STATE_VARIABLE_U_242_242;
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Word STATE_VARIABLE_U_246_246;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Word STATE_VARIABLE_U_254_254;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Word STATE_VARIABLE_U_257_257;
              MR_Word STATE_VARIABLE_U_260_260;
              MR_Unsigned Var_261;
              MR_Word STATE_VARIABLE_U_262_262;
              MR_Unsigned Var_264;
              MR_Word STATE_VARIABLE_U_265_265;
              MR_Word STATE_VARIABLE_U_267_267;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv62_STATE_VARIABLE_U_239_239;
              MR_Box conv68_Var_66;
              MR_Box conv67_STATE_VARIABLE_U_257_257;
              MR_Box conv69_STATE_VARIABLE_U_260_260;
              MR_Box conv70_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_237_237);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_237_237)), &conv62_STATE_VARIABLE_U_239_239);
              STATE_VARIABLE_U_239_239 = ((MR_Word) (conv62_STATE_VARIABLE_U_239_239));
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_242_242 = STATE_VARIABLE_U_239_239;
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              }
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, CompileTime_63, STATE_VARIABLE_U_239_239, &STATE_VARIABLE_U_242_242);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_246_246 = STATE_VARIABLE_U_242_242;
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              }
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_244_244;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, STATE_VARIABLE_NeedComma_243_243, STATE_VARIABLE_U_242_242, &STATE_VARIABLE_U_244_244);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, RunTime_64, STATE_VARIABLE_U_244_244, &STATE_VARIABLE_U_246_246);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_254_254 = STATE_VARIABLE_U_246_246;
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              }
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_248_248;
                MR_Word STATE_VARIABLE_U_250_250;
                MR_Word STATE_VARIABLE_U_252_252;
                MR_Box conv63_STATE_VARIABLE_U_250_250;
                MR_Box conv64_STATE_VARIABLE_U_254_254;

                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, STATE_VARIABLE_NeedComma_247_247, STATE_VARIABLE_U_246_246, &STATE_VARIABLE_U_248_248);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_248_248)), &conv63_STATE_VARIABLE_U_250_250);
                STATE_VARIABLE_U_250_250 = ((MR_Word) (conv63_STATE_VARIABLE_U_250_250));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, STATE_VARIABLE_U_250_250, &STATE_VARIABLE_U_252_252);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_252_252)), &conv64_STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_U_254_254 = ((MR_Word) (conv64_STATE_VARIABLE_U_254_254));
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[1]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = NULL;
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv68_Var_66, ((MR_Box) (STATE_VARIABLE_U_254_254)), &conv67_STATE_VARIABLE_U_257_257);
              STATE_VARIABLE_U_257_257 = ((MR_Word) (conv67_STATE_VARIABLE_U_257_257));
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_257_257)), &conv69_STATE_VARIABLE_U_260_260);
              STATE_VARIABLE_U_260_260 = ((MR_Word) (conv69_STATE_VARIABLE_U_260_260));
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, STATE_VARIABLE_U_260_260, &STATE_VARIABLE_U_262_262);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Var_264, SubGoal_398, STATE_VARIABLE_U_262_262, &STATE_VARIABLE_U_265_265);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_265_265, &STATE_VARIABLE_U_267_267);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_267_267)), &conv70_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv70_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_U_205_205;
              MR_Word STATE_VARIABLE_U_209_209;
              MR_Word STATE_VARIABLE_U_217_217;
              MR_Word STATE_VARIABLE_U_221_221;
              MR_Word STATE_VARIABLE_U_229_229;
              MR_Word STATE_VARIABLE_U_231_231;
              MR_Word Var_232;
              MR_Word STATE_VARIABLE_U_233_233;
              MR_Word STATE_VARIABLE_U_234_234;
              MR_Unsigned Indent1_397;
              MR_Box conv14_STATE_VARIABLE_U_205_205;
              MR_Box conv17_STATE_VARIABLE_U_217_217;
              MR_Box conv20_STATE_VARIABLE_U_229_229;
              MR_Box conv21_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv14_STATE_VARIABLE_U_205_205);
              STATE_VARIABLE_U_205_205 = ((MR_Word) (conv14_STATE_VARIABLE_U_205_205));
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_207_207;
                MR_Box conv15_STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_205_205)), &conv15_STATE_VARIABLE_U_207_207);
                STATE_VARIABLE_U_207_207 = ((MR_Word) (conv15_STATE_VARIABLE_U_207_207));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, STATE_VARIABLE_U_207_207, &STATE_VARIABLE_U_209_209);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_U_211_211;
                MR_Word STATE_VARIABLE_U_213_213;
                MR_Box conv16_STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_211_211);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_211_211)), &conv16_STATE_VARIABLE_U_213_213);
                STATE_VARIABLE_U_213_213 = ((MR_Word) (conv16_STATE_VARIABLE_U_213_213));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, STATE_VARIABLE_U_213_213, &STATE_VARIABLE_U_209_209);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_209_209)), &conv17_STATE_VARIABLE_U_217_217);
              STATE_VARIABLE_U_217_217 = ((MR_Word) (conv17_STATE_VARIABLE_U_217_217));
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_219_219;
                MR_Box conv18_STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_217_217)), &conv18_STATE_VARIABLE_U_219_219);
                STATE_VARIABLE_U_219_219 = ((MR_Word) (conv18_STATE_VARIABLE_U_219_219));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, STATE_VARIABLE_U_219_219, &STATE_VARIABLE_U_221_221);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_U_223_223;
                MR_Word STATE_VARIABLE_U_225_225;
                MR_Box conv19_STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_223_223);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_223_223)), &conv19_STATE_VARIABLE_U_225_225);
                STATE_VARIABLE_U_225_225 = ((MR_Word) (conv19_STATE_VARIABLE_U_225_225));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, STATE_VARIABLE_U_225_225, &STATE_VARIABLE_U_221_221);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_221_221)), &conv20_STATE_VARIABLE_U_229_229);
              STATE_VARIABLE_U_229_229 = ((MR_Word) (conv20_STATE_VARIABLE_U_229_229));
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, STATE_VARIABLE_U_229_229, &STATE_VARIABLE_U_231_231);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_397, Var_232, STATE_VARIABLE_U_231_231, &STATE_VARIABLE_U_233_233);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_233_233, &STATE_VARIABLE_U_234_234);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_234_234)), &conv21_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv21_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_U_271_271;
              MR_Word STATE_VARIABLE_U_277_277;
              MR_Word STATE_VARIABLE_U_279_279;
              MR_Word STATE_VARIABLE_U_281_281;
              MR_Word STATE_VARIABLE_U_282_282;
              MR_Word STATE_VARIABLE_U_283_283;
              MR_Word STATE_VARIABLE_U_285_285;
              MR_Word STATE_VARIABLE_U_286_286;
              MR_Word STATE_VARIABLE_U_288_288;
              MR_Word STATE_VARIABLE_U_289_289;
              MR_Word STATE_VARIABLE_U_290_290;
              MR_Word STATE_VARIABLE_U_291_291;
              MR_Word STATE_VARIABLE_U_295_295;
              MR_Word Var_296;
              MR_Word STATE_VARIABLE_U_297_297;
              MR_Word STATE_VARIABLE_U_306_306;
              MR_Word STATE_VARIABLE_U_307_307;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv72_STATE_VARIABLE_U_271_271;
              MR_Box conv75_STATE_VARIABLE_U_279_279;
              MR_Box conv76_STATE_VARIABLE_U_285_285;
              MR_Box conv77_STATE_VARIABLE_U_288_288;
              MR_Box conv80_STATE_VARIABLE_U_297_297;
              MR_Box conv83_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv72_STATE_VARIABLE_U_271_271);
              STATE_VARIABLE_U_271_271 = ((MR_Word) (conv72_STATE_VARIABLE_U_271_271));
              if ((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_277_277 = STATE_VARIABLE_U_271_271;
              else
              {
                MR_Word STATE_VARIABLE_U_273_273;
                MR_Word STATE_VARIABLE_U_275_275;
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));
                MR_Box conv73_STATE_VARIABLE_U_273_273;
                MR_Box conv74_STATE_VARIABLE_U_277_277;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_271_271)), &conv73_STATE_VARIABLE_U_273_273);
                STATE_VARIABLE_U_273_273 = ((MR_Word) (conv73_STATE_VARIABLE_U_273_273));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, STATE_VARIABLE_U_273_273, &STATE_VARIABLE_U_275_275);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_275_275)), &conv74_STATE_VARIABLE_U_277_277);
                STATE_VARIABLE_U_277_277 = ((MR_Word) (conv74_STATE_VARIABLE_U_277_277));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_277_277)), &conv75_STATE_VARIABLE_U_279_279);
              STATE_VARIABLE_U_279_279 = ((MR_Word) (conv75_STATE_VARIABLE_U_279_279));
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_279_279, &STATE_VARIABLE_U_281_281);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, SubGoal_402, STATE_VARIABLE_U_281_281, &STATE_VARIABLE_U_282_282);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_282_282, &STATE_VARIABLE_U_283_283);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_283_283)), &conv76_STATE_VARIABLE_U_285_285);
              STATE_VARIABLE_U_285_285 = ((MR_Word) (conv76_STATE_VARIABLE_U_285_285));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_285_285, &STATE_VARIABLE_U_286_286);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_286_286)), &conv77_STATE_VARIABLE_U_288_288);
              STATE_VARIABLE_U_288_288 = ((MR_Word) (conv77_STATE_VARIABLE_U_288_288));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_288_288, &STATE_VARIABLE_U_289_289);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, Then_68, STATE_VARIABLE_U_289_289, &STATE_VARIABLE_U_290_290);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_290_290, &STATE_VARIABLE_U_291_291);
              if ((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_295_295 = STATE_VARIABLE_U_291_291;
              else
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_293_293;
                MR_Word STATE_VARIABLE_U_294_294;
                MR_Box conv78_STATE_VARIABLE_U_293_293;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_291_291)), &conv78_STATE_VARIABLE_U_293_293);
                STATE_VARIABLE_U_293_293 = ((MR_Word) (conv78_STATE_VARIABLE_U_293_293));
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_293_293, &STATE_VARIABLE_U_294_294);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, Else_72, STATE_VARIABLE_U_294_294, &STATE_VARIABLE_U_295_295);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[1]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = NULL;
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, ((MR_Box) (STATE_VARIABLE_U_295_295)), &conv80_STATE_VARIABLE_U_297_297);
              STATE_VARIABLE_U_297_297 = ((MR_Word) (conv80_STATE_VARIABLE_U_297_297));
              if ((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_306_306 = STATE_VARIABLE_U_297_297;
              else
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Word STATE_VARIABLE_U_300_300;
                MR_Word STATE_VARIABLE_U_302_302;
                MR_Word STATE_VARIABLE_U_304_304;
                MR_Word STATE_VARIABLE_U_305_305;
                MR_Box conv81_STATE_VARIABLE_U_300_300;
                MR_Box conv82_STATE_VARIABLE_U_304_304;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_297_297)), &conv81_STATE_VARIABLE_U_300_300);
                STATE_VARIABLE_U_300_300 = ((MR_Word) (conv81_STATE_VARIABLE_U_300_300));
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, STATE_VARIABLE_U_300_300, &STATE_VARIABLE_U_302_302);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_302_302)), &conv82_STATE_VARIABLE_U_304_304);
                STATE_VARIABLE_U_304_304 = ((MR_Word) (conv82_STATE_VARIABLE_U_304_304));
                parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, STATE_VARIABLE_U_304_304, &STATE_VARIABLE_U_305_305);
                parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_401, CatchAnyGoal_74, STATE_VARIABLE_U_305_305, &STATE_VARIABLE_U_306_306);
              }
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_306_306, &STATE_VARIABLE_U_307_307);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_307_307)), &conv83_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv83_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Word STATE_VARIABLE_U_101_101;
              MR_Word STATE_VARIABLE_U_102_102;
              MR_Word STATE_VARIABLE_U_103_103;
              MR_Word STATE_VARIABLE_U_104_104;
              MR_Word STATE_VARIABLE_U_106_106;
              MR_Word STATE_VARIABLE_U_107_107;
              MR_Word STATE_VARIABLE_U_108_108;
              MR_Word STATE_VARIABLE_U_109_109;
              MR_Box conv37_STATE_VARIABLE_U_101_101;
              MR_Box conv38_STATE_VARIABLE_U_106_106;
              MR_Box conv39_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv37_STATE_VARIABLE_U_101_101);
              STATE_VARIABLE_U_101_101 = ((MR_Word) (conv37_STATE_VARIABLE_U_101_101));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_17, SubGoalA_15, STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_103_103);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_104_104)), &conv38_STATE_VARIABLE_U_106_106);
              STATE_VARIABLE_U_106_106 = ((MR_Word) (conv38_STATE_VARIABLE_U_106_106));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_107_107);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_17, SubGoalB_16, STATE_VARIABLE_U_107_107, &STATE_VARIABLE_U_108_108);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_109_109)), &conv39_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv39_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word STATE_VARIABLE_U_114_114;
              MR_Word STATE_VARIABLE_U_115_115;
              MR_Word STATE_VARIABLE_U_116_116;
              MR_Word STATE_VARIABLE_U_117_117;
              MR_Word STATE_VARIABLE_U_119_119;
              MR_Word STATE_VARIABLE_U_120_120;
              MR_Word STATE_VARIABLE_U_121_121;
              MR_Word STATE_VARIABLE_U_122_122;
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box conv28_STATE_VARIABLE_U_114_114;
              MR_Box conv29_STATE_VARIABLE_U_119_119;
              MR_Box conv30_STATE_VARIABLE_U_94;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv28_STATE_VARIABLE_U_114_114);
              STATE_VARIABLE_U_114_114 = ((MR_Word) (conv28_STATE_VARIABLE_U_114_114));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_369, SubGoalA_367, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_117_117)), &conv29_STATE_VARIABLE_U_119_119);
              STATE_VARIABLE_U_119_119 = ((MR_Word) (conv29_STATE_VARIABLE_U_119_119));
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, STATE_VARIABLE_U_119_119, &STATE_VARIABLE_U_120_120);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Indent1_369, SubGoalB_368, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_121_121);
              parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, STATE_VARIABLE_U_121_121, &STATE_VARIABLE_U_122_122);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_122_122)), &conv30_STATE_VARIABLE_U_94);
              STATE_VARIABLE_U_94 = ((MR_Word) (conv30_STATE_VARIABLE_U_94));
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_U_354_354;
              MR_Word Var_355;
              MR_Box conv31_STATE_VARIABLE_U_354_354;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_93)), &conv31_STATE_VARIABLE_U_354_354);
              STATE_VARIABLE_U_354_354 = ((MR_Word) (conv31_STATE_VARIABLE_U_354_354));
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_420, VarSet_8, Var_355, Terms_88, STATE_VARIABLE_U_354_354, &STATE_VARIABLE_U_94);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_42 = STATE_VARIABLE_U_94;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_42 = tscc_output_1_STATE_VARIABLE_U_42;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_110_101_99_116_101_100_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_U_0_109,
  MR_Word * STATE_VARIABLE_U_110)
{
  switch (MR_tag((MR_Word) Goal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, VarSet_8, Indent_9, Goal_10, STATE_VARIABLE_U_0_109, STATE_VARIABLE_U_110);
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
        MR_Word STATE_VARIABLE_U_114_114;
        MR_Word STATE_VARIABLE_U_115_115;
        MR_Word STATE_VARIABLE_U_116_116;
        MR_Word STATE_VARIABLE_U_117_117;
        MR_Box conv0_STATE_VARIABLE_U_114_114;
        MR_Box conv1_STATE_VARIABLE_U_110;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_109)), &conv0_STATE_VARIABLE_U_114_114);
        STATE_VARIABLE_U_114_114 = ((MR_Word) (conv0_STATE_VARIABLE_U_114_114));
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, VarSet_8, Indent1_108, Goal_10, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_117_117)), &conv1_STATE_VARIABLE_U_110);
        *STATE_VARIABLE_U_110 = ((MR_Word) (conv1_STATE_VARIABLE_U_110));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, VarSet_8, Indent_9, Goal_10, STATE_VARIABLE_U_0_109, STATE_VARIABLE_U_110);
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
            MR_Word STATE_VARIABLE_U_114_114;
            MR_Word STATE_VARIABLE_U_115_115;
            MR_Word STATE_VARIABLE_U_116_116;
            MR_Word STATE_VARIABLE_U_117_117;
            MR_Box conv0_STATE_VARIABLE_U_114_114;
            MR_Box conv1_STATE_VARIABLE_U_110;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_109)), &conv0_STATE_VARIABLE_U_114_114);
            STATE_VARIABLE_U_114_114 = ((MR_Word) (conv0_STATE_VARIABLE_U_114_114));
            parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
            parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_119, VarSet_8, Indent1_108, Goal_10, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
            parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_117_117)), &conv1_STATE_VARIABLE_U_110);
            *STATE_VARIABLE_U_110 = ((MR_Word) (conv1_STATE_VARIABLE_U_110));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_111_114_101_108_115_101_95_103_111_97_108_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10,
  MR_Word STATE_VARIABLE_U_0_16,
  MR_Word * STATE_VARIABLE_U_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_17 = STATE_VARIABLE_U_0_16;
    else
    {
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 1))));

      if ((TailGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned Var_18 = (Indent_9 + (MR_Unsigned) 1U);

        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, VarSet_8, Var_18, HeadGoal_12, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
      }
      else
      {
        MR_Unsigned Var_21 = (Indent_9 + (MR_Unsigned) 1U);
        MR_Word STATE_VARIABLE_U_22_22;
        MR_Word STATE_VARIABLE_U_24_24;
        MR_Word STATE_VARIABLE_U_26_26;
        MR_Word STATE_VARIABLE_U_27_27;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_26_26;
        MR_Word next_value_of_Goals_10;
        MR_Word next_value_of_STATE_VARIABLE_U_0_16;

        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, VarSet_8, Var_21, HeadGoal_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_22_22);
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "orelse")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_24)), &conv1_STATE_VARIABLE_U_26_26);
        STATE_VARIABLE_U_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_U_26_26));
        parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
        // direct tailcall eliminated
        ;
        next_value_of_Goals_10 = TailGoals_13;
        next_value_of_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_27_27;
        Goals_10 = next_value_of_Goals_10;
        STATE_VARIABLE_U_0_16 = next_value_of_STATE_VARIABLE_U_0_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_100_105_115_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Disjunct_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Disjuncts_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Unsigned Indent1_19;
      MR_Word STATE_VARIABLE_U_22_22;
      MR_Word STATE_VARIABLE_U_24_24;
      MR_Word STATE_VARIABLE_U_26_26;
      MR_Word STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_U_24_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_U_0_5;

      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, HeadVar__3_3, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_22_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) ";")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_22)), &conv1_STATE_VARIABLE_U_24_24);
      STATE_VARIABLE_U_24_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_24_24));
      Indent1_19 = (HeadVar__3_3 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_28, Indent1_19, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
      parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_28, HeadVar__2_2, Indent1_19, Disjunct_16, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Disjuncts_17;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_27_27;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Word STATE_VARIABLE_U_0_16,
  MR_Word * STATE_VARIABLE_U_17)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_U_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_22, VarSet_9, Indent_10, GoalA_11, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_18_18);
    if ((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_17 = STATE_VARIABLE_U_18_18;
    else
    {
      MR_Word GoalB_14 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_U_20_20;
      MR_Word STATE_VARIABLE_U_21_21;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_20_20;
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;
      MR_Word next_value_of_STATE_VARIABLE_U_0_16;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv1_STATE_VARIABLE_U_20_20);
      STATE_VARIABLE_U_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_U_20_20));
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_22, Indent_10, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_14;
      next_value_of_GoalsB_12 = GoalsC_15;
      next_value_of_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_21_21;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      STATE_VARIABLE_U_0_16 = next_value_of_STATE_VARIABLE_U_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_95_99_111_110_106_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_Unsigned Indent1_14 = (Indent_10 + (MR_Unsigned) 1U);
    MR_Word STATE_VARIABLE_U_20_20;
    MR_Word STATE_VARIABLE_U_21_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_97_98_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_25, Indent1_14, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_20_20);
    parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_25, VarSet_9, Indent1_14, GoalA_11, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
    if ((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_21_21;
    else
    {
      MR_Word GoalB_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_16 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_U_22_22;
      MR_Word STATE_VARIABLE_U_24_24;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_STATE_VARIABLE_U_24_24;
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;
      MR_Word next_value_of_STATE_VARIABLE_U_0_17;

      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_110_101_119_108_105_110_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_25, Indent_10, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_25, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_25)), ((MR_Box) ((MR_String) "&\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_22)), &conv1_STATE_VARIABLE_U_24_24);
      STATE_VARIABLE_U_24_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_24_24));
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_15;
      next_value_of_GoalsB_12 = GoalsC_16;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_24_24;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word TraceExpr_8,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_99_111_109_112_105_108_101_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_43, Base_10, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_U_17_17;
          MR_Word STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv1_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_17_17);
          STATE_VARIABLE_U_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_17_17));
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv3_STATE_VARIABLE_U_14);
          *STATE_VARIABLE_U_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_14));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_U_31_31;
                MR_Word STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv5_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;
                MR_Word next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_31)), &conv5_STATE_VARIABLE_U_33_33);
                STATE_VARIABLE_U_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_U_33_33));
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_U_23_23;
                MR_Word STATE_VARIABLE_U_24_24;
                MR_Word STATE_VARIABLE_U_26_26;
                MR_Word STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv7_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_14;

                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv7_STATE_VARIABLE_U_23_23);
                STATE_VARIABLE_U_23_23 = ((MR_Word) (conv7_STATE_VARIABLE_U_23_23));
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_24)), &conv9_STATE_VARIABLE_U_26_26);
                STATE_VARIABLE_U_26_26 = ((MR_Word) (conv9_STATE_VARIABLE_U_26_26));
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_27)), &conv11_STATE_VARIABLE_U_14);
                *STATE_VARIABLE_U_14 = ((MR_Word) (conv11_STATE_VARIABLE_U_14));
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_99_111_109_112_105_108_101_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word CompileTime_5,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  MR_String CondStr_9;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_15;

  switch (MR_tag((MR_Word) CompileTime_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FlagName_8 = ((MR_String) ((MR_hl_field(0, CompileTime_5, (MR_Integer) 0))));
        MR_String Var_19;
        MR_String Var_37;

        Var_19 = mercury__term_io__quoted_string_1_f_0(FlagName_8);
        Var_37 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "flag(", Var_37);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_10 = ((MR_Unsigned) ((MR_hl_field(1, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_11;
        MR_String Var_34;

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_11, Grade_10);
        Var_34 = mercury__string__f_43_43_2_f_0(GradeName_11, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "grade(", Var_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_12 = ((MR_Unsigned) ((MR_hl_field(2, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String LevelStr_13;
        MR_String Var_31;

        switch (Level_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            LevelStr_13 = (MR_String) "deep";
            break;
          case (MR_Integer) 0:
            LevelStr_13 = (MR_String) "shallow";
            break;
        }
        Var_31 = mercury__string__f_43_43_2_f_0(LevelStr_13, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "tracelevel(", Var_31);
      }
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (CondStr_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv1_STATE_VARIABLE_U_15);
  *STATE_VARIABLE_U_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_15));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word TraceExpr_8,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_43, Base_10, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_U_17_17;
          MR_Word STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv1_STATE_VARIABLE_U_17_17;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_14;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_17_17);
          STATE_VARIABLE_U_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_17_17));
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv3_STATE_VARIABLE_U_14);
          *STATE_VARIABLE_U_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_14));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_U_31_31;
                MR_Word STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv5_STATE_VARIABLE_U_33_33;
                MR_Word next_value_of_TraceExpr_8;
                MR_Word next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_31)), &conv5_STATE_VARIABLE_U_33_33);
                STATE_VARIABLE_U_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_U_33_33));
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_U_23_23;
                MR_Word STATE_VARIABLE_U_24_24;
                MR_Word STATE_VARIABLE_U_26_26;
                MR_Word STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                MR_Box conv7_STATE_VARIABLE_U_23_23;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_26_26;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_14;

                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv7_STATE_VARIABLE_U_23_23);
                STATE_VARIABLE_U_23_23 = ((MR_Word) (conv7_STATE_VARIABLE_U_23_23));
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_24)), &conv9_STATE_VARIABLE_U_26_26);
                STATE_VARIABLE_U_26_26 = ((MR_Word) (conv9_STATE_VARIABLE_U_26_26));
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_49_55_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_27)), &conv11_STATE_VARIABLE_U_14);
                *STATE_VARIABLE_U_14 = ((MR_Word) (conv11_STATE_VARIABLE_U_14));
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  MR_Word TypeClassInfo_for_writer_15;
  MR_String EnvVarName_5 = (MR_String) (HeadVar__1_1);
  MR_Word STATE_VARIABLE_U_11_11;
  MR_Word STATE_VARIABLE_U_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_STATE_VARIABLE_U_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_9;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "env(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_11_11);
  STATE_VARIABLE_U_11_11 = ((MR_Word) (conv1_STATE_VARIABLE_U_11_11));
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, &TypeClassInfo_for_writer_15);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_15, EnvVarName_5, STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_12_12);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_12)), &conv3_STATE_VARIABLE_U_9);
  *STATE_VARIABLE_U_9 = ((MR_Word) (conv3_STATE_VARIABLE_U_9));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_105_102_95_110_101_101_100_101_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_3,
  MR_Word * STATE_VARIABLE_U_4)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_0_3;
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv1_STATE_VARIABLE_U_4;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_3)), &conv1_STATE_VARIABLE_U_4);
        *STATE_VARIABLE_U_4 = ((MR_Word) (conv1_STATE_VARIABLE_U_4));
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word HeadWarning_7,
  MR_Word TailWarnings_8,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  while (MR_TRUE)
  {
    MR_String Var_14;
    MR_Word STATE_VARIABLE_U_15_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_15_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_14 = parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(HeadWarning_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv1_STATE_VARIABLE_U_15_15);
    STATE_VARIABLE_U_15_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_15_15));
    if ((TailWarnings_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_13 = STATE_VARIABLE_U_15_15;
    else
    {
      MR_Word HeadTailWarning_10 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 0))));
      MR_Word TailTailWarnings_11 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_U_17_17;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv3_STATE_VARIABLE_U_17_17;
      MR_Word next_value_of_HeadWarning_7;
      MR_Word next_value_of_TailWarnings_8;
      MR_Word next_value_of_STATE_VARIABLE_U_0_12;

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_15)), &conv3_STATE_VARIABLE_U_17_17);
      STATE_VARIABLE_U_17_17 = ((MR_Word) (conv3_STATE_VARIABLE_U_17_17));
      // direct tailcall eliminated
      ;
      next_value_of_HeadWarning_7 = HeadTailWarning_10;
      next_value_of_TailWarnings_8 = TailTailWarnings_11;
      next_value_of_STATE_VARIABLE_U_0_12 = STATE_VARIABLE_U_17_17;
      HeadWarning_7 = next_value_of_HeadWarning_7;
      TailWarnings_8 = next_value_of_TailWarnings_8;
      STATE_VARIABLE_U_0_12 = next_value_of_STATE_VARIABLE_U_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_97_108_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_U_0_15,
  MR_Word * STATE_VARIABLE_U_16)
{
  if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));
    MR_String PredName_13 = ((MR_String) ((MR_hl_field(1, SymName_9, (MR_Integer) 1))));
    MR_Word SubTerm_14;
    MR_Word STATE_VARIABLE_U_18_18;
    MR_Word STATE_VARIABLE_U_20_20;
    MR_Word Var_21;
    MR_Word Var_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_20_20;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_33, (MR_Integer) 0, ModuleName_12, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_33, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_33)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_18)), &conv1_STATE_VARIABLE_U_20_20);
    STATE_VARIABLE_U_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_U_20_20));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (PredName_13));
    }
    Var_22 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_14, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, SubTerm_14, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_14, 2) = ((MR_Box) (Var_22));
    }
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_14, STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_16);
  }
  else
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String PredName_31 = ((MR_String) ((MR_hl_field(0, SymName_9, (MR_Integer) 0))));
    MR_Word SubTerm_32;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredName_31));
    }
    Var_27 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_32, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubTerm_32, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_32, 2) = ((MR_Box) (Var_27));
    }
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_32, STATE_VARIABLE_U_0_15, STATE_VARIABLE_U_16);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_111_114_95_100_111_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  if (((MR_tag((MR_Word) PODVar_10)) == (MR_Integer) 1))
  {
    MR_Word STATE_VARIABLE_U_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, PODVar_10, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_17_17;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "!.")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_17_17);
    STATE_VARIABLE_U_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_17_17));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_19, STATE_VARIABLE_U_17_17, STATE_VARIABLE_U_14);
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, PODVar_10, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_12, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_111_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10,
  MR_Word STATE_VARIABLE_U_0_20,
  MR_Word * STATE_VARIABLE_U_21)
{
  MR_bool succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_U_23_23;
    MR_Word STATE_VARIABLE_U_25_25;
    MR_Word STATE_VARIABLE_U_29_29;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_STATE_VARIABLE_U_23_23;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_21;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) " some [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_20)), &conv1_STATE_VARIABLE_U_23_23);
    STATE_VARIABLE_U_23_23 = ((MR_Word) (conv1_STATE_VARIABLE_U_23_23));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, Vars_9, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
    succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv3_STATE_VARIABLE_U_27_27;

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_25)), &conv3_STATE_VARIABLE_U_27_27);
      STATE_VARIABLE_U_27_27 = ((MR_Word) (conv3_STATE_VARIABLE_U_27_27));
      parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, StateVars_10, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    }
    else
      STATE_VARIABLE_U_29_29 = STATE_VARIABLE_U_25_25;
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) "]")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_29_29)), &conv5_STATE_VARIABLE_U_21);
    *STATE_VARIABLE_U_21 = ((MR_Word) (conv5_STATE_VARIABLE_U_21));
  }
  else
    *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_0_20;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_116_97_116_101_95_118_97_114_115_95_117_115_105_110_103_95_112_114_101_102_105_120_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_U_0_6,
  MR_Word * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    else
    {
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_U_26_26;
      MR_Word STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Box conv1_STATE_VARIABLE_U_26_26;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_6)), &conv1_STATE_VARIABLE_U_26_26);
      STATE_VARIABLE_U_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_U_26_26));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_19, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
      if ((SVars_20 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_27_27;
      else
      {
        MR_Word STATE_VARIABLE_U_29_29;
        MR_Word SVar_42;
        MR_Word SVars_43;
        MR_Word STATE_VARIABLE_U_26_48;
        MR_Word STATE_VARIABLE_U_27_49;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Box conv3_STATE_VARIABLE_U_29_29;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_26_48;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_27)), &conv3_STATE_VARIABLE_U_29_29);
        STATE_VARIABLE_U_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_U_29_29));
        SVar_42 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 0))));
        SVars_43 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 1))));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_29_29)), &conv5_STATE_VARIABLE_U_26_48);
        STATE_VARIABLE_U_26_48 = ((MR_Word) (conv5_STATE_VARIABLE_U_26_48));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_42, STATE_VARIABLE_U_26_48, &STATE_VARIABLE_U_27_49);
        if ((SVars_43 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_27_49;
        else
        {
          MR_Word STATE_VARIABLE_U_29_51;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Box conv7_STATE_VARIABLE_U_29_51;
          MR_Word next_value_of_HeadVar__5_5;
          MR_Word next_value_of_STATE_VARIABLE_U_0_6;

          func_6(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_49)), &conv7_STATE_VARIABLE_U_29_51);
          STATE_VARIABLE_U_29_51 = ((MR_Word) (conv7_STATE_VARIABLE_U_29_51));
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = SVars_43;
          next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_29_51;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_catch_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_U_16_16;
  MR_Box STATE_VARIABLE_U_18_18;
  MR_Box STATE_VARIABLE_U_20_20;
  MR_Unsigned Var_21;
  MR_Box STATE_VARIABLE_U_22_22;
  MR_Unsigned Var_24;
  MR_Box STATE_VARIABLE_U_25_25;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "catch ")), S_7, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_16_16);
  parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_8, (MR_Integer) 0, Pattern_10, S_7, STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " ->")), S_7, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
  Var_21 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_27, Var_21, S_7, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
  Var_24 = (Indent_9 + (MR_Unsigned) 1U);
  parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_8, Var_24, Goal_11, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_25_25);
  parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_27, Indent_9, S_7, STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_14);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_trace_mutable_var_and_comma_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Box S_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  MR_Box STATE_VARIABLE_U_19_19;
  MR_String MutableName_28;
  MR_Word StateVar_29;
  MR_String StateVarStr_30;
  MR_String StateStr_31;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  switch (STATE_VARIABLE_NeedComma_0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_U_19_19 = STATE_VARIABLE_U_0_17;
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) ", ")), S_9, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_19_19);
      }
      break;
  }
  *STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
  MutableName_28 = ((MR_String) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 0))));
  StateVar_29 = ((MR_Word) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 1))));
  StateVarStr_30 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, StateVar_29);
  Var_40 = mercury__string__f_43_43_2_f_0(StateVarStr_30, (MR_String) ")");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0(MutableName_28, Var_42);
  StateStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "state(", Var_43);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) (StateStr_31)), S_9, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_18);
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Box S_6,
  MR_Word PrintBase_7,
  MR_Word TraceExpr_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Base_10 = (MR_hl_field(0, TraceExpr_8, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, PrintBase_7, (MR_Integer) 1))));

          func_0(((MR_Box) (PrintBase_7)), Base_10, S_6, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_U_17_17;
          MR_Box STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_31_31;
                MR_Box STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word next_value_of_TraceExpr_8;
                MR_Box next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_3(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), S_6, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box STATE_VARIABLE_U_23_23;
                MR_Box STATE_VARIABLE_U_24_24;
                MR_Box STATE_VARIABLE_U_26_26;
                MR_Box STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_5(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), S_6, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0(TypeInfo_for_T_39, TypeClassInfo_for_pt_output_38, S_6, PrintBase_7, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_6(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_instance_method_clause_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word MethodName_6,
  MR_Word ItemClause_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 4))));
  MR_Word BodyGoal_17;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_29;

    Var_29 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_18;
        MR_Word ResultTerm_19;
        MR_Box STATE_VARIABLE_U_21_35;
        MR_Box STATE_VARIABLE_U_27_41;
        MR_Box STATE_VARIABLE_U_29_43;
        MR_Box conv0_ResultTerm_19;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_18, &conv0_ResultTerm_19);
        ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
        parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, S_8, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_21_35);
        if ((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_27_41 = STATE_VARIABLE_U_21_35;
        else
        {
          MR_Word HeadArg_32 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 0))));
          MR_Word TailArgs_33 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_23_37;
          MR_Box STATE_VARIABLE_U_25_39;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_21_35, &STATE_VARIABLE_U_23_37);
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_32, TailArgs_33, S_8, STATE_VARIABLE_U_23_37, &STATE_VARIABLE_U_25_39);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_25_39, &STATE_VARIABLE_U_27_41);
        }
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " = ")), S_8, STATE_VARIABLE_U_27_41, &STATE_VARIABLE_U_29_43);
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, S_8, STATE_VARIABLE_U_29_43, STATE_VARIABLE_U_21);
        else
        {
          MR_Box STATE_VARIABLE_U_34_47;
          MR_Box STATE_VARIABLE_U_36_49;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, ResultTerm_19, S_8, STATE_VARIABLE_U_29_43, &STATE_VARIABLE_U_34_47);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), S_8, STATE_VARIABLE_U_34_47, &STATE_VARIABLE_U_36_49);
          parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_36_49, STATE_VARIABLE_U_21);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box STATE_VARIABLE_U_19_57;
        MR_Box STATE_VARIABLE_U_25_63;

        parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_22, MethodName_6, S_8, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_19_57);
        if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_25_63 = STATE_VARIABLE_U_19_57;
        else
        {
          MR_Word HeadArg_54 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_21_59;
          MR_Box STATE_VARIABLE_U_23_61;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_5(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_19_57, &STATE_VARIABLE_U_21_59);
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_22, VarSet_13, (MR_Integer) 0, HeadArg_54, TailArgs_55, S_8, STATE_VARIABLE_U_21_59, &STATE_VARIABLE_U_23_61);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_23_61, &STATE_VARIABLE_U_25_63);
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_25_63;
        else
        {
          MR_Box STATE_VARIABLE_U_27_65;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));

          func_7(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) " :-\n\t")), S_8, STATE_VARIABLE_U_25_63, &STATE_VARIABLE_U_27_65);
          parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_27_65, STATE_VARIABLE_U_21);
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_item_clause_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_27,
  MR_Word Info_6,
  MR_Box S_7,
  MR_Word ItemClause_8,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredName0_11 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 1))));
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 5))));
  MR_Word BodyGoal_17;
  MR_Word PredName_18;
  MR_Box STATE_VARIABLE_U_23_23;
  MR_Box STATE_VARIABLE_U_24_24;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_34;

    Var_34 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_11, &PredName_18);
  parse_tree__parse_tree_out_info__maybe_format_line_number_5_p_0(TypeClassInfo_for_pt_output_27, Info_6, Context_15, S_7, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_23_23);
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_19;
        MR_Word ResultTerm_20;
        MR_Box STATE_VARIABLE_U_21_40;
        MR_Box STATE_VARIABLE_U_27_46;
        MR_Box STATE_VARIABLE_U_29_48;
        MR_Box conv0_ResultTerm_20;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_19, &conv0_ResultTerm_20);
        ResultTerm_20 = ((MR_Word) (conv0_ResultTerm_20));
        parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, S_7, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_21_40);
        if ((FuncArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_27_46 = STATE_VARIABLE_U_21_40;
        else
        {
          MR_Word HeadArg_37 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 0))));
          MR_Word TailArgs_38 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_23_42;
          MR_Box STATE_VARIABLE_U_25_44;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_7, STATE_VARIABLE_U_21_40, &STATE_VARIABLE_U_23_42);
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_37, TailArgs_38, S_7, STATE_VARIABLE_U_23_42, &STATE_VARIABLE_U_25_44);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_25_44, &STATE_VARIABLE_U_27_46);
        }
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " = ")), S_7, STATE_VARIABLE_U_27_46, &STATE_VARIABLE_U_29_48);
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_20, S_7, STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_24_24);
        else
        {
          MR_Box STATE_VARIABLE_U_34_52;
          MR_Box STATE_VARIABLE_U_36_54;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, ResultTerm_20, S_7, STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_34_52);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), S_7, STATE_VARIABLE_U_34_52, &STATE_VARIABLE_U_36_54);
          parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_36_54, &STATE_VARIABLE_U_24_24);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box STATE_VARIABLE_U_19_62;
        MR_Box STATE_VARIABLE_U_25_68;

        parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_27, PredName_18, S_7, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_19_62);
        if ((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_25_68 = STATE_VARIABLE_U_19_62;
        else
        {
          MR_Word HeadArg_59 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_60 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_21_64;
          MR_Box STATE_VARIABLE_U_23_66;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_5(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_7, STATE_VARIABLE_U_19_62, &STATE_VARIABLE_U_21_64);
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_27, VarSet_13, (MR_Integer) 0, HeadArg_59, TailArgs_60, S_7, STATE_VARIABLE_U_21_64, &STATE_VARIABLE_U_23_66);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_7, STATE_VARIABLE_U_23_66, &STATE_VARIABLE_U_25_68);
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          STATE_VARIABLE_U_24_24 = STATE_VARIABLE_U_25_68;
        else
        {
          MR_Box STATE_VARIABLE_U_27_70;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));

          func_7(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " :-\n\t")), S_7, STATE_VARIABLE_U_25_68, &STATE_VARIABLE_U_27_70);
          parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_27, S_7, VarSet_13, (MR_Unsigned) 1U, BodyGoal_17, STATE_VARIABLE_U_27_70, &STATE_VARIABLE_U_24_24);
        }
      }
      break;
  }
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ".\n")), S_7, STATE_VARIABLE_U_24_24, STATE_VARIABLE_U_22);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_format_catch_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_NeedComma_16;

  parse_tree__parse_tree_out_clause__mercury_format_trace_mutable_var_and_comma_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NeedComma_16, wrapper_arg_4, wrapper_arg_5);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NeedComma_16));
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420,
  MR_Box tscc_proc_1_input_2_S_7,
  MR_Word tscc_proc_1_input_3_VarSet_8,
  MR_Unsigned tscc_proc_1_input_4_Indent_9,
  MR_Word tscc_proc_1_input_5_Goal_10,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_93,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_94)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
  MR_Box tscc_proc_2_input_2_S_12;
  MR_Word tscc_proc_2_input_3_VarSet_13;
  MR_Unsigned tscc_proc_2_input_4_Indent_14;
  MR_Word tscc_proc_2_input_5_Vars_15;
  MR_Word tscc_proc_2_input_6_StateVars_16;
  MR_Word tscc_proc_2_input_7_DotSVars_17;
  MR_Word tscc_proc_2_input_8_ColonSVars_18;
  MR_Word tscc_proc_2_input_9_Goal_19;
  MR_String tscc_proc_2_input_10_Keyword_20;
  MR_Box tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
  MR_Box tscc_output_1_STATE_VARIABLE_U_94;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_clause.mercury_format_goal/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_format_goal/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_format_promise_eqv_solutions_goal/11-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
    MR_Box S_7 = tscc_proc_1_input_2_S_7;
    MR_Word VarSet_8 = tscc_proc_1_input_3_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_1_input_4_Indent_9;
    MR_Word Goal_10 = tscc_proc_1_input_5_Goal_10;
    MR_Box STATE_VARIABLE_U_0_93 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
    MR_Box STATE_VARIABLE_U_94;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_359_359;
          MR_Box STATE_VARIABLE_U_361_361;
          MR_Box STATE_VARIABLE_U_363_363;
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_359_359);
          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, S_7, STATE_VARIABLE_U_359_359, &STATE_VARIABLE_U_361_361);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", S_7, STATE_VARIABLE_U_361_361, &STATE_VARIABLE_U_363_363);
          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, S_7, STATE_VARIABLE_U_363_363, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_357_357;
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_357_357);
          parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Name_417, Terms_418, STATE_VARIABLE_U_357_357, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__mercury_format_conj_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box STATE_VARIABLE_U_311_311;
              MR_Box STATE_VARIABLE_U_312_312;
              MR_Box STATE_VARIABLE_U_314_314;
              MR_Box STATE_VARIABLE_U_315_315;
              MR_Box STATE_VARIABLE_U_316_316;
              MR_Box STATE_VARIABLE_U_318_318;
              MR_Box STATE_VARIABLE_U_319_319;
              MR_Box STATE_VARIABLE_U_320_320;
              MR_Box STATE_VARIABLE_U_321_321;
              MR_Box STATE_VARIABLE_U_323_323;
              MR_Box STATE_VARIABLE_U_324_324;
              MR_Box STATE_VARIABLE_U_325_325;
              MR_Box STATE_VARIABLE_U_326_326;
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_311_311);
              parse_tree__parse_tree_out_clause__mercury_format_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Vars_406, StateVars_407, STATE_VARIABLE_U_311_311, &STATE_VARIABLE_U_312_312);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_312_312, &STATE_VARIABLE_U_314_314);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Cond_76, STATE_VARIABLE_U_314_314, &STATE_VARIABLE_U_315_315);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_315_315, &STATE_VARIABLE_U_316_316);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", S_7, STATE_VARIABLE_U_316_316, &STATE_VARIABLE_U_318_318);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_318_318, &STATE_VARIABLE_U_319_319);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Then_408, STATE_VARIABLE_U_319_319, &STATE_VARIABLE_U_320_320);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_320_320, &STATE_VARIABLE_U_321_321);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", S_7, STATE_VARIABLE_U_321_321, &STATE_VARIABLE_U_323_323);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_323_323, &STATE_VARIABLE_U_324_324);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Else_409, STATE_VARIABLE_U_324_324, &STATE_VARIABLE_U_325_325);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_325_325, &STATE_VARIABLE_U_326_326);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_326_326, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Box STATE_VARIABLE_U_345_345;
              MR_Box STATE_VARIABLE_U_347_347;
              MR_Box STATE_VARIABLE_U_348_348;
              MR_Box STATE_VARIABLE_U_349_349;
              MR_Box STATE_VARIABLE_U_350_350;
              MR_Unsigned Indent1_415;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_345_345);
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, S_7, STATE_VARIABLE_U_345_345, &STATE_VARIABLE_U_347_347);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_415, Disjunct1_82, STATE_VARIABLE_U_347_347, &STATE_VARIABLE_U_348_348);
              parse_tree__parse_tree_out_clause__mercury_format_disj_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, NonFirstDisjuncts_85, STATE_VARIABLE_U_348_348, &STATE_VARIABLE_U_349_349);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_349_349, &STATE_VARIABLE_U_350_350);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_350_350, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box STATE_VARIABLE_U_330_330;
              MR_Box STATE_VARIABLE_U_332_332;
              MR_Box STATE_VARIABLE_U_333_333;
              MR_Box STATE_VARIABLE_U_334_334;
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_330_330);
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, S_7, STATE_VARIABLE_U_330_330, &STATE_VARIABLE_U_332_332);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_410, SubGoal_411, STATE_VARIABLE_U_332_332, &STATE_VARIABLE_U_333_333);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_333_333, &STATE_VARIABLE_U_334_334);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_334_334, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 4:
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
            break;
          case (MR_Integer) 5:
            {
              MR_Box STATE_VARIABLE_U_339_339;
              MR_Box STATE_VARIABLE_U_340_340;
              MR_Box STATE_VARIABLE_U_341_341;
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_339_339);
              parse_tree__parse_tree_out_clause__mercury_format_par_conj_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414, STATE_VARIABLE_U_339_339, &STATE_VARIABLE_U_340_340);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_340_340, &STATE_VARIABLE_U_341_341);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_341_341, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Box next_value_of_tscc_proc_1_input_2_S_7 = S_7;
                MR_Word next_value_of_tscc_proc_1_input_3_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_1_input_5_Goal_10 = SubGoal_23;
                MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_93;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_1_input_2_S_7 = next_value_of_tscc_proc_1_input_2_S_7;
                tscc_proc_1_input_3_VarSet_8 = next_value_of_tscc_proc_1_input_3_VarSet_8;
                tscc_proc_1_input_4_Indent_9 = next_value_of_tscc_proc_1_input_4_Indent_9;
                tscc_proc_1_input_5_Goal_10 = next_value_of_tscc_proc_1_input_5_Goal_10;
                tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
                goto top_of_proc_1;
              }
              else
              {
                MR_Box STATE_VARIABLE_U_127_127;
                MR_Box STATE_VARIABLE_U_131_131;
                MR_Box STATE_VARIABLE_U_133_133;
                MR_Box STATE_VARIABLE_U_137_137;
                MR_Box STATE_VARIABLE_U_139_139;
                MR_Box STATE_VARIABLE_U_140_140;
                MR_Box STATE_VARIABLE_U_141_141;
                MR_Unsigned Indent1_370;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_127_127);
                    break;
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_127_127);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", S_7, STATE_VARIABLE_U_127_127, &STATE_VARIABLE_U_131_131);
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_133_133, &STATE_VARIABLE_U_137_137);
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, S_7, STATE_VARIABLE_U_137_137, &STATE_VARIABLE_U_139_139);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_370, SubGoal_23, STATE_VARIABLE_U_139_139, &STATE_VARIABLE_U_140_140);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_140_140, &STATE_VARIABLE_U_141_141);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_141_141, &STATE_VARIABLE_U_94);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Box STATE_VARIABLE_U_151_151;
              MR_Box STATE_VARIABLE_U_153_153;
              MR_Box STATE_VARIABLE_U_154_154;
              MR_Box STATE_VARIABLE_U_155_155;
              MR_Box STATE_VARIABLE_U_156_156;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_151_151);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", S_7, STATE_VARIABLE_U_151_151, &STATE_VARIABLE_U_153_153);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, S_7, STATE_VARIABLE_U_153_153, &STATE_VARIABLE_U_154_154);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_385, SubGoal_386, STATE_VARIABLE_U_154_154, &STATE_VARIABLE_U_155_155);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_155_155, &STATE_VARIABLE_U_156_156);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_156_156, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_374;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_376;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_381;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "arbitrary";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[0 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Box STATE_VARIABLE_U_159_159;
              MR_Box STATE_VARIABLE_U_161_161;
              MR_Box STATE_VARIABLE_U_163_163;
              MR_Box STATE_VARIABLE_U_164_164;
              MR_Box STATE_VARIABLE_U_165_165;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_159_159);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", S_7, STATE_VARIABLE_U_159_159, &STATE_VARIABLE_U_161_161);
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, S_7, STATE_VARIABLE_U_161_161, &STATE_VARIABLE_U_163_163);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_387, SubGoal_388, STATE_VARIABLE_U_163_163, &STATE_VARIABLE_U_164_164);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_164_164, &STATE_VARIABLE_U_165_165);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_165_165, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box STATE_VARIABLE_U_169_169;
              MR_Box STATE_VARIABLE_U_171_171;
              MR_Box STATE_VARIABLE_U_173_173;
              MR_Box STATE_VARIABLE_U_175_175;
              MR_Box STATE_VARIABLE_U_176_176;
              MR_Box STATE_VARIABLE_U_177_177;
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_169_169);
              parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_39, STATE_VARIABLE_U_169_169, &STATE_VARIABLE_U_171_171);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_171_171, &STATE_VARIABLE_U_173_173);
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, S_7, STATE_VARIABLE_U_173_173, &STATE_VARIABLE_U_175_175);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_389, SubGoal_390, STATE_VARIABLE_U_175_175, &STATE_VARIABLE_U_176_176);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_176_176, &STATE_VARIABLE_U_177_177);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_177_177, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Box STATE_VARIABLE_U_180_180;
              MR_Box STATE_VARIABLE_U_182_182;
              MR_Box STATE_VARIABLE_U_184_184;
              MR_Box STATE_VARIABLE_U_186_186;
              MR_Box STATE_VARIABLE_U_188_188;
              MR_Box STATE_VARIABLE_U_189_189;
              MR_Box STATE_VARIABLE_U_190_190;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[8 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_180_180);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", S_7, STATE_VARIABLE_U_180_180, &STATE_VARIABLE_U_182_182);
              parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_394, STATE_VARIABLE_U_182_182, &STATE_VARIABLE_U_184_184);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_184_184, &STATE_VARIABLE_U_186_186);
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, S_7, STATE_VARIABLE_U_186_186, &STATE_VARIABLE_U_188_188);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_391, SubGoal_392, STATE_VARIABLE_U_188_188, &STATE_VARIABLE_U_189_189);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_189_189, &STATE_VARIABLE_U_190_190);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_190_190, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_194_194;
              MR_Box STATE_VARIABLE_U_195_195;
              MR_Box STATE_VARIABLE_U_197_197;
              MR_Box STATE_VARIABLE_U_199_199;
              MR_Box STATE_VARIABLE_U_200_200;
              MR_Box STATE_VARIABLE_U_201_201;
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_194_194);
              parse_tree__parse_tree_out_clause__mercury_format_goal_warnings_5_p_0(TypeClassInfo_for_pt_output_420, S_7, HeadWarning_43, TailWarnings_44, STATE_VARIABLE_U_194_194, &STATE_VARIABLE_U_195_195);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_195_195, &STATE_VARIABLE_U_197_197);
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, S_7, STATE_VARIABLE_U_197_197, &STATE_VARIABLE_U_199_199);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_395, SubGoal_396, STATE_VARIABLE_U_199_199, &STATE_VARIABLE_U_200_200);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_200_200, &STATE_VARIABLE_U_201_201);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_201_201, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Box STATE_VARIABLE_U_237_237;
              MR_Box STATE_VARIABLE_U_239_239;
              MR_Box STATE_VARIABLE_U_242_242;
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Box STATE_VARIABLE_U_246_246;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Box STATE_VARIABLE_U_254_254;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Box STATE_VARIABLE_U_257_257;
              MR_Box STATE_VARIABLE_U_260_260;
              MR_Unsigned Var_261;
              MR_Box STATE_VARIABLE_U_262_262;
              MR_Unsigned Var_264;
              MR_Box STATE_VARIABLE_U_265_265;
              MR_Box STATE_VARIABLE_U_267_267;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv1_Var_66;

              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_237_237);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", S_7, STATE_VARIABLE_U_237_237, &STATE_VARIABLE_U_239_239);
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_242_242 = STATE_VARIABLE_U_239_239;
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              }
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, CompileTime_63, STATE_VARIABLE_U_239_239, &STATE_VARIABLE_U_242_242);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_246_246 = STATE_VARIABLE_U_242_242;
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              }
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_244_244;

                parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_243_243, STATE_VARIABLE_U_242_242, &STATE_VARIABLE_U_244_244);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, RunTime_64, STATE_VARIABLE_U_244_244, &STATE_VARIABLE_U_246_246);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_254_254 = STATE_VARIABLE_U_246_246;
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              }
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_248_248;
                MR_Box STATE_VARIABLE_U_250_250;
                MR_Box STATE_VARIABLE_U_252_252;

                parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_247_247, STATE_VARIABLE_U_246_246, &STATE_VARIABLE_U_248_248);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", S_7, STATE_VARIABLE_U_248_248, &STATE_VARIABLE_U_250_250);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, S_7, STATE_VARIABLE_U_250_250, &STATE_VARIABLE_U_252_252);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_252_252, &STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = S_7;
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv1_Var_66, STATE_VARIABLE_U_254_254, &STATE_VARIABLE_U_257_257);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", S_7, STATE_VARIABLE_U_257_257, &STATE_VARIABLE_U_260_260);
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, S_7, STATE_VARIABLE_U_260_260, &STATE_VARIABLE_U_262_262);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_264, SubGoal_398, STATE_VARIABLE_U_262_262, &STATE_VARIABLE_U_265_265);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_265_265, &STATE_VARIABLE_U_267_267);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_267_267, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box STATE_VARIABLE_U_205_205;
              MR_Box STATE_VARIABLE_U_209_209;
              MR_Box STATE_VARIABLE_U_217_217;
              MR_Box STATE_VARIABLE_U_221_221;
              MR_Box STATE_VARIABLE_U_229_229;
              MR_Box STATE_VARIABLE_U_231_231;
              MR_Word Var_232;
              MR_Box STATE_VARIABLE_U_233_233;
              MR_Box STATE_VARIABLE_U_234_234;
              MR_Unsigned Indent1_397;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_205_205);
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", S_7, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_207_207);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, S_7, STATE_VARIABLE_U_207_207, &STATE_VARIABLE_U_209_209);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_U_211_211;
                MR_Box STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, S_7, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_211_211);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", S_7, STATE_VARIABLE_U_211_211, &STATE_VARIABLE_U_213_213);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, S_7, STATE_VARIABLE_U_213_213, &STATE_VARIABLE_U_209_209);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", S_7, STATE_VARIABLE_U_209_209, &STATE_VARIABLE_U_217_217);
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", S_7, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_219_219);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, S_7, STATE_VARIABLE_U_219_219, &STATE_VARIABLE_U_221_221);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_U_223_223;
                MR_Box STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, S_7, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_223_223);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", S_7, STATE_VARIABLE_U_223_223, &STATE_VARIABLE_U_225_225);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, S_7, STATE_VARIABLE_U_225_225, &STATE_VARIABLE_U_221_221);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", S_7, STATE_VARIABLE_U_221_221, &STATE_VARIABLE_U_229_229);
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, S_7, STATE_VARIABLE_U_229_229, &STATE_VARIABLE_U_231_231);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__mercury_format_orelse_goals_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_397, Var_232, STATE_VARIABLE_U_231_231, &STATE_VARIABLE_U_233_233);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_233_233, &STATE_VARIABLE_U_234_234);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_234_234, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Box STATE_VARIABLE_U_271_271;
              MR_Box STATE_VARIABLE_U_277_277;
              MR_Box STATE_VARIABLE_U_279_279;
              MR_Box STATE_VARIABLE_U_281_281;
              MR_Box STATE_VARIABLE_U_282_282;
              MR_Box STATE_VARIABLE_U_283_283;
              MR_Box STATE_VARIABLE_U_285_285;
              MR_Box STATE_VARIABLE_U_286_286;
              MR_Box STATE_VARIABLE_U_288_288;
              MR_Box STATE_VARIABLE_U_289_289;
              MR_Box STATE_VARIABLE_U_290_290;
              MR_Box STATE_VARIABLE_U_291_291;
              MR_Box STATE_VARIABLE_U_295_295;
              MR_Word Var_296;
              MR_Box STATE_VARIABLE_U_297_297;
              MR_Box STATE_VARIABLE_U_306_306;
              MR_Box STATE_VARIABLE_U_307_307;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_271_271);
              if ((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_277_277 = STATE_VARIABLE_U_271_271;
              else
              {
                MR_Box STATE_VARIABLE_U_273_273;
                MR_Box STATE_VARIABLE_U_275_275;
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", S_7, STATE_VARIABLE_U_271_271, &STATE_VARIABLE_U_273_273);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, S_7, STATE_VARIABLE_U_273_273, &STATE_VARIABLE_U_275_275);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_275_275, &STATE_VARIABLE_U_277_277);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_277_277, &STATE_VARIABLE_U_279_279);
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_279_279, &STATE_VARIABLE_U_281_281);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, SubGoal_402, STATE_VARIABLE_U_281_281, &STATE_VARIABLE_U_282_282);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_282_282, &STATE_VARIABLE_U_283_283);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_283_283, &STATE_VARIABLE_U_285_285);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_285_285, &STATE_VARIABLE_U_286_286);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", S_7, STATE_VARIABLE_U_286_286, &STATE_VARIABLE_U_288_288);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_288_288, &STATE_VARIABLE_U_289_289);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Then_68, STATE_VARIABLE_U_289_289, &STATE_VARIABLE_U_290_290);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_290_290, &STATE_VARIABLE_U_291_291);
              if ((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_295_295 = STATE_VARIABLE_U_291_291;
              else
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_293_293;
                MR_Box STATE_VARIABLE_U_294_294;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", S_7, STATE_VARIABLE_U_291_291, &STATE_VARIABLE_U_293_293);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_293_293, &STATE_VARIABLE_U_294_294);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Else_72, STATE_VARIABLE_U_294_294, &STATE_VARIABLE_U_295_295);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = S_7;
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, STATE_VARIABLE_U_295_295, &STATE_VARIABLE_U_297_297);
              if ((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_306_306 = STATE_VARIABLE_U_297_297;
              else
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_300_300;
                MR_Box STATE_VARIABLE_U_302_302;
                MR_Box STATE_VARIABLE_U_304_304;
                MR_Box STATE_VARIABLE_U_305_305;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", S_7, STATE_VARIABLE_U_297_297, &STATE_VARIABLE_U_300_300);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, S_7, STATE_VARIABLE_U_300_300, &STATE_VARIABLE_U_302_302);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", S_7, STATE_VARIABLE_U_302_302, &STATE_VARIABLE_U_304_304);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_304_304, &STATE_VARIABLE_U_305_305);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, CatchAnyGoal_74, STATE_VARIABLE_U_305_305, &STATE_VARIABLE_U_306_306);
              }
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_306_306, &STATE_VARIABLE_U_307_307);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_307_307, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box STATE_VARIABLE_U_101_101;
              MR_Box STATE_VARIABLE_U_102_102;
              MR_Box STATE_VARIABLE_U_103_103;
              MR_Box STATE_VARIABLE_U_104_104;
              MR_Box STATE_VARIABLE_U_106_106;
              MR_Box STATE_VARIABLE_U_107_107;
              MR_Box STATE_VARIABLE_U_108_108;
              MR_Box STATE_VARIABLE_U_109_109;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_101_101);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalA_15, STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_103_103);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", S_7, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_107_107);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalB_16, STATE_VARIABLE_U_107_107, &STATE_VARIABLE_U_108_108);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_109_109, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Box STATE_VARIABLE_U_114_114;
              MR_Box STATE_VARIABLE_U_115_115;
              MR_Box STATE_VARIABLE_U_116_116;
              MR_Box STATE_VARIABLE_U_117_117;
              MR_Box STATE_VARIABLE_U_119_119;
              MR_Box STATE_VARIABLE_U_120_120;
              MR_Box STATE_VARIABLE_U_121_121;
              MR_Box STATE_VARIABLE_U_122_122;
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalA_367, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", S_7, STATE_VARIABLE_U_117_117, &STATE_VARIABLE_U_119_119);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7, STATE_VARIABLE_U_119_119, &STATE_VARIABLE_U_120_120);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalB_368, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_121_121);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_121_121, &STATE_VARIABLE_U_122_122);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_122_122, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_354_354;
              MR_Word Var_355;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_354_354);
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_355, Terms_88, STATE_VARIABLE_U_354_354, &STATE_VARIABLE_U_94);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_94 = STATE_VARIABLE_U_94;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
    MR_Box S_12 = tscc_proc_2_input_2_S_12;
    MR_Word VarSet_13 = tscc_proc_2_input_3_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_2_input_4_Indent_14;
    MR_Word Vars_15 = tscc_proc_2_input_5_Vars_15;
    MR_Word StateVars_16 = tscc_proc_2_input_6_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_2_input_7_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_2_input_8_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_2_input_9_Goal_19;
    MR_String Keyword_20 = tscc_proc_2_input_10_Keyword_20;
    MR_Box STATE_VARIABLE_U_0_41 = tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
    MR_Box STATE_VARIABLE_U_42;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Box next_value_of_tscc_proc_1_input_2_S_7 = S_12;
      MR_Word next_value_of_tscc_proc_1_input_3_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_1_input_5_Goal_10 = Goal_19;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_41;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_1_input_2_S_7 = next_value_of_tscc_proc_1_input_2_S_7;
      tscc_proc_1_input_3_VarSet_8 = next_value_of_tscc_proc_1_input_3_VarSet_8;
      tscc_proc_1_input_4_Indent_9 = next_value_of_tscc_proc_1_input_4_Indent_9;
      tscc_proc_1_input_5_Goal_10 = next_value_of_tscc_proc_1_input_5_Goal_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
      goto top_of_proc_1;
    }
    else
    {
      MR_Unsigned Indent1_40;
      MR_Box STATE_VARIABLE_U_44_44;
      MR_Box STATE_VARIABLE_U_46_46;
      MR_Box STATE_VARIABLE_U_48_48;
      MR_Box STATE_VARIABLE_U_50_50;
      MR_Box STATE_VARIABLE_U_53_53;
      MR_Box STATE_VARIABLE_U_55_55;
      MR_Box STATE_VARIABLE_U_58_58;
      MR_Box STATE_VARIABLE_U_60_60;
      MR_Box STATE_VARIABLE_U_63_63;
      MR_Box STATE_VARIABLE_U_65_65;
      MR_Box STATE_VARIABLE_U_67_67;
      MR_Box STATE_VARIABLE_U_68_68;
      MR_Box STATE_VARIABLE_U_69_69;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), S_12, STATE_VARIABLE_U_0_41, &STATE_VARIABLE_U_44_44);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), S_12, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
      parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, S_12, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
      }
      else
        STATE_VARIABLE_U_50_50 = STATE_VARIABLE_U_48_48;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_53_53);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_5(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
      }
      else
        STATE_VARIABLE_U_55_55 = STATE_VARIABLE_U_53_53;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_58_58);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_60_60);
      }
      else
        STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_58_58;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_63_63);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_7(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), S_12, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_65_65);
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, S_12, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
      parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, Indent1_40, Goal_19, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, S_12, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_69_69);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_69_69, &STATE_VARIABLE_U_42);
    }
    tscc_output_1_STATE_VARIABLE_U_94 = STATE_VARIABLE_U_42;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_94 = tscc_output_1_STATE_VARIABLE_U_94;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_promise_eqv_solutions_goal_11_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71,
  MR_Box tscc_proc_2_input_2_S_12,
  MR_Word tscc_proc_2_input_3_VarSet_13,
  MR_Unsigned tscc_proc_2_input_4_Indent_14,
  MR_Word tscc_proc_2_input_5_Vars_15,
  MR_Word tscc_proc_2_input_6_StateVars_16,
  MR_Word tscc_proc_2_input_7_DotSVars_17,
  MR_Word tscc_proc_2_input_8_ColonSVars_18,
  MR_Word tscc_proc_2_input_9_Goal_19,
  MR_String tscc_proc_2_input_10_Keyword_20,
  MR_Box tscc_proc_2_input_11_STATE_VARIABLE_U_0_41,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_94)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
  MR_Box tscc_proc_1_input_2_S_7;
  MR_Word tscc_proc_1_input_3_VarSet_8;
  MR_Unsigned tscc_proc_1_input_4_Indent_9;
  MR_Word tscc_proc_1_input_5_Goal_10;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
  MR_Box tscc_output_1_STATE_VARIABLE_U_94;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_clause.mercury_format_promise_eqv_solutions_goal/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_format_goal/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_format_promise_eqv_solutions_goal/11-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_420 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
    MR_Box S_7 = tscc_proc_1_input_2_S_7;
    MR_Word VarSet_8 = tscc_proc_1_input_3_VarSet_8;
    MR_Unsigned Indent_9 = tscc_proc_1_input_4_Indent_9;
    MR_Word Goal_10 = tscc_proc_1_input_5_Goal_10;
    MR_Box STATE_VARIABLE_U_0_93 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
    MR_Box STATE_VARIABLE_U_94;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_91 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_92 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_359_359;
          MR_Box STATE_VARIABLE_U_361_361;
          MR_Box STATE_VARIABLE_U_363_363;
          MR_Word Purity_419 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_419, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_359_359);
          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, TermA_91, S_7, STATE_VARIABLE_U_359_359, &STATE_VARIABLE_U_361_361);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " = ", S_7, STATE_VARIABLE_U_361_361, &STATE_VARIABLE_U_363_363);
          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_92, S_7, STATE_VARIABLE_U_363_363, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_357_357;
          MR_Word Purity_416 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_417 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_418 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));

          parse_tree__parse_tree_output__add_purity_prefix_4_p_0(TypeClassInfo_for_pt_output_420, Purity_416, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_357_357);
          parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Name_417, Terms_418, STATE_VARIABLE_U_357_357, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_79 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_412 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__mercury_format_conj_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_412, SubGoalsB_79, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "true", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_76 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Box STATE_VARIABLE_U_311_311;
              MR_Box STATE_VARIABLE_U_312_312;
              MR_Box STATE_VARIABLE_U_314_314;
              MR_Box STATE_VARIABLE_U_315_315;
              MR_Box STATE_VARIABLE_U_316_316;
              MR_Box STATE_VARIABLE_U_318_318;
              MR_Box STATE_VARIABLE_U_319_319;
              MR_Box STATE_VARIABLE_U_320_320;
              MR_Box STATE_VARIABLE_U_321_321;
              MR_Box STATE_VARIABLE_U_323_323;
              MR_Box STATE_VARIABLE_U_324_324;
              MR_Box STATE_VARIABLE_U_325_325;
              MR_Box STATE_VARIABLE_U_326_326;
              MR_Unsigned Indent1_405;
              MR_Word Vars_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(if", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_311_311);
              parse_tree__parse_tree_out_clause__mercury_format_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Vars_406, StateVars_407, STATE_VARIABLE_U_311_311, &STATE_VARIABLE_U_312_312);
              Indent1_405 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_312_312, &STATE_VARIABLE_U_314_314);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Cond_76, STATE_VARIABLE_U_314_314, &STATE_VARIABLE_U_315_315);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_315_315, &STATE_VARIABLE_U_316_316);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", S_7, STATE_VARIABLE_U_316_316, &STATE_VARIABLE_U_318_318);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_318_318, &STATE_VARIABLE_U_319_319);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Then_408, STATE_VARIABLE_U_319_319, &STATE_VARIABLE_U_320_320);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_320_320, &STATE_VARIABLE_U_321_321);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", S_7, STATE_VARIABLE_U_321_321, &STATE_VARIABLE_U_323_323);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_405, S_7, STATE_VARIABLE_U_323_323, &STATE_VARIABLE_U_324_324);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_405, Else_409, STATE_VARIABLE_U_324_324, &STATE_VARIABLE_U_325_325);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_325_325, &STATE_VARIABLE_U_326_326);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_326_326, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_82 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_83 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_84 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_85;
              MR_Box STATE_VARIABLE_U_345_345;
              MR_Box STATE_VARIABLE_U_347_347;
              MR_Box STATE_VARIABLE_U_348_348;
              MR_Box STATE_VARIABLE_U_349_349;
              MR_Box STATE_VARIABLE_U_350_350;
              MR_Unsigned Indent1_415;

              {
                NonFirstDisjuncts_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_85, 0) = ((MR_Box) (Disjunct2_83));
                MR_hl_field(1, NonFirstDisjuncts_85, 1) = ((MR_Box) (Disjuncts_84));
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_345_345);
              Indent1_415 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_415, S_7, STATE_VARIABLE_U_345_345, &STATE_VARIABLE_U_347_347);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_415, Disjunct1_82, STATE_VARIABLE_U_347_347, &STATE_VARIABLE_U_348_348);
              parse_tree__parse_tree_out_clause__mercury_format_disj_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, NonFirstDisjuncts_85, STATE_VARIABLE_U_348_348, &STATE_VARIABLE_U_349_349);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_349_349, &STATE_VARIABLE_U_350_350);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_350_350, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box STATE_VARIABLE_U_330_330;
              MR_Box STATE_VARIABLE_U_332_332;
              MR_Box STATE_VARIABLE_U_333_333;
              MR_Box STATE_VARIABLE_U_334_334;
              MR_Unsigned Indent1_410;
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "\\+ (", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_330_330);
              Indent1_410 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_410, S_7, STATE_VARIABLE_U_330_330, &STATE_VARIABLE_U_332_332);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_410, SubGoal_411, STATE_VARIABLE_U_332_332, &STATE_VARIABLE_U_333_333);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_333_333, &STATE_VARIABLE_U_334_334);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_334_334, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 4:
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "fail", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_94);
            break;
          case (MR_Integer) 5:
            {
              MR_Box STATE_VARIABLE_U_339_339;
              MR_Box STATE_VARIABLE_U_340_340;
              MR_Box STATE_VARIABLE_U_341_341;
              MR_Word SubGoalA_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(\n", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_339_339);
              parse_tree__parse_tree_out_clause__mercury_format_par_conj_7_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent_9, SubGoalA_413, SubGoalsB_414, STATE_VARIABLE_U_339_339, &STATE_VARIABLE_U_340_340);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_340_340, &STATE_VARIABLE_U_341_341);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_341_341, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_420;
                MR_Box next_value_of_tscc_proc_1_input_2_S_7 = S_7;
                MR_Word next_value_of_tscc_proc_1_input_3_VarSet_8 = VarSet_8;
                MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_1_input_5_Goal_10 = SubGoal_23;
                MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_93;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
                tscc_proc_1_input_2_S_7 = next_value_of_tscc_proc_1_input_2_S_7;
                tscc_proc_1_input_3_VarSet_8 = next_value_of_tscc_proc_1_input_3_VarSet_8;
                tscc_proc_1_input_4_Indent_9 = next_value_of_tscc_proc_1_input_4_Indent_9;
                tscc_proc_1_input_5_Goal_10 = next_value_of_tscc_proc_1_input_5_Goal_10;
                tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
                goto top_of_proc_1;
              }
              else
              {
                MR_Box STATE_VARIABLE_U_127_127;
                MR_Box STATE_VARIABLE_U_131_131;
                MR_Box STATE_VARIABLE_U_133_133;
                MR_Box STATE_VARIABLE_U_137_137;
                MR_Box STATE_VARIABLE_U_139_139;
                MR_Box STATE_VARIABLE_U_140_140;
                MR_Box STATE_VARIABLE_U_141_141;
                MR_Unsigned Indent1_370;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "all", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_127_127);
                    break;
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "some", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_127_127);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "[", S_7, STATE_VARIABLE_U_127_127, &STATE_VARIABLE_U_131_131);
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, Vars_22, S_7, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
                    break;
                }
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_133_133, &STATE_VARIABLE_U_137_137);
                Indent1_370 = (Indent_9 + (MR_Unsigned) 1U);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_370, S_7, STATE_VARIABLE_U_137_137, &STATE_VARIABLE_U_139_139);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_370, SubGoal_23, STATE_VARIABLE_U_139_139, &STATE_VARIABLE_U_140_140);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_140_140, &STATE_VARIABLE_U_141_141);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_141_141, &STATE_VARIABLE_U_94);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String PurityStr_34;
              MR_Box STATE_VARIABLE_U_151_151;
              MR_Box STATE_VARIABLE_U_153_153;
              MR_Box STATE_VARIABLE_U_154_154;
              MR_Box STATE_VARIABLE_U_155_155;
              MR_Box STATE_VARIABLE_U_156_156;
              MR_Unsigned Indent1_385;
              MR_Word SubGoal_386 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_34 = (MR_String) "promise_impure";
                  break;
                case (MR_Integer) 0:
                  PurityStr_34 = (MR_String) "promise_pure";
                  break;
                case (MR_Integer) 1:
                  PurityStr_34 = (MR_String) "promise_semipure";
                  break;
              }
              Indent1_385 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, PurityStr_34, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_151_151);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", S_7, STATE_VARIABLE_U_151_151, &STATE_VARIABLE_U_153_153);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_385, S_7, STATE_VARIABLE_U_153_153, &STATE_VARIABLE_U_154_154);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_385, SubGoal_386, STATE_VARIABLE_U_154_154, &STATE_VARIABLE_U_155_155);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_155_155, &STATE_VARIABLE_U_156_156);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_156_156, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_373 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_374 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_373;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_374;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_375 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_376 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_377 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_378 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_379 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_375;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_377;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_378;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_379;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_376;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_380 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_381 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_382 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_383 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_384 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = TypeClassInfo_for_pt_output_420;
              MR_Box next_value_of_tscc_proc_2_input_2_S_12 = S_7;
              MR_Word next_value_of_tscc_proc_2_input_3_VarSet_13 = VarSet_8;
              MR_Unsigned next_value_of_tscc_proc_2_input_4_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_5_Vars_15 = Vars_380;
              MR_Word next_value_of_tscc_proc_2_input_6_StateVars_16 = StateVars_382;
              MR_Word next_value_of_tscc_proc_2_input_7_DotSVars_17 = DotSVars_383;
              MR_Word next_value_of_tscc_proc_2_input_8_ColonSVars_18 = ColonSVars_384;
              MR_Word next_value_of_tscc_proc_2_input_9_Goal_19 = SubGoal_381;
              MR_Box next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = STATE_VARIABLE_U_0_93;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
              tscc_proc_2_input_2_S_12 = next_value_of_tscc_proc_2_input_2_S_12;
              tscc_proc_2_input_3_VarSet_13 = next_value_of_tscc_proc_2_input_3_VarSet_13;
              tscc_proc_2_input_4_Indent_14 = next_value_of_tscc_proc_2_input_4_Indent_14;
              tscc_proc_2_input_5_Vars_15 = next_value_of_tscc_proc_2_input_5_Vars_15;
              tscc_proc_2_input_6_StateVars_16 = next_value_of_tscc_proc_2_input_6_StateVars_16;
              tscc_proc_2_input_7_DotSVars_17 = next_value_of_tscc_proc_2_input_7_DotSVars_17;
              tscc_proc_2_input_8_ColonSVars_18 = next_value_of_tscc_proc_2_input_8_ColonSVars_18;
              tscc_proc_2_input_9_Goal_19 = next_value_of_tscc_proc_2_input_9_Goal_19;
              tscc_proc_2_input_10_Keyword_20 = (MR_String) "arbitrary";
              tscc_proc_2_input_11_STATE_VARIABLE_U_0_41 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_36 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_String DetismStr_37 = ((&parse_tree__parse_tree_out_clause_vector_common_3[0 + Detism_36]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              MR_Box STATE_VARIABLE_U_159_159;
              MR_Box STATE_VARIABLE_U_161_161;
              MR_Box STATE_VARIABLE_U_163_163;
              MR_Box STATE_VARIABLE_U_164_164;
              MR_Box STATE_VARIABLE_U_165_165;
              MR_Unsigned Indent1_387;
              MR_Word SubGoal_388 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, DetismStr_37, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_159_159);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " (", S_7, STATE_VARIABLE_U_159_159, &STATE_VARIABLE_U_161_161);
              Indent1_387 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_387, S_7, STATE_VARIABLE_U_161_161, &STATE_VARIABLE_U_163_163);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_387, SubGoal_388, STATE_VARIABLE_U_163_163, &STATE_VARIABLE_U_164_164);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_164_164, &STATE_VARIABLE_U_165_165);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_165_165, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box STATE_VARIABLE_U_169_169;
              MR_Box STATE_VARIABLE_U_171_171;
              MR_Box STATE_VARIABLE_U_173_173;
              MR_Box STATE_VARIABLE_U_175_175;
              MR_Box STATE_VARIABLE_U_176_176;
              MR_Box STATE_VARIABLE_U_177_177;
              MR_Unsigned Indent1_389;
              MR_Word SubGoal_390 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "require_complete_switch [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_169_169);
              parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_39, STATE_VARIABLE_U_169_169, &STATE_VARIABLE_U_171_171);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_171_171, &STATE_VARIABLE_U_173_173);
              Indent1_389 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_389, S_7, STATE_VARIABLE_U_173_173, &STATE_VARIABLE_U_175_175);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_389, SubGoal_390, STATE_VARIABLE_U_175_175, &STATE_VARIABLE_U_176_176);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_176_176, &STATE_VARIABLE_U_177_177);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_177_177, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ReqStr_41;
              MR_Box STATE_VARIABLE_U_180_180;
              MR_Box STATE_VARIABLE_U_182_182;
              MR_Box STATE_VARIABLE_U_184_184;
              MR_Box STATE_VARIABLE_U_186_186;
              MR_Box STATE_VARIABLE_U_188_188;
              MR_Box STATE_VARIABLE_U_189_189;
              MR_Box STATE_VARIABLE_U_190_190;
              MR_Unsigned Indent1_391;
              MR_Word SubGoal_392 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_393 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_394 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              ReqStr_41 = ((&parse_tree__parse_tree_out_clause_vector_common_3[8 + Detism_393]))->parse_tree__parse_tree_out_clause__vector_common_type_3_0__vct_3_f_0;
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, ReqStr_41, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_180_180);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " [", S_7, STATE_VARIABLE_U_180_180, &STATE_VARIABLE_U_182_182);
              parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, (MR_Integer) 0, Var_394, STATE_VARIABLE_U_182_182, &STATE_VARIABLE_U_184_184);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_184_184, &STATE_VARIABLE_U_186_186);
              Indent1_391 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_391, S_7, STATE_VARIABLE_U_186_186, &STATE_VARIABLE_U_188_188);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_391, SubGoal_392, STATE_VARIABLE_U_188_188, &STATE_VARIABLE_U_189_189);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_189_189, &STATE_VARIABLE_U_190_190);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_190_190, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_43 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_194_194;
              MR_Box STATE_VARIABLE_U_195_195;
              MR_Box STATE_VARIABLE_U_197_197;
              MR_Box STATE_VARIABLE_U_199_199;
              MR_Box STATE_VARIABLE_U_200_200;
              MR_Box STATE_VARIABLE_U_201_201;
              MR_Unsigned Indent1_395;
              MR_Word SubGoal_396 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "disable_warnings [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_194_194);
              parse_tree__parse_tree_out_clause__mercury_format_goal_warnings_5_p_0(TypeClassInfo_for_pt_output_420, S_7, HeadWarning_43, TailWarnings_44, STATE_VARIABLE_U_194_194, &STATE_VARIABLE_U_195_195);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_195_195, &STATE_VARIABLE_U_197_197);
              Indent1_395 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_395, S_7, STATE_VARIABLE_U_197_197, &STATE_VARIABLE_U_199_199);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_395, SubGoal_396, STATE_VARIABLE_U_199_199, &STATE_VARIABLE_U_200_200);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_200_200, &STATE_VARIABLE_U_201_201);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_201_201, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_446_446;
              MR_Word MaybeCompileTime_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_59 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_60 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_61 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Box STATE_VARIABLE_U_237_237;
              MR_Box STATE_VARIABLE_U_239_239;
              MR_Box STATE_VARIABLE_U_242_242;
              MR_Word STATE_VARIABLE_NeedComma_243_243;
              MR_Box STATE_VARIABLE_U_246_246;
              MR_Word STATE_VARIABLE_NeedComma_247_247;
              MR_Box STATE_VARIABLE_U_254_254;
              MR_Word STATE_VARIABLE_NeedComma_255_255;
              MR_Word Var_256;
              MR_Box STATE_VARIABLE_U_257_257;
              MR_Box STATE_VARIABLE_U_260_260;
              MR_Unsigned Var_261;
              MR_Box STATE_VARIABLE_U_262_262;
              MR_Unsigned Var_264;
              MR_Box STATE_VARIABLE_U_265_265;
              MR_Box STATE_VARIABLE_U_267_267;
              MR_Word SubGoal_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv1_Var_66;

              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_237_237);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "trace [", S_7, STATE_VARIABLE_U_237_237, &STATE_VARIABLE_U_239_239);
              if ((MaybeCompileTime_58 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_242_242 = STATE_VARIABLE_U_239_239;
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 0;
              }
              else
              {
                MR_Word CompileTime_63 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_58, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, CompileTime_63, STATE_VARIABLE_U_239_239, &STATE_VARIABLE_U_242_242);
                STATE_VARIABLE_NeedComma_243_243 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_246_246 = STATE_VARIABLE_U_242_242;
                STATE_VARIABLE_NeedComma_247_247 = STATE_VARIABLE_NeedComma_243_243;
              }
              else
              {
                MR_Word RunTime_64 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_59, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_244_244;

                parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_243_243, STATE_VARIABLE_U_242_242, &STATE_VARIABLE_U_244_244);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(TypeClassInfo_for_pt_output_420, TypeClassInfo_for_pt_output_420, S_7, RunTime_64, STATE_VARIABLE_U_244_244, &STATE_VARIABLE_U_246_246);
                STATE_VARIABLE_NeedComma_247_247 = (MR_Integer) 1;
              }
              if ((MaybeIO_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_U_254_254 = STATE_VARIABLE_U_246_246;
                STATE_VARIABLE_NeedComma_255_255 = STATE_VARIABLE_NeedComma_247_247;
              }
              else
              {
                MR_Word IOStateVar_65 = ((MR_Word) ((MR_hl_field(1, MaybeIO_60, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_248_248;
                MR_Box STATE_VARIABLE_U_250_250;
                MR_Box STATE_VARIABLE_U_252_252;

                parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(TypeClassInfo_for_pt_output_420, S_7, STATE_VARIABLE_NeedComma_247_247, STATE_VARIABLE_U_246_246, &STATE_VARIABLE_U_248_248);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", S_7, STATE_VARIABLE_U_248_248, &STATE_VARIABLE_U_250_250);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_65, S_7, STATE_VARIABLE_U_250_250, &STATE_VARIABLE_U_252_252);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_252_252, &STATE_VARIABLE_U_254_254);
                STATE_VARIABLE_NeedComma_255_255 = (MR_Integer) 1;
              }
              {
                Var_256 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_256, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
                MR_hl_field(0, Var_256, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_1));
                MR_hl_field(0, Var_256, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_256, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_256, 4) = S_7;
                MR_hl_field(0, Var_256, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_256, 6) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_446_446);
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), TypeInfo_446_446, Var_256, MutableVars_61, ((MR_Box) (STATE_VARIABLE_NeedComma_255_255)), &conv1_Var_66, STATE_VARIABLE_U_254_254, &STATE_VARIABLE_U_257_257);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "]", S_7, STATE_VARIABLE_U_257_257, &STATE_VARIABLE_U_260_260);
              Var_261 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Var_261, S_7, STATE_VARIABLE_U_260_260, &STATE_VARIABLE_U_262_262);
              Var_264 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_264, SubGoal_398, STATE_VARIABLE_U_262_262, &STATE_VARIABLE_U_265_265);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_265_265, &STATE_VARIABLE_U_267_267);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_267_267, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box STATE_VARIABLE_U_205_205;
              MR_Box STATE_VARIABLE_U_209_209;
              MR_Box STATE_VARIABLE_U_217_217;
              MR_Box STATE_VARIABLE_U_221_221;
              MR_Box STATE_VARIABLE_U_229_229;
              MR_Box STATE_VARIABLE_U_231_231;
              MR_Word Var_232;
              MR_Box STATE_VARIABLE_U_233_233;
              MR_Box STATE_VARIABLE_U_234_234;
              MR_Unsigned Indent1_397;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "atomic [outer(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_205_205);
              if (((MR_tag((MR_Word) Outer_46)) == (MR_Integer) 0))
              {
                MR_Word OVar_51 = ((MR_Word) ((MR_hl_field(0, Outer_46, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_207_207;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", S_7, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_207_207);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OVar_51, S_7, STATE_VARIABLE_U_207_207, &STATE_VARIABLE_U_209_209);
              }
              else
              {
                MR_Word OuterDI_52 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 0))));
                MR_Word OuterUO_53 = ((MR_Word) ((MR_hl_field(1, Outer_46, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_U_211_211;
                MR_Box STATE_VARIABLE_U_213_213;

                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterDI_52, S_7, STATE_VARIABLE_U_205_205, &STATE_VARIABLE_U_211_211);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", S_7, STATE_VARIABLE_U_211_211, &STATE_VARIABLE_U_213_213);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, OuterUO_53, S_7, STATE_VARIABLE_U_213_213, &STATE_VARIABLE_U_209_209);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "), inner(", S_7, STATE_VARIABLE_U_209_209, &STATE_VARIABLE_U_217_217);
              if (((MR_tag((MR_Word) Inner_47)) == (MR_Integer) 0))
              {
                MR_Word IVar_54 = ((MR_Word) ((MR_hl_field(0, Inner_47, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_219_219;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "!", S_7, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_219_219);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IVar_54, S_7, STATE_VARIABLE_U_219_219, &STATE_VARIABLE_U_221_221);
              }
              else
              {
                MR_Word InnerDI_55 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 0))));
                MR_Word InnerUO_56 = ((MR_Word) ((MR_hl_field(1, Inner_47, (MR_Integer) 1))));
                MR_Box STATE_VARIABLE_U_223_223;
                MR_Box STATE_VARIABLE_U_225_225;

                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerDI_55, S_7, STATE_VARIABLE_U_217_217, &STATE_VARIABLE_U_223_223);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ", ", S_7, STATE_VARIABLE_U_223_223, &STATE_VARIABLE_U_225_225);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, InnerUO_56, S_7, STATE_VARIABLE_U_225_225, &STATE_VARIABLE_U_221_221);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")] (", S_7, STATE_VARIABLE_U_221_221, &STATE_VARIABLE_U_229_229);
              Indent1_397 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_397, S_7, STATE_VARIABLE_U_229_229, &STATE_VARIABLE_U_231_231);
              {
                Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_232, 0) = ((MR_Box) (MainGoal_49));
                MR_hl_field(1, Var_232, 1) = ((MR_Box) (OrElseGoals_50));
              }
              parse_tree__parse_tree_out_clause__mercury_format_orelse_goals_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_397, Var_232, STATE_VARIABLE_U_231_231, &STATE_VARIABLE_U_233_233);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_233_233, &STATE_VARIABLE_U_234_234);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_234_234, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word TypeInfo_453_453;
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_69 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_70 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_71 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Box STATE_VARIABLE_U_271_271;
              MR_Box STATE_VARIABLE_U_277_277;
              MR_Box STATE_VARIABLE_U_279_279;
              MR_Box STATE_VARIABLE_U_281_281;
              MR_Box STATE_VARIABLE_U_282_282;
              MR_Box STATE_VARIABLE_U_283_283;
              MR_Box STATE_VARIABLE_U_285_285;
              MR_Box STATE_VARIABLE_U_286_286;
              MR_Box STATE_VARIABLE_U_288_288;
              MR_Box STATE_VARIABLE_U_289_289;
              MR_Box STATE_VARIABLE_U_290_290;
              MR_Box STATE_VARIABLE_U_291_291;
              MR_Box STATE_VARIABLE_U_295_295;
              MR_Word Var_296;
              MR_Box STATE_VARIABLE_U_297_297;
              MR_Box STATE_VARIABLE_U_306_306;
              MR_Box STATE_VARIABLE_U_307_307;
              MR_Unsigned Indent1_401;
              MR_Word SubGoal_402 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(try [", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_271_271);
              if ((MaybeIO_403 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_277_277 = STATE_VARIABLE_U_271_271;
              else
              {
                MR_Box STATE_VARIABLE_U_273_273;
                MR_Box STATE_VARIABLE_U_275_275;
                MR_Word IOStateVar_399 = ((MR_Word) ((MR_hl_field(1, MaybeIO_403, (MR_Integer) 0))));

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "io(!", S_7, STATE_VARIABLE_U_271_271, &STATE_VARIABLE_U_273_273);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, IOStateVar_399, S_7, STATE_VARIABLE_U_273_273, &STATE_VARIABLE_U_275_275);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_275_275, &STATE_VARIABLE_U_277_277);
              }
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "] (", S_7, STATE_VARIABLE_U_277_277, &STATE_VARIABLE_U_279_279);
              Indent1_401 = (Indent_9 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_279_279, &STATE_VARIABLE_U_281_281);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, SubGoal_402, STATE_VARIABLE_U_281_281, &STATE_VARIABLE_U_282_282);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_282_282, &STATE_VARIABLE_U_283_283);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_283_283, &STATE_VARIABLE_U_285_285);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_285_285, &STATE_VARIABLE_U_286_286);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "then", S_7, STATE_VARIABLE_U_286_286, &STATE_VARIABLE_U_288_288);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_288_288, &STATE_VARIABLE_U_289_289);
              parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Then_68, STATE_VARIABLE_U_289_289, &STATE_VARIABLE_U_290_290);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_290_290, &STATE_VARIABLE_U_291_291);
              if ((MaybeElse_69 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_295_295 = STATE_VARIABLE_U_291_291;
              else
              {
                MR_Word Else_72 = ((MR_Word) ((MR_hl_field(1, MaybeElse_69, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_293_293;
                MR_Box STATE_VARIABLE_U_294_294;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "else", S_7, STATE_VARIABLE_U_291_291, &STATE_VARIABLE_U_293_293);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_293_293, &STATE_VARIABLE_U_294_294);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, Else_72, STATE_VARIABLE_U_294_294, &STATE_VARIABLE_U_295_295);
              }
              {
                Var_296 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_296, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(0, Var_296, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0_2));
                MR_hl_field(0, Var_296, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_296, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_420));
                MR_hl_field(0, Var_296, 4) = S_7;
                MR_hl_field(0, Var_296, 5) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_296, 6) = ((MR_Box) (Indent_9));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_420, (MR_Integer) 3, &TypeInfo_453_453);
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), TypeInfo_453_453, Var_296, Catches_70, STATE_VARIABLE_U_295_295, &STATE_VARIABLE_U_297_297);
              if ((MaybeCatchAny_71 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_U_306_306 = STATE_VARIABLE_U_297_297;
              else
              {
                MR_Word CatchAnyVar_73;
                MR_Word CatchAnyGoal_74;
                MR_Word Var_298 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_71, (MR_Integer) 0))));
                MR_Box STATE_VARIABLE_U_300_300;
                MR_Box STATE_VARIABLE_U_302_302;
                MR_Box STATE_VARIABLE_U_304_304;
                MR_Box STATE_VARIABLE_U_305_305;

                CatchAnyVar_73 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 0))));
                CatchAnyGoal_74 = ((MR_Word) ((MR_hl_field(0, Var_298, (MR_Integer) 1))));
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "catch_any ", S_7, STATE_VARIABLE_U_297_297, &STATE_VARIABLE_U_300_300);
                parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_420, VarSet_8, (MR_Integer) 0, CatchAnyVar_73, S_7, STATE_VARIABLE_U_300_300, &STATE_VARIABLE_U_302_302);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) " ->", S_7, STATE_VARIABLE_U_302_302, &STATE_VARIABLE_U_304_304);
                parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_401, S_7, STATE_VARIABLE_U_304_304, &STATE_VARIABLE_U_305_305);
                parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_401, CatchAnyGoal_74, STATE_VARIABLE_U_305_305, &STATE_VARIABLE_U_306_306);
              }
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_306_306, &STATE_VARIABLE_U_307_307);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_307_307, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
              MR_Box STATE_VARIABLE_U_101_101;
              MR_Box STATE_VARIABLE_U_102_102;
              MR_Box STATE_VARIABLE_U_103_103;
              MR_Box STATE_VARIABLE_U_104_104;
              MR_Box STATE_VARIABLE_U_106_106;
              MR_Box STATE_VARIABLE_U_107_107;
              MR_Box STATE_VARIABLE_U_108_108;
              MR_Box STATE_VARIABLE_U_109_109;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_101_101);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalA_15, STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_103_103);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "=>", S_7, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_17, S_7, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_107_107);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_17, SubGoalB_16, STATE_VARIABLE_U_107_107, &STATE_VARIABLE_U_108_108);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_109_109, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Box STATE_VARIABLE_U_114_114;
              MR_Box STATE_VARIABLE_U_115_115;
              MR_Box STATE_VARIABLE_U_116_116;
              MR_Box STATE_VARIABLE_U_117_117;
              MR_Box STATE_VARIABLE_U_119_119;
              MR_Box STATE_VARIABLE_U_120_120;
              MR_Box STATE_VARIABLE_U_121_121;
              MR_Box STATE_VARIABLE_U_122_122;
              MR_Word SubGoalA_367 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_368 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Unsigned Indent1_369 = (Indent_9 + (MR_Unsigned) 1U);

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "(", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalA_367, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "<=>", S_7, STATE_VARIABLE_U_117_117, &STATE_VARIABLE_U_119_119);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent1_369, S_7, STATE_VARIABLE_U_119_119, &STATE_VARIABLE_U_120_120);
              parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Indent1_369, SubGoalB_368, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_121_121);
              parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_420, Indent_9, S_7, STATE_VARIABLE_U_121_121, &STATE_VARIABLE_U_122_122);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) ")", S_7, STATE_VARIABLE_U_122_122, &STATE_VARIABLE_U_94);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_87 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_88 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_354_354;
              MR_Word Var_355;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_420, (MR_String) "event ", S_7, STATE_VARIABLE_U_0_93, &STATE_VARIABLE_U_354_354);
              {
                Var_355 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_355, 0) = ((MR_Box) (Name_87));
              }
              parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(TypeClassInfo_for_pt_output_420, S_7, VarSet_8, Var_355, Terms_88, STATE_VARIABLE_U_354_354, &STATE_VARIABLE_U_94);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_94 = STATE_VARIABLE_U_94;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_71 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_71;
    MR_Box S_12 = tscc_proc_2_input_2_S_12;
    MR_Word VarSet_13 = tscc_proc_2_input_3_VarSet_13;
    MR_Unsigned Indent_14 = tscc_proc_2_input_4_Indent_14;
    MR_Word Vars_15 = tscc_proc_2_input_5_Vars_15;
    MR_Word StateVars_16 = tscc_proc_2_input_6_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_2_input_7_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_2_input_8_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_2_input_9_Goal_19;
    MR_String Keyword_20 = tscc_proc_2_input_10_Keyword_20;
    MR_Box STATE_VARIABLE_U_0_41 = tscc_proc_2_input_11_STATE_VARIABLE_U_0_41;
    MR_Box STATE_VARIABLE_U_42;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = TypeClassInfo_for_pt_output_71;
      MR_Box next_value_of_tscc_proc_1_input_2_S_7 = S_12;
      MR_Word next_value_of_tscc_proc_1_input_3_VarSet_8 = VarSet_13;
      MR_Unsigned next_value_of_tscc_proc_1_input_4_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_1_input_5_Goal_10 = Goal_19;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = STATE_VARIABLE_U_0_41;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_420;
      tscc_proc_1_input_2_S_7 = next_value_of_tscc_proc_1_input_2_S_7;
      tscc_proc_1_input_3_VarSet_8 = next_value_of_tscc_proc_1_input_3_VarSet_8;
      tscc_proc_1_input_4_Indent_9 = next_value_of_tscc_proc_1_input_4_Indent_9;
      tscc_proc_1_input_5_Goal_10 = next_value_of_tscc_proc_1_input_5_Goal_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_93 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_93;
      goto top_of_proc_1;
    }
    else
    {
      MR_Unsigned Indent1_40;
      MR_Box STATE_VARIABLE_U_44_44;
      MR_Box STATE_VARIABLE_U_46_46;
      MR_Box STATE_VARIABLE_U_48_48;
      MR_Box STATE_VARIABLE_U_50_50;
      MR_Box STATE_VARIABLE_U_53_53;
      MR_Box STATE_VARIABLE_U_55_55;
      MR_Box STATE_VARIABLE_U_58_58;
      MR_Box STATE_VARIABLE_U_60_60;
      MR_Box STATE_VARIABLE_U_63_63;
      MR_Box STATE_VARIABLE_U_65_65;
      MR_Box STATE_VARIABLE_U_67_67;
      MR_Box STATE_VARIABLE_U_68_68;
      MR_Box STATE_VARIABLE_U_69_69;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_2(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) (Keyword_20)), S_12, STATE_VARIABLE_U_0_41, &STATE_VARIABLE_U_44_44);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) " [")), S_12, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
      parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_71, VarSet_13, (MR_Integer) 0, Vars_15, S_12, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
      }
      else
        STATE_VARIABLE_U_50_50 = STATE_VARIABLE_U_48_48;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_53_53);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_5(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
      }
      else
        STATE_VARIABLE_U_55_55 = STATE_VARIABLE_U_53_53;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_58_58);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_60_60);
      }
      else
        STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_58_58;
      parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_63_63);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_7(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) "] (")), S_12, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_65_65);
      Indent1_40 = (Indent_14 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_71, Indent1_40, S_12, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
      parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_71, S_12, VarSet_13, Indent1_40, Goal_19, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_71, Indent_14, S_12, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_69_69);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_71, (MR_Integer) 0)), (MR_Integer) 6))));
      func_8(((MR_Box) (TypeClassInfo_for_pt_output_71)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_69_69, &STATE_VARIABLE_U_42);
    }
    tscc_output_1_STATE_VARIABLE_U_94 = STATE_VARIABLE_U_42;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_94 = tscc_output_1_STATE_VARIABLE_U_94;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_orelse_goals_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goals_10,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_17 = STATE_VARIABLE_U_0_16;
    else
    {
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 1))));

      if ((TailGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned Var_18 = (Indent_9 + (MR_Unsigned) 1U);

        parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_28, S_7, VarSet_8, Var_18, HeadGoal_12, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
      }
      else
      {
        MR_Unsigned Var_21 = (Indent_9 + (MR_Unsigned) 1U);
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Box STATE_VARIABLE_U_24_24;
        MR_Box STATE_VARIABLE_U_26_26;
        MR_Box STATE_VARIABLE_U_27_27;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_Goals_10;
        MR_Box next_value_of_STATE_VARIABLE_U_0_16;

        parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_28, S_7, VarSet_8, Var_21, HeadGoal_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_22_22);
        parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, S_7, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "orelse")), S_7, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
        parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_28, Indent_9, S_7, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
        // direct tailcall eliminated
        ;
        next_value_of_Goals_10 = TailGoals_13;
        next_value_of_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_27_27;
        Goals_10 = next_value_of_Goals_10;
        STATE_VARIABLE_U_0_16 = next_value_of_STATE_VARIABLE_U_0_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_connected_goal_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_119,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Unsigned Indent_9,
  MR_Word Goal_10,
  MR_Box STATE_VARIABLE_U_0_109,
  MR_Box * STATE_VARIABLE_U_110)
{
  switch (MR_tag((MR_Word) Goal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent_9, Goal_10, STATE_VARIABLE_U_0_109, STATE_VARIABLE_U_110);
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
        MR_Box STATE_VARIABLE_U_114_114;
        MR_Box STATE_VARIABLE_U_115_115;
        MR_Box STATE_VARIABLE_U_116_116;
        MR_Box STATE_VARIABLE_U_117_117;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", S_7, STATE_VARIABLE_U_0_109, &STATE_VARIABLE_U_114_114);
        parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, S_7, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
        parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent1_108, Goal_10, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
        parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, S_7, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", S_7, STATE_VARIABLE_U_117_117, STATE_VARIABLE_U_110);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
          parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent_9, Goal_10, STATE_VARIABLE_U_0_109, STATE_VARIABLE_U_110);
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            MR_Unsigned Indent1_108 = (Indent_9 + (MR_Unsigned) 1U);
            MR_Box STATE_VARIABLE_U_114_114;
            MR_Box STATE_VARIABLE_U_115_115;
            MR_Box STATE_VARIABLE_U_116_116;
            MR_Box STATE_VARIABLE_U_117_117;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) "(", S_7, STATE_VARIABLE_U_0_109, &STATE_VARIABLE_U_114_114);
            parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_119, Indent1_108, S_7, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
            parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_119, S_7, VarSet_8, Indent1_108, Goal_10, STATE_VARIABLE_U_115_115, &STATE_VARIABLE_U_116_116);
            parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_119, Indent_9, S_7, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_119, (MR_String) ")", S_7, STATE_VARIABLE_U_117_117, STATE_VARIABLE_U_110);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_par_conj_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_25,
  MR_Box S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_Unsigned Indent1_14 = (Indent_10 + (MR_Unsigned) 1U);
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Box STATE_VARIABLE_U_21_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_25, Indent1_14, S_8, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_20_20);
    parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_25, S_8, VarSet_9, Indent1_14, GoalA_11, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
    if ((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_21_21;
    else
    {
      MR_Word GoalB_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_16 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;
      MR_Box next_value_of_STATE_VARIABLE_U_0_17;

      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_25, Indent_10, S_8, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_22_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_25, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_25)), ((MR_Box) ((MR_String) "&\n")), S_8, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_15;
      next_value_of_GoalsB_12 = GoalsC_16;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_24_24;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_conj_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Box S_8,
  MR_Word VarSet_9,
  MR_Unsigned Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  while (MR_TRUE)
  {
    MR_Box STATE_VARIABLE_U_18_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_22, S_8, VarSet_9, Indent_10, GoalA_11, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_18_18);
    if ((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_17 = STATE_VARIABLE_U_18_18;
    else
    {
      MR_Word GoalB_14 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Box STATE_VARIABLE_U_21_21;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;
      MR_Box next_value_of_STATE_VARIABLE_U_0_16;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ",")), S_8, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_22, Indent_10, S_8, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_14;
      next_value_of_GoalsB_12 = GoalsC_15;
      next_value_of_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_21_21;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      STATE_VARIABLE_U_0_16 = next_value_of_STATE_VARIABLE_U_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_disj_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Disjunct_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Disjuncts_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Unsigned Indent1_19;
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_26_26;
      MR_Box STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_28, HeadVar__3_3, HeadVar__1_1, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_22_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) ";")), HeadVar__1_1, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      Indent1_19 = (HeadVar__3_3 + (MR_Unsigned) 1U);
      parse_tree__parse_tree_out_misc__mercury_format_newline_4_p_0(TypeClassInfo_for_pt_output_28, Indent1_19, HeadVar__1_1, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
      parse_tree__parse_tree_out_clause__mercury_format_goal_6_p_0(TypeClassInfo_for_pt_output_28, HeadVar__1_1, HeadVar__2_2, Indent1_19, Disjunct_16, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Disjuncts_17;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_27_27;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Box S_6,
  MR_Word TraceExpr_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_format_trace_compiletime_4_p_0(Var_43, Base_10, S_6, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_U_17_17;
          MR_Box STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_31_31;
                MR_Box STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word next_value_of_TraceExpr_8;
                MR_Box next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), S_6, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box STATE_VARIABLE_U_23_23;
                MR_Box STATE_VARIABLE_U_24_24;
                MR_Box STATE_VARIABLE_U_26_26;
                MR_Box STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_3(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), S_6, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_52_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_5(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_trace_compiletime_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word CompileTime_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_String CondStr_9;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  switch (MR_tag((MR_Word) CompileTime_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FlagName_8 = ((MR_String) ((MR_hl_field(0, CompileTime_5, (MR_Integer) 0))));
        MR_String Var_19;
        MR_String Var_37;

        Var_19 = mercury__term_io__quoted_string_1_f_0(FlagName_8);
        Var_37 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "flag(", Var_37);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_10 = ((MR_Unsigned) ((MR_hl_field(1, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_11;
        MR_String Var_34;

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_11, Grade_10);
        Var_34 = mercury__string__f_43_43_2_f_0(GradeName_11, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "grade(", Var_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_12 = ((MR_Unsigned) ((MR_hl_field(2, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String LevelStr_13;
        MR_String Var_31;

        switch (Level_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            LevelStr_13 = (MR_String) "deep";
            break;
          case (MR_Integer) 0:
            LevelStr_13 = (MR_String) "shallow";
            break;
        }
        Var_31 = mercury__string__f_43_43_2_f_0(LevelStr_13, (MR_String) ")");
        CondStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "tracelevel(", Var_31);
      }
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (CondStr_9)), S_6, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Box S_6,
  MR_Word TraceExpr_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_format_trace_runtime_4_p_0(Var_43, Base_10, S_6, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_U_17_17;
          MR_Box STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "not(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_17_17);
          parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, TraceExprA_11, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_31_31;
                MR_Box STATE_VARIABLE_U_33_33;
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word next_value_of_TraceExpr_8;
                MR_Box next_value_of_STATE_VARIABLE_U_0_13;

                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_31_31);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " and ")), S_6, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_40;
                next_value_of_STATE_VARIABLE_U_0_13 = STATE_VARIABLE_U_33_33;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                STATE_VARIABLE_U_0_13 = next_value_of_STATE_VARIABLE_U_0_13;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box STATE_VARIABLE_U_23_23;
                MR_Box STATE_VARIABLE_U_24_24;
                MR_Box STATE_VARIABLE_U_26_26;
                MR_Box STATE_VARIABLE_U_27_27;
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                func_3(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), S_6, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_23_23);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_41, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_24_24);
                func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ") or (")), S_6, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
                parse_tree__parse_tree_out_clause__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_104_111_50_50_51_95_95_91_52_93_95_48_5_p_0(Var_43, TypeClassInfo_for_pt_output_38, S_6, Var_40, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
                func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
                func_5(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_14);
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_trace_runtime_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_Word TypeClassInfo_for_writer_15;
  MR_String EnvVarName_5 = (MR_String) (HeadVar__1_1);
  MR_Box STATE_VARIABLE_U_11_11;
  MR_Box STATE_VARIABLE_U_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "env(")), S_6, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_11_11);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, &TypeClassInfo_for_writer_15);
  mercury__term_io__format_quoted_string_4_p_0(TypeClassInfo_for_writer_15, S_6, EnvVarName_5, STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_12_12);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ")")), S_6, STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_comma_if_needed_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Box S_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_0_3;
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) ", ")), S_1, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_state_vars_using_prefix_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_30,
  MR_Box S_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    else
    {
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_26_26;
      MR_Box STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), S_1, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_26_26);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_19, S_1, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
      if ((SVars_20 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_27_27;
      else
      {
        MR_Box STATE_VARIABLE_U_29_29;
        MR_Word SVar_42;
        MR_Word SVars_43;
        MR_Box STATE_VARIABLE_U_26_48;
        MR_Box STATE_VARIABLE_U_27_49;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), S_1, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
        SVar_42 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 0))));
        SVars_43 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 1))));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) (BangPrefix_4)), S_1, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_26_48);
        parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_30, VarSet_2, VarNamePrint_3, SVar_42, S_1, STATE_VARIABLE_U_26_48, &STATE_VARIABLE_U_27_49);
        if ((SVars_43 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_27_49;
        else
        {
          MR_Box STATE_VARIABLE_U_29_51;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_30, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Word next_value_of_HeadVar__5_5;
          MR_Box next_value_of_STATE_VARIABLE_U_0_6;

          func_3(((MR_Box) (TypeClassInfo_for_pt_output_30)), ((MR_Box) ((MR_String) ", ")), S_1, STATE_VARIABLE_U_27_49, &STATE_VARIABLE_U_29_51);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = SVars_43;
          next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_29_51;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_some_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  MR_bool succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_23_23;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_29_29;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) " some [")), S_7, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_23_23);
    parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, Vars_9, S_7, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
    succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) ", ")), S_7, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_27_27);
      parse_tree__parse_tree_out_misc__mercury_format_state_vars_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_pt_output_31, VarSet_8, (MR_Integer) 0, StateVars_10, S_7, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    }
    else
      STATE_VARIABLE_U_29_29 = STATE_VARIABLE_U_25_25;
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_31, (MR_Integer) 0)), (MR_Integer) 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_31)), ((MR_Box) ((MR_String) "]")), S_7, STATE_VARIABLE_U_29_29, STATE_VARIABLE_U_21);
  }
  else
    *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_0_20;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_call_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_33,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));
    MR_String PredName_13 = ((MR_String) ((MR_hl_field(1, SymName_9, (MR_Integer) 1))));
    MR_Word SubTerm_14;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_20_20;
    MR_Word Var_21;
    MR_Word Var_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_33, (MR_Integer) 0, ModuleName_12, S_7, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_33, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_33)), ((MR_Box) ((MR_String) ".")), S_7, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (PredName_13));
    }
    Var_22 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_14, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, SubTerm_14, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_14, 2) = ((MR_Box) (Var_22));
    }
    parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_14, S_7, STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_16);
  }
  else
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String PredName_31 = ((MR_String) ((MR_hl_field(0, SymName_9, (MR_Integer) 0))));
    MR_Word SubTerm_32;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredName_31));
    }
    Var_27 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_32, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubTerm_32, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_32, 2) = ((MR_Box) (Var_27));
    }
    parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_33, VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_32, S_7, STATE_VARIABLE_U_0_15, STATE_VARIABLE_U_16);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_plain_or_dot_var_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_20,
  MR_Box S_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  if (((MR_tag((MR_Word) PODVar_10)) == (MR_Integer) 1))
  {
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, PODVar_10, (MR_Integer) 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_20, (MR_Integer) 0)), (MR_Integer) 6))));

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_20)), ((MR_Box) ((MR_String) "!.")), S_7, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_17_17);
    parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_19, S_7, STATE_VARIABLE_U_17_17, STATE_VARIABLE_U_14);
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, PODVar_10, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_20, VarSet_8, VarNamePrint_9, Var_12, S_7, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_format_goal_warnings_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Box S_6,
  MR_Word HeadWarning_7,
  MR_Word TailWarnings_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  while (MR_TRUE)
  {
    MR_String Var_14;
    MR_Box STATE_VARIABLE_U_15_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_14 = parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(HeadWarning_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Var_14)), S_6, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    if ((TailWarnings_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_13 = STATE_VARIABLE_U_15_15;
    else
    {
      MR_Word HeadTailWarning_10 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 0))));
      MR_Word TailTailWarnings_11 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_17_17;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, (MR_Integer) 0)), (MR_Integer) 6))));
      MR_Word next_value_of_HeadWarning_7;
      MR_Word next_value_of_TailWarnings_8;
      MR_Box next_value_of_STATE_VARIABLE_U_0_12;

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ", ")), S_6, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadWarning_7 = HeadTailWarning_10;
      next_value_of_TailWarnings_8 = TailTailWarnings_11;
      next_value_of_STATE_VARIABLE_U_0_12 = STATE_VARIABLE_U_17_17;
      HeadWarning_7 = next_value_of_HeadWarning_7;
      TailWarnings_8 = next_value_of_TailWarnings_8;
      STATE_VARIABLE_U_0_12 = next_value_of_STATE_VARIABLE_U_0_12;
      continue;
    }
    break;
  }
}

void mercury__parse_tree__parse_tree_out_clause__init(void)
{
}

void mercury__parse_tree__parse_tree_out_clause__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_clause__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_clause__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_clause.
