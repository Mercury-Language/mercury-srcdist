/*
** Automatically generated from `parse_tree_out_term.m'
** by the Mercury compiler,
** version rotd-2025-08-19
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


// :- module parse_tree.parse_tree_out_term.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_term__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_term.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0[3];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0[3];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0[2];

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Graphic_0_9,
  MR_Word * STATE_VARIABLE_Graphic_10,
  MR_Word STATE_VARIABLE_NonGraphic_0_11,
  MR_Word * STATE_VARIABLE_NonGraphic_12);

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word S_14);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_vs_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_vs_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word S_14);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[6][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_2[5][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_4[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_5[6][10];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_6[1][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_7[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_8[3][11];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_9[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_10[1][8];




static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[4])),
    ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[4])),
    ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[4])),
    ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_10[0])),
    ((MR_Box) (parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_2[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_5[6][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_6[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_7[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_8[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_9[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 33,
    (MR_Integer) 133199,
    (MR_Integer) 133231
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0 = {
  (MR_String) "not_seen_graphic_char",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1 = {
  (MR_String) "seen_graphic_char",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "graphic_char",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0 = {
  (MR_String) "no_graphic_chars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1 = {
  (MR_String) "some_graphic_chars",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2 = {
  (MR_String) "all_graphic_chars",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0[3] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0[3] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_in_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "graphic_char_in_string",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0 = {
  (MR_String) "next_to_graphic_token",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1 = {
  (MR_String) "not_next_to_graphic_token",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "needs_quotes",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0 = {
  (MR_String) "not_seen_non_graphic_char",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1 = {
  (MR_String) "seen_non_graphic_char",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "non_graphic_char",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0,

};

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_110_117_109_95_111_110_108_121_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Var_5,
  MR_Word S_6)
{
  MR_Integer VarNum_8;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_1_12;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  mercury__term__var_to_int_2_p_0(TypeInfo_for_T_14, Var_5, &VarNum_8);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_12);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (VarNum_8)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_110_117_109_95_111_110_108_121_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Var_5,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Integer VarNum_8;
  MR_Word STATE_VARIABLE_U_1_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_1_12;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  mercury__term__var_to_int_2_p_0(TypeInfo_for_T_14, Var_5, &VarNum_8);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_9)), &conv1_STATE_VARIABLE_U_1_12);
  STATE_VARIABLE_U_1_12 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_12));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (VarNum_8)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_12)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Word S_8)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Name_7);
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_13;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_13);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 22))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Name_7)), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_14);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_11);
  }
  else
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_16, NextToGraphicToken_6, Name_7, S_8);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  if (((MR_tag((MR_Word) VarNameSrc_7)) == (MR_Integer) 1))
  {
    MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_19, VarTable_13, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
  }
  else
  {
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_19, VarSet_12, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word S_10)
{
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  MR_Word Var_14;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv2_STATE_VARIABLE_U_13);
  *STATE_VARIABLE_U_13 = ((MR_Word) (conv2_STATE_VARIABLE_U_13));
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word S_10)
{
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[4]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  MR_Word Var_14;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[3]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv2_STATE_VARIABLE_U_13);
  *STATE_VARIABLE_U_13 = ((MR_Word) (conv2_STATE_VARIABLE_U_13));
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word S_10)
{
  MR_Word TypeInfo_23_23;
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_8[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (TypeInfo_23_23)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_23_23;
  MR_Word Var_14;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (TypeInfo_23_23)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv2_STATE_VARIABLE_U_13);
  *STATE_VARIABLE_U_13 = ((MR_Word) (conv2_STATE_VARIABLE_U_13));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_109_105_116_101_100_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Limit_10,
  MR_Word Term_11,
  MR_Word S_12)
{
  MR_String Str_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_15;

  Str_19 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_18, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Limit_10, Term_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Str_19)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_109_105_116_101_100_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Limit_10,
  MR_Word Term_11,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  MR_String Str_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_15;

  Str_19 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_18, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Limit_10, Term_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Str_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv1_STATE_VARIABLE_U_15);
  *STATE_VARIABLE_U_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_15));
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word S_12)
{
  if (((MR_tag((MR_Word) VarNameSrc_8)) == (MR_Integer) 1))
  {
    MR_Word VarTable_15 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_18, VarTable_15, VarNamePrint_9, NextToGraphicToken_10, Term_11, S_12);
  }
  else
  {
    MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_18, VarSet_14, VarNamePrint_9, NextToGraphicToken_10, Term_11, S_12);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word STATE_VARIABLE_U_0_16,
  MR_Word * STATE_VARIABLE_U_17)
{
  if (((MR_tag((MR_Word) VarNameSrc_8)) == (MR_Integer) 1))
  {
    MR_Word VarTable_15 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_18, VarTable_15, VarNamePrint_9, NextToGraphicToken_10, Term_11, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
  }
  else
  {
    MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_18, VarSet_14, VarNamePrint_9, NextToGraphicToken_10, Term_11, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_109_105_116_101_100_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Integer Limit_12,
  MR_Word Term_13,
  MR_Word S_14)
{
  MR_String Str_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_18;

  Str_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_20, VarSet_9, VarNamePrint_10, NextToGraphicToken_11, Limit_12, Term_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) (Str_16)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_109_105_116_101_100_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Integer Limit_12,
  MR_Word Term_13,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  MR_String Str_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_18;

  Str_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_20, VarSet_9, VarNamePrint_10, NextToGraphicToken_11, Limit_12, Term_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) (Str_16)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv1_STATE_VARIABLE_U_18);
  *STATE_VARIABLE_U_18 = ((MR_Word) (conv1_STATE_VARIABLE_U_18));
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(
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
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(
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
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0(
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
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(
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
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Graphic_0_9,
  MR_Word * STATE_VARIABLE_Graphic_10,
  MR_Word STATE_VARIABLE_NonGraphic_0_11,
  MR_Word * STATE_VARIABLE_NonGraphic_12)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(Char_6);
  if (succeeded)
  {
    *STATE_VARIABLE_Graphic_10 = (MR_Integer) 1;
    *STATE_VARIABLE_NonGraphic_12 = STATE_VARIABLE_NonGraphic_0_11;
  }
  else
  {
    *STATE_VARIABLE_NonGraphic_12 = (MR_Integer) 1;
    *STATE_VARIABLE_Graphic_10 = STATE_VARIABLE_Graphic_0_9;
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_2);
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Graphic_10;
  MR_Word conv0_STATE_VARIABLE_NonGraphic_12;

  parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Graphic_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NonGraphic_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Graphic_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NonGraphic_12));
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0(
  MR_String Str_3)
{
  MR_Word Result_4;
  MR_Word Graphic_5;
  MR_Word NonGraphic_6;
  MR_Box conv3_Graphic_5;
  MR_Box conv2_NonGraphic_6;

  mercury__string__foldl2_6_p_2((MR_Word) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0), (MR_Word) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[5]), Str_3, ((MR_Box) ((MR_Integer) 0)), &conv3_Graphic_5, ((MR_Box) ((MR_Integer) 0)), &conv2_NonGraphic_6);
  Graphic_5 = ((MR_Word) (conv3_Graphic_5));
  NonGraphic_6 = ((MR_Word) (conv2_NonGraphic_6));
  switch (Graphic_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      switch (NonGraphic_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Result_4 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          Result_4 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return Result_4;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Name_7);
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_1_13;
    MR_Box STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 22))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_1_13, &STATE_VARIABLE_U_2_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_2_14, STATE_VARIABLE_U_11);
  }
  else
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_16, NextToGraphicToken_6, Name_7, S_8, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_String Name_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), NextToGraphicToken_4, Name_5, State0_7, &State_8);
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Word STATE_VARIABLE_U_0_10,
  MR_Word * STATE_VARIABLE_U_11)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Name_7);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_U_1_13;
    MR_Word STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_13;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_10)), &conv1_STATE_VARIABLE_U_1_13);
    STATE_VARIABLE_U_1_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_13));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 22))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (Name_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_13)), &conv3_STATE_VARIABLE_U_2_14);
    STATE_VARIABLE_U_2_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_14));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_14)), &conv5_STATE_VARIABLE_U_11);
    *STATE_VARIABLE_U_11 = ((MR_Word) (conv5_STATE_VARIABLE_U_11));
  }
  else
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_16, NextToGraphicToken_6, Name_7, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_limited_term_nq_vs_8_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Integer Limit_12,
  MR_Word Term_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  MR_String Str_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Str_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_20, VarSet_9, VarNamePrint_10, NextToGraphicToken_11, Limit_12, Term_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_19, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_19)), ((MR_Box) (Str_16)), S_14, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_nq_vs_8_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Integer Limit_12,
  MR_Word Term_13,
  MR_Word Stream_14)
{
  MR_String Str_16;

  Str_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_19, VarSet_9, VarNamePrint_10, NextToGraphicToken_11, Limit_12, Term_13);
  mercury__io__write_string_4_p_0(Stream_14, Str_16);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_limited_term_vs_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Limit_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_String Str_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Str_19 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_18, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Limit_10, Term_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Str_19)), S_12, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_vs_7_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Limit_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  MR_String Str_18;

  Str_18 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Limit_10, Term_11);
  mercury__io__write_string_4_p_0(Stream_12, Str_18);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_to_string_vs_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Integer Limit_8,
  MR_Word Term_9)
{
  MR_String HeadVar__5_5;

  HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_11, VarSet_6, VarNamePrint_7, (MR_Integer) 1, Limit_8, Term_9);
  return HeadVar__5_5;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_16,
  MR_Box * STATE_VARIABLE_U_17)
{
  if (((MR_tag((MR_Word) VarNameSrc_8)) == (MR_Integer) 1))
  {
    MR_Word VarTable_15 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_18, VarTable_15, VarNamePrint_9, NextToGraphicToken_10, Term_11, S_12, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
  }
  else
  {
    MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_8, 0))));

    parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_18, VarSet_14, VarNamePrint_9, NextToGraphicToken_10, Term_11, S_12, STATE_VARIABLE_U_0_16, STATE_VARIABLE_U_17);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  MR_String Str_10;

  if (((MR_tag((MR_Word) VarNameSrc_6)) == (MR_Integer) 1))
  {
    MR_Word VarTable_12 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_6, 0))));
    MR_Word State0_14;
    MR_Word State_15;

    State0_14 = mercury__string__builder__init_0_f_0();
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarTable_12, VarNamePrint_7, NextToGraphicToken_8, Term_9, State0_14, &State_15);
    Str_10 = mercury__string__builder__to_string_1_f_0(State_15);
  }
  else
  {
    MR_Word VarSet_11 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_6, 0))));
    MR_Word State0_18;
    MR_Word State_19;

    State0_18 = mercury__string__builder__init_0_f_0();
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_11, VarNamePrint_7, NextToGraphicToken_8, Term_9, State0_18, &State_19);
    Str_10 = mercury__string__builder__to_string_1_f_0(State_19);
  }
  return Str_10;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0(
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Term_11, Stream_12);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  MR_String Str_10;
  MR_Word State0_11;
  MR_Word State_12;

  State0_11 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarTable_6, VarNamePrint_7, NextToGraphicToken_8, Term_9, State0_11, &State_12);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_12);
  return Str_10;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_16, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Term_11, Stream_12);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_vs_4_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  MR_String Str_10;
  MR_Word State0_11;
  MR_Word State_12;

  State0_11 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_14, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_6, VarNamePrint_7, NextToGraphicToken_8, Term_9, State0_11, &State_12);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_12);
  return Str_10;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  if (((MR_tag((MR_Word) VarNameSrc_7)) == (MR_Integer) 1))
  {
    MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_19, VarTable_13, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
  }
  else
  {
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_19, VarSet_12, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarNameSrc_7, VarNamePrint_8, Term_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10)
{
  if (((MR_tag((MR_Word) VarNameSrc_7)) == (MR_Integer) 1))
  {
    MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(1, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_19, VarTable_13, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
  }
  else
  {
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, VarNameSrc_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_19, VarSet_12, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_24;
      MR_Box STATE_VARIABLE_U_2_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Word next_value_of_Term_9;
      MR_Box next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_1_24);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_2_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Box STATE_VARIABLE_U_4_31;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_4_31);
        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_4_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Box STATE_VARIABLE_U_1_16;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_16);
  parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, TailTerms_11, S_12, STATE_VARIABLE_U_1_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_15, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_42,
  MR_Box * STATE_VARIABLE_U_43)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_2_47;
        MR_Box STATE_VARIABLE_U_3_49;
        MR_Box STATE_VARIABLE_U_4_50;

        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_2_47);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_2_47, &STATE_VARIABLE_U_3_49);
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_20, Xs_21, S_12, STATE_VARIABLE_U_3_49, &STATE_VARIABLE_U_4_50);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_4_50, STATE_VARIABLE_U_43);
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box STATE_VARIABLE_U_6_57;
          MR_Box STATE_VARIABLE_U_7_58;
          MR_Box STATE_VARIABLE_U_8_59;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_6_57);
          parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_135, S_12, STATE_VARIABLE_U_6_57, &STATE_VARIABLE_U_7_58);
          parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Xs_136, S_12, STATE_VARIABLE_U_7_58, &STATE_VARIABLE_U_8_59);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", S_12, STATE_VARIABLE_U_8_59, STATE_VARIABLE_U_43);
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Box STATE_VARIABLE_U_10_64;
              MR_Box STATE_VARIABLE_U_11_65;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_10_64);
              parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, S_12, STATE_VARIABLE_U_10_64, &STATE_VARIABLE_U_11_65);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", S_12, STATE_VARIABLE_U_11_65, STATE_VARIABLE_U_43);
            }
            else
            {
              MR_Box STATE_VARIABLE_U_13_69;
              MR_Box STATE_VARIABLE_U_14_70;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_13_69);
              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, Xs_134, S_12, STATE_VARIABLE_U_13_69, &STATE_VARIABLE_U_14_70);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", S_12, STATE_VARIABLE_U_14_70, STATE_VARIABLE_U_43);
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
              else
              {
                MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Box STATE_VARIABLE_U_17_79;
                    MR_Box STATE_VARIABLE_U_18_80;
                    MR_Box STATE_VARIABLE_U_19_82;
                    MR_Box STATE_VARIABLE_U_20_83;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_17_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_17_79, &STATE_VARIABLE_U_18_80);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_18_80, &STATE_VARIABLE_U_19_82);
                    parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12, STATE_VARIABLE_U_19_82, &STATE_VARIABLE_U_20_83);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_20_83, STATE_VARIABLE_U_43);
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box STATE_VARIABLE_U_22_88;
                      MR_Box STATE_VARIABLE_U_23_89;
                      MR_Box STATE_VARIABLE_U_24_91;
                      MR_Box STATE_VARIABLE_U_25_92;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_22_88);
                      parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12, STATE_VARIABLE_U_22_88, &STATE_VARIABLE_U_23_89);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_23_89, &STATE_VARIABLE_U_24_91);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_24_91, &STATE_VARIABLE_U_25_92);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_25_92, STATE_VARIABLE_U_43);
                    }
                    else
                      parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                  }
                }
                else
                {
                  MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Var_150, 1))));
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_150, 0))));

                  if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box STATE_VARIABLE_U_28_100;
                      MR_Box STATE_VARIABLE_U_29_101;
                      MR_Box STATE_VARIABLE_U_30_103;
                      MR_Box STATE_VARIABLE_U_31_104;
                      MR_Box STATE_VARIABLE_U_32_106;
                      MR_Box STATE_VARIABLE_U_33_107;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_28_100);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_28_100, &STATE_VARIABLE_U_29_101);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_29_101, &STATE_VARIABLE_U_30_103);
                      parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12, STATE_VARIABLE_U_30_103, &STATE_VARIABLE_U_31_104);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_31_104, &STATE_VARIABLE_U_32_106);
                      parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_153, S_12, STATE_VARIABLE_U_32_106, &STATE_VARIABLE_U_33_107);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_33_107, STATE_VARIABLE_U_43);
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Box STATE_VARIABLE_U_35_112;
                          MR_Box STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;
                          MR_Box next_value_of_STATE_VARIABLE_U_0_42;

                          parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 0, Var_151, S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_35_112);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", S_12, STATE_VARIABLE_U_35_112, &STATE_VARIABLE_U_36_114);
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_153;
                          next_value_of_STATE_VARIABLE_U_0_42 = STATE_VARIABLE_U_36_114;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          STATE_VARIABLE_U_0_42 = next_value_of_STATE_VARIABLE_U_0_42;
                          continue;
                        }
                        else
                        {
                          MR_Box STATE_VARIABLE_U_38_118;
                          MR_Box STATE_VARIABLE_U_39_120;
                          MR_Box STATE_VARIABLE_U_40_122;
                          MR_Box STATE_VARIABLE_U_41_123;
                          MR_Box STATE_VARIABLE_U_42_125;
                          MR_Box STATE_VARIABLE_U_43_127;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_38_118);
                          parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_151, S_12, STATE_VARIABLE_U_38_118, &STATE_VARIABLE_U_39_120);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_39_120, &STATE_VARIABLE_U_40_122);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_40_122, &STATE_VARIABLE_U_41_123);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_41_123, &STATE_VARIABLE_U_42_125);
                          parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_153, S_12, STATE_VARIABLE_U_42_125, &STATE_VARIABLE_U_43_127);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_43_127, STATE_VARIABLE_U_43);
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                }
              }
            else
              parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_14, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Box STATE_VARIABLE_U_1_22;
      MR_Box STATE_VARIABLE_U_2_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_22);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4, STATE_VARIABLE_U_1_22, &STATE_VARIABLE_U_2_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_27;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_27 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_27);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_29;
      MR_Box STATE_VARIABLE_U_2_30;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_1_29);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_27)), S_14, STATE_VARIABLE_U_1_29, &STATE_VARIABLE_U_2_30);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_14, STATE_VARIABLE_U_2_30, STATE_VARIABLE_U_19);
    }
    else
    {
      MR_String Atom_32;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_32, S_14, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
      else
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), S_14, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_Box STATE_VARIABLE_U_2_21;
    MR_Box STATE_VARIABLE_U_3_23;
    MR_Box STATE_VARIABLE_U_4_24;
    MR_Box STATE_VARIABLE_U_1_34;
    MR_String Atom_33;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    else
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));

      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_14, STATE_VARIABLE_U_2_21, &STATE_VARIABLE_U_3_23);
    parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, (MR_Integer) 1, HeadArg_16, S_14, STATE_VARIABLE_U_3_23, &STATE_VARIABLE_U_1_34);
    parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, TailArgs_17, S_14, STATE_VARIABLE_U_1_34, &STATE_VARIABLE_U_4_24);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_14, STATE_VARIABLE_U_4_24, STATE_VARIABLE_U_19);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_6_p_0(
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, Stream_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_24;
      MR_Word next_value_of_Term_9;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_24);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      Term_9 = next_value_of_Term_9;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (!(succeeded))
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_4_31;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_4_31);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_15, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word S_12)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, TailTerms_11, S_12);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word S_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box conv0_STATE_VARIABLE_U_3_49;
        MR_Box conv1_STATE_VARIABLE_U_43;

        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_3_49);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_20, Xs_21, S_12);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_43);
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_U_6_57;
          MR_Box conv3_STATE_VARIABLE_U_43;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_6_57);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_135, S_12);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Xs_136, S_12);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_43);
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Box conv4_STATE_VARIABLE_U_10_64;
              MR_Box conv5_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_10_64);
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, S_12);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_43);
            }
            else
            {
              MR_Box conv6_STATE_VARIABLE_U_13_69;
              MR_Box conv7_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_13_69);
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, Xs_134, S_12);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_43);
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
              else
              {
                MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Box conv8_STATE_VARIABLE_U_17_79;
                    MR_Box conv9_STATE_VARIABLE_U_18_80;
                    MR_Box conv10_STATE_VARIABLE_U_19_82;
                    MR_Box conv11_STATE_VARIABLE_U_43;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_17_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_18_80);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_19_82);
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_43);
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_U_22_88;
                      MR_Box conv13_STATE_VARIABLE_U_24_91;
                      MR_Box conv14_STATE_VARIABLE_U_25_92;
                      MR_Box conv15_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_22_88);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_24_91);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_25_92);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_43);
                    }
                    else
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                  }
                }
                else
                {
                  MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Var_150, 1))));
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_150, 0))));

                  if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box conv16_STATE_VARIABLE_U_28_100;
                      MR_Box conv17_STATE_VARIABLE_U_29_101;
                      MR_Box conv18_STATE_VARIABLE_U_30_103;
                      MR_Box conv19_STATE_VARIABLE_U_32_106;
                      MR_Box conv20_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_28_100);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_29_101);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_30_103);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_32_106);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_153, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_43);
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Box conv21_STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;

                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 0, Var_151, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_36_114);
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_153;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          continue;
                        }
                        else
                        {
                          MR_Box conv22_STATE_VARIABLE_U_38_118;
                          MR_Box conv23_STATE_VARIABLE_U_40_122;
                          MR_Box conv24_STATE_VARIABLE_U_41_123;
                          MR_Box conv25_STATE_VARIABLE_U_42_125;
                          MR_Box conv26_STATE_VARIABLE_U_43;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_38_118);
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_151, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_40_122);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_41_123);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_42_125);
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_153, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_43);
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                }
              }
            else
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_14, S_12);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_22;
      MR_Word next_value_of_HeadVar__3_3;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_22);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word S_14)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_27;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_27 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_27);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_29;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_2_30;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_U_19;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_29);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_27)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_30);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_19);
    }
    else
    {
      MR_String Atom_32;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_32, S_14);
      }
      else
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
        MR_Box conv7_STATE_VARIABLE_U_19;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_19);
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_String Atom_33;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_3_23;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_19;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, S_14);
    }
    else
    {
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
      MR_Box conv9_STATE_VARIABLE_U_2_21;

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_2_21);
    }
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_3_23);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, HeadArg_16, S_14);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, TailArgs_17, S_14);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_19);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(
  MR_Word VarTable_5,
  MR_Word VarNamePrint_6,
  MR_Word Term_7)
{
  MR_String HeadVar__4_4;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarTable_5, VarNamePrint_6, (MR_Integer) 1, Term_7, State0_9, &State_10);
  HeadVar__4_4 = mercury__string__builder__to_string_1_f_0(State_10);
  return HeadVar__4_4;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_24;
      MR_Word STATE_VARIABLE_U_2_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_24;
      MR_Word next_value_of_Term_9;
      MR_Word next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv1_STATE_VARIABLE_U_1_24);
      STATE_VARIABLE_U_1_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_24));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, X_14, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_2_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Word STATE_VARIABLE_U_4_31;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_4_31;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv3_STATE_VARIABLE_U_4_31);
        STATE_VARIABLE_U_4_31 = ((MR_Word) (conv3_STATE_VARIABLE_U_4_31));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_32, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_4_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_15, VarTable_7, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  MR_Word STATE_VARIABLE_U_1_16;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_16);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_17, VarTable_8, VarNamePrint_9, TailTerms_11, STATE_VARIABLE_U_1_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarTable_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word STATE_VARIABLE_U_0_42,
  MR_Word * STATE_VARIABLE_U_43)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_U_2_47;
        MR_Word STATE_VARIABLE_U_3_49;
        MR_Word STATE_VARIABLE_U_4_50;
        MR_Box conv0_STATE_VARIABLE_U_3_49;
        MR_Box conv1_STATE_VARIABLE_U_43;

        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, F_19, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_2_47);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_47)), &conv0_STATE_VARIABLE_U_3_49);
        STATE_VARIABLE_U_3_49 = ((MR_Word) (conv0_STATE_VARIABLE_U_3_49));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_20, Xs_21, STATE_VARIABLE_U_3_49, &STATE_VARIABLE_U_4_50);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_50)), &conv1_STATE_VARIABLE_U_43);
        *STATE_VARIABLE_U_43 = ((MR_Word) (conv1_STATE_VARIABLE_U_43));
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_U_6_57;
          MR_Word STATE_VARIABLE_U_7_58;
          MR_Word STATE_VARIABLE_U_8_59;
          MR_Box conv2_STATE_VARIABLE_U_6_57;
          MR_Box conv3_STATE_VARIABLE_U_43;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv2_STATE_VARIABLE_U_6_57);
          STATE_VARIABLE_U_6_57 = ((MR_Word) (conv2_STATE_VARIABLE_U_6_57));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_135, STATE_VARIABLE_U_6_57, &STATE_VARIABLE_U_7_58);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Xs_136, STATE_VARIABLE_U_7_58, &STATE_VARIABLE_U_8_59);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_59)), &conv3_STATE_VARIABLE_U_43);
          *STATE_VARIABLE_U_43 = ((MR_Word) (conv3_STATE_VARIABLE_U_43));
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_U_10_64;
              MR_Word STATE_VARIABLE_U_11_65;
              MR_Box conv4_STATE_VARIABLE_U_10_64;
              MR_Box conv5_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv4_STATE_VARIABLE_U_10_64);
              STATE_VARIABLE_U_10_64 = ((MR_Word) (conv4_STATE_VARIABLE_U_10_64));
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, STATE_VARIABLE_U_10_64, &STATE_VARIABLE_U_11_65);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_11_65)), &conv5_STATE_VARIABLE_U_43);
              *STATE_VARIABLE_U_43 = ((MR_Word) (conv5_STATE_VARIABLE_U_43));
            }
            else
            {
              MR_Word STATE_VARIABLE_U_13_69;
              MR_Word STATE_VARIABLE_U_14_70;
              MR_Box conv6_STATE_VARIABLE_U_13_69;
              MR_Box conv7_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv6_STATE_VARIABLE_U_13_69);
              STATE_VARIABLE_U_13_69 = ((MR_Word) (conv6_STATE_VARIABLE_U_13_69));
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, X_133, Xs_134, STATE_VARIABLE_U_13_69, &STATE_VARIABLE_U_14_70);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_70)), &conv7_STATE_VARIABLE_U_43);
              *STATE_VARIABLE_U_43 = ((MR_Word) (conv7_STATE_VARIABLE_U_43));
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
              else
              {
                MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_U_17_79;
                    MR_Word STATE_VARIABLE_U_18_80;
                    MR_Word STATE_VARIABLE_U_19_82;
                    MR_Word STATE_VARIABLE_U_20_83;
                    MR_Box conv8_STATE_VARIABLE_U_17_79;
                    MR_Box conv9_STATE_VARIABLE_U_18_80;
                    MR_Box conv10_STATE_VARIABLE_U_19_82;
                    MR_Box conv11_STATE_VARIABLE_U_43;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv8_STATE_VARIABLE_U_17_79);
                    STATE_VARIABLE_U_17_79 = ((MR_Word) (conv8_STATE_VARIABLE_U_17_79));
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_79)), &conv9_STATE_VARIABLE_U_18_80);
                    STATE_VARIABLE_U_18_80 = ((MR_Word) (conv9_STATE_VARIABLE_U_18_80));
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_80)), &conv10_STATE_VARIABLE_U_19_82);
                    STATE_VARIABLE_U_19_82 = ((MR_Word) (conv10_STATE_VARIABLE_U_19_82));
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, STATE_VARIABLE_U_19_82, &STATE_VARIABLE_U_20_83);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_20_83)), &conv11_STATE_VARIABLE_U_43);
                    *STATE_VARIABLE_U_43 = ((MR_Word) (conv11_STATE_VARIABLE_U_43));
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_U_22_88;
                      MR_Word STATE_VARIABLE_U_23_89;
                      MR_Word STATE_VARIABLE_U_24_91;
                      MR_Word STATE_VARIABLE_U_25_92;
                      MR_Box conv12_STATE_VARIABLE_U_22_88;
                      MR_Box conv13_STATE_VARIABLE_U_24_91;
                      MR_Box conv14_STATE_VARIABLE_U_25_92;
                      MR_Box conv15_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv12_STATE_VARIABLE_U_22_88);
                      STATE_VARIABLE_U_22_88 = ((MR_Word) (conv12_STATE_VARIABLE_U_22_88));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, STATE_VARIABLE_U_22_88, &STATE_VARIABLE_U_23_89);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_89)), &conv13_STATE_VARIABLE_U_24_91);
                      STATE_VARIABLE_U_24_91 = ((MR_Word) (conv13_STATE_VARIABLE_U_24_91));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_91)), &conv14_STATE_VARIABLE_U_25_92);
                      STATE_VARIABLE_U_25_92 = ((MR_Word) (conv14_STATE_VARIABLE_U_25_92));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_92)), &conv15_STATE_VARIABLE_U_43);
                      *STATE_VARIABLE_U_43 = ((MR_Word) (conv15_STATE_VARIABLE_U_43));
                    }
                    else
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                  }
                }
                else
                {
                  MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Var_150, 1))));
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_150, 0))));

                  if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_U_28_100;
                      MR_Word STATE_VARIABLE_U_29_101;
                      MR_Word STATE_VARIABLE_U_30_103;
                      MR_Word STATE_VARIABLE_U_31_104;
                      MR_Word STATE_VARIABLE_U_32_106;
                      MR_Word STATE_VARIABLE_U_33_107;
                      MR_Box conv16_STATE_VARIABLE_U_28_100;
                      MR_Box conv17_STATE_VARIABLE_U_29_101;
                      MR_Box conv18_STATE_VARIABLE_U_30_103;
                      MR_Box conv19_STATE_VARIABLE_U_32_106;
                      MR_Box conv20_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv16_STATE_VARIABLE_U_28_100);
                      STATE_VARIABLE_U_28_100 = ((MR_Word) (conv16_STATE_VARIABLE_U_28_100));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_28_100)), &conv17_STATE_VARIABLE_U_29_101);
                      STATE_VARIABLE_U_29_101 = ((MR_Word) (conv17_STATE_VARIABLE_U_29_101));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_29_101)), &conv18_STATE_VARIABLE_U_30_103);
                      STATE_VARIABLE_U_30_103 = ((MR_Word) (conv18_STATE_VARIABLE_U_30_103));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_151, STATE_VARIABLE_U_30_103, &STATE_VARIABLE_U_31_104);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_104)), &conv19_STATE_VARIABLE_U_32_106);
                      STATE_VARIABLE_U_32_106 = ((MR_Word) (conv19_STATE_VARIABLE_U_32_106));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_153, STATE_VARIABLE_U_32_106, &STATE_VARIABLE_U_33_107);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_33_107)), &conv20_STATE_VARIABLE_U_43);
                      *STATE_VARIABLE_U_43 = ((MR_Word) (conv20_STATE_VARIABLE_U_43));
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Word STATE_VARIABLE_U_35_112;
                          MR_Word STATE_VARIABLE_U_36_114;
                          MR_Box conv21_STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;
                          MR_Word next_value_of_STATE_VARIABLE_U_0_42;

                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 0, Var_151, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_35_112);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_35_112)), &conv21_STATE_VARIABLE_U_36_114);
                          STATE_VARIABLE_U_36_114 = ((MR_Word) (conv21_STATE_VARIABLE_U_36_114));
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_153;
                          next_value_of_STATE_VARIABLE_U_0_42 = STATE_VARIABLE_U_36_114;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          STATE_VARIABLE_U_0_42 = next_value_of_STATE_VARIABLE_U_0_42;
                          continue;
                        }
                        else
                        {
                          MR_Word STATE_VARIABLE_U_38_118;
                          MR_Word STATE_VARIABLE_U_39_120;
                          MR_Word STATE_VARIABLE_U_40_122;
                          MR_Word STATE_VARIABLE_U_41_123;
                          MR_Word STATE_VARIABLE_U_42_125;
                          MR_Word STATE_VARIABLE_U_43_127;
                          MR_Box conv22_STATE_VARIABLE_U_38_118;
                          MR_Box conv23_STATE_VARIABLE_U_40_122;
                          MR_Box conv24_STATE_VARIABLE_U_41_123;
                          MR_Box conv25_STATE_VARIABLE_U_42_125;
                          MR_Box conv26_STATE_VARIABLE_U_43;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv22_STATE_VARIABLE_U_38_118);
                          STATE_VARIABLE_U_38_118 = ((MR_Word) (conv22_STATE_VARIABLE_U_38_118));
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_151, STATE_VARIABLE_U_38_118, &STATE_VARIABLE_U_39_120);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_39_120)), &conv23_STATE_VARIABLE_U_40_122);
                          STATE_VARIABLE_U_40_122 = ((MR_Word) (conv23_STATE_VARIABLE_U_40_122));
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_40_122)), &conv24_STATE_VARIABLE_U_41_123);
                          STATE_VARIABLE_U_41_123 = ((MR_Word) (conv24_STATE_VARIABLE_U_41_123));
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_41_123)), &conv25_STATE_VARIABLE_U_42_125);
                          STATE_VARIABLE_U_42_125 = ((MR_Word) (conv25_STATE_VARIABLE_U_42_125));
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, (MR_Integer) 1, Var_153, STATE_VARIABLE_U_42_125, &STATE_VARIABLE_U_43_127);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_43_127)), &conv26_STATE_VARIABLE_U_43);
                          *STATE_VARIABLE_U_43 = ((MR_Word) (conv26_STATE_VARIABLE_U_43));
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                }
              }
            else
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_149, VarTable_8, VarNamePrint_9, Var_14, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_U_1_22;
      MR_Word STATE_VARIABLE_U_2_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_5)), &conv1_STATE_VARIABLE_U_1_22);
      STATE_VARIABLE_U_1_22 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_22));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, STATE_VARIABLE_U_1_22, &STATE_VARIABLE_U_2_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarTable_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_27;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_27 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_27);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_29;
      MR_Word STATE_VARIABLE_U_2_30;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_29;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_2_30;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_U_19;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv1_STATE_VARIABLE_U_1_29);
      STATE_VARIABLE_U_1_29 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_29));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_27)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_29)), &conv3_STATE_VARIABLE_U_2_30);
      STATE_VARIABLE_U_2_30 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_30));
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_30)), &conv5_STATE_VARIABLE_U_19);
      *STATE_VARIABLE_U_19 = ((MR_Word) (conv5_STATE_VARIABLE_U_19));
    }
    else
    {
      MR_String Atom_32;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_32, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
      else
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
        MR_Box conv7_STATE_VARIABLE_U_19;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv7_STATE_VARIABLE_U_19);
        *STATE_VARIABLE_U_19 = ((MR_Word) (conv7_STATE_VARIABLE_U_19));
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_Word STATE_VARIABLE_U_2_21;
    MR_Word STATE_VARIABLE_U_3_23;
    MR_Word STATE_VARIABLE_U_4_24;
    MR_Word STATE_VARIABLE_U_1_34;
    MR_String Atom_33;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_3_23;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_19;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    else
    {
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
      MR_Box conv9_STATE_VARIABLE_U_2_21;

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv9_STATE_VARIABLE_U_2_21);
      STATE_VARIABLE_U_2_21 = ((MR_Word) (conv9_STATE_VARIABLE_U_2_21));
    }
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_21)), &conv11_STATE_VARIABLE_U_3_23);
    STATE_VARIABLE_U_3_23 = ((MR_Word) (conv11_STATE_VARIABLE_U_3_23));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, HeadArg_16, STATE_VARIABLE_U_3_23, &STATE_VARIABLE_U_1_34);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, VarTable_9, VarNamePrint_10, TailArgs_17, STATE_VARIABLE_U_1_34, &STATE_VARIABLE_U_4_24);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_24)), &conv13_STATE_VARIABLE_U_19);
    *STATE_VARIABLE_U_19 = ((MR_Word) (conv13_STATE_VARIABLE_U_19));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_vs_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_24;
      MR_Box STATE_VARIABLE_U_2_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Word next_value_of_Term_9;
      MR_Box next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_1_24);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_2_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Box STATE_VARIABLE_U_4_31;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_4_31);
        parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_4_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Box STATE_VARIABLE_U_1_16;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_16);
  parse_tree__parse_tree_out_term__mercury_format_remaining_terms_vs_6_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, TailTerms_11, S_12, STATE_VARIABLE_U_1_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(
  MR_Word TypeInfo_for_T_150,
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_42,
  MR_Box * STATE_VARIABLE_U_43)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_2_47;
        MR_Box STATE_VARIABLE_U_3_49;
        MR_Box STATE_VARIABLE_U_4_50;

        parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_2_47);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_2_47, &STATE_VARIABLE_U_3_49);
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_20, Xs_21, S_12, STATE_VARIABLE_U_3_49, &STATE_VARIABLE_U_4_50);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_4_50, STATE_VARIABLE_U_43);
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box STATE_VARIABLE_U_6_57;
          MR_Box STATE_VARIABLE_U_7_58;
          MR_Box STATE_VARIABLE_U_8_59;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_6_57);
          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_135, S_12, STATE_VARIABLE_U_6_57, &STATE_VARIABLE_U_7_58);
          parse_tree__parse_tree_out_term__mercury_format_list_args_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Xs_136, S_12, STATE_VARIABLE_U_7_58, &STATE_VARIABLE_U_8_59);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", S_12, STATE_VARIABLE_U_8_59, STATE_VARIABLE_U_43);
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Box STATE_VARIABLE_U_10_64;
              MR_Box STATE_VARIABLE_U_11_65;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_10_64);
              parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, S_12, STATE_VARIABLE_U_10_64, &STATE_VARIABLE_U_11_65);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", S_12, STATE_VARIABLE_U_11_65, STATE_VARIABLE_U_43);
            }
            else
            {
              MR_Box STATE_VARIABLE_U_13_69;
              MR_Box STATE_VARIABLE_U_14_70;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_13_69);
              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, Xs_134, S_12, STATE_VARIABLE_U_13_69, &STATE_VARIABLE_U_14_70);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", S_12, STATE_VARIABLE_U_14_70, STATE_VARIABLE_U_43);
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
              else
              {
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_151 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Box STATE_VARIABLE_U_17_79;
                    MR_Box STATE_VARIABLE_U_18_80;
                    MR_Box STATE_VARIABLE_U_19_82;
                    MR_Box STATE_VARIABLE_U_20_83;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_17_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_17_79, &STATE_VARIABLE_U_18_80);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_18_80, &STATE_VARIABLE_U_19_82);
                    parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12, STATE_VARIABLE_U_19_82, &STATE_VARIABLE_U_20_83);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_20_83, STATE_VARIABLE_U_43);
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box STATE_VARIABLE_U_22_88;
                      MR_Box STATE_VARIABLE_U_23_89;
                      MR_Box STATE_VARIABLE_U_24_91;
                      MR_Box STATE_VARIABLE_U_25_92;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_22_88);
                      parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12, STATE_VARIABLE_U_22_88, &STATE_VARIABLE_U_23_89);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_23_89, &STATE_VARIABLE_U_24_91);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_24_91, &STATE_VARIABLE_U_25_92);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_25_92, STATE_VARIABLE_U_43);
                    }
                    else
                      parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                  }
                }
                else
                {
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_151, 1))));
                  MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, Var_151, 0))));

                  if ((Var_153 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box STATE_VARIABLE_U_28_100;
                      MR_Box STATE_VARIABLE_U_29_101;
                      MR_Box STATE_VARIABLE_U_30_103;
                      MR_Box STATE_VARIABLE_U_31_104;
                      MR_Box STATE_VARIABLE_U_32_106;
                      MR_Box STATE_VARIABLE_U_33_107;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_28_100);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_28_100, &STATE_VARIABLE_U_29_101);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_29_101, &STATE_VARIABLE_U_30_103);
                      parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12, STATE_VARIABLE_U_30_103, &STATE_VARIABLE_U_31_104);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_31_104, &STATE_VARIABLE_U_32_106);
                      parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_154, S_12, STATE_VARIABLE_U_32_106, &STATE_VARIABLE_U_33_107);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_33_107, STATE_VARIABLE_U_43);
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Box STATE_VARIABLE_U_35_112;
                          MR_Box STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;
                          MR_Box next_value_of_STATE_VARIABLE_U_0_42;

                          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 0, Var_152, S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_35_112);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", S_12, STATE_VARIABLE_U_35_112, &STATE_VARIABLE_U_36_114);
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_154;
                          next_value_of_STATE_VARIABLE_U_0_42 = STATE_VARIABLE_U_36_114;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          STATE_VARIABLE_U_0_42 = next_value_of_STATE_VARIABLE_U_0_42;
                          continue;
                        }
                        else
                        {
                          MR_Box STATE_VARIABLE_U_38_118;
                          MR_Box STATE_VARIABLE_U_39_120;
                          MR_Box STATE_VARIABLE_U_40_122;
                          MR_Box STATE_VARIABLE_U_41_123;
                          MR_Box STATE_VARIABLE_U_42_125;
                          MR_Box STATE_VARIABLE_U_43_127;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", S_12, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_38_118);
                          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_152, S_12, STATE_VARIABLE_U_38_118, &STATE_VARIABLE_U_39_120);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_39_120, &STATE_VARIABLE_U_40_122);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, S_12, STATE_VARIABLE_U_40_122, &STATE_VARIABLE_U_41_123);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", S_12, STATE_VARIABLE_U_41_123, &STATE_VARIABLE_U_42_125);
                          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_154, S_12, STATE_VARIABLE_U_42_125, &STATE_VARIABLE_U_43_127);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", S_12, STATE_VARIABLE_U_43_127, STATE_VARIABLE_U_43);
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                }
              }
            else
              parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_14, S_12, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_vs_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Box STATE_VARIABLE_U_1_22;
      MR_Box STATE_VARIABLE_U_2_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_22);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_25, TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4, STATE_VARIABLE_U_1_22, &STATE_VARIABLE_U_2_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_plain_functor_args_nq_vs_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_28;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_28 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_28);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_30;
      MR_Box STATE_VARIABLE_U_2_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_1_30);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_28)), S_14, STATE_VARIABLE_U_1_30, &STATE_VARIABLE_U_2_31);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_14, STATE_VARIABLE_U_2_31, STATE_VARIABLE_U_19);
    }
    else
    {
      MR_String Atom_33;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, S_14, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
      else
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), S_14, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_Box STATE_VARIABLE_U_2_21;
    MR_Box STATE_VARIABLE_U_3_23;
    MR_Box STATE_VARIABLE_U_4_24;
    MR_Box STATE_VARIABLE_U_1_35;
    MR_String Atom_34;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_34 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_34, S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    else
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));

      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), S_14, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_14, STATE_VARIABLE_U_2_21, &STATE_VARIABLE_U_3_23);
    parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, (MR_Integer) 1, HeadArg_16, S_14, STATE_VARIABLE_U_3_23, &STATE_VARIABLE_U_1_35);
    parse_tree__parse_tree_out_term__mercury_format_remaining_terms_vs_6_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, TailArgs_17, S_14, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_4_24);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_14, STATE_VARIABLE_U_4_24, STATE_VARIABLE_U_19);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  MR_bool succeeded = (NextToGraphicToken_6 == (MR_Integer) 0);
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[4]);
    succeeded = mercury__string__all_match_2_p_0(Var_12, Name_7);
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_1_14;
    MR_Box STATE_VARIABLE_U_2_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), S_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_14);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 8))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_1_14, &STATE_VARIABLE_U_2_15);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), S_8, STATE_VARIABLE_U_2_15, STATE_VARIABLE_U_11);
  }
  else
  {
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 22))));

    func_3(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_15, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, Stream_10);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_24;
      MR_Word next_value_of_Term_9;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_24);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      Term_9 = next_value_of_Term_9;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (!(succeeded))
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_4_31;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_4_31);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word S_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word S_12)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, TailTerms_11, S_12);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_150,
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word S_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box conv0_STATE_VARIABLE_U_3_49;
        MR_Box conv1_STATE_VARIABLE_U_43;

        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_3_49);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_20, Xs_21, S_12);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_43);
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_U_6_57;
          MR_Box conv3_STATE_VARIABLE_U_43;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_6_57);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_135, S_12);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Xs_136, S_12);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_43);
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Box conv4_STATE_VARIABLE_U_10_64;
              MR_Box conv5_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_10_64);
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, S_12);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_43);
            }
            else
            {
              MR_Box conv6_STATE_VARIABLE_U_13_69;
              MR_Box conv7_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_13_69);
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, Xs_134, S_12);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_43);
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
              else
              {
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_151 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Box conv8_STATE_VARIABLE_U_17_79;
                    MR_Box conv9_STATE_VARIABLE_U_18_80;
                    MR_Box conv10_STATE_VARIABLE_U_19_82;
                    MR_Box conv11_STATE_VARIABLE_U_43;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_17_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_18_80);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_19_82);
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_43);
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_U_22_88;
                      MR_Box conv13_STATE_VARIABLE_U_24_91;
                      MR_Box conv14_STATE_VARIABLE_U_25_92;
                      MR_Box conv15_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_22_88);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_24_91);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_25_92);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_43);
                    }
                    else
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                  }
                }
                else
                {
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_151, 1))));
                  MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, Var_151, 0))));

                  if ((Var_153 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Box conv16_STATE_VARIABLE_U_28_100;
                      MR_Box conv17_STATE_VARIABLE_U_29_101;
                      MR_Box conv18_STATE_VARIABLE_U_30_103;
                      MR_Box conv19_STATE_VARIABLE_U_32_106;
                      MR_Box conv20_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_28_100);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_29_101);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_30_103);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_32_106);
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_154, S_12);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_43);
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Box conv21_STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;

                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 0, Var_152, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_36_114);
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_154;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          continue;
                        }
                        else
                        {
                          MR_Box conv22_STATE_VARIABLE_U_38_118;
                          MR_Box conv23_STATE_VARIABLE_U_40_122;
                          MR_Box conv24_STATE_VARIABLE_U_41_123;
                          MR_Box conv25_STATE_VARIABLE_U_42_125;
                          MR_Box conv26_STATE_VARIABLE_U_43;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_38_118);
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_152, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_40_122);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_41_123);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_42_125);
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_154, S_12);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_43);
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
                }
              }
            else
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, S_12);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_14, S_12);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_22;
      MR_Word next_value_of_HeadVar__3_3;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_22);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_25, TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word S_14)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_28;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_28 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_28);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_30;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_2_31;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_U_19;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_30);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_28)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_31);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_19);
    }
    else
    {
      MR_String Atom_33;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, S_14);
      }
      else
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
        MR_Box conv7_STATE_VARIABLE_U_19;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_19);
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_String Atom_34;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_3_23;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_19;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_34 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_34, S_14);
    }
    else
    {
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
      MR_Box conv9_STATE_VARIABLE_U_2_21;

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_2_21);
    }
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_3_23);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, HeadArg_16, S_14);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, TailArgs_17, S_14);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_14)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_19);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word S_10)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_16, VarSet_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10);
  else
  {
    MR_Integer VarNum_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_19;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_16, Var_9, &VarNum_17);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_17)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Word S_8)
{
  MR_bool succeeded = (NextToGraphicToken_6 == (MR_Integer) 0);
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[3]);
    succeeded = mercury__string__all_match_2_p_0(Var_12, Name_7);
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_14;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_15;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 8))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_15);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_11);
  }
  else
  {
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 22))));
    MR_Box conv7_STATE_VARIABLE_U_11;

    func_6(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Term_7)
{
  MR_String HeadVar__4_4;
  MR_Word State0_10;
  MR_Word State_11;

  State0_10 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_9, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_5, VarNamePrint_6, (MR_Integer) 1, Term_7, State0_10, &State_11);
  HeadVar__4_4 = mercury__string__builder__to_string_1_f_0(State_11);
  return HeadVar__4_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__describe_error_term_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(TypeInfo_for_T_8, VarSet_4, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 80, Term_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_vs_5_f_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Integer Limit_10,
  MR_Word Term_11)
{
  MR_bool succeeded;
  MR_String Str_12;
  MR_Word FullState0_13;
  MR_Word FullState_14;

  FullState0_13 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_39, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, Term_11, FullState0_13, &FullState_14);
  succeeded = mercury__string__builder__total_num_code_points_is_at_most_2_p_0(FullState_14, Limit_10);
  if (succeeded)
    Str_12 = mercury__string__builder__to_string_1_f_0(FullState_14);
  else
  if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
  {
    MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
    MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Term_11, 2))));
    MR_Word NoArgTerm_20;
    MR_Word FunctorState0_21;
    MR_Word FunctorState_22;
    MR_String FunctorStr_23;

    {
      NoArgTerm_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NoArgTerm_20, 0) = ((MR_Box) (Functor_17));
      MR_hl_field(0, NoArgTerm_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NoArgTerm_20, 2) = ((MR_Box) (Context_19));
    }
    FunctorState0_21 = mercury__string__builder__init_0_f_0();
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_39, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, NoArgTerm_20, FunctorState0_21, &FunctorState_22);
    FunctorStr_23 = mercury__string__builder__to_string_1_f_0(FunctorState_22);
    switch (MR_tag((MR_Word) Functor_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_42_42;
          MR_String ArityStr_25;
          MR_Integer Var_36;
          MR_String Var_37;

          {
            TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
            MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_39));
          }
          Var_36 = mercury__list__length_1_f_0(TypeInfo_42_42, (MR_Word) (Args_18));
          ArityStr_25 = mercury__string__int_to_string_1_f_0(Var_36);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityStr_25);
          Str_12 = mercury__string__f_43_43_2_f_0(FunctorStr_23, Var_37);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        Str_12 = FunctorStr_23;
        break;
    }
  }
  else
    Str_12 = mercury__string__builder__to_string_1_f_0(FullState_14);
  return Str_12;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_pt_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_24;
      MR_Word STATE_VARIABLE_U_2_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_24;
      MR_Word next_value_of_Term_9;
      MR_Word next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv1_STATE_VARIABLE_U_1_24);
      STATE_VARIABLE_U_1_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_24));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, X_14, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_2_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Word STATE_VARIABLE_U_4_31;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_32, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_4_31;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_32)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv3_STATE_VARIABLE_U_4_31);
        STATE_VARIABLE_U_4_31 = ((MR_Word) (conv3_STATE_VARIABLE_U_4_31));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_pt_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_4_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  MR_Word STATE_VARIABLE_U_1_16;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_16);
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_18, TypeClassInfo_for_pt_output_17, VarSet_8, VarNamePrint_9, TailTerms_11, STATE_VARIABLE_U_1_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeInfo_for_T_150,
  MR_Word TypeClassInfo_for_pt_output_149,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word STATE_VARIABLE_U_0_42,
  MR_Word * STATE_VARIABLE_U_43)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_11, 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Term_11, 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_45;
      MR_Word Var_46;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(1, Var_46, 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(1, Var_46, 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_U_2_47;
        MR_Word STATE_VARIABLE_U_3_49;
        MR_Word STATE_VARIABLE_U_4_50;
        MR_Box conv0_STATE_VARIABLE_U_3_49;
        MR_Box conv1_STATE_VARIABLE_U_43;

        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, F_19, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_2_47);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_47)), &conv0_STATE_VARIABLE_U_3_49);
        STATE_VARIABLE_U_3_49 = ((MR_Word) (conv0_STATE_VARIABLE_U_3_49));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_20, Xs_21, STATE_VARIABLE_U_3_49, &STATE_VARIABLE_U_4_50);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_50)), &conv1_STATE_VARIABLE_U_43);
        *STATE_VARIABLE_U_43 = ((MR_Word) (conv1_STATE_VARIABLE_U_43));
      }
      else
      {
        MR_Word X_135;
        MR_Word Xs_136;
        MR_String Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
          succeeded = (strcmp(Var_53, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_135 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
              Var_54 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_136 = ((MR_Word) ((MR_hl_field(1, Var_54, 0))));
                Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_U_6_57;
          MR_Word STATE_VARIABLE_U_7_58;
          MR_Word STATE_VARIABLE_U_8_59;
          MR_Box conv2_STATE_VARIABLE_U_6_57;
          MR_Box conv3_STATE_VARIABLE_U_43;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "[", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv2_STATE_VARIABLE_U_6_57);
          STATE_VARIABLE_U_6_57 = ((MR_Word) (conv2_STATE_VARIABLE_U_6_57));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_135, STATE_VARIABLE_U_6_57, &STATE_VARIABLE_U_7_58);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_108_105_115_116_95_97_114_103_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Xs_136, STATE_VARIABLE_U_7_58, &STATE_VARIABLE_U_8_59);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "]", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_59)), &conv3_STATE_VARIABLE_U_43);
          *STATE_VARIABLE_U_43 = ((MR_Word) (conv3_STATE_VARIABLE_U_43));
        }
        else
        {
          MR_Word X_133;
          MR_Word Xs_134;
          MR_String Var_62;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
            succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Xs_134 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
              }
            }
          }
          if (succeeded)
            if ((Xs_134 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_U_10_64;
              MR_Word STATE_VARIABLE_U_11_65;
              MR_Box conv4_STATE_VARIABLE_U_10_64;
              MR_Box conv5_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{ ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv4_STATE_VARIABLE_U_10_64);
              STATE_VARIABLE_U_10_64 = ((MR_Word) (conv4_STATE_VARIABLE_U_10_64));
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, STATE_VARIABLE_U_10_64, &STATE_VARIABLE_U_11_65);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " }", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_11_65)), &conv5_STATE_VARIABLE_U_43);
              *STATE_VARIABLE_U_43 = ((MR_Word) (conv5_STATE_VARIABLE_U_43));
            }
            else
            {
              MR_Word STATE_VARIABLE_U_13_69;
              MR_Word STATE_VARIABLE_U_14_70;
              MR_Box conv6_STATE_VARIABLE_U_13_69;
              MR_Box conv7_STATE_VARIABLE_U_43;

              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "{", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv6_STATE_VARIABLE_U_13_69);
              STATE_VARIABLE_U_13_69 = ((MR_Word) (conv6_STATE_VARIABLE_U_13_69));
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_115_101_112_97_114_97_116_101_100_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, X_133, Xs_134, STATE_VARIABLE_U_13_69, &STATE_VARIABLE_U_14_70);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "}", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_70)), &conv7_STATE_VARIABLE_U_43);
              *STATE_VARIABLE_U_43 = ((MR_Word) (conv7_STATE_VARIABLE_U_43));
            }
          else
          {
            MR_String FunctorName_24;
            MR_Word OpInfos_25;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              FunctorName_24 = ((MR_String) ((MR_hl_field(0, Functor_16, 0))));
              succeeded = mercury__ops__mercury_op_table_search_op_infos_2_p_0(FunctorName_24, &OpInfos_25);
            }
            if (succeeded)
              if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
              else
              {
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));

                if ((Var_151 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 2))));

                  succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_U_17_79;
                    MR_Word STATE_VARIABLE_U_18_80;
                    MR_Word STATE_VARIABLE_U_19_82;
                    MR_Word STATE_VARIABLE_U_20_83;
                    MR_Box conv8_STATE_VARIABLE_U_17_79;
                    MR_Box conv9_STATE_VARIABLE_U_18_80;
                    MR_Box conv10_STATE_VARIABLE_U_19_82;
                    MR_Box conv11_STATE_VARIABLE_U_43;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv8_STATE_VARIABLE_U_17_79);
                    STATE_VARIABLE_U_17_79 = ((MR_Word) (conv8_STATE_VARIABLE_U_17_79));
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_79)), &conv9_STATE_VARIABLE_U_18_80);
                    STATE_VARIABLE_U_18_80 = ((MR_Word) (conv9_STATE_VARIABLE_U_18_80));
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_80)), &conv10_STATE_VARIABLE_U_19_82);
                    STATE_VARIABLE_U_19_82 = ((MR_Word) (conv10_STATE_VARIABLE_U_19_82));
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, STATE_VARIABLE_U_19_82, &STATE_VARIABLE_U_20_83);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_20_83)), &conv11_STATE_VARIABLE_U_43);
                    *STATE_VARIABLE_U_43 = ((MR_Word) (conv11_STATE_VARIABLE_U_43));
                  }
                  else
                  {
                    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 3))));

                    succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_U_22_88;
                      MR_Word STATE_VARIABLE_U_23_89;
                      MR_Word STATE_VARIABLE_U_24_91;
                      MR_Word STATE_VARIABLE_U_25_92;
                      MR_Box conv12_STATE_VARIABLE_U_22_88;
                      MR_Box conv13_STATE_VARIABLE_U_24_91;
                      MR_Box conv14_STATE_VARIABLE_U_25_92;
                      MR_Box conv15_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv12_STATE_VARIABLE_U_22_88);
                      STATE_VARIABLE_U_22_88 = ((MR_Word) (conv12_STATE_VARIABLE_U_22_88));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, STATE_VARIABLE_U_22_88, &STATE_VARIABLE_U_23_89);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_89)), &conv13_STATE_VARIABLE_U_24_91);
                      STATE_VARIABLE_U_24_91 = ((MR_Word) (conv13_STATE_VARIABLE_U_24_91));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_91)), &conv14_STATE_VARIABLE_U_25_92);
                      STATE_VARIABLE_U_25_92 = ((MR_Word) (conv14_STATE_VARIABLE_U_25_92));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_92)), &conv15_STATE_VARIABLE_U_43);
                      *STATE_VARIABLE_U_43 = ((MR_Word) (conv15_STATE_VARIABLE_U_43));
                    }
                    else
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                  }
                }
                else
                {
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, Var_151, 1))));
                  MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, Var_151, 0))));

                  if ((Var_153 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 1))));

                    succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_U_28_100;
                      MR_Word STATE_VARIABLE_U_29_101;
                      MR_Word STATE_VARIABLE_U_30_103;
                      MR_Word STATE_VARIABLE_U_31_104;
                      MR_Word STATE_VARIABLE_U_32_106;
                      MR_Word STATE_VARIABLE_U_33_107;
                      MR_Box conv16_STATE_VARIABLE_U_28_100;
                      MR_Box conv17_STATE_VARIABLE_U_29_101;
                      MR_Box conv18_STATE_VARIABLE_U_30_103;
                      MR_Box conv19_STATE_VARIABLE_U_32_106;
                      MR_Box conv20_STATE_VARIABLE_U_43;

                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv16_STATE_VARIABLE_U_28_100);
                      STATE_VARIABLE_U_28_100 = ((MR_Word) (conv16_STATE_VARIABLE_U_28_100));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_28_100)), &conv17_STATE_VARIABLE_U_29_101);
                      STATE_VARIABLE_U_29_101 = ((MR_Word) (conv17_STATE_VARIABLE_U_29_101));
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_29_101)), &conv18_STATE_VARIABLE_U_30_103);
                      STATE_VARIABLE_U_30_103 = ((MR_Word) (conv18_STATE_VARIABLE_U_30_103));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_152, STATE_VARIABLE_U_30_103, &STATE_VARIABLE_U_31_104);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_104)), &conv19_STATE_VARIABLE_U_32_106);
                      STATE_VARIABLE_U_32_106 = ((MR_Word) (conv19_STATE_VARIABLE_U_32_106));
                      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_154, STATE_VARIABLE_U_32_106, &STATE_VARIABLE_U_33_107);
                      parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_33_107)), &conv20_STATE_VARIABLE_U_43);
                      *STATE_VARIABLE_U_43 = ((MR_Word) (conv20_STATE_VARIABLE_U_43));
                    }
                    else
                    {
                      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, OpInfos_25, 0))));

                      succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (strcmp(FunctorName_24, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_Word STATE_VARIABLE_U_35_112;
                          MR_Word STATE_VARIABLE_U_36_114;
                          MR_Box conv21_STATE_VARIABLE_U_36_114;
                          MR_Word next_value_of_Term_11;
                          MR_Word next_value_of_STATE_VARIABLE_U_0_42;

                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 0, Var_152, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_35_112);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ".", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_35_112)), &conv21_STATE_VARIABLE_U_36_114);
                          STATE_VARIABLE_U_36_114 = ((MR_Word) (conv21_STATE_VARIABLE_U_36_114));
                          // direct tailcall eliminated
                          ;
                          next_value_of_Term_11 = Var_154;
                          next_value_of_STATE_VARIABLE_U_0_42 = STATE_VARIABLE_U_36_114;
                          NextToGraphicToken_10 = (MR_Integer) 0;
                          Term_11 = next_value_of_Term_11;
                          STATE_VARIABLE_U_0_42 = next_value_of_STATE_VARIABLE_U_0_42;
                          continue;
                        }
                        else
                        {
                          MR_Word STATE_VARIABLE_U_38_118;
                          MR_Word STATE_VARIABLE_U_39_120;
                          MR_Word STATE_VARIABLE_U_40_122;
                          MR_Word STATE_VARIABLE_U_41_123;
                          MR_Word STATE_VARIABLE_U_42_125;
                          MR_Word STATE_VARIABLE_U_43_127;
                          MR_Box conv22_STATE_VARIABLE_U_38_118;
                          MR_Box conv23_STATE_VARIABLE_U_40_122;
                          MR_Box conv24_STATE_VARIABLE_U_41_123;
                          MR_Box conv25_STATE_VARIABLE_U_42_125;
                          MR_Box conv26_STATE_VARIABLE_U_43;

                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_42)), &conv22_STATE_VARIABLE_U_38_118);
                          STATE_VARIABLE_U_38_118 = ((MR_Word) (conv22_STATE_VARIABLE_U_38_118));
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_152, STATE_VARIABLE_U_38_118, &STATE_VARIABLE_U_39_120);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_39_120)), &conv23_STATE_VARIABLE_U_40_122);
                          STATE_VARIABLE_U_40_122 = ((MR_Word) (conv23_STATE_VARIABLE_U_40_122));
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, FunctorName_24, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_40_122)), &conv24_STATE_VARIABLE_U_41_123);
                          STATE_VARIABLE_U_41_123 = ((MR_Word) (conv24_STATE_VARIABLE_U_41_123));
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) " ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_41_123)), &conv25_STATE_VARIABLE_U_42_125);
                          STATE_VARIABLE_U_42_125 = ((MR_Word) (conv25_STATE_VARIABLE_U_42_125));
                          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Var_154, STATE_VARIABLE_U_42_125, &STATE_VARIABLE_U_43_127);
                          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_149, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_43_127)), &conv26_STATE_VARIABLE_U_43);
                          *STATE_VARIABLE_U_43 = ((MR_Word) (conv26_STATE_VARIABLE_U_43));
                        }
                      }
                      else
                        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                    }
                  }
                  else
                    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
                }
              }
            else
              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Functor_16, Args_17, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
          }
        }
      }
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, Term_11, 0))));

      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_150, TypeClassInfo_for_pt_output_149, VarSet_8, VarNamePrint_9, Var_14, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_U_1_22;
      MR_Word STATE_VARIABLE_U_2_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_5)), &conv1_STATE_VARIABLE_U_1_22);
      STATE_VARIABLE_U_1_22 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_22));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeInfo_for_T_25, TypeClassInfo_for_pt_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, STATE_VARIABLE_U_1_22, &STATE_VARIABLE_U_2_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_108_97_105_110_95_102_117_110_99_116_111_114_95_97_114_103_115_95_110_113_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Word Functor_12,
  MR_Word Args_13,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19)
{
  MR_bool succeeded;

  if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Op_28;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Op_28 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      succeeded = mercury__ops__mercury_op_table_is_op_1_p_0(Op_28);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_30;
      MR_Word STATE_VARIABLE_U_2_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      MR_Box conv1_STATE_VARIABLE_U_1_30;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_2_31;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_U_19;

      func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv1_STATE_VARIABLE_U_1_30);
      STATE_VARIABLE_U_1_30 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_30));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 22))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Op_28)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_30)), &conv3_STATE_VARIABLE_U_2_31);
      STATE_VARIABLE_U_2_31 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_31));
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
      func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_31)), &conv5_STATE_VARIABLE_U_19);
      *STATE_VARIABLE_U_19 = ((MR_Word) (conv5_STATE_VARIABLE_U_19));
    }
    else
    {
      MR_String Atom_33;

      succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_33 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_33, STATE_VARIABLE_U_0_18, STATE_VARIABLE_U_19);
      }
      else
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
        MR_Box conv7_STATE_VARIABLE_U_19;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv7_STATE_VARIABLE_U_19);
        *STATE_VARIABLE_U_19 = ((MR_Word) (conv7_STATE_VARIABLE_U_19));
      }
    }
  }
  else
  {
    MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
    MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
    MR_Word STATE_VARIABLE_U_2_21;
    MR_Word STATE_VARIABLE_U_3_23;
    MR_Word STATE_VARIABLE_U_4_24;
    MR_Word STATE_VARIABLE_U_1_35;
    MR_String Atom_34;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_3_23;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_19;

    succeeded = ((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_34 = ((MR_String) ((MR_hl_field(0, Functor_12, 0))));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_11, Atom_34, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_2_21);
    }
    else
    {
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 23))));
      MR_Box conv9_STATE_VARIABLE_U_2_21;

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) (Functor_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv9_STATE_VARIABLE_U_2_21);
      STATE_VARIABLE_U_2_21 = ((MR_Word) (conv9_STATE_VARIABLE_U_2_21));
    }
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_21)), &conv11_STATE_VARIABLE_U_3_23);
    STATE_VARIABLE_U_3_23 = ((MR_Word) (conv11_STATE_VARIABLE_U_3_23));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, HeadArg_16, STATE_VARIABLE_U_3_23, &STATE_VARIABLE_U_1_35);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_109_97_105_110_105_110_103_95_116_101_114_109_115_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_27, TypeClassInfo_for_pt_output_26, VarSet_9, VarNamePrint_10, TailArgs_17, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_4_24);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_24)), &conv13_STATE_VARIABLE_U_19);
    *STATE_VARIABLE_U_19 = ((MR_Word) (conv13_STATE_VARIABLE_U_19));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_16, VarSet_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_17;
    MR_Word STATE_VARIABLE_U_1_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_19;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_16, Var_9, &VarNum_17);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_1_19);
    STATE_VARIABLE_U_1_19 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_19));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_17)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_19)), &conv3_STATE_VARIABLE_U_14);
    *STATE_VARIABLE_U_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_14));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_17,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Word STATE_VARIABLE_U_0_10,
  MR_Word * STATE_VARIABLE_U_11)
{
  MR_bool succeeded = (NextToGraphicToken_6 == (MR_Integer) 0);
  MR_Word Var_12;

  if (succeeded)
  {
    Var_12 = (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]);
    succeeded = mercury__string__all_match_2_p_0(Var_12, Name_7);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_U_1_14;
    MR_Word STATE_VARIABLE_U_2_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    MR_Box conv1_STATE_VARIABLE_U_1_14;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_15;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_0(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_10)), &conv1_STATE_VARIABLE_U_1_14);
    STATE_VARIABLE_U_1_14 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_14));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 8))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_14)), &conv3_STATE_VARIABLE_U_2_15);
    STATE_VARIABLE_U_2_15 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_15));
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_15)), &conv5_STATE_VARIABLE_U_11);
    *STATE_VARIABLE_U_11 = ((MR_Word) (conv5_STATE_VARIABLE_U_11));
  }
  else
  {
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_17, 0)), 22))));
    MR_Box conv7_STATE_VARIABLE_U_11;

    func_6(((MR_Box) (TypeClassInfo_for_pt_output_17)), ((MR_Box) (Name_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_10)), &conv7_STATE_VARIABLE_U_11);
    *STATE_VARIABLE_U_11 = ((MR_Word) (conv7_STATE_VARIABLE_U_11));
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_src_2_f_0(
  MR_Word VarNameSrc_4,
  MR_Word Vars_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_4, (MR_Integer) 0, Vars_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_src_2_f_0(
  MR_Word VarNameSrc_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;
  MR_Word State0_7;
  MR_Word State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarNameSrc_4, (MR_Integer) 0, Var_5, State0_7, &State_8);
  HeadVar__3_3 = mercury__string__builder__to_string_1_f_0(State_8);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0(TypeInfo_for_T_7, VarSet_4, (MR_Integer) 0, Vars_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0(TypeInfo_for_T_7, VarSet_4, (MR_Integer) 0, Var_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarSet_4, (MR_Integer) 0, Vars_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;
  MR_Word State0_7;
  MR_Word State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarSet_4, (MR_Integer) 0, Var_5, State0_7, &State_8);
  HeadVar__3_3 = mercury__string__builder__to_string_1_f_0(State_8);
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[5]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word Stream_10)
{
  MR_Word Var_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[4]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[3]));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), 0)), 25))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_15)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Word Var_13;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[3]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[1]));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (VarNameSrc_5));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (VarNamePrint_6));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), 0)), 25))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_13)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv2_State_10);
  State_10 = ((MR_Word) (conv2_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_23_23;
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_8[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (TypeInfo_23_23)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word Stream_10)
{
  MR_Word TypeInfo_23_19;
  MR_Word Var_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_8[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeInfo_for_T_14));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[3]));
    MR_hl_field(0, Var_16, 5) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_16, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), 0)), 25))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]))), ((MR_Box) (TypeInfo_23_19)), ((MR_Box) (Var_16)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  MR_String Str_8;
  MR_Word TypeInfo_23_17;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Word Var_14;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_12));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[1]));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarSet_5));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_6));
  }
  {
    TypeInfo_23_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_23_17, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), 0)), 25))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) (TypeInfo_23_17)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv2_State_10);
  State_10 = ((MR_Word) (conv2_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_16,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_16, 0)), 25))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0(
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word Stream_10)
{
  MR_Word Var_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[3]));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), 0)), 25))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_15)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_U_14;

  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_U_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_U_14));
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(
  MR_Word VarTable_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Word Var_13;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[1]));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (VarTable_5));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (VarNamePrint_6));
  }
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), 0)), 25))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0])), ((MR_Box) (Var_13)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv2_State_10);
  State_10 = ((MR_Word) (conv2_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_num_only_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Var_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Integer VarNum_8;
  MR_Box STATE_VARIABLE_U_1_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__term__var_to_int_2_p_0(TypeInfo_for_T_14, Var_5, &VarNum_8);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "V_")), S_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_12);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (VarNum_8)), S_6, STATE_VARIABLE_U_1_12, STATE_VARIABLE_U_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_raw_to_string_3_f_0(
  MR_Word VarNamePrint_5,
  MR_Word Var_6,
  MR_String Name_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarNamePrint_5, Var_6, Name_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_db__search_var_name_in_source_3_p_0(VarNameSrc_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__mercury_format_var_raw_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_18;
    MR_Box STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_1_20);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), S_10, STATE_VARIABLE_U_1_20, STATE_VARIABLE_U_14);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarNameSrc_7, VarNamePrint_8, Var_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word S_10)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_db__search_var_name_in_source_3_p_0(VarNameSrc_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10);
  else
  {
    MR_Integer VarNum_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_20);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarNameSrc_5, VarNamePrint_6, Var_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_db__search_var_name_in_source_3_p_0(VarNameSrc_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_18;
    MR_Word STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_1_20);
    STATE_VARIABLE_U_1_20 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_20));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_20)), &conv3_STATE_VARIABLE_U_14);
    *STATE_VARIABLE_U_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_14));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_16, VarSet_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__mercury_format_var_raw_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_17;
    MR_Box STATE_VARIABLE_U_1_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_16, Var_9, &VarNum_17);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_1_19);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_17)), S_10, STATE_VARIABLE_U_1_19, STATE_VARIABLE_U_14);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_String Name_16;

  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_14, VarSet_7, Var_9, &Name_16);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_14, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarNamePrint_8, Var_9, Name_16, Stream_10);
  else
  {
    MR_Integer VarNum_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_19;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_13;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_14, Var_9, &VarNum_17);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), 0)), 6))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]))), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), 0)), 10))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]))), ((MR_Box) (VarNum_17)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_13);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  MR_bool succeeded;
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_String Name_14;

  State0_9 = mercury__string__builder__init_0_f_0();
  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_12, VarSet_5, Var_7, &Name_14);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeInfo_for_T_12, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarNamePrint_6, Var_7, Name_14, State0_9, &State_10);
  else
  {
    MR_Integer VarNum_15;
    MR_Word STATE_VARIABLE_U_1_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_17;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_State_10;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_12, Var_7, &VarNum_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), 0)), 6))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv1_STATE_VARIABLE_U_1_17);
    STATE_VARIABLE_U_1_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_17));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), 0)), 10))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) (VarNum_15)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_17)), &conv3_State_10);
    State_10 = ((MR_Word) (conv3_State_10));
  }
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_table__search_var_name_3_p_0(VarTable_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__mercury_format_var_raw_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_18;
    MR_Box STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_1_20);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), S_10, STATE_VARIABLE_U_1_20, STATE_VARIABLE_U_14);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_raw_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word VarNamePrint_7,
  MR_Word Var_8,
  MR_String Name_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_bool succeeded = (strcmp(Name_9, (MR_String) "") == 0);

  if (succeeded)
  {
    MR_Integer VarNum_26;
    MR_Box STATE_VARIABLE_U_1_28;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_26);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_28);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_26)), S_10, STATE_VARIABLE_U_1_28, STATE_VARIABLE_U_15);
  }
  else
    switch (VarNamePrint_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer VarNum_13;
          MR_Box STATE_VARIABLE_U_4_19;
          MR_Box STATE_VARIABLE_U_5_21;
          MR_String ConvertedName_23;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_23);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_23)), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_4_19);
          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_13);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "_")), S_10, STATE_VARIABLE_U_4_19, &STATE_VARIABLE_U_5_21);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_13)), S_10, STATE_VARIABLE_U_5_21, STATE_VARIABLE_U_15);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String ConvertedName_12;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_12);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_5(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_12)), S_10, STATE_VARIABLE_U_0_14, STATE_VARIABLE_U_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer VarNum_29;
          MR_Box STATE_VARIABLE_U_1_31;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_29);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_31);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_7(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_29)), S_10, STATE_VARIABLE_U_1_31, STATE_VARIABLE_U_15);
        }
        break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[3]), VarTable_7, VarNamePrint_8, Var_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word S_10)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_table__search_var_name_3_p_0(VarTable_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, S_10);
  else
  {
    MR_Integer VarNum_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_20);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word VarNamePrint_7,
  MR_Word Var_8,
  MR_String Name_9,
  MR_Word S_10)
{
  MR_bool succeeded = (strcmp(Name_9, (MR_String) "") == 0);

  if (succeeded)
  {
    MR_Integer VarNum_26;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_28;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_26);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_28);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_26)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_15);
  }
  else
    switch (VarNamePrint_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer VarNum_13;
          MR_String ConvertedName_23;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_4_19;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_5_21;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_U_15;

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_23);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_23)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_4_19);
          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_13);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_5_21);
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_8(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_13)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_15);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String ConvertedName_12;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv11_STATE_VARIABLE_U_15;

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_12);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_10(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_12)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer VarNum_29;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_1_31;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_15;

          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_29);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_12(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_1_31);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_14(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_29)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_15);
        }
        break;
    }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(
  MR_Word VarTable_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), VarTable_5, VarNamePrint_6, Var_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_15,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word STATE_VARIABLE_U_0_13,
  MR_Word * STATE_VARIABLE_U_14)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_table__search_var_name_3_p_0(VarTable_7, Var_9, &Name_12);
  if (succeeded)
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeClassInfo_for_pt_output_15, VarNamePrint_8, Var_9, Name_12, STATE_VARIABLE_U_0_13, STATE_VARIABLE_U_14);
  else
  {
    MR_Integer VarNum_18;
    MR_Word STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_14;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_18);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_13)), &conv1_STATE_VARIABLE_U_1_20);
    STATE_VARIABLE_U_1_20 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_20));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_15, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_15)), ((MR_Box) (VarNum_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_20)), &conv3_STATE_VARIABLE_U_14);
    *STATE_VARIABLE_U_14 = ((MR_Word) (conv3_STATE_VARIABLE_U_14));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_114_97_119_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_pt_output_24,
  MR_Word VarNamePrint_7,
  MR_Word Var_8,
  MR_String Name_9,
  MR_Word STATE_VARIABLE_U_0_14,
  MR_Word * STATE_VARIABLE_U_15)
{
  MR_bool succeeded = (strcmp(Name_9, (MR_String) "") == 0);

  if (succeeded)
  {
    MR_Integer VarNum_26;
    MR_Word STATE_VARIABLE_U_1_28;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_28;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_15;

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_26);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv1_STATE_VARIABLE_U_1_28);
    STATE_VARIABLE_U_1_28 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_28));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_26)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_28)), &conv3_STATE_VARIABLE_U_15);
    *STATE_VARIABLE_U_15 = ((MR_Word) (conv3_STATE_VARIABLE_U_15));
  }
  else
    switch (VarNamePrint_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer VarNum_13;
          MR_Word STATE_VARIABLE_U_4_19;
          MR_Word STATE_VARIABLE_U_5_21;
          MR_String ConvertedName_23;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_4_19;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_5_21;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_U_15;

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_23);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_23)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv5_STATE_VARIABLE_U_4_19);
          STATE_VARIABLE_U_4_19 = ((MR_Word) (conv5_STATE_VARIABLE_U_4_19));
          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_13);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_19)), &conv7_STATE_VARIABLE_U_5_21);
          STATE_VARIABLE_U_5_21 = ((MR_Word) (conv7_STATE_VARIABLE_U_5_21));
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_8(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_13)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_5_21)), &conv9_STATE_VARIABLE_U_15);
          *STATE_VARIABLE_U_15 = ((MR_Word) (conv9_STATE_VARIABLE_U_15));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String ConvertedName_12;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv11_STATE_VARIABLE_U_15;

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_9, &ConvertedName_12);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_10(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (ConvertedName_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv11_STATE_VARIABLE_U_15);
          *STATE_VARIABLE_U_15 = ((MR_Word) (conv11_STATE_VARIABLE_U_15));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer VarNum_29;
          MR_Word STATE_VARIABLE_U_1_31;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_U_1_31;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_U_15;

          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_25, Var_8, &VarNum_29);
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 6))));
          func_12(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) ((MR_String) "V_")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_14)), &conv13_STATE_VARIABLE_U_1_31);
          STATE_VARIABLE_U_1_31 = ((MR_Word) (conv13_STATE_VARIABLE_U_1_31));
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_24, 0)), 10))));
          func_14(((MR_Box) (TypeClassInfo_for_pt_output_24)), ((MR_Box) (VarNum_29)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_31)), &conv15_STATE_VARIABLE_U_15);
          *STATE_VARIABLE_U_15 = ((MR_Word) (conv15_STATE_VARIABLE_U_15));
        }
        break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(
  MR_String Name_3,
  MR_String * ConvertedName_4)
{
  MR_bool succeeded;
  MR_String Var_5;

  succeeded = mercury__string__remove_suffix_3_p_0(Name_3, (MR_String) "\'", &Var_5);
  if (succeeded)
  {
    MR_String StrippedName_6;
    MR_Integer NumPrimes_7;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(Name_3, &StrippedName_6, &NumPrimes_7);
    Var_13 = mercury__string__int_to_string_1_f_0(NumPrimes_7);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(StrippedName_6, Var_11);
    *ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_10);
  }
  else
  {
    succeeded = mercury__string__prefix_2_p_0(Name_3, (MR_String) "V_");
    if (succeeded)
      *ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Name_3);
    else
      *ConvertedName_4 = Name_3;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6)
{
  MR_bool succeeded;
  MR_String Name1_7;

  succeeded = mercury__string__remove_suffix_3_p_0(Name0_4, (MR_String) "\'", &Name1_7);
  if (succeeded)
  {
    MR_Integer Num0_8;

    parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(Name1_7, Name_5, &Num0_8);
    *Num_6 = (MR_Integer) ((MR_Unsigned) Num0_8 + (MR_Unsigned) 1);
  }
  else
  {
    *Num_6 = (MR_Integer) 0;
    *Name_5 = Name0_4;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_term__init(void)
{
}

void mercury__parse_tree__parse_tree_out_term__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0);
  MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_in_string_0);
  MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0);
  MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0);
}

void mercury__parse_tree__parse_tree_out_term__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_term__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_term.
